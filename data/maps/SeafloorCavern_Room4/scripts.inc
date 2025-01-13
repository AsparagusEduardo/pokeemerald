SeafloorCavern_Room4_MapScripts::
	.byte 0

SeafloorCavern_Room4_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, SeafloorCavern_Room4_Text_Grunt3Intro, SeafloorCavern_Room4_Text_Grunt3Defeat
	msgbox SeafloorCavern_Room4_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room4_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, SeafloorCavern_Room4_Text_Grunt4Intro, SeafloorCavern_Room4_Text_Grunt4Defeat
	msgbox SeafloorCavern_Room4_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SeafloorCavern_Room4/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SeafloorCavern_Room4/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SeafloorCavern_Room4/text_es.inc"
.else
	.include "data/maps/SeafloorCavern_Room4/text.inc"
.endif
.endif
.endif
=======
SeafloorCavern_Room4_Text_Grunt3Intro:
	.string "¿Quién eres?\n"
	.string "¿De dónde vienes?$"

SeafloorCavern_Room4_Text_Grunt3Defeat:
	.string "¿He perdido?$"

SeafloorCavern_Room4_Text_Grunt3PostBattle:
	.string "¡No consigo salir de aquí!\p"
	.string "Me estoy empezando a poner nervioso…$"

SeafloorCavern_Room4_Text_Grunt4Intro:
	.string "¿Quién eres?\n"
	.string "¿Adónde te crees que vas?$"

SeafloorCavern_Room4_Text_Grunt4Defeat:
	.string "¡Me has ganado!$"

SeafloorCavern_Room4_Text_Grunt4PostBattle:
	.string "¡Mi colega se olvidó el mapa\n"
	.string "en ese submarino!\p"
	.string "¡Hay que ser inútil!$"

>>>>>>> Egg/spanish
