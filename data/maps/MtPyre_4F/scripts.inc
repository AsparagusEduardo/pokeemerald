MtPyre_4F_MapScripts::
	.byte 0

@ Seems like the scripts for the 4F and 5F were swapped

MtPyre_5F_EventScript_Atsushi::
	trainerbattle_single TRAINER_ATSUSHI, MtPyre_5F_Text_AtsushiIntro, MtPyre_5F_Text_AtsushiDefeat
	msgbox MtPyre_5F_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MtPyre_4F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MtPyre_4F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MtPyre_4F/text_es.inc"
.else
	.include "data/maps/MtPyre_4F/text.inc"
.endif
.endif
.endif
=======
MtPyre_5F_Text_AtsushiIntro:
	.string "El espíritu de mi maestro me observa…\n"
	.string "¡Y verá que he mejorado una burrada!$"

MtPyre_5F_Text_AtsushiDefeat:
	.string "El espíritu de mi maestro me observa…\n"
	.string "Y me has dejado hecho un guiñapo…$"

MtPyre_5F_Text_AtsushiPostBattle:
	.string "Debo mejorar para que el espíritu\n"
	.string "de mi maestro pueda descansar en paz…$"

>>>>>>> Egg/spanish
