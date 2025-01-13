SootopolisCity_House5_MapScripts::
	.byte 0

SootopolisCity_House5_EventScript_Maniac::
	msgbox SootopolisCity_House5_Text_SootopolisMtPyreConnection, MSGBOX_NPC
	end

SootopolisCity_House5_EventScript_Girl::
	msgbox SootopolisCity_House5_Text_BrotherUsedToStudySea, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SootopolisCity_House5/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SootopolisCity_House5/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SootopolisCity_House5/text_es.inc"
.else
	.include "data/maps/SootopolisCity_House5/text.inc"
.endif
.endif
.endif
=======
SootopolisCity_House5_Text_SootopolisMtPyreConnection:
	.string "Parece que hay algún tipo de conexión\n"
	.string "entre ARRECÍPOLIS y el MONTE PÍRICO.\p"
	.string "Estuvimos investigando sobre eso\n"
	.string "en el laboratorio donde trabajaba.$"

SootopolisCity_House5_Text_BrotherUsedToStudySea:
	.string "Mi hermano mayor era un experto\n"
	.string "en temas oceánicos.$"

>>>>>>> Egg/spanish
