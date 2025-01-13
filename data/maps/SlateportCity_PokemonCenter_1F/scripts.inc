.set LOCALID_NURSE, 1

SlateportCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SlateportCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
	call Common_EventScript_UpdateBrineyLocation
	end

SlateportCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SlateportCity_PokemonCenter_1F_EventScript_Sailor::
	msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
	end

SlateportCity_PokemonCenter_1F_EventScript_Woman::
	msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SlateportCity_PokemonCenter_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SlateportCity_PokemonCenter_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SlateportCity_PokemonCenter_1F/text_es.inc"
.else
	.include "data/maps/SlateportCity_PokemonCenter_1F/text.inc"
.endif
.endif
.endif
=======
SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon:
	.string "¿Quieres un consejo?\p"
	.string "Debes entrenar POKéMON\n"
	.string "de distintos tipos de manera\l"
	.string "equilibrada.\p"
	.string "No es buena idea tener un único\n"
	.string "POKéMON fuerte.\p"
	.string "Si su tipo le pone en desventaja\n"
	.string "en un combate, no tendrá\l"
	.string "ninguna oportunidad.$"

SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend:
	.string "Intercambio POKéMON con\n"
	.string "mis amigos.\p"
	.string "Si resulta que el POKéMON que\n"
	.string "cambio tiene un objeto, todavía\l"
	.string "me pongo más contenta.$"

>>>>>>> Egg/spanish
