MagmaHideout_2F_2R_MapScripts::
	.byte 0

MagmaHideout_2F_2R_EventScript_Grunt15::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_15, MagmaHideout_2F_2R_Text_Grunt15Intro, MagmaHideout_2F_2R_Text_Grunt15Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt15PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_EventScript_Grunt6::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_6, MagmaHideout_2F_2R_Text_Grunt6Intro, MagmaHideout_2F_2R_Text_Grunt6Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt6PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_EventScript_Grunt7::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_7, MagmaHideout_2F_2R_Text_Grunt7Intro, MagmaHideout_2F_2R_Text_Grunt7Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt7PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_2F_2R_EventScript_Grunt8::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_8, MagmaHideout_2F_2R_Text_Grunt8Intro, MagmaHideout_2F_2R_Text_Grunt8Defeat
	msgbox MagmaHideout_2F_2R_Text_Grunt8PostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MagmaHideout_2F_2R/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MagmaHideout_2F_2R/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MagmaHideout_2F_2R/text_es.inc"
.else
	.include "data/maps/MagmaHideout_2F_2R/text.inc"
.endif
.endif
.endif
=======
MagmaHideout_2F_2R_Text_Grunt15Intro:
	.string "¡No es nada personal, pero\n"
	.string "tengo órdenes que cumplir!$"

MagmaHideout_2F_2R_Text_Grunt15Defeat:
	.string "Vale, he perdido, pero…$"

MagmaHideout_2F_2R_Text_Grunt15PostBattle:
	.string "¡Hemos desenterrado lo más grande!\n"
	.string "¡Y la ESFERA AZUL es nuestra!\p"
	.string "Lo único que tiene que hacer el jefe\n"
	.string "es… Jo, jo, jo… ¡Jua, jua, jua!$"

MagmaHideout_2F_2R_Text_Grunt6Intro:
	.string "El calor me machaca. Va a resultar que\n"
	.string "debería haberme unido al EQUIPO AQUA…$"

MagmaHideout_2F_2R_Text_Grunt6Defeat:
	.string "Está claro que el EQUIPO MAGMA\n"
	.string "no es para mí…$"

MagmaHideout_2F_2R_Text_Grunt6PostBattle:
	.string "¿No crees que este sitio ganaría\n"
	.string "puntos si hubiera mar?$"

MagmaHideout_2F_2R_Text_Grunt7Intro:
	.string "A veces hay temblores de tierra.\p"
	.string "¿Será cosa del volcán?\n"
	.string "¿O será GROU…?\p"
	.string "¡Huy!\n"
	.string "¡Casi meto la pata!$"

MagmaHideout_2F_2R_Text_Grunt7Defeat:
	.string "¡Luchas con mucha energía!\n"
	.string "¡Eres como un volcán!$"

MagmaHideout_2F_2R_Text_Grunt7PostBattle:
	.string "Esta vez has ganado de casualidad,\n"
	.string "pero no importa lo más mínimo.\p"
	.string "¡El sueño del EQUIPO MAGMA\n"
	.string "pronto se hará realidad!$"

MagmaHideout_2F_2R_Text_Grunt8Intro:
	.string "Uno del grupo está hecho polvo porque\n"
	.string "ha perdido el SIGNO MAGMA.\p"
	.string "Un momento…\n"
	.string "¿Ahora lo tienes tú?$"

MagmaHideout_2F_2R_Text_Grunt8Defeat:
	.string "No puedo creerlo…$"

MagmaHideout_2F_2R_Text_Grunt8PostBattle:
	.string "No sé por qué tengo la sensación\n"
	.string "de que nuestro plan no va a salir bien…$"

>>>>>>> Egg/spanish
