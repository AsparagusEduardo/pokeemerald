.set LOCALID_NURSE, 1

FortreeCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FortreeCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FORTREE_CITY
	end

FortreeCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

FortreeCity_PokemonCenter_1F_EventScript_Gentleman::
	msgbox FortreeCity_PokemonCenter_1F_Text_GoToSafariZone, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_Man::
	msgbox FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat, MSGBOX_NPC
	end

FortreeCity_PokemonCenter_1F_EventScript_Boy::
	msgbox FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/FortreeCity_PokemonCenter_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/FortreeCity_PokemonCenter_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/FortreeCity_PokemonCenter_1F/text_es.inc"
.else
	.include "data/maps/FortreeCity_PokemonCenter_1F/text.inc"
.endif
.endif
.endif
=======
FortreeCity_PokemonCenter_1F_Text_GoToSafariZone:
	.string "Oye, dime, ¿estás intentando\n"
	.string "completar tu POKéDEX?\p"
	.string "Pues entonces ve a la ZONA SAFARI,\n"
	.string "en la RUTA 121. No te arrepentirás.$"

FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat:
	.string "¿Has hecho algo en el CENTRO\n"
	.string "de RÉCORDS?\p"
	.string "Está bastante bien. Mezcla y combina\n"
	.string "los récords de los ENTRENADORES.\p"
	.string "No estoy seguro de cómo funciona,\n"
	.string "pero es de lo mejorcito que hay.$"

FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav:
	.string "¡Anda, si tienes un POKéNAV!\n"
	.string "Es igualito que el mío.\p"
	.string "¿Has oído hablar de la AGENDA\n"
	.string "del MÓVIL del POKéNAV?\p"
	.string "Consúltala cuando quieras charlar\n"
	.string "con los ENTRENADORES registrados.\p"
	.string "También te indicará qué ENTRENADORES\n"
	.string "quieren volver a luchar contigo.\p"
	.string "¿No es estupendo?\n"
	.string "¡Y todo gracias a DEVON!$"

>>>>>>> Egg/spanish
