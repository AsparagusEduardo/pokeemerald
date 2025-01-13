MtPyre_1F_MapScripts::
	.byte 0

MtPyre_1F_EventScript_CleanseTagWoman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_ReceivedCleanseTag
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
	giveitem ITEM_CLEANSE_TAG
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_CLEANSE_TAG
	release
	end

MtPyre_1F_EventScript_ReceivedCleanseTag::
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
	release
	end

MtPyre_1F_EventScript_PokefanF::
	msgbox MtPyre_1F_Text_ComeToPayRespects, MSGBOX_NPC
	end

MtPyre_1F_EventScript_Man::
	msgbox MtPyre_1F_Text_RestingPlaceOfZigzagoon, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MtPyre_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MtPyre_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MtPyre_1F/text_es.inc"
.else
	.include "data/maps/MtPyre_1F/text.inc"
.endif
.endif
.endif
=======
MtPyre_1F_Text_TakeThisForYourOwnGood:
	.string "En el MONTE PÍRICO te puedes encontrar\n"
	.string "con todo tipo de criaturas…\p"
	.string "Nunca se sabe qué puede pasar,\n"
	.string "así que toma esto por tu bien.$"

MtPyre_1F_Text_ExplainCleanseTag:
	.string "Dale este AMULETO a algún\n"
	.string "POKéMON.\p"
	.string "Te ayudará a mantener alejados\n"
	.string "a los POKéMON salvajes.$"

MtPyre_1F_Text_ComeToPayRespects:
	.string "¿Has venido a presentar tus respetos\n"
	.string "a las almas de los POKéMON que ya\l"
	.string "no están con nosotros?\p"
	.string "Recuerda que has de cuidar de tus\n"
	.string "POKéMON con mucho cariño.$"

MtPyre_1F_Text_RestingPlaceOfZigzagoon:
	.string "Aquí descansa en paz mi ZIGZAGOON.\n"
	.string "Yo lo quería tanto…$"

>>>>>>> Egg/spanish
