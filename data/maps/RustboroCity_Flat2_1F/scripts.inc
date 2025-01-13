RustboroCity_Flat2_1F_MapScripts::
	.byte 0

RustboroCity_Flat2_1F_EventScript_OldWoman::
	msgbox RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere, MSGBOX_NPC
	end

RustboroCity_Flat2_1F_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox RustboroCity_Flat2_1F_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/RustboroCity_Flat2_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/RustboroCity_Flat2_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/RustboroCity_Flat2_1F/text_es.inc"
.else
	.include "data/maps/RustboroCity_Flat2_1F/text.inc"
.endif
.endif
.endif
=======
RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere:
	.string "Los empleados de DEVON S.A.\n"
	.string "viven en este edificio.$"

RustboroCity_Flat2_1F_Text_Skitty:
	.string "SKITTY: ¡Skitiiii!$"

>>>>>>> Egg/spanish
