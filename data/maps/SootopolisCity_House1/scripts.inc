SootopolisCity_House1_MapScripts::
	.byte 0

SootopolisCity_House1_EventScript_BrickBreakBlackBelt::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_BRICK_BREAK, SootopolisCity_House1_EventScript_ReceivedBrickBreak
	msgbox SootopolisCity_House1_Text_DevelopedThisTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_BRICK_BREAK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_BRICK_BREAK
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House1_EventScript_ReceivedBrickBreak::
	msgbox SootopolisCity_House1_Text_ExplainBrickBreak, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House1_EventScript_Kecleon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
	msgbox SootopolisCity_House1_Text_Kecleon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SootopolisCity_House1/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SootopolisCity_House1/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SootopolisCity_House1/text_es.inc"
.else
	.include "data/maps/SootopolisCity_House1/text.inc"
.endif
.endif
.endif
=======
SootopolisCity_House1_Text_DevelopedThisTM:
	.string "Llevo treinta años en ARRECÍPOLIS\n"
	.string "perfeccionando mis habilidades.\p"
	.string "He creado una MT demoledora.\n"
	.string "¡Y ahora quiero que la tengas tú!$"

SootopolisCity_House1_Text_ExplainBrickBreak:
	.string "La MT31 contiene DEMOLICIÓN.\n"
	.string "Es un movimiento tan terrible\l"
	.string "que no tengo palabras para describirlo.$"

SootopolisCity_House1_Text_Kecleon:
	.string "KECLEON: ¡Cleooon!$"

>>>>>>> Egg/spanish
