FortreeCity_House5_MapScripts::
	.byte 0

FortreeCity_House5_EventScript_PokefanF::
	msgbox FortreeCity_House5_Text_TreeHousesAreGreat, MSGBOX_NPC
	end

FortreeCity_House5_EventScript_Man::
	msgbox FortreeCity_House5_Text_AdaptedToNature, MSGBOX_NPC
	end

FortreeCity_House5_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox FortreeCity_House5_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/FortreeCity_House5/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/FortreeCity_House5/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/FortreeCity_House5/text_es.inc"
.else
	.include "data/maps/FortreeCity_House5/text.inc"
.endif
.endif
.endif
=======
FortreeCity_House5_Text_TreeHousesAreGreat:
	.string "Las casas de ARBORADA son geniales.\p"
	.string "Éste es el mejor pueblo para vivir con\n"
	.string "los POKéMON…, ¡encima de un árbol!$"

FortreeCity_House5_Text_AdaptedToNature:
	.string "Los POKéMON y la gente han tenido\n"
	.string "que adaptarse para sobrevivir.\p"
	.string "Es normal, ¡la naturaleza\n"
	.string "no va a adaptarse a nosotros!$"

FortreeCity_House5_Text_Zigzagoon:
	.string "ZIGZAGOON: ¡Gungún!$"

>>>>>>> Egg/spanish
