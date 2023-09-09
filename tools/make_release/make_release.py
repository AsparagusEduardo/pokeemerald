# pcpp contains the C Preprocessor/Evaluator that allows the script to go through includes etc
from pcpp import Preprocessor, Evaluator, OutputDirective, Action
# cxxheaderparser effectively goes through the C file and processes it, allowing the Python script to read it
from cxxheaderparser.simple import parse_file
# os and sys for interaction with the file system
import os
import sys
import math
import re
import shutil

# trusted_typedefs clarifies that the underlying construction doesn't need to be compared (unlike say two instances of a BoxPokemon struct)
# it also includes the amount of bits it can store
trusted_typedefs = {
    'u8': 8,
    'u16': 16,
    'u32': 32,
    'u64': 64,
    's8': 8,
    's16': 16,
    's32': 32,
    's64': 64,
    'bool8': 8,
    'bool16': 16,
    'bool32': 32,
    'int': 32
}
# ignoreable includes prevents the preprocessor from complaining about include files that don't exist that we don't need anyway
ignoreable_includes = ['string.h', 'stddef.h', 'stdint.h', 'sprite.h', 'limits.h']
# the following fields are ignored when it comes to migration because they are related to maps and SetContinueGameWarpStatus(); takes care of that
ignored_map_fields = ['weather', 'weatherCycleStage', 'flashLevel', 'savedMusic', 'mapLayoutId', 'mapView', 'objectEvents', 'objectEventTemplates']
# for loop variables
for_loop_variables = ['j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']

globalVersion = 0 # which new version we are dealing with
globalHasChanges = False # if we end up with changes
globalChangedStructs = [] # which structs are changed
globalHasChangedStructs = [] # which structs contain changed (sub)structs
globalForLoops = 0 # for knowing which variable to use (i, j, k...)
globalForLoopsTotal = 0 # for knowing which variables to declare

# this class overrides the "include not found" error and prevents it from displaying if it is in ignoreable_includes (i.e. irrelevant)
class PcppPreprocessor(Preprocessor):
    def on_include_not_found(self,is_malformed,is_system_include,curdir,includepath):
        if includepath not in ignoreable_includes:
            if is_malformed:
                self.on_error(self.lastdirective.source,self.lastdirective.lineno, "Malformed #include statement: %s" % includepath)
            else:
                self.on_error(self.lastdirective.source,self.lastdirective.lineno, "Include file '%s' not found" % includepath)
        raise OutputDirective(Action.IgnoreAndPassThrough)

# preprocess a file and store it as files in /versioning with pcpp
def preprocess_files(filename, version):
    p = PcppPreprocessor()
    path = "include/%s.h" % filename
    with open(path, 'rt') as ih:
        p.parse(ih.read(), path)
    with open('versioning/%s_v%s.c' % (filename, version), 'w') as oh:
        p.write(oh)

# pulls global.h and pokemon_storage_system from the source, storing them in a separate versioning folder
def pull_new_version():
    if not os.path.exists("versioning/"):
        os.mkdir("versioning/")
    global globalVersion
    while os.path.exists("versioning/global_v%s.c" % globalVersion):
        globalVersion += 1
    preprocess_files("global", globalVersion)
    preprocess_files("pokemon_storage_system", globalVersion)
    get_sector_id_values(globalVersion)
    if (globalVersion == 0):
        injectTustin()
        pull_new_version()

def get_sector_id_values(version):
    with open("include/save.h", 'r') as file:
        rawcode = file.read()
    with open("versioning/sectors_v%s.txt" % version, 'w') as file:
        file.write("%s\n" % fetchDefineValue("SECTOR_ID_SAVEBLOCK2", rawcode))
        file.write("%s\n" % fetchDefineValue("SECTOR_ID_SAVEBLOCK1_START", rawcode))
        file.write("%s\n" % fetchDefineValue("SECTOR_ID_PKMN_STORAGE_START", rawcode))

