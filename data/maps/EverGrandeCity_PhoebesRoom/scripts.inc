EverGrandeCity_PhoebesRoom_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_PhoebesRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_PhoebesRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_PhoebesRoom_OnFrame
	.byte 0

EverGrandeCity_PhoebesRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_PhoebesRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 1, EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 2
	releaseall
	end

EverGrandeCity_PhoebesRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 2, EverGrandeCity_PhoebesRoom_EventScript_CloseDoor
	end

EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_PhoebesRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_PhoebesRoom_EventScript_Phoebe::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
	end

EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_PhoebesRoom_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/EverGrandeCity_PhoebesRoom/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/EverGrandeCity_PhoebesRoom/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/EverGrandeCity_PhoebesRoom/text_es.inc"
.else
	.include "data/maps/EverGrandeCity_PhoebesRoom/text.inc"
.endif
.endif
.endif
=======
EverGrandeCity_PhoebesRoom_Text_IntroSpeech:
	.string "¡Ja, ja, ja!\p"
	.string "Soy FÁTIMA, del ALTO MANDO.\n"
	.string "Me he entrenado en el MONTE PÍRICO.\p"
	.string "Allí desarrollé un estrecho vínculo\n"
	.string "con los POKéMON de tipo FANTASMA.\p"
	.string "Sí, ahora ellos y yo tenemos\n"
	.string "una relación casi simbiótica.\p"
	.string "¡Así que, adelante, prueba a ver\n"
	.string "si puedes debilitar a mis POKéMON!$"

EverGrandeCity_PhoebesRoom_Text_Defeat:
	.string "Qué palo…\n"
	.string "Me han derrotado…$"

EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech:
	.string "Está claro que tú también tienes\n"
	.string "un estrecho vínculo con tus POKéMON.\p"
	.string "No supe verlo, por eso he perdido.\p"
	.string "Me gustaría ver lo lejos que te lleva\n"
	.string "esta relación especial que tenéis.\p"
	.string "Ya puedes pasar a la siguiente sala.$"
>>>>>>> Egg/spanish

