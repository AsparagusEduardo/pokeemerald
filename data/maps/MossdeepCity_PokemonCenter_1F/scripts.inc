.set LOCALID_NURSE, 1

MossdeepCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

MossdeepCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_MOSSDEEP_CITY
	end

MossdeepCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

MossdeepCity_PokemonCenter_1F_EventScript_Woman::
	msgbox MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable, MSGBOX_NPC
	end

MossdeepCity_PokemonCenter_1F_EventScript_Girl::
	msgbox MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MossdeepCity_PokemonCenter_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MossdeepCity_PokemonCenter_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MossdeepCity_PokemonCenter_1F/text_es.inc"
.else
	.include "data/maps/MossdeepCity_PokemonCenter_1F/text.inc"
.endif
.endif
.endif
=======
MossdeepCity_PokemonCenter_1F_Text_GymLeaderDuoFormidable:
	.string "Los LÍDERES de GIMNASIO de este\n"
	.string "pueblo forman un dúo formidable.\p"
	.string "Sus ataques combinados son, en dos\n"
	.string "palabras, “im-presionantes”.$"

MossdeepCity_PokemonCenter_1F_Text_AbilitiesMightChangeMoves:
	.string "Según las habilidades especiales\n"
	.string "de cada POKéMON, algunos movimientos\l"
	.string "tienen otro efecto o no funcionan.$"

>>>>>>> Egg/spanish
