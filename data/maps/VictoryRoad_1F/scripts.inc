.set LOCALID_WALLY_ENTRANCE, 4

VictoryRoad_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
	.byte 0

VictoryRoad_1F_OnTransition:
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 1, VictoryRoad_1F_EventScript_SetEntranceWallyPos1
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 2, VictoryRoad_1F_EventScript_SetEntranceWallyPos2
	end

VictoryRoad_1F_EventScript_SetEntranceWallyPos1::
	setobjectxyperm LOCALID_WALLY_ENTRANCE, 2, 24
	setobjectmovementtype LOCALID_WALLY_ENTRANCE, MOVEMENT_TYPE_FACE_DOWN
	return

VictoryRoad_1F_EventScript_SetEntranceWallyPos2::
	setobjectxyperm LOCALID_WALLY_ENTRANCE, 3, 24
	setobjectmovementtype LOCALID_WALLY_ENTRANCE, MOVEMENT_TYPE_FACE_DOWN
	return

VictoryRoad_1F_EventScript_WallyBattleTrigger1::
	lockall
	setvar VAR_0x8008, 1
	addobject LOCALID_WALLY_ENTRANCE
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer1
	waitmovement 0
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
	end

VictoryRoad_1F_EventScript_WallyBattleTrigger2::
	lockall
	setvar VAR_0x8008, 2
	addobject LOCALID_WALLY_ENTRANCE
	applymovement LOCALID_WALLY_ENTRANCE, VictoryRoad_1F_Movement_WallyApproachPlayer2
	waitmovement 0
	goto VictoryRoad_1F_EventScript_WallyEntranceBattle
	end

VictoryRoad_1F_EventScript_WallyEntranceBattle::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WALLY_VR_1, VictoryRoad_1F_Text_WallyEntranceDefeat
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_DEFAULT
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
	copyobjectxytoperm LOCALID_WALLY_ENTRANCE
	setflag FLAG_DEFEATED_WALLY_VICTORY_ROAD
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
	releaseall
	end

VictoryRoad_1F_Movement_WallyApproachPlayer1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

VictoryRoad_1F_Movement_WallyApproachPlayer2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

@ This Wally appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
VictoryRoad_1F_EventScript_EntranceWally::
	msgbox VictoryRoad_1F_Text_WallyPostEntranceBattle, MSGBOX_NPC
	end

@ This Wally appears and remains at the exit after the Hall of Fame is entered
VictoryRoad_1F_EventScript_ExitWally::
	trainerbattle_single TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, VictoryRoad_1F_EventScript_RematchWally
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_RematchWally::
	trainerbattle_rematch TRAINER_WALLY_VR_2, VictoryRoad_1F_Text_WallyIntro, VictoryRoad_1F_Text_WallyDefeat
	msgbox VictoryRoad_1F_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Edgar::
	trainerbattle_single TRAINER_EDGAR, VictoryRoad_1F_Text_EdgarIntro, VictoryRoad_1F_Text_EdgarDefeat
	msgbox VictoryRoad_1F_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Albert::
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Hope::
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Quincy::
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Katelynn::
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/VictoryRoad_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/VictoryRoad_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/VictoryRoad_1F/text_es.inc"
.else
	.include "data/maps/VictoryRoad_1F/text.inc"
.endif
.endif
.endif
=======
VictoryRoad_1F_Text_WallyNotGoingToLoseAnymore:
	.string "BLASCO: ¡Hola, {PLAYER}!\p"
	.string "¿Te sorprende verme aquí?\p"
	.string "He conseguido llegar hasta aquí,\n"
	.string "¡y todo gracias a ti!\p"
	.string "Desde que perdí ante ti aquel día,\n"
	.string "{PLAYER}, he mejorado mucho.\p"
	.string "¡Pero esta vez no perderé!\p"
	.string "¡Voy a ganar! ¡Por los POKéMON\n"
	.string "que me han estado apoyando sin cesar!\p"
	.string "Muy bien, ¡allá voy!$"

