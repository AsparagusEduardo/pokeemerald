MagmaHideout_3F_2R_MapScripts::
	.byte 0

MagmaHideout_3F_2R_EventScript_Grunt10::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_10, MagmaHideout_3F_2R_Text_Grunt10Intro, MagmaHideout_3F_2R_Text_Grunt10Defeat
	msgbox MagmaHideout_3F_2R_Text_Grunt10PostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MagmaHideout_3F_2R/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MagmaHideout_3F_2R/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MagmaHideout_3F_2R/text_es.inc"
.else
	.include "data/maps/MagmaHideout_3F_2R/text.inc"
.endif
.endif
.endif
=======
MagmaHideout_3F_2R_Text_Grunt10Intro:
	.string "Comprendo las razones del JEFE,\n"
	.string "pero ¿sabes una cosa?\p"
	.string "Esto de desenterrar POKéMON antiguos\n"
	.string "y birlarle un METEORITO\l"
	.string "a un pobre inocente…\p"
	.string "No sé yo, igual estamos yendo\n"
	.string "demasiado lejos. ¿Tú qué crees?$"

MagmaHideout_3F_2R_Text_Grunt10Defeat:
	.string "Sí, me parece que estamos haciendo\n"
	.string "algo mal.$"

MagmaHideout_3F_2R_Text_Grunt10PostBattle:
	.string "Esta derrota me ha aclarado las ideas.\p"
	.string "La próxima vez que vea al JEFE, le voy\n"
	.string "a pedir explicaciones sobre todo esto.$"

>>>>>>> Egg/spanish