# injects Tustin's implementation to the game where necessary
def injectTustin():
    out("Saved the current version as v0. Please wait…")
    # add save sentinel to the new saveblock
    with open("include/global.h", 'r') as file:
        content = file.read()
    if not 'u8 _saveSentinel;' in content:
        ncontent = content.replace('struct SaveBlock2\n{\n    ', 'struct SaveBlock2\n{\n    // _saveSentinel, saveVersion and expansionVersion (if using pokeemerald-expansion) are used by the save migration system. Please do not (re)move them.\n    u8 _saveSentinel; // 0xFF\n    // u8 unused;\n    u16 saveVersion;\n#ifdef RHH_EXPANSION\n    u16 expansionVersion;\n#endif\n    ')
        if ncontent == content: # the injection failed for whatever reason
            failTustinInjection("Unable to inject the necessary data into SaveBlock2! Aborting procedure.")
        with open("include/global.h", 'w') as file:
            file.write(ncontent)
        out("Updated include/global.h")
    # add new game defining
    with open("src/new_game.c", 'r') as file:
        content = file.read()
    if not 'gSaveBlock2Ptr->_saveSentinel = 0xFF;' in content:
        ncontent = content.replace('gSaveBlock2Ptr->encryptionKey = 0;', 'gSaveBlock2Ptr->_saveSentinel = 0xFF;\n    gSaveBlock2Ptr->saveVersion = SAVE_VERSION;\n#ifdef RHH_EXPANSION\n    gSaveBlock2Ptr->expansionVersion = RHH_EXPANSION_VERSION;\n#endif\n    gSaveBlock2Ptr->encryptionKey = 0;')
        if ncontent == content: # the injection failed for whatever reason
            failTustinInjection("Unable to inject the necessary data into new_game.c! Aborting procedure.")
        with open("src/new_game.c", 'w') as file:
            file.write(ncontent)
        out("Updated src/new_game.c")
    # uncomment the versioning include in include/constants/global.h
    with open("include/constants/global.h", 'r') as file:
        content = file.read()
    if '//#include "constants/versioning.h"' in content:
        content = content.replace('//#include "constants/versioning.h"', '#include "constants/versioning.h"')
        with open("include/constants/global.h", 'w') as file:
            file.write(content)
        out("Updated include/constants/global.h")
    makeSaveVersionConstants()
    out("Successfully applied the necessary changes to the codebase.")

def failTustinInjection(msg):
    out(msg)
    # remove the latest versioning backups
    os.remove("versioning/global_v%s.c" % globalVersion)
    os.remove("versioning/pokemon_storage_system_v%s.c" % globalVersion)
    os.remove("versioning/sectors_v%s.txt" % globalVersion)
    quit()

# the following function defines all the save versions constants
def makeSaveVersionConstants():
    content = "#ifndef GUARD_CONSTANTS_VERSIONING_H\n#define GUARD_CONSTANTS_VERSIONING_H\n\n"
    for x in range(globalVersion + 1):
        content += "#define SAVE_VERSION_%s %s\n" % (x, x)
    content += "\n#define SAVE_VERSION (SAVE_VERSION_%s)\n\n#endif // GUARD_CONSTANTS_VERSIONING_H\n" % globalVersion
    # write to file
    with open("include/constants/versioning.h", 'w') as file:
        file.write(content)
    out("Updated include/constants/versioning.h")

def updateSwitchVersion():
    switchcase = ""
    includelist = ""
    for x in range(globalVersion):
        switchcase += "        case %s: // Upgrading from version %s to version %s\n            result = UpdateSave_v%s_v%s(gRamSaveSectorLocations);\n            break;\n" % (x, x, globalVersion, x, globalVersion)
        includelist += '#include "data/old_saves/save.v%s.h"\n' % x

    with open("src/save.c", 'r') as file:
        content = file.read()
        ncontent = re.sub("(\/\/ START Attempt to update the save\n    switch \(version\)\n    {\n)[^}]*(        default: \/\/ Unsupported version to upgrade\n            result = FALSE;\n            break;)", "\\1" + switchcase + "\\2", content)
        if content == ncontent:
            out("Error: unable to update src/save.c (switch case)!")
            quit()
        content = ncontent
        ncontent = re.sub("(\/\/ START Include old save data\n)[\s\S]*?(\/\/ END Include old save data)", "\\1" + includelist + "\\2", content)
        if content == ncontent:
            out("Error: unable to update src/save.c (include list)!")
            quit()
    with open("src/save.c", 'w') as file:
        file.write(ncontent)
    out("Updated src/save.c")

# alternative of plain old "print" that allows for logging
def out(str):
    print(str)
    if '--log' in sys.argv:
        f.write(str + '\n')

