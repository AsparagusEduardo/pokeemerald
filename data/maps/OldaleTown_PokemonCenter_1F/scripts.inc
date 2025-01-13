.set LOCALID_NURSE, 1

OldaleTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

OldaleTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_OLDALE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

OldaleTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Boy::
	msgbox OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat, MSGBOX_NPC
	end

OldaleTown_PokemonCenter_1F_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEDEX_GET, OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable
	msgbox OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable, MSGBOX_DEFAULT
	release
	end

OldaleTown_PokemonCenter_1F_EventScript_WirelessClubAvailable::
	msgbox OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/OldaleTown_PokemonCenter_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/OldaleTown_PokemonCenter_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/OldaleTown_PokemonCenter_1F/text_es.inc"
.else
	.include "data/maps/OldaleTown_PokemonCenter_1F/text.inc"
.endif
.endif
.endif
=======
OldaleTown_PokemonCenter_1F_Text_TrainersCanUsePC:
	.string "Ese PC de la esquina es para el uso\n"
	.string "de cualquier ENTRENADOR POKéMON.\p"
	.string "Eso quiere decir que tú también\n"
	.string "lo puedes usar, claro.$"

OldaleTown_PokemonCenter_1F_Text_PokemonCentersAreGreat:
	.string "¡Los CENTROS POKéMON son guays!\p"
	.string "Puedes usar sus servicios todas\n"
	.string "las veces que quieras y siempre\l"
	.string "es gratis. ¡Es una pasada!$"

OldaleTown_PokemonCenter_1F_Text_WirelessClubNotAvailable:
	.string "Empezaron a construir el CLUB del CABLE\n"
	.string "POKéMON del primer piso hace poco.\p"
	.string "Y cualquiera sabe cuándo\n"
	.string "acabarán las obras…$"

OldaleTown_PokemonCenter_1F_Text_TradedInWirelessClub:
	.string "Acabaron de construir el CLUB del CABLE\n"
	.string "POKéMON del primer piso hace poco.\p"
	.string "¡Vengo de intercambiar un POKéMON!$"

>>>>>>> Egg/spanish
