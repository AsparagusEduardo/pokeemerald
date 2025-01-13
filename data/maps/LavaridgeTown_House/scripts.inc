LavaridgeTown_House_MapScripts::
	.byte 0

LavaridgeTown_House_EventScript_OldMan::
	msgbox LavaridgeTown_House_Text_WifeWarmingEggInHotSprings, MSGBOX_NPC
	end

LavaridgeTown_House_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox LavaridgeTown_House_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/LavaridgeTown_House/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/LavaridgeTown_House/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/LavaridgeTown_House/text_es.inc"
.else
	.include "data/maps/LavaridgeTown_House/text.inc"
.endif
.endif
.endif
=======
LavaridgeTown_House_Text_WifeWarmingEggInHotSprings:
	.string "Mi mujer está calentando un HUEVO\n"
	.string "en los baños termales. Eso me ha dicho.\p"
	.string "Resulta que dejó a dos POKéMON en la\n"
	.string "GUARDERÍA… ¡y apareció ese HUEVO!$"

LavaridgeTown_House_Text_Zigzagoon:
	.string "ZIGZAGOON: ¡Zigzaaaa!$"

>>>>>>> Egg/spanish