# a hacky solution that replaces enums with their actual values, allowing the Evaluator to deal with it
def parse_size(tokens, enumlist, classlist):
    sizetokens = ""
    doingsizeof = -1
    e = Evaluator()
    for x in tokens:
        if doingsizeof > -1:
            if str(x.value) in ['(', 'struct']:
                continue
            if str(x.value) == ")":
                doingsizeof = -1
                continue
            sizetokens += str(get_size_of(str(x.value), enumlist, classlist))
            continue
        if str(x.value) == "sizeof":
            doingsizeof = 0
            continue
        if x.value in enumlist:
            sizetokens += str(enumlist[x.value])
        else:
            sizetokens += str(x.value)
    return e(sizetokens)

def get_size_of(field, enumlist, classlist):
    out = 0
    out2 = 0
    activetype = ""
    # flies through the struct and outputs the size
    if not field in classlist:
        out("Unable to find sizeof %s!" % field)
        return(0)
    for x in classlist[field].fields:
        if (x.type.__class__.__name__ == "Type"):
            if (activetype != x.type.typename.segments[0].name):
                activetype = x.type.typename.segments[0].name
                out += out2
                out2 = 0
            if (x.bits != None):
                out2 += x.bits
            else:
                out2 += trusted_typedefs[activetype]
        else:
            out += out2
            out2 = 0
            out += trusted_typedefs[x.type.array_of.typename.segments[0].name] * int(parse_size(x.type.size.tokens, enumlist, classlist))
    out += out2
    return(math.ceil(out / 8))

def parse_field(field, enumlist, classlist):
    cl = {}
    cl['name'] = field.name
    cl['type'] = field.type.__class__.__name__
    if (cl['type'] == "Type"):
        if hasattr(field.type.typename.segments[0], 'name'):
            cl['kind'] = field.type.typename.segments[0].name
        else:
            cl['kind'] = "__AnonymousName%s" % field.type.typename.segments[0].id
        cl['is_struct'] = (field.type.typename.classkey == 'struct')
        if field.type.typename.classkey == 'union':
            cl['is_union'] = True
    elif (cl['type'] == "Array"):
        if (field.type.array_of.__class__.__name__ == "Type"): #1D ARRAY
            cl['kind'] = field.type.array_of.typename.segments[0].name
            cl['is_struct'] = (field.type.array_of.typename.classkey == 'struct')
        elif (field.type.array_of.__class__.__name__ == "Array"):
            if (field.type.array_of.array_of.__class__.__name__ == "Type"): #2D ARRAY
                cl['kind'] = field.type.array_of.array_of.typename.segments[0].name
                cl['is_struct'] = (field.type.array_of.array_of.typename.classkey == 'struct')
            elif (field.type.array_of.__class__.__name__ == "Array"): #3D ARRAY
                cl['kind'] = field.type.array_of.array_of.array_of.typename.segments[0].name
                cl['is_struct'] = (field.type.array_of.array_of.array_of.typename.classkey == 'struct')
    elif (cl['type'] == "Pointer"):
        cl['kind'] = field.type.ptr_to.typename.segments[0].name
        cl['is_pointer'] = True
    if hasattr(field.type, 'size'):
        cl['size'] = parse_size(field.type.size.tokens, enumlist, classlist)
    if hasattr(field.type, 'array_of'):
        if hasattr(field.type.array_of, 'size'):
            cl['size2'] = parse_size(field.type.array_of.size.tokens, enumlist, classlist)
        if hasattr(field.type.array_of, 'array_of'):
            if hasattr(field.type.array_of.array_of, 'size'):
                cl['size3'] = parse_size(field.type.array_of.array_of.size.tokens, enumlist, classlist)
    if (field.bits != None):
        cl['bits'] = field.bits
    return(cl)

def parse_file2(path):
    out = parse_file(path)
    enum_out = {}
    for x in out.namespace.enums:
        val = 0
        for y in x.values:
            enum_out[y.name] = val
            val += 1
    return(out, enum_out)

def addToGlobal(field, parents):
    global globalHasChanges
    global globalChangedStructs
    global globalHasChangedStructs
    globalHasChanges = True
    if not field in globalChangedStructs:
        globalChangedStructs.append(field)
    for x in parents:
        if not x in globalHasChangedStructs:
            globalHasChangedStructs.append(x)

def appendToArray(array, element):
    out = array.copy()
    out.append(element)
    return(out)

