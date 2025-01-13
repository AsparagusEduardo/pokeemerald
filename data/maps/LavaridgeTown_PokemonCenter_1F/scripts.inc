.set LOCALID_NURSE, 1

LavaridgeTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

LavaridgeTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
	end

LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/LavaridgeTown_PokemonCenter_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/LavaridgeTown_PokemonCenter_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/LavaridgeTown_PokemonCenter_1F/text_es.inc"
.else
	.include "data/maps/LavaridgeTown_PokemonCenter_1F/text.inc"
.endif
.endif
.endif
=======
LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
	.string "Creo que los POKéMON se van uniendo\n"
	.string "más a los ENTRENADORES a medida\l"
	.string "que van pasando más tiempo juntos.\p"
	.string "Cuanto más tiempo, mejor.\n"
	.string "Eso creo.$"

LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
	.string "Es increíble cómo pueden devolverte\n"
	.string "la energía estos baños termales.\p"
	.string "¡Cómo me gustaría poder meter\n"
	.string "también aquí a mis POKéMON!$"

LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
	.string "¡Jo, jo, jo! Oye, joven, por aquí\n"
	.string "llegarás a los baños termales.\p"
	.string "Los POKéMON descansan, ¿no?\n"
	.string "Pues los ENTRENADORES también.$"

>>>>>>> Egg/spanish
