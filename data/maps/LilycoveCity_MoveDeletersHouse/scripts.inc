.set LOCALID_MOVE_DELETER, 1

LilycoveCity_MoveDeletersHouse_MapScripts::
	.byte 0

LilycoveCity_MoveDeletersHouse_EventScript_MoveDeleter::
	lockall
	applymovement LOCALID_MOVE_DELETER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget::
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves
	special GetNumMovesSelectedMonHas
	goto_if_eq VAR_RESULT, 1, LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special MoveDeleterChooseMoveToForget
	fadescreen FADE_FROM_BLACK
	goto_if_eq VAR_0x8005, MAX_MON_MOVES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	special BufferMoveDeleterNicknameAndMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_TryForgetMove::
	special IsLastMonThatKnowsSurf
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf
	special MoveDeleterForgetMove
	playfanfare MUS_MOVE_DELETED
	waitfanfare
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_MonOnlyKnowsOneMove::
	special BufferMoveDeleterNicknameAndMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_EggCantForgetMoves::
	msgbox LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain::
	msgbox LilycoveCity_MoveDeletersHouse_Text_ComeAgain, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_MoveDeletersHouse_EventScript_LastMonWithSurf::
	special BufferMoveDeleterNicknameAndMove
	msgbox LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf, MSGBOX_DEFAULT
	releaseall
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/LilycoveCity_MoveDeletersHouse/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/LilycoveCity_MoveDeletersHouse/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/LilycoveCity_MoveDeletersHouse/text_es.inc"
.else
	.include "data/maps/LilycoveCity_MoveDeletersHouse/text.inc"
.endif
.endif
.endif
=======
LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove:
	.string "Eh… Ah, hola.\n"
	.string "Soy el QUITA-MOVIMIENTOS.\p"
	.string "Puedo hacer que los POKéMON\n"
	.string "olviden sus movimientos.\p"
	.string "¿Quieres que me ocupe de los tuyos?$"

LilycoveCity_MoveDeletersHouse_Text_WhichMonShouldForget:
	.string "¿Qué POKéMON debería olvidar\n"
	.string "algún movimiento?$"

LilycoveCity_MoveDeletersHouse_Text_WhichMoveShouldBeForgotten:
	.string "¿Qué movimiento debería\n"
	.string "olvidar?$"

LilycoveCity_MoveDeletersHouse_Text_MonOnlyKnowsOneMove:
	.string "Parece que {STR_VAR_1} sólo sabe\n"
	.string "un movimiento…$"

LilycoveCity_MoveDeletersHouse_Text_MonsMoveShouldBeForgotten:
	.string "Ajá. ¿{STR_VAR_2} de {STR_VAR_1}?\n"
	.string "¿Ése quieres? ¿De verdad?$"

LilycoveCity_MoveDeletersHouse_Text_MonHasForgottenMove:
	.string "¡Ha salido de perlas!\p"
	.string "{STR_VAR_1} ha olvidado\n"
	.string "completamente {STR_VAR_2}.$"

LilycoveCity_MoveDeletersHouse_Text_ComeAgain:
	.string "Vuelve por aquí si quieres que tus\n"
	.string "POKéMON olviden algún movimiento.$"

LilycoveCity_MoveDeletersHouse_Text_EggCantForgetMoves:
	.string "¿Cómo?\n"
	.string "Un HUEVO no puede saber\l"
	.string "ningún movimiento.$"

LilycoveCity_MoveDeletersHouse_Text_CantForgetSurf:
	.string "¡Ajá!\p"
	.string "Tu {STR_VAR_1} no tiene\n"
	.string "ganas de olvidar SURF.$"

>>>>>>> Egg/spanish