def compareFields(fieldname, parentstructs, extratext):
    inline = len(parentstructs) + 1
    extratext_display = ""
    if extratext != "":
        extratext_display = " (%s)" % extratext

    if fieldname not in GlobalClassesNew:
        invalid_resolve = True
        # check if exists in GlobalClassesOld
        if fieldname not in GlobalClassesOld:
            # fieldname can not be found, so check if it's in both referals
            if fieldname in GlobalReferNew and fieldname in GlobalReferOld:
                if GlobalReferNew[fieldname] == GlobalReferOld[fieldname]:
                    fieldname = GlobalReferNew[fieldname] # get referral (eg lilycovelady > anonymousname...)
                    invalid_resolve = False
        if invalid_resolve:
            out("WARNING: Unable to resolve %s%s" % (fieldname, extratext_display))
            return
    # make list of fields
    fields_old = {}
    fields_old_array = []
    for x in GlobalClassesOld[fieldname].fields:
        fields_old[x.name] = x
        fields_old_array.append(x.name)

    # compare
    global globalHasChanges
    global globalChangedStructs
    global globalHasChangedStructs
    if '--verbose' in sys.argv or '--detailed' in sys.argv or (inline == 1):
        out("  " * (inline - 1) + "Comparing %s%s" % (fieldname, extratext_display))
    for x in GlobalClassesNew[fieldname].fields:
        if not x.name in fields_old:
            out("  " * inline  + "%s is a new field that was not present in the previous version" % x.name)
            addToGlobal(fieldname, parentstructs)
            continue
        oldclass = parse_field(fields_old[x.name], GlobalEnumsOld, GlobalClassesOld)
        newclass = parse_field(x, GlobalEnumsNew, GlobalClassesNew)

        if (x.name in fields_old_array):
            fields_old_array.remove(x.name)
            if (x == fields_old[x.name]):
                if '--verbose' in sys.argv:
                    out("  " * inline + "%s is identical" % x.name)
                # if identical, check the actual kind to make sure the underlying struct didn't change
                if newclass['kind'] not in trusted_typedefs.keys():
                    compareFields(newclass['kind'], appendToArray(parentstructs, fieldname), "%s -> %s" % (extratext, x.name))
                continue
            # figure out what exactly is different, starting with size
            globalHasChanges = True
            if 'size' in newclass and 'size' in oldclass:
                oldsize = int(oldclass['size'])
                newsize = int(newclass['size'])
                if (oldsize != newsize):
                    if (oldsize < newsize):
                        out("  " * inline + "%s was expanded in size from %s to %s" % (x.name, oldsize, newsize))
                    else:
                        out("  " * inline + "IMPORTANT: %s was truncated in size from %s to %s" % (x.name, oldsize, newsize))
                    addToGlobal(fieldname, parentstructs)
                    continue
            if 'kind' in newclass and 'kind' in oldclass:
                oldkind = oldclass['kind']
                newkind = newclass['kind']
                eitherstruct = (oldclass['is_struct'] or newclass['is_struct'])
                if (oldkind != newkind and not eitherstruct):
                    out("  " * inline + "IMPORTANT: %s was changed from %s to %s" % (x.name, oldkind, newkind))
                    addToGlobal(fieldname, parentstructs)
                    continue
            if str(oldclass) == str(newclass):
                # this is a hacky fallthrough that somehow just works! haha
                if '--verbose' in sys.argv:
                    out("  " * inline + "%s is identical" % x.name)
                # if identical, check the actual kind to make sure the underlying struct didn't change
                if newclass['kind'] not in trusted_typedefs.keys():
                    compareFields(newclass['kind'], appendToArray(parentstructs, fieldname), "%s -> %s" % (extratext, x.name))
                continue
            out("  " * inline + "%s is different, but can't identify why! Its contents will not migrate!" % x.name)
            out("Old: %s" % fields_old[x.name])
            out("New: %s" % x)
            addToGlobal(fieldname, parentstructs)
        else:
            out("  " * inline + "%s is a new field; defaulting values to zero" % x.name)

    if len(fields_old_array) > 0:
        out("  " * inline + "The following old fields are not retained: %s" % fields_old_array)

