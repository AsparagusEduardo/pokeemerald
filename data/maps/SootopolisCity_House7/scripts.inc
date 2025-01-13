SootopolisCity_House7_MapScripts::
	.byte 0

SootopolisCity_House7_EventScript_OldMan::
	msgbox SootopolisCity_House7_Text_CityFromEruptedVolcano, MSGBOX_NPC
	end

SootopolisCity_House7_EventScript_PokefanF::
	msgbox SootopolisCity_House7_Text_CaveMadeToKeepSomething, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SootopolisCity_House7/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SootopolisCity_House7/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SootopolisCity_House7/text_es.inc"
.else
	.include "data/maps/SootopolisCity_House7/text.inc"
.endif
.endif
.endif
=======
SootopolisCity_House7_Text_CityFromEruptedVolcano:
	.string "Un volcán submarino entró en erupción\n"
	.string "y surgió desde el fondo del mar.\p"
	.string "Una vez emergido, su cráter\n"
	.string "se llenó de agua de lluvia.\p"
	.string "Y así nació ARRECÍPOLIS.$"

SootopolisCity_House7_Text_CaveMadeToKeepSomething:
	.string "Esa cueva que une ARRECÍPOLIS\n"
	.string "con el mundo exterior…\p"
	.string "seguro que fue construida para evitar\n"
	.string "que algo o alguien saliera.\p"
	.string "¿O quizás son imaginaciones mías?$"

>>>>>>> Egg/spanish
