Route110_TrickHousePuzzle8_MapScripts::
	.byte 0

Route110_TrickHousePuzzle8_EventScript_Scroll::
	lockall
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0, Route110_TrickHousePuzzle8_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle8_EventScript_FoundScroll::
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 1
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end

Route110_TrickHousePuzzle8_EventScript_Vincent::
	trainerbattle_single TRAINER_VINCENT, Route110_TrickHousePuzzle8_Text_VincentIntro, Route110_TrickHousePuzzle8_Text_VincentDefeat
	msgbox Route110_TrickHousePuzzle8_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_EventScript_Keira::
	trainerbattle_single TRAINER_KEIRA, Route110_TrickHousePuzzle8_Text_KeiraIntro, Route110_TrickHousePuzzle8_Text_KeiraDefeat
	msgbox Route110_TrickHousePuzzle8_Text_KeiraPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_EventScript_Leroy::
	trainerbattle_single TRAINER_LEROY, Route110_TrickHousePuzzle8_Text_LeroyIntro, Route110_TrickHousePuzzle8_Text_LeroyDefeat
	msgbox Route110_TrickHousePuzzle8_Text_LeroyPostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route110_TrickHousePuzzle8/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route110_TrickHousePuzzle8/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route110_TrickHousePuzzle8/text_es.inc"
.else
	.include "data/maps/Route110_TrickHousePuzzle8/text.inc"
.endif
.endif
.endif
=======
Route110_TrickHousePuzzle8_EventScript_WroteSecretCodeLockOpened::
	.string "{PLAYER} escribió el código secreto\n"
	.string "en la puerta.\p"
	.string "“El MAESTRO TRETA\n"
	.string "es amable.”\l"
	.string "Y…\p"
	.string "¡la puerta se ha abierto!$"

Route110_TrickHousePuzzle8_Text_VincentIntro:
	.string "No hay muchos ENTRENADORES\n"
	.string "que hayan llegado hasta aquí…$"

Route110_TrickHousePuzzle8_Text_VincentDefeat:
	.string "Así que debes de ser muy fuerte…$"

Route110_TrickHousePuzzle8_Text_VincentPostBattle:
	.string "¿Has vencido al CAMPEÓN de la LIGA\n"
	.string "POKéMON? ¡Menos lobos!$"

Route110_TrickHousePuzzle8_Text_KeiraIntro:
	.string "¡Puedes darte con un canto en los\n"
	.string "dientes por luchar contra mí!$"

Route110_TrickHousePuzzle8_Text_KeiraDefeat:
	.string "¡Esto no puede ser!\n"
	.string "¡Yo nunca había perdido antes!$"

Route110_TrickHousePuzzle8_Text_KeiraPostBattle:
	.string "Me has vencido de pura chorra.\n"
	.string "Puede darte para fardar un rato…$"

Route110_TrickHousePuzzle8_Text_LeroyIntro:
	.string "Te las has apañado bien en el desafío\n"
	.string "de la CASA TRETA…$"

Route110_TrickHousePuzzle8_Text_LeroyDefeat:
	.string "Ya entiendo…\n"
	.string "Posees un estilo único e inimitable…$"

Route110_TrickHousePuzzle8_Text_LeroyPostBattle:
	.string "Alguien como tú le tiene que gustar\n"
	.string "por fuerza al MAESTRO TRETA.$"

>>>>>>> Egg/spanish
