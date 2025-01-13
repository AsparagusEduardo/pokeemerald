SootopolisCity_House3_MapScripts::
	.byte 0

SootopolisCity_House3_EventScript_Woman::
	lock
	faceplayer
	msgbox SootopolisCity_House3_Text_JuanHasManyFansDoYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SootopolisCity_House3_EventScript_HaveFans
	msgbox SootopolisCity_House3_Text_LonesomeTryWorkingHarder, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House3_EventScript_HaveFans::
	msgbox SootopolisCity_House3_Text_YouMustBePrettyStrong, MSGBOX_DEFAULT
	release
	end

SootopolisCity_House3_EventScript_Girl::
	msgbox SootopolisCity_House3_Text_TrainerFanClubWasWild, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SootopolisCity_House3/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SootopolisCity_House3/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SootopolisCity_House3/text_es.inc"
.else
	.include "data/maps/SootopolisCity_House3/text.inc"
.endif
.endif
.endif
=======
SootopolisCity_House3_Text_JuanHasManyFansDoYou:
	.string "Tú entrenas POKéMON, ¿verdad?\p"
	.string "GALANO, de ARRECÍPOLIS, tiene muchos\n"
	.string "fans. ¡Más que su alumno PLUBIO!\p"
	.string "¿Y tú? ¿Tienes alguno?$"

SootopolisCity_House3_Text_YouMustBePrettyStrong:
	.string "Vaya, pues entonces debes de ser\n"
	.string "tremendamente fuerte…$"

SootopolisCity_House3_Text_LonesomeTryWorkingHarder:
	.string "Oh, qué pena… Todos necesitamos\n"
	.string "que alguien nos apoye…\p"
	.string "Pero, si entrenas mucho, seguro\n"
	.string "que consigues algún fan sólo para ti.$"

SootopolisCity_House3_Text_TrainerFanClubWasWild:
	.string "Muchos fans vienen incluso desde\n"
	.string "más allá de HOENN.\p"
	.string "Yo me lo pasé pipa cuando fui\n"
	.string "al CLUB de FANS de ENTRENADORES\l"
	.string "que hay en CALAGUA.$"

>>>>>>> Egg/spanish
