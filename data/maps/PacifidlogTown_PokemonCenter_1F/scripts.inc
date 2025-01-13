.set LOCALID_NURSE, 1

PacifidlogTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PacifidlogTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Girl::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_Woman::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola, MSGBOX_NPC
	end

PacifidlogTown_PokemonCenter_1F_EventScript_OldMan::
	msgbox PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/PacifidlogTown_PokemonCenter_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/PacifidlogTown_PokemonCenter_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/PacifidlogTown_PokemonCenter_1F/text_es.inc"
.else
	.include "data/maps/PacifidlogTown_PokemonCenter_1F/text.inc"
.endif
.endif
.endif
=======
PacifidlogTown_PokemonCenter_1F_Text_WhatColorTrainerCard:
	.string "¿De qué color es tu FICHA de\n"
	.string "ENTRENADOR? ¡La mía es de color cobre!$"

PacifidlogTown_PokemonCenter_1F_Text_OnColonyOfCorsola:
	.string "PUEBLO OROMAR flota sobre\n"
	.string "una colonia de CORSOLA.\p"
	.string "Si te digo eso, ¿tú te lo crees?$"

PacifidlogTown_PokemonCenter_1F_Text_AncestorsLivedOnBoats:
	.string "Dicen que los antepasados\n"
	.string "de los habitantes de OROMAR nacían,\l"
	.string "vivían y morían en barcos.\p"
	.string "Creo que vivían de ese modo\n"
	.string "porque iban en busca de algo.$"

>>>>>>> Egg/spanish
