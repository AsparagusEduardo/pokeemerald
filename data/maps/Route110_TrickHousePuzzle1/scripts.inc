Route110_TrickHousePuzzle1_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle1_OnLoad
	.byte 0

Route110_TrickHousePuzzle1_OnLoad:
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2, Route110_TrickHousePuzzle1_EventScript_OpenDoor
	end

Route110_TrickHousePuzzle1_EventScript_OpenDoor::
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
	end

Route110_TrickHousePuzzle1_EventScript_Scroll::
	lockall
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0, Route110_TrickHousePuzzle1_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle1_EventScript_FoundScroll::
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 1
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end

Route110_TrickHousePuzzle1_EventScript_Sally::
	trainerbattle_single TRAINER_SALLY, Route110_TrickHousePuzzle1_Text_SallyIntro, Route110_TrickHousePuzzle1_Text_SallyDefeat
	msgbox Route110_TrickHousePuzzle1_Text_SallyPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle1_EventScript_Eddie::
	trainerbattle_single TRAINER_EDDIE, Route110_TrickHousePuzzle1_Text_EddieIntro, Route110_TrickHousePuzzle1_Text_EddieDefeat
	msgbox Route110_TrickHousePuzzle1_Text_EddiePostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle1_EventScript_Robin::
	trainerbattle_single TRAINER_ROBIN, Route110_TrickHousePuzzle1_Text_RobinIntro, Route110_TrickHousePuzzle1_Text_RobinDefeat
	msgbox Route110_TrickHousePuzzle1_Text_RobinPostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route110_TrickHousePuzzle1/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route110_TrickHousePuzzle1/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route110_TrickHousePuzzle1/text_es.inc"
.else
	.include "data/maps/Route110_TrickHousePuzzle1/text.inc"
.endif
.endif
.endif
=======
Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened::
	.string "{PLAYER} escribió el código secreto\n"
	.string "en la puerta.\p"
	.string "“El MAESTRO TRETA\n"
	.string "es fabuloso.”\l"
	.string "Y…\p"
	.string "¡la puerta se ha abierto!$"

Route110_TrickHousePuzzle1_Text_SallyIntro:
	.string "Me voy a hacer con la victoria gracias\n"
	.string "al movimiento que acabo de aprender.$"

Route110_TrickHousePuzzle1_Text_SallyDefeat:
	.string "Vaya, contigo no funciona…$"

Route110_TrickHousePuzzle1_Text_SallyPostBattle:
	.string "Este nuevo movimiento es estupendo.\n"
	.string "¡No me canso de usarlo!$"

Route110_TrickHousePuzzle1_Text_EddieIntro:
	.string "He llegado hasta esta casa tan\n"
	.string "rara sin querer…$"

Route110_TrickHousePuzzle1_Text_EddieDefeat:
	.string "Y encima voy y pierdo…$"

Route110_TrickHousePuzzle1_Text_EddiePostBattle:
	.string "Me he perdido, he perdido luchando\n"
	.string "y ahora… ¡no sé ni cómo volver a casa!$"

Route110_TrickHousePuzzle1_Text_RobinIntro:
	.string "¿Pero quién es ese MAESTRO TRETA?$"

Route110_TrickHousePuzzle1_Text_RobinDefeat:
	.string "¡Has vencido porque estaba sumida\n"
	.string "en mis pensamientos, que conste!$"

Route110_TrickHousePuzzle1_Text_RobinPostBattle:
	.string "¡Qué fuerte eres!\n"
	.string "¿De dónde sales?$"

>>>>>>> Egg/spanish
