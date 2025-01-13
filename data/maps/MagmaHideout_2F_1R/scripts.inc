MagmaHideout_2F_1R_MapScripts::
	.byte 0

MagmaHideout_2F_1R_EventScript_Grunt14::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_14, MagmaHideout_2F_1R_Text_Grunt14Intro, MagmaHideout_2F_1R_Text_Grunt14Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt14PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_3, MagmaHideout_2F_1R_Text_Grunt3Intro, MagmaHideout_2F_1R_Text_Grunt3Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_4, MagmaHideout_2F_1R_Text_Grunt4Intro, MagmaHideout_2F_1R_Text_Grunt4Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_1R_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_5, MagmaHideout_2F_1R_Text_Grunt5Intro, MagmaHideout_2F_1R_Text_Grunt5Defeat
	msgbox MagmaHideout_2F_1R_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MagmaHideout_2F_1R/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MagmaHideout_2F_1R/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MagmaHideout_2F_1R/text_es.inc"
.else
	.include "data/maps/MagmaHideout_2F_1R/text.inc"
.endif
.endif
.endif
=======
MagmaHideout_2F_1R_Text_Grunt14Intro:
	.string "¿Y esto? Pero vamos a ver…\p"
	.string "¡Los únicos que pueden estar aquí son\n"
	.string "los miembros del EQUIPO MAGMA!\p"
	.string "Y tú no llevas el uniforme\n"
	.string "del EQUIPO MAGMA…\p"
	.string "¡Has levantado mis sospechas!\n"
	.string "¡Te voy a dar para el pelo!$"

MagmaHideout_2F_1R_Text_Grunt14Defeat:
	.string "Ay, ay, ay…\n"
	.string "Me has machacado el orgullo…$"

MagmaHideout_2F_1R_Text_Grunt14PostBattle:
	.string "Si siempre tienes frío, deberías\n"
	.string "unirte al EQUIPO MAGMA.$"

MagmaHideout_2F_1R_Text_Grunt3Intro:
	.string "¡Los pies quietos!\p"
	.string "¿No esperarás que cierre el pico y\n"
	.string "deje que te pires por tu cara bonita?$"

MagmaHideout_2F_1R_Text_Grunt3Defeat:
	.string "¡Vale, vale, vale!\n"
	.string "¡Me rindo!$"

MagmaHideout_2F_1R_Text_Grunt3PostBattle:
	.string "Quizás hubiera sido mejor hacer\n"
	.string "como que no te había visto…$"

MagmaHideout_2F_1R_Text_Grunt4Intro:
	.string "¡Ajá!\n"
	.string "¡Tú te has colado!$"

MagmaHideout_2F_1R_Text_Grunt4Defeat:
	.string "¡Aaaaah!$"

MagmaHideout_2F_1R_Text_Grunt4PostBattle:
	.string "Perder, ya he perdido.\p"
	.string "¿Qué sentido tiene seguir\n"
	.string "dando vueltas?$"

MagmaHideout_2F_1R_Text_Grunt5Intro:
	.string "¡Vaya, vaya, vaya!\n"
	.string "¡Si se nos ha infiltrado alguien!$"

MagmaHideout_2F_1R_Text_Grunt5Defeat:
	.string "Me has dejado sin palabras…$"

MagmaHideout_2F_1R_Text_Grunt5PostBattle:
	.string "La verdad es que no se me da bien\n"
	.string "luchar…$"

>>>>>>> Egg/spanish