def prepare_comparison(filename, starting_version):
    global GlobalClassesOld
    global GlobalClassesNew
    contents_old, enums_old = parse_file2('versioning/%s_v%s.c' % (filename, starting_version))
    contents_new, enums_new = parse_file2('versioning/%s_v%s.c' % (filename, globalVersion))

    # classes
    for x in contents_old.namespace.classes:
        if hasattr(x.class_decl.typename.segments[0], 'name'):
            GlobalClassesOld[x.class_decl.typename.segments[0].name] = x
        else:
            GlobalClassesOld["__AnonymousName%s" % x.class_decl.typename.segments[0].id] = x
        for y in x.classes:
            if hasattr(y.class_decl.typename.segments[0], 'name'):
                GlobalClassesOld[y.class_decl.typename.segments[0].name] = y
            else:
                GlobalClassesOld["__AnonymousName%s" % y.class_decl.typename.segments[0].id] = y
    for x in contents_new.namespace.classes:
        if hasattr(x.class_decl.typename.segments[0], 'name'):
            GlobalClassesNew[x.class_decl.typename.segments[0].name] = x
        else:
            GlobalClassesNew["__AnonymousName%s" % x.class_decl.typename.segments[0].id] = x
        for y in x.classes:
            if hasattr(y.class_decl.typename.segments[0], 'name'):
                GlobalClassesNew[y.class_decl.typename.segments[0].name] = y
            else:
                GlobalClassesNew["__AnonymousName%s" % y.class_decl.typename.segments[0].id] = y
    # typedefs (for referals)
    for x in contents_old.namespace.typedefs:
        if hasattr(x.type, 'typename'):
            if x.type.typename.classkey != None:
                if hasattr(x.type.typename.segments[0], 'name'):
                    if x.type.typename.segments[0].name != x.name:
                        GlobalReferOld[x.name] = x.type.typename.segments[0].name
                else:
                    GlobalReferOld[x.name] = "__AnonymousName%s" % x.type.typename.segments[0].id
    for x in contents_new.namespace.typedefs:
        if hasattr(x.type, 'typename'):
            if x.type.typename.classkey != None:
                if hasattr(x.type.typename.segments[0], 'name'):
                    if x.type.typename.segments[0].name != x.name:
                        GlobalReferNew[x.name] = x.type.typename.segments[0].name
                else:
                    GlobalReferNew[x.name] = "__AnonymousName%s" % x.type.typename.segments[0].id
    return(enums_old, enums_new)

def prepareMigration(listofchanges, listofparents, versionnumber):
    global globalForLoopsTotal
    globalForLoopsTotal = 0
    # get sector ids
    with open("versioning/sectors_v%s.txt" % versionnumber, 'r') as file:
        sectorids = file.read().split("\n")
    # content header
    content = '#include "global.h"\n#include "save.h"\n\n// This file contains the backups for the save file of v%s.\n// Editing this file may cause unwanted behaviour.\n// Please use make release in case problems arise.\n\n' % versionnumber
    # add actual backups
    to_backup = listofchanges.copy()
    i = 0
    while(len(to_backup) > 0):
        outp = backupDump(to_backup[i], versionnumber, listofchanges, to_backup)
        if outp != "":
            content += outp
            del to_backup[i]
        else:
            i += 1
        if (i >= len(to_backup)):
            i = 0
    # add migration function
    content += "\nbool8 UpdateSave_v%s_v%s(const struct SaveSectorLocation *locations)\n{\n" % (versionnumber, globalVersion)
    # add const structs
    if 'SaveBlock2' in listofchanges:
        content += "    const struct SaveBlock2_v%s* sOldSaveBlock2Ptr = (struct SaveBlock2_v%s*)(locations[%s].data); // SECTOR_ID_SAVEBLOCK2\n" % (versionnumber, versionnumber, sectorids[0])
    else:
        content += "    const struct SaveBlock2* sOldSaveBlock2Ptr = (struct SaveBlock2*)(locations[%s].data); // SECTOR_ID_SAVEBLOCK2\n" % (sectorids[0])
    if 'SaveBlock1' in listofchanges:
        content += "    const struct SaveBlock1_v%s* sOldSaveBlock1Ptr = (struct SaveBlock1_v%s*)(locations[%s].data); // SECTOR_ID_SAVEBLOCK1_START\n" % (versionnumber, versionnumber, sectorids[1])
    else:
        content += "    const struct SaveBlock1* sOldSaveBlock1Ptr = (struct SaveBlock1*)(locations[%s].data); // SECTOR_ID_SAVEBLOCK1_START\n" % (sectorids[1])
    if 'PokemonStorage' in listofchanges:
        content += "    const struct PokemonStorage_v%s* sOldPokemonStoragePtr = (struct PokemonStorage_v%s*)(locations[%s].data); // SECTOR_ID_PKMN_STORAGE_START\n" % (versionnumber, versionnumber, sectorids[2])
    else:
        content += "    const struct PokemonStorage* sOldPokemonStoragePtr = (struct PokemonStorage*)(locations[%s].data); // SECTOR_ID_PKMN_STORAGE_START\n" % (sectorids[2])
    content += "    u32 FIXARGUMENTSINPOST;\n\n"

    # saveblock2
    content += "    // SaveBlock2 \n"

    if not 'SaveBlock2' in listofchanges and not 'SaveBlock2' in listofparents:
        content += "    *gSaveBlock2Ptr = *sOldSaveBlock2Ptr;\n"
    else:
        content += dealWithMigration('SaveBlock2', listofchanges, listofparents, [], False)

    # saveblock1
    content += "\n    // SaveBlock1 \n"

    if not 'SaveBlock1' in listofchanges and not 'SaveBlock1' in listofparents:
        content += "    *gSaveBlock1Ptr = *sOldSaveBlock1Ptr;\n"
    else:
        content += dealWithMigration('SaveBlock1', listofchanges, listofparents, [], False)

    # pokemonstorage
    content += "\n    // PokemonStorage \n"

    if not 'PokemonStorage' in listofchanges and not 'PokemonStorage' in listofparents:
        content += "    *gPokemonStoragePtr = *sOldPokemonStoragePtr;\n"
    else:
        content += dealWithMigration('PokemonStorage', listofchanges, listofparents, [], False)

    # if SaveBlock2 wasn't updated, update saveVersion either way
    if not 'SaveBlock2' in listofchanges and not 'SaveBlock2' in listofparents:
        content += "\n    gSaveBlock2Ptr->saveVersion = %s;\n" % globalVersion

    # take care of continue game warp
    content += "\n    SetContinueGameWarpStatus();\n    gSaveBlock1Ptr->continueGameWarp = gSaveBlock1Ptr->lastHealLocation;\n\n    return TRUE;\n}\n"

    # take care of variable declaration
    content = declareForLoopVariables(content)

    # write it to file
    with open("src/data/old_saves/save.v%s.h" % versionnumber, 'w') as file:
        file.write(content)
    out("Added migration support from version %s to version %s (src/data/old_saves/save.v%s.h)" % (versionnumber, globalVersion, versionnumber))

