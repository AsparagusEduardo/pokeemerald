RustboroCity_House2_MapScripts::
	.byte 0

RustboroCity_House2_EventScript_PokefanF::
	msgbox RustboroCity_House2_Text_TrainerSchoolExcellent, MSGBOX_NPC
	end

RustboroCity_House2_EventScript_LittleGirl::
	msgbox RustboroCity_House2_Text_RoxanneKnowsALot, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/RustboroCity_House2/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/RustboroCity_House2/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/RustboroCity_House2/text_es.inc"
.else
	.include "data/maps/RustboroCity_House2/text.inc"
.endif
.endif
.endif
=======
RustboroCity_House2_Text_TrainerSchoolExcellent:
	.string "La ESCUELA de ENTRENADORES\n"
	.string "es excelente.\p"
	.string "Si estudias allí, es probable que un día\n"
	.string "llegues a ser LÍDER de GIMNASIO.$"

RustboroCity_House2_Text_RoxanneKnowsALot:
	.string "PETRA, la LÍDER del GIMNASIO,\n"
	.string "sabe un montón sobre los POKéMON.\p"
	.string "¡Y es muy fuerte!$"

>>>>>>> Egg/spanish
