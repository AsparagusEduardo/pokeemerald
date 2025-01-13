Route110_TrickHousePuzzle4_MapScripts::
	.byte 0

Route110_TrickHousePuzzle4_EventScript_Scroll::
	lockall
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_4_STATE, 0, Route110_TrickHousePuzzle4_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle4_EventScript_FoundScroll::
	setvar VAR_TRICK_HOUSE_PUZZLE_4_STATE, 1
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end

Route110_TrickHousePuzzle4_EventScript_Cora::
	trainerbattle_single TRAINER_CORA, Route110_TrickHousePuzzle4_Text_CoraIntro, Route110_TrickHousePuzzle4_Text_CoraDefeat
	msgbox Route110_TrickHousePuzzle4_Text_CoraPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle4_EventScript_Yuji::
	trainerbattle_single TRAINER_YUJI, Route110_TrickHousePuzzle4_Text_YujiIntro, Route110_TrickHousePuzzle4_Text_YujiDefeat
	msgbox Route110_TrickHousePuzzle4_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle4_EventScript_Paula::
	trainerbattle_single TRAINER_PAULA, Route110_TrickHousePuzzle4_Text_PaulaIntro, Route110_TrickHousePuzzle4_Text_PaulaDefeat
	msgbox Route110_TrickHousePuzzle4_Text_PaulaPostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route110_TrickHousePuzzle4/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route110_TrickHousePuzzle4/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route110_TrickHousePuzzle4/text_es.inc"
.else
	.include "data/maps/Route110_TrickHousePuzzle4/text.inc"
.endif
.endif
.endif
=======
Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened:
	.string "{PLAYER} escribió el código secreto\n"
	.string "en la puerta.\p"
	.string "“El MAESTRO TRETA\n"
	.string "es guay.”\l"
	.string "Y…\p"
	.string "¡la puerta se ha abierto!$"

Route110_TrickHousePuzzle4_Text_CoraIntro:
	.string "Me duele la cabeza de pensar…\n"
	.string "¡Luchar cuesta menos trabajo!$"

Route110_TrickHousePuzzle4_Text_CoraDefeat:
	.string "Me da igual haber perdido…\n"
	.string "¡Luchar sigue siendo lo mejor!$"

Route110_TrickHousePuzzle4_Text_CoraPostBattle:
	.string "¡Por supuesto! Yo iría a cualquier sitio\n"
	.string "donde hubiera un ENTRENADOR.$"

Route110_TrickHousePuzzle4_Text_YujiIntro:
	.string "¡Eh, tú! ¿Ves estas rocas tan gordas?\n"
	.string "¡Pues yo las muevo con el dedo meñique!$"

Route110_TrickHousePuzzle4_Text_YujiDefeat:
	.string "Puedo mover rocas, pero no\n"
	.string "puedo resolver acertijos…$"

Route110_TrickHousePuzzle4_Text_YujiPostBattle:
	.string "No basta con ser musculoso,\n"
	.string "¡también hay que ser ingenioso!$"

Route110_TrickHousePuzzle4_Text_PaulaIntro:
	.string "La CASA TRETA es cada vez más\n"
	.string "traicionera, ¿no te parece?$"

Route110_TrickHousePuzzle4_Text_PaulaDefeat:
	.string "¡Ayyyy!$"

Route110_TrickHousePuzzle4_Text_PaulaPostBattle:
	.string "Yo creo que nadie ha logrado\n"
	.string "llegar hasta el final…$"

>>>>>>> Egg/spanish