def declareForLoopVariables(content):
    out = "i"
    if globalForLoopsTotal > 0:
        for i in range(globalForLoopsTotal):
            out += ", " + for_loop_variables[i]
    return(content.replace("FIXARGUMENTSINPOST", out))

def fetchDefineValue(name, code):
    z = re.findall('#define %s *(.*)' % name, code)
    if len(z) == 1:
        return z[0]
    return None

def copyField(name, fieldname, specification):
    return "g{st}{st2} = sOld{st}{st2};".format(st=parseSpecification(name,specification), st2=fieldname)

def copyBlock(name, fieldname, specification):
    return "CpuCopy16(&sOld{st}{st2}, &g{st}{st2}, min(sizeof(g{st}{st2}), sizeof(sOld{st}{st2})));".format(st=parseSpecification(name,specification), st2=fieldname)

def copyArray(name, fieldname, specification):
    return "for(i = 0; i < min(ARRAY_COUNT(g{st}{st2}), ARRAY_COUNT(sOld{st}{st2})); i++) g{st}{st2}[i] = sOld{st}{st2}[i];".format(st=parseSpecification(name,specification), st2=fieldname)

def dealWithMigration(name, changedstructs, changedparents, specification, amarray):
    global globalForLoops
    global globalForLoopsTotal
    out = ""
    if amarray:
        out += "    " * (globalForLoops) + "for({st} = 0; {st} < min(ARRAY_COUNT(g{st2}), ARRAY_COUNT(sOld{st2})); {st}++)\n".format(st=for_loop_variables[globalForLoops - 1], st2=parseSpecification(name,specification)[:-4])
        out += "    " * (globalForLoops) + "{\n"
    for field in GlobalClassesNew[name].fields:
        # hardcoded feature to make save migration work
        if (name == "SaveBlock2" and field.name in ['_saveSentinel', 'saveVersion']):
            if field.name == '_saveSentinel':
                out += "    gSaveBlock2Ptr->_saveSentinel = 0xFF;\n"
            if field.name == 'saveVersion':
                out += "    gSaveBlock2Ptr->saveVersion = %s;\n" % globalVersion
            continue
        # if not present in the old save, we can't carry it over so it defaults to zero
        if not checkFieldIn(field, GlobalClassesOld[name].fields):
            continue
        # ignore map-based save stuff
        if (field.name in ignored_map_fields):
            continue
        # check if it's an updated struct
        field_type = field.type
        isarray = False
        while (field_type.__class__.__name__ == "Array"):
            field_type = field_type.array_of
            isarray = True
        if (field_type.typename.segments[0].name in changedstructs or field_type.typename.segments[0].name in changedparents) and field_type.typename.segments[0].name not in trusted_typedefs:
            if isarray:
                globalForLoops += 1
                if (globalForLoops > globalForLoopsTotal):
                    globalForLoopsTotal = globalForLoops
            out += dealWithMigration(field_type.typename.segments[0].name, changedstructs, changedparents, addSpecification(specification, name, field.name, isarray), isarray)
            if isarray:
                globalForLoops -= 1
            continue
        # check other fields
        if (field.type.__class__.__name__ == "Array"):
            if (field.type.array_of.__class__.__name__ == "Array"):
                out += "    " * (globalForLoops + 1) + "%s\n" % copyBlock(name, field.name, specification)
                continue
            elif (field.type.array_of.__class__.__name__ == "Type"):
                if (field.type.array_of.typename.classkey == "struct"):
                    out += "    " * (globalForLoops + 1) + "%s\n" % copyBlock(name, field.name, specification)
                    continue
            out += "    " * (globalForLoops + 1) + "%s\n" % copyArray(name, field.name, specification)
        else:
            out += "    " * (globalForLoops + 1) + "%s\n" % copyField(name, field.name, specification)
    if amarray:
        out += "    " * (globalForLoops) + "}\n"
    return out

