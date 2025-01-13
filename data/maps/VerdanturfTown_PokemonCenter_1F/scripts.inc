.set LOCALID_NURSE, 1

VerdanturfTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

VerdanturfTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon, MSGBOX_NPC
	end

VerdanturfTown_PokemonCenter_1F_EventScript_ExpertM::
	msgbox VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/VerdanturfTown_PokemonCenter_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/VerdanturfTown_PokemonCenter_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/VerdanturfTown_PokemonCenter_1F/text_es.inc"
.else
	.include "data/maps/VerdanturfTown_PokemonCenter_1F/text.inc"
.endif
.endif
.endif
=======
VerdanturfTown_PokemonCenter_1F_Text_FaithInYourPokemon:
	.string "¡Nadie puede considerarse ENTRENADOR\n"
	.string "si no tiene fe en sus POKéMON!\p"
	.string "Sólo aquellos que confían plenamente\n"
	.string "en la habilidad de sus POKéMON podrán\l"
	.string "llegar hasta el final.$"

VerdanturfTown_PokemonCenter_1F_Text_VisitForBattleTent:
	.string "La razón por la que todo el mundo\n"
	.string "está viniendo a VERDEGAL…\p"
	.string "Es su TIENDA de BATALLA.\n"
	.string "No hace falta que lo diga.\p"
	.string "¿O es que has venido a ver a alguien?$"

>>>>>>> Egg/spanish
