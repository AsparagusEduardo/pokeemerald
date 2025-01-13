DewfordTown_House1_MapScripts::
	.byte 0

DewfordTown_House1_EventScript_Man::
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Woman::
	msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/DewfordTown_House1/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/DewfordTown_House1/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/DewfordTown_House1/text_es.inc"
.else
	.include "data/maps/DewfordTown_House1/text.inc"
.endif
.endif
.endif
=======
DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland:
	.string "La vida en una islita como ésta, en paz\n"
	.string "y armonía con los POKéMON y tu familia,\l"
	.string "da para hablar largo y tendido.$"

DewfordTown_House1_Text_LifeGoesSlowlyOnIsland:
	.string "Yo soy de CIUDAD PORTUAL, pero\n"
	.string "me vine a vivir aquí cuando me casé.\p"
	.string "El tiempo pasa despacio en esta isla,\n"
	.string "pero, tras el estrés de vivir en un gran\l"
	.string "puerto, sienta bien esta tranquilidad.$"

DewfordTown_House1_Text_Zigzagoon:
	.string "ZIGZAGOON: ¡Zigzaaaa!$"
>>>>>>> Egg/spanish

