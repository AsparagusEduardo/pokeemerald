MtPyre_6F_MapScripts::
	.byte 0

MtPyre_6F_EventScript_Valerie::
	trainerbattle_single TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieIntro, MtPyre_6F_Text_ValerieDefeat, MtPyre_6F_EventScript_RegisterValerie
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtPyre_6F_EventScript_RematchValerie
	msgbox MtPyre_6F_Text_ValeriePostBattle, MSGBOX_DEFAULT
	release
	end

MtPyre_6F_EventScript_RegisterValerie::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtPyre_6F_Text_ValerieRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_VALERIE_1
	release
	end

MtPyre_6F_EventScript_RematchValerie::
	trainerbattle_rematch TRAINER_VALERIE_1, MtPyre_6F_Text_ValerieRematchIntro, MtPyre_6F_Text_ValerieRematchDefeat
	msgbox MtPyre_6F_Text_ValeriePostRematch, MSGBOX_AUTOCLOSE
	end

MtPyre_6F_EventScript_Cedric::
	trainerbattle_single TRAINER_CEDRIC, MtPyre_6F_Text_CedricIntro, MtPyre_6F_Text_CedricDefeat
	msgbox MtPyre_6F_Text_CedricPostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MtPyre_6F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MtPyre_6F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MtPyre_6F/text_es.inc"
.else
	.include "data/maps/MtPyre_6F/text.inc"
.endif
.endif
.endif
=======
MtPyre_6F_Text_ValerieIntro:
	.string "Cuando estoy aquí…\n"
	.string "siento un extraño poder dentro de mí.$"

MtPyre_6F_Text_ValerieDefeat:
	.string "Pues esta vez no lo he sentido mucho…$"

MtPyre_6F_Text_ValeriePostBattle:
	.string "Quizás provenga del espíritu de los\n"
	.string "POKéMON que a veces acuden aquí…$"

MtPyre_6F_Text_ValerieRegister:
	.string "Ji, ji, ji… He perdido el combate, pero…\n"
	.string "todavía puedo sorprenderte…\p"
	.string "No hace falta ni que ponga mis manos\n"
	.string "sobre tu POKéNAV… ¡Toma ya!$"

MtPyre_6F_Text_ValerieRematchIntro:
	.string "¡Detrás de ti!\n"
	.string "¿Qué es eso?$"

MtPyre_6F_Text_ValerieRematchDefeat:
	.string "Pues juraría que había algo…$"

MtPyre_6F_Text_ValeriePostRematch:
	.string "Los POKéMON que descansan aquí\n"
	.string "pueden ser muy juguetones.$"

MtPyre_6F_Text_CedricIntro:
	.string "¿Has perdido el norte?\n"
	.string "¡No te preocupes, que aquí estoy yo!$"

MtPyre_6F_Text_CedricDefeat:
	.string "¿Pero tú no te habías perdido?$"

MtPyre_6F_Text_CedricPostBattle:
	.string "Pensaba que era más fácil derrotar\n"
	.string "a los ENTRENADORES que se pierden.\p"
	.string "No volveré a intentar un truco\n"
	.string "tan sucio nunca más…$"

>>>>>>> Egg/spanish
