EverGrandeCity_GlaciasRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_GlaciasRoom_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_GlaciasRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_GlaciasRoom_OnWarp
	.byte 0

EverGrandeCity_GlaciasRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_GlaciasRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 2, EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_GlaciasRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 3
	releaseall
	end

EverGrandeCity_GlaciasRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 3, EverGrandeCity_GlaciasRoom_EventScript_CloseDoor
	end

EverGrandeCity_GlaciasRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_GlaciasRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_GlaciasRoom_EventScript_Glacia::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_GlaciasRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GLACIA, EverGrandeCity_GlaciasRoom_Text_Defeat
	goto EverGrandeCity_GlaciasRoom_EventScript_Defeated
	end

EverGrandeCity_GlaciasRoom_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_GlaciasRoom_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/EverGrandeCity_GlaciasRoom/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/EverGrandeCity_GlaciasRoom/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/EverGrandeCity_GlaciasRoom/text_es.inc"
.else
	.include "data/maps/EverGrandeCity_GlaciasRoom/text.inc"
.endif
.endif
.endif
=======
EverGrandeCity_GlaciasRoom_Text_IntroSpeech:
	.string "Mi nombre es NÍVEA, del ALTO\n"
	.string "MANDO.\p"
	.string "He viajado desde muy lejos hasta HOENN\n"
	.string "para mejorar mis glaciales habilidades.\p"
	.string "Pero todo lo que he visto ha sido\n"
	.string "ENTRENADORES muy débiles…\p"
	.string "¿Y tú, qué?\p"
	.string "¡Me encantaría poder enfrentarme a ti!$"

EverGrandeCity_GlaciasRoom_Text_Defeat:
	.string "¡Tú y tus POKéMON tenéis espíritus\n"
	.string "que hierven de vitalidad!\p"
	.string "Tanta energía me abruma…\p"
	.string "No me extraña que mis ataques\n"
	.string "helados no te hayan afectado…$"

EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech:
	.string "Pasa a la siguiente sala.\p"
	.string "Allí podrás enfrentarte al lado más\n"
	.string "temible de la LIGA POKéMON.$"
>>>>>>> Egg/spanish

