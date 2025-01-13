MagmaHideout_3F_1R_MapScripts::
	.byte 0

MagmaHideout_3F_1R_EventScript_Grunt9::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_9, MagmaHideout_3F_1R_Text_Grunt9Intro, MagmaHideout_3F_1R_Text_Grunt9Defeat
	msgbox MagmaHideout_3F_1R_Text_Grunt9PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_3F_1R_EventScript_Grunt16::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_16, MagmaHideout_3F_1R_Text_Grunt16Intro, MagmaHideout_3F_1R_Text_Grunt16Defeat
	msgbox MagmaHideout_3F_1R_Text_Grunt16PostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MagmaHideout_3F_1R/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MagmaHideout_3F_1R/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MagmaHideout_3F_1R/text_es.inc"
.else
	.include "data/maps/MagmaHideout_3F_1R/text.inc"
.endif
.endif
.endif
=======
MagmaHideout_3F_1R_Text_Grunt9Intro:
	.string "¿Qué he hecho yo para merecer\n"
	.string "este puesto de guardia?\p"
	.string "¡Tengo las orejas ardiendo!$"

MagmaHideout_3F_1R_Text_Grunt9Defeat:
	.string "El calor me da flojera…$"

MagmaHideout_3F_1R_Text_Grunt9PostBattle:
	.string "¿Te parece raro que llevemos capuchas\n"
	.string "en un volcán lleno de lava como éste?$"

MagmaHideout_3F_1R_Text_Grunt16Intro:
	.string "Nos unimos al EQUIPO MAGMA para ayudar\n"
	.string "a nuestro líder a cumplir su visión.\p"
	.string "Me da igual si eres del EQUIPO AQUA\n"
	.string "o sólo estás de paso por aquí.\p"
	.string "¡Nadie interfiere en nuestros planes\n"
	.string "y se sale con la suya!$"

MagmaHideout_3F_1R_Text_Grunt16Defeat:
	.string "¡Oh, no!\n"
	.string "¡Esto no es de recibo!$"

MagmaHideout_3F_1R_Text_Grunt16PostBattle:
	.string "Escúchame bien.\n"
	.string "¡El EQUIPO MAGMA tiene razón!\p"
	.string "No hagas ni caso al EQUIPO AQUA.\n"
	.string "¡Mienten más que hablan!$"

>>>>>>> Egg/spanish
