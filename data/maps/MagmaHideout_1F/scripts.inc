MagmaHideout_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_1F_OnTransition
	.byte 0

MagmaHideout_1F_OnTransition:
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
	end

MagmaHideout_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_1, MagmaHideout_1F_Text_Grunt1Intro, MagmaHideout_1F_Text_Grunt1Defeat
	msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_1F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, MagmaHideout_1F_Text_Grunt2Intro, MagmaHideout_1F_Text_Grunt2Defeat
	msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MagmaHideout_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MagmaHideout_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MagmaHideout_1F/text_es.inc"
.else
	.include "data/maps/MagmaHideout_1F/text.inc"
.endif
.endif
.endif
=======
MagmaHideout_1F_Text_Grunt1Intro:
	.string "Cuando el EQUIPO MAGMA pasa lista,\n"
	.string "asignan las tareas más importantes\l"
	.string "a los que llegan primero.\p"
	.string "Por eso estoy pringando aquí,\n"
	.string "¡porque siempre llego tarde!$"

MagmaHideout_1F_Text_Grunt1Defeat:
	.string "¡También llego tarde a las sesiones\n"
	.string "de entrenamiento!\p"
	.string "Odio tener que reconocerlo,\n"
	.string "pero no valgo para gran cosa…$"

MagmaHideout_1F_Text_Grunt1PostBattle:
	.string "Bueno, voy a intentar esforzarme\n"
	.string "más de ahora en adelante…$"

MagmaHideout_1F_Text_Grunt2Intro:
	.string "Nuestro líder nos dijo que caváramos\n"
	.string "en el MONTE CENIZO, y eso hicimos.\p"
	.string "Cavando, cavando, nos encontramos\n"
	.string "con algo absolutamente alucinante.\p"
	.string "¿Que qué era?\p"
	.string "¡Jua, jua, jua!\n"
	.string "¡Te lo diré si me ganas!$"

MagmaHideout_1F_Text_Grunt2Defeat:
	.string "¡Aaaargh!\n"
	.string "¡Me has ganado!$"

MagmaHideout_1F_Text_Grunt2PostBattle:
	.string "Pues pensándolo bien, no te lo voy a\n"
	.string "decir. Ya lo verás con tus propios ojos.\p"
	.string "No querrás que te fastidie la sorpresa,\n"
	.string "¿no?$"

>>>>>>> Egg/spanish
