Route119_House_MapScripts::
	.byte 0

Route119_House_EventScript_Woman::
	msgbox Route119_House_Text_RumorAboutCaveOfOrigin, MSGBOX_NPC
	end

Route119_House_EventScript_Wingull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
	msgbox Route119_House_Text_Wingull, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route119_House/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route119_House/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route119_House/text_es.inc"
.else
	.include "data/maps/Route119_House/text.inc"
.endif
.endif
.endif
=======
Route119_House_Text_RumorAboutCaveOfOrigin:
	.string "He oído hablar de una cueva llamada\n"
	.string "CUEVA ANCESTRAL.\p"
	.string "Se rumorea que allí resucitan los\n"
	.string "espíritus de los POKéMON que han\l"
	.string "partido. ¿Será verdad…?$"

Route119_House_Text_Wingull:
	.string "WINGULL: ¿Wingulu?$"

>>>>>>> Egg/spanish
