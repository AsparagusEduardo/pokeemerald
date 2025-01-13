Route110_TrickHousePuzzle6_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle6_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHousePuzzle6_OnWarp
	.byte 0

Route110_TrickHousePuzzle6_OnTransition:
	special RotatingGate_InitPuzzle
	end

Route110_TrickHousePuzzle6_OnWarp:
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, Route110_TrickHousePuzzle6_EventScript_InitPuzzle
	.2byte 0

@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_5
Route110_TrickHousePuzzle6_EventScript_InitPuzzle::
	special RotatingGate_InitPuzzleAndGraphics
	end

Route110_TrickHousePuzzle6_EventScript_Scroll::
	lockall
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0, Route110_TrickHousePuzzle6_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle6_EventScript_FoundScroll::
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 1
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end

Route110_TrickHousePuzzle6_EventScript_Sophia::
	trainerbattle_single TRAINER_SOPHIA, Route110_TrickHousePuzzle6_Text_SophiaIntro, Route110_TrickHousePuzzle6_Text_SophiaDefeat
	msgbox Route110_TrickHousePuzzle6_Text_SophiaPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle6_EventScript_Benny::
	trainerbattle_single TRAINER_BENNY, Route110_TrickHousePuzzle6_Text_BennyIntro, Route110_TrickHousePuzzle6_Text_BennyDefeat
	msgbox Route110_TrickHousePuzzle6_Text_BennyPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle6_EventScript_Sebastian::
	trainerbattle_single TRAINER_SEBASTIAN, Route110_TrickHousePuzzle6_Text_SebastianIntro, Route110_TrickHousePuzzle6_Text_SebastianDefeat
	msgbox Route110_TrickHousePuzzle6_Text_SebastianPostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route110_TrickHousePuzzle6/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route110_TrickHousePuzzle6/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route110_TrickHousePuzzle6/text_es.inc"
.else
	.include "data/maps/Route110_TrickHousePuzzle6/text.inc"
.endif
.endif
.endif
=======
Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened:
	.string "{PLAYER} escribió el código secreto\n"
	.string "en la puerta.\p"
	.string "“El MAESTRO TRETA\n"
	.string "es mi inspiración.”\l"
	.string "Y…\p"
	.string "¡la puerta se ha abierto!$"

Route110_TrickHousePuzzle6_Text_SophiaIntro:
	.string "Cuando oí que había una casa rara\n"
	.string "por aquí, vine a ver cómo era.$"

Route110_TrickHousePuzzle6_Text_SophiaDefeat:
	.string "¡Y me encontré con alguien\n"
	.string "que me ha dado una paliza!$"

Route110_TrickHousePuzzle6_Text_SophiaPostBattle:
	.string "Me lo paso de miedo cotilleando\n"
	.string "por la casa.\p"
	.string "¡Es un reto que no dudo en repetir!$"

Route110_TrickHousePuzzle6_Text_BennyIntro:
	.string "Quizás pueda conseguir que mi POKéMON\n"
	.string "PÁJARO sobrevuele el muro…$"

Route110_TrickHousePuzzle6_Text_BennyDefeat:
	.string "¡Aaaaah! ¡La pifié!$"

Route110_TrickHousePuzzle6_Text_BennyPostBattle:
	.string "Ejem, ejem… Creo que he perdido\n"
	.string "porque he intentado hacer trampa…$"

Route110_TrickHousePuzzle6_Text_SebastianIntro:
	.string "Estas puertas giratorias me están\n"
	.string "revolviendo el estómago…$"

Route110_TrickHousePuzzle6_Text_SebastianDefeat:
	.string "Todo gira y gira y gira…\n"
	.string "Ay, ay, ay, no puedo más…$"

Route110_TrickHousePuzzle6_Text_SebastianPostBattle:
	.string "No entiendo, a ti no te da ni fu ni fa…\n"
	.string "¿O estás poniendo cara de póquer?$"

>>>>>>> Egg/spanish
