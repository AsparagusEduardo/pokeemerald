MtPyre_3F_MapScripts::
	.byte 0

MtPyre_3F_EventScript_William::
	trainerbattle_single TRAINER_WILLIAM, MtPyre_3F_Text_WilliamIntro, MtPyre_3F_Text_WilliamDefeat
	msgbox MtPyre_3F_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_EventScript_Kayla::
	trainerbattle_single TRAINER_KAYLA, MtPyre_3F_Text_KaylaIntro, MtPyre_3F_Text_KaylaDefeat
	msgbox MtPyre_3F_Text_KaylaPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_EventScript_Gabrielle::
	trainerbattle_single TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleIntro, MtPyre_3F_Text_GabrielleDefeat, MtPyre_3F_EventScript_RegisterGabrielle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtPyre_3F_EventScript_RematchGabrielle
	msgbox MtPyre_3F_Text_GabriellePostBattle, MSGBOX_DEFAULT
	release
	end

MtPyre_3F_EventScript_RegisterGabrielle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtPyre_3F_Text_GabrielleRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_GABRIELLE_1
	release
	end

MtPyre_3F_EventScript_RematchGabrielle::
	trainerbattle_rematch TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleRematchIntro, MtPyre_3F_Text_GabrielleRematchDefeat
	msgbox MtPyre_3F_Text_GabriellePostRematch, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MtPyre_3F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MtPyre_3F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MtPyre_3F/text_es.inc"
.else
	.include "data/maps/MtPyre_3F/text.inc"
.endif
.endif
.endif
=======
MtPyre_3F_Text_WilliamIntro:
	.string "¡El fresco aire de la montaña\n"
	.string "ha potenciado mis poderes psíquicos!\p"
	.string "Alguien tan pequeño como tú…\n"
	.string "No tienes ni medio movimiento…$"

MtPyre_3F_Text_WilliamDefeat:
	.string "Qué vergüenza más grande…$"

MtPyre_3F_Text_WilliamPostBattle:
	.string "Quizás todavía pueda potenciar\n"
	.string "mis poderes psíquicos una pizquita…$"

MtPyre_3F_Text_KaylaIntro:
	.string "¡Ja, ja, ja, ja!\p"
	.string "Éste no es lugar para críos…\n"
	.string "¡y menos aún para ti!$"

MtPyre_3F_Text_KaylaDefeat:
	.string "Es evidente que he perdido…$"

MtPyre_3F_Text_KaylaPostBattle:
	.string "Está claro que tengo que entrenarme\n"
	.string "mucho más…\p"
	.string "No debo flaquear si quiero alcanzar\n"
	.string "la cima.\p"
	.string "¡Yo puedo!$"

MtPyre_3F_Text_GabrielleIntro:
	.string "¿Por qué has venido hasta aquí?$"

MtPyre_3F_Text_GabrielleDefeat:
	.string "¡Ha sido impresionante!\n"
	.string "Tienes cualidades muy especiales.$"

MtPyre_3F_Text_GabriellePostBattle:
	.string "Los POKéMON que ya no están aquí,\n"
	.string "los POKéMON que te acompañan,\p"
	.string "los POKéMON que conocerás\n"
	.string "en el futuro…\p"
	.string "Todos merecen nuestro cariño.\n"
	.string "No lo olvides nunca.$"

MtPyre_3F_Text_GabrielleRegister:
	.string "Me gustaría volver a ver a tus POKéMON\n"
	.string "cuando hayan crecido un poco…\p"
	.string "Déjame ver tu POKéNAV, por favor.$"

MtPyre_3F_Text_GabrielleRematchIntro:
	.string "Ah, si eres tú…\p"
	.string "¿Has venido a enseñarme cómo\n"
	.string "han crecido tus POKéMON?$"

MtPyre_3F_Text_GabrielleRematchDefeat:
	.string "¡Es impresionante!\n"
	.string "Tienes cualidades muy especiales.$"

MtPyre_3F_Text_GabriellePostRematch:
	.string "Los POKéMON que ya no están aquí,\n"
	.string "los POKéMON que te acompañan,\p"
	.string "los POKéMON que conocerás\n"
	.string "en el futuro…\p"
	.string "Todos merecen nuestro cariño.\n"
	.string "Veo que no lo has olvidado.$"

>>>>>>> Egg/spanish
