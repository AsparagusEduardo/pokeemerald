.set LOCALID_NURSE, 1

PetalburgCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PetalburgCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_PETALBURG_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

PetalburgCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_FatMan::
	msgbox PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem, MSGBOX_NPC
	end

PetalburgCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP, MSGBOX_NPC
	end

PetalburgCity_PokemonCenter_1F_EventScript_Woman::
	lock
	faceplayer
	msgbox PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, IsStarterInParty
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_SayStarterTypeInfo::
	call_if_eq VAR_STARTER_MON, 0, PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType
	call_if_eq VAR_STARTER_MON, 1, PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType
	call_if_eq VAR_STARTER_MON, 2, PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType
	release
	end

PetalburgCity_PokemonCenter_1F_EventScript_SayTreeckoType::
	msgbox PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
	return

PetalburgCity_PokemonCenter_1F_EventScript_SayTorchicType::
	msgbox PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType, MSGBOX_DEFAULT
	return

PetalburgCity_PokemonCenter_1F_EventScript_SayMudkipType::
	msgbox PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType, MSGBOX_DEFAULT
	return

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/PetalburgCity_PokemonCenter_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/PetalburgCity_PokemonCenter_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/PetalburgCity_PokemonCenter_1F/text_es.inc"
.else
	.include "data/maps/PetalburgCity_PokemonCenter_1F/text.inc"
.endif
.endif
.endif
=======
PetalburgCity_PokemonCenter_1F_Text_PCStorageSystem:
	.string "Ese sistema de almacenamiento\n"
	.string "de POKéMON en PC es tremendo…\p"
	.string "¡Quienquiera que lo haya hecho\n"
	.string "debe de ser un científico de categoría!$"

PetalburgCity_PokemonCenter_1F_Text_OranBerryRegainedHP:
	.string "¡Cuando mi POKéMON se comió\n"
	.string "una BAYA ARANJA, recuperó PS!$"

PetalburgCity_PokemonCenter_1F_Text_ManyTypesOfPokemon:
	.string "Hay muchos tipos de POKéMON.\p"
	.string "Todos ellos tienen puntos fuertes\n"
	.string "y débiles con respecto a otros tipos.\p"
	.string "Según los tipos de POKéMON\n"
	.string "que haya en un combate,\l"
	.string "así será de fácil o difícil.$"

PetalburgCity_PokemonCenter_1F_Text_TreeckoIsGrassType:
	.string "Por ejemplo, tu TREECKO\n"
	.string "es de tipo PLANTA.\p"
	.string "Es fuerte contra los tipos\n"
	.string "AGUA y TIERRA.\p"
	.string "Pero es débil contra los\n"
	.string "POKéMON de tipo FUEGO.$"

PetalburgCity_PokemonCenter_1F_Text_TorchicIsFireType:
	.string "Por ejemplo, tu TORCHIC\n"
	.string "es de tipo FUEGO.\p"
	.string "Es fuerte contra los tipos\n"
	.string "PLANTA y BICHO.\p"
	.string "Pero es débil contra los\n"
	.string "POKéMON de tipo AGUA.$"

PetalburgCity_PokemonCenter_1F_Text_MudkipIsWaterType:
	.string "Por ejemplo, tu MUDKIP\n"
	.string "es de tipo AGUA.\p"
	.string "Es fuerte contra los\n"
	.string "POKéMON de tipo FUEGO.\p"
	.string "Pero es débil contra los\n"
	.string "tipos PLANTA y ELÉCTRICO.$"

>>>>>>> Egg/spanish
