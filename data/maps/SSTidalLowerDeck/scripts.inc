SSTidalLowerDeck_MapScripts::
	.byte 0

SSTidalLowerDeck_EventScript_Phillip::
	trainerbattle_single TRAINER_PHILLIP, SSTidalLowerDeck_Text_PhillipIntro, SSTidalLowerDeck_Text_PhillipDefeat
	msgbox SSTidalLowerDeck_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalLowerDeck_EventScript_Leonard::
	trainerbattle_single TRAINER_LEONARD, SSTidalLowerDeck_Text_LeonardIntro, SSTidalLowerDeck_Text_LeonardDefeat
	msgbox SSTidalLowerDeck_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SSTidalLowerDeck/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SSTidalLowerDeck/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SSTidalLowerDeck/text_es.inc"
.else
	.include "data/maps/SSTidalLowerDeck/text.inc"
.endif
.endif
.endif
=======
SSTidalLowerDeck_Text_PhillipIntro:
	.string "¡Aaaaargh! ¡Estoy hasta las narices\n"
	.string "de no acabar nunca de limpiar esto!\p"
	.string "¡Vamos a luchar para desfogarme!$"

SSTidalLowerDeck_Text_PhillipDefeat:
	.string "Je, je… Pues he perdido…$"

SSTidalLowerDeck_Text_PhillipPostBattle:
	.string "¡Somos los HERMANOS FREGONA!\p"
	.string "El mayor echa jabón en el suelo\n"
	.string "y el joven fregotea por todas partes.$"

SSTidalLowerDeck_Text_LeonardIntro:
	.string "Éste es el nivel inferior del casco.\n"
	.string "Aquí hay un montón de sitio.\l"
	.string "Se puede luchar sin agobios…$"

SSTidalLowerDeck_Text_LeonardDefeat:
	.string "Je, je… Pues he perdido…$"

SSTidalLowerDeck_Text_LeonardPostBattle:
	.string "¡Somos los HERMANOS FREGONA!\p"
	.string "El mayor echa jabón en el suelo\n"
	.string "y el joven fregotea por todas partes.$"

>>>>>>> Egg/spanish