def addSpecification(specification, name, fieldname, isarray):
    if (len(specification)==0):
        if isarray:
            return([name, fieldname + "[%s]" % for_loop_variables[globalForLoops - 1]])
        else:
            return([name, fieldname])
    else:
        if isarray:
            return(specification + [fieldname + "[%s]" % for_loop_variables[globalForLoops - 1]])
        else:
            return(specification + [fieldname])

def parseSpecification(name, specification):
    if (len(specification)==0):
        return("%sPtr->" % name)
    else:
        out = "%sPtr->" % specification[0]
        for i in range(1, len(specification)):
            out += "%s." % specification[i]
        return(out)
    
def checkFieldIn(field, fieldlist):
    lst = []
    for x in fieldlist:
        lst.append(x.name)
    return (field.name in lst)

def backupDump(structname, versionnumber, listofchanges, tobackup):
    # we make a struct and add its components
    out = "struct %s_v%s\n{\n" % (structname, versionnumber)
    for field in GlobalClassesOld[structname].fields:
        out += "    "
        # we cycle through arrays of arrays until we find the relevant information
        field_type = field.type
        while (field_type.__class__.__name__ == "Array"):
            field_type = field_type.array_of
        # add "struct" etc if necessary
        if field_type.typename.classkey != None:
            out += "%s " % field_type.typename.classkey
        if hasattr(field_type.typename.segments[0], 'name'):
            out += field_type.typename.segments[0].name
            # if the referenced struct is different from the modern one, refer to the old one
            if field_type.typename.segments[0].name in listofchanges and field_type.typename.segments[0].name not in trusted_typedefs:
                out += "_v%s" % versionnumber
                if field_type.typename.segments[0].name in tobackup:
                    # postpone this dump for compiler purposes
                    return("")
            out += " %s" % field.name
            # add sizes for arrays
            field_type = field.type
            while hasattr(field_type, 'size'):
                out += "[%s]" % int(parse_size(field_type.size.tokens, GlobalEnumsOld, GlobalClassesOld))
                if (field_type.__class__.__name__ == "Array"):
                    field_type = field_type.array_of
                else:
                    break
            # add bits if necessary
            if field.bits != None:
                out += ":%s" % field.bits
            out += ";\n"

        else:
            # we are dealing with a union
            class_scope = GlobalClassesOld["__AnonymousName%s" % field.type.typename.segments[0].id]
            out += "\n    {\n"

            for x in class_scope.fields:
                out += "        "
                # this largely copies code from above
                field_type = x.type
                while (field_type.__class__.__name__ == "Array"):
                    field_type = field_type.array_of
                if field_type.typename.classkey != None:
                    out += "%s " % field_type.typename.classkey
                out += field_type.typename.segments[0].name
                out += " %s" % x.name
                # add sizes for arrays
                field_type = x.type
                while hasattr(field_type, 'size'):
                    out += "[%s]" % int(parse_size(field_type.size.tokens, GlobalEnumsOld, GlobalClassesOld))
                    if (field_type.__class__.__name__ == "Array"):
                        field_type = field_type.array_of
                    else:
                        break
                # add bits if necessary
                if x.bits != None:
                    out += ":%s" % x.bits
                out += ";\n"

            out += "    } %s;\n" % field.name
        
    return (out + "};\n\n")

