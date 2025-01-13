.set LOCALID_NURSE, 1

DewfordTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

DewfordTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

DewfordTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_PokefanF::
	msgbox DewfordTown_PokemonCenter_1F_Text_StoneCavern, MSGBOX_NPC
	end

DewfordTown_PokemonCenter_1F_EventScript_Man::
	msgbox DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/DewfordTown_PokemonCenter_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/DewfordTown_PokemonCenter_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/DewfordTown_PokemonCenter_1F/text_es.inc"
.else
	.include "data/maps/DewfordTown_PokemonCenter_1F/text.inc"
.endif
.endif
.endif
=======
DewfordTown_PokemonCenter_1F_Text_StoneCavern:
	.string "Hay una caverna de roca en la otra\n"
	.string "punta del pueblo.\p"
	.string "Creo que puedes encontrar piedras\n"
	.string "raras por allí.$"

DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM:
	.string "Aunque un POKéMON esté debilitado,\n"
	.string "todavía podrá usar un movimiento de\l"
	.string "una Máquina Oculta, MO para abreviar.$"
>>>>>>> Egg/spanish

