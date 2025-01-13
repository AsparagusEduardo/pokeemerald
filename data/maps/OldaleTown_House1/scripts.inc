OldaleTown_House1_MapScripts::
	.byte 0

OldaleTown_House1_EventScript_Woman::
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/OldaleTown_House1/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/OldaleTown_House1/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/OldaleTown_House1/text_es.inc"
.else
	.include "data/maps/OldaleTown_House1/text.inc"
.endif
.endif
.endif
=======
OldaleTown_House1_Text_LeftPokemonGoesOutFirst:
	.string "Cuando empieza un combate POKéMON,\n"
	.string "el que está a la izquierda de la lista\l"
	.string "sale a luchar primero.\p"
	.string "Así que, cuando tengas varios POKéMON\n"
	.string "en tu equipo, prueba a cambiar el orden.\p"
	.string "En algunos casos, podría darte ventaja.$"

>>>>>>> Egg/spanish
