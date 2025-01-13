GraniteCave_1F_MapScripts::
	.byte 0

GraniteCave_1F_EventScript_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
	giveitem ITEM_HM_FLASH
	setflag FLAG_RECEIVED_HM_FLASH
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_EventScript_ReceivedFlash::
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/GraniteCave_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/GraniteCave_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/GraniteCave_1F/text_es.inc"
.else
	.include "data/maps/GraniteCave_1F/text.inc"
.endif
.endif
.endif
=======
GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
	.string "Oye, tú.\n"
	.string "Aquí dentro está muy oscuro.\l"
	.string "No va a ser fácil explorar esto.\p"
	.string "Ese tipo que vino antes…\n"
	.string "MÁXIMO se llamaba…\p"
	.string "Él sabía cómo usar DESTELLO, así\n"
	.string "que no ha debido de tener problemas…\p"
	.string "Pero nosotros, los MONTAÑEROS,\n"
	.string "estamos siempre dispuestos a echar\l"
	.string "una mano… ¡o dos!\p"
	.string "Así que toma, es para ti.$"

GraniteCave_1F_Text_ExplainFlash:
	.string "Enseña el movimiento de MO DESTELLO\n"
	.string "a un POKéMON y úsalo.\p"
	.string "Podrás alumbrar incluso las cuevas\n"
	.string "oscuras como boca de lobo.\p"
	.string "Pero, para usarlo, necesitas la MEDALLA\n"
	.string "del GIMNASIO de AZULIZA.$"

>>>>>>> Egg/spanish
