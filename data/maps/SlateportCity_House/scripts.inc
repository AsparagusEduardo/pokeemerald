SlateportCity_House_MapScripts::
	.byte 0

SlateportCity_House_EventScript_PokefanM::
	msgbox SlateportCity_House_Text_NatureToDoWithStatGains, MSGBOX_NPC
	end

SlateportCity_House_EventScript_Girl::
	msgbox SlateportCity_House_Text_MustBeGoingToBattleTent, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SlateportCity_House/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SlateportCity_House/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SlateportCity_House/text_es.inc"
.else
	.include "data/maps/SlateportCity_House/text.inc"
.endif
.endif
.endif
=======
SlateportCity_House_Text_NatureToDoWithStatGains:
	.string "Mi POKéMON tiene una naturaleza\n"
	.string "ACTIVA.\p"
	.string "Comparado con otros POKéMON,\n"
	.string "su VELOCIDAD es mayor.\p"
	.string "Quizás la naturaleza de los POKéMON\n"
	.string "esté relacionada con cómo mejoran\l"
	.string "algunas habilidades más que otras.$"

SlateportCity_House_Text_MustBeGoingToBattleTent:
	.string "Tú entrenas POKéMON, ¿a que sí?\p"
	.string "Ya que estás en CIUDAD PORTUAL, no\n"
	.string "te puedes perder la TIENDA de BATALLA.$"

>>>>>>> Egg/spanish
