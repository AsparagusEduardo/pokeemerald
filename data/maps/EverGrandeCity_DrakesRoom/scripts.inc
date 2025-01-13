EverGrandeCity_DrakesRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_DrakesRoom_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_DrakesRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
	.byte 0

@ Unused, Drake uses Sidneys identical OnWarp for some reason
EverGrandeCity_DrakesRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth
	.2byte 0

EverGrandeCity_DrakesRoom_EventScript_PlayerTurnNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

EverGrandeCity_DrakesRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 3, EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor
	.2byte 0

EverGrandeCity_DrakesRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 4
	releaseall
	end

EverGrandeCity_DrakesRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 4, EverGrandeCity_DrakesRoom_EventScript_CloseDoor
	end

EverGrandeCity_DrakesRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

EverGrandeCity_DrakesRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

EverGrandeCity_DrakesRoom_EventScript_Drake::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox EverGrandeCity_DrakesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_DRAKE, EverGrandeCity_DrakesRoom_Text_Defeat
	goto EverGrandeCity_DrakesRoom_EventScript_Defeated
	end

EverGrandeCity_DrakesRoom_EventScript_PostBattleSpeech::
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

EverGrandeCity_DrakesRoom_EventScript_Defeated::
	setvar VAR_0x8004, FANCOUNTER_DEFEATED_DRAKE
	special Script_TryGainNewFanFromCounter
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox EverGrandeCity_DrakesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/EverGrandeCity_DrakesRoom/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/EverGrandeCity_DrakesRoom/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/EverGrandeCity_DrakesRoom/text_es.inc"
.else
	.include "data/maps/EverGrandeCity_DrakesRoom/text.inc"
.endif
.endif
.endif
=======
EverGrandeCity_DrakesRoom_Text_IntroSpeech:
	.string "Soy el último miembro del ALTO MANDO\n"
	.string "de la LIGA POKéMON. Soy DRACÓN,\l"
	.string "el gran experto en los POKéMON DRAGÓN.\p"
	.string "En su estado natural, los POKéMON son\n"
	.string "seres salvajes que viven en libertad.\p"
	.string "A veces pueden ser un estorbo,\n"
	.string "pero muchas otras veces nos ayudan.\p"
	.string "¿Sabes lo que se necesita para luchar\n"
	.string "con la ayuda de los POKéMON?\p"
	.string "¿Lo sabes?\p"
	.string "Pues si no lo sabes…, ¡nunca podrás\n"
	.string "derrotarme!$"

EverGrandeCity_DrakesRoom_Text_Defeat:
	.string "Ha sido grandioso, debo reconocerlo.$"

EverGrandeCity_DrakesRoom_Text_PostBattleSpeech:
	.string "Mereces todo mi reconocimiento\n"
	.string "por haber llegado tan lejos entrenando\l"
	.string "POKéMON.\p"
	.string "Tienes lo que hay que tener.\p"
	.string "Sí, un ENTRENADOR debe tener\n"
	.string "un corazón virtuoso.\p"
	.string "Los POKéMON sienten la bondad\n"
	.string "de los ENTRENADORES y aprenden\l"
	.string "a diferenciar entre el bien y el mal.\p"
	.string "Sienten esa bondad y se hacen fuertes.\p"
	.string "¡Adelante!\n"
	.string "¡El CAMPEÓN te espera!$"
>>>>>>> Egg/spanish