VictoryRoad_1F_Text_WallyEntranceDefeat:
	.string "¡Guau!\n"
	.string "{PLAYER}, sí que eres fuerte…$"

VictoryRoad_1F_Text_WallyPostEntranceBattle:
	.string "BLASCO: Hoy no he podido vencerte,\n"
	.string "{PLAYER}, pero uno de estos días…\l"
	.string "¡daremos la vuelta a la tortilla!$"

VictoryRoad_1F_Text_WallyIntro:
	.string "BLASCO: ¡Hola, {PLAYER}!\p"
	.string "He mejorado aún más desde la última\n"
	.string "vez. ¡Ahora lo vas a ver!\p"
	.string "Muy bien, ¡allá voy!$"

VictoryRoad_1F_Text_WallyDefeat:
	.string "¡Guau!\n"
	.string "{PLAYER}, sí que eres fuerte…$"

VictoryRoad_1F_Text_WallyPostBattle:
	.string "BLASCO: Hoy no he podido vencerte,\n"
	.string "{PLAYER}, pero uno de estos días…\l"
	.string "¡daremos la vuelta a la tortilla!\p"
	.string "¡Llegaré a la LIGA POKéMON!$"

VictoryRoad_1F_Text_EdgarIntro:
	.string "He llegado hasta aquí un par de veces,\n"
	.string "pero el último tramo es tan difícil…$"

VictoryRoad_1F_Text_EdgarDefeat:
	.string "Hala, otra vez he perdido…$"

VictoryRoad_1F_Text_EdgarPostBattle:
	.string "Has llegado muy lejos. Sigue así\n"
	.string "y llegarás a la cima del CAMPEONATO.\l"
	.string "¡Si alguien puede, eres tú!$"

VictoryRoad_1F_Text_AlbertIntro:
	.string "¡No he llegado hasta aquí para perder\n"
	.string "ahora! ¡Eso no es una opción!$"

VictoryRoad_1F_Text_AlbertDefeat:
	.string "No puede ser…\n"
	.string "He perdido…$"

VictoryRoad_1F_Text_AlbertPostBattle:
	.string "He perdido este combate…\p"
	.string "Eso quiere decir que no estoy\n"
	.string "cualificado para ser CAMPEÓN…$"

VictoryRoad_1F_Text_HopeIntro:
	.string "El camino hasta la VICTORIA\n"
	.string "es largo y tortuoso, como esta calle…$"

VictoryRoad_1F_Text_HopeDefeat:
	.string "¡Tú sí que sabes combatir!$"

VictoryRoad_1F_Text_HopePostBattle:
	.string "Parece que tienes madera. Creo que\n"
	.string "puedes hacerte con el CAMPEONATO.$"

VictoryRoad_1F_Text_QuincyIntro:
	.string "¿Que qué es la CALLE VICTORIA?\n"
	.string "¡Te lo diré si me ganas!$"

VictoryRoad_1F_Text_QuincyDefeat:
	.string "¡Perfecto!\n"
	.string "¡Bien hecho!$"

VictoryRoad_1F_Text_QuincyPostBattle:
	.string "Llegar hasta aquí de una pieza es la\n"
	.string "prueba final para cualquier ENTRENADOR\l"
	.string "que quiera hacerse con el CAMPEONATO.\p"
	.string "Por eso se llama CALLE VICTORIA.$"

VictoryRoad_1F_Text_KatelynnIntro:
	.string "No tengo nada que decir a quien\n"
	.string "ya ha llegado tan lejos. ¡Adelante!$"

VictoryRoad_1F_Text_KatelynnDefeat:
	.string "Qué vergüenza más grande…$"

VictoryRoad_1F_Text_KatelynnPostBattle:
	.string "En fin, sigue avanzando.\n"
	.string "Lo que hagas me importa un comino.$"
>>>>>>> Egg/spanish