"""
MAKE_RELEASE.PY

An attempt at documentation

1. Upon execution, this script attempts to pull a new version (pull_new_version).
   This means that it will grab a copy of global.h and pokemon_storage_system.h.
   It will also take note of the SECTOR_ID variables and write them in a sectors txt
   files. These files are stored in /versioning/ alongside the relevant version number,
   starting at 0.

2. If this is the first time the script is run, it will active and inject some code
   relative to Tustin's system (injectTustin). This includes adding _saveSentinel and
   saveVersion to SaveBlock2, updating new_game.c to correctly identify new save files,
   and uncommenting the versioning include file.

3. If not the first time the script is run, it will start preparing a first comparison
   between the latest defined version and the current state of affairs (compareFields).

4. The script will start preparing a first comparison between the latest defined version
   and the current state of affairs (compareFields).If there are no changes
   (globalHasChanges), the process is aborted since it is redundant. Otherwise, the
   migration process begins. Since compatibility with all previous versions is retained,
   all code is rewritten - this way, if there was a v0, v1 and v2 and we are adding v3,
   it writes new code to directly migrate v0 to v3 etc. This takes place in prepareMigration.

5. From this point on, the user can make any changes to the SaveBlocks they desire.
   Running make release again will add a new version and make all previous versions
   compatible with it. This means that running make release once (step 2) will not yet
   make older versions compatibile with - after all, a second version to compare with
   has not yet been defined.
"""

if __name__ == "__main__":
    if '--log' in sys.argv:
        f = open('log.txt', 'w')
    
    pull_new_version()
    # use cxxheaderparser to figure out everything
    GlobalClassesOld = {}
    GlobalClassesNew = {}

    GlobalReferOld = {}
    GlobalReferNew = {}

    # first compare the current state of affairs with the latest version. only if this is changed (see globalHasChanges) do we need to recompare with the older changes
    GlobalEnumsOld, GlobalEnumsNew = prepare_comparison('global', globalVersion - 1)
    prepare_comparison('pokemon_storage_system', globalVersion - 1) # no enum output because this file doesn't contain any

    compareFields('SaveBlock2', [], 'gSaveBlock2Ptr')
    compareFields('SaveBlock1', [], 'gSaveBlock1Ptr')
    compareFields('PokemonStorage', [], 'gPokemonStoragePtr')
    # clean up if no changes
    if not globalHasChanges:
        out("No save migration needed!")
        os.remove("versioning/global_v%s.c" % globalVersion)
        os.remove("versioning/pokemon_storage_system_v%s.c" % globalVersion)
        os.remove("versioning/sectors_v%s.txt" % globalVersion)
    # prepare for actual upgrade otherwise
    else:
        # update constants and code
        makeSaveVersionConstants()
        updateSwitchVersion()
        # there is a new latest version, so we'll delete the src/data/old_saves folder and rebuild it from scratch
        if os.path.exists("src/data/old_saves/"):
            shutil.rmtree("src/data/old_saves/")
        os.mkdir("src/data/old_saves/")
        # start by updating the previous version to the current version
        prepareMigration(globalChangedStructs, globalHasChangedStructs, globalVersion - 1)
        # loop through previous versions, compare and make migration scripts
        currentLoopingVersion = globalVersion - 2
        while (currentLoopingVersion >= 0):
            globalHasChanges = False
            globalChangedStructs = []
            globalHasChangedStructs = []
            GlobalEnumsOld, GlobalEnumsNew = prepare_comparison('global', currentLoopingVersion)
            prepare_comparison('pokemon_storage_system', currentLoopingVersion) # no enum output because this file doesn't contain any
            compareFields('SaveBlock2', [], 'gSaveBlock2Ptr')
            compareFields('SaveBlock1', [], 'gSaveBlock1Ptr')
            compareFields('PokemonStorage', [], 'gPokemonStoragePtr')
            prepareMigration(globalChangedStructs, globalHasChangedStructs, currentLoopingVersion)
            currentLoopingVersion -= 1

    if globalVersion == 1:
        out("First setup succesful! Please don't forget to go to src/strings.c and")
        out("update gText_SaveFileOldUpdated, gText_SaveFileOldErrored and gText_SaveFileTooNew.")

    if '--log' in sys.argv:
        f.close()
