PacifidlogTown_House1_MapScripts::
	.byte 0

PacifidlogTown_House1_EventScript_Man::
	msgbox PacifidlogTown_House1_Text_RegiStory, MSGBOX_NPC
	end

PacifidlogTown_House1_EventScript_Woman::
	msgbox PacifidlogTown_House1_Text_SixDotsOpenThreeDoors, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/PacifidlogTown_House1/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/PacifidlogTown_House1/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/PacifidlogTown_House1/text_es.inc"
.else
	.include "data/maps/PacifidlogTown_House1/text.inc"
.endif
.endif
.endif
=======
PacifidlogTown_House1_Text_RegiStory:
	.string "En la región de HOENN, hay tres\n"
	.string "POKéMON que representan el poder\l"
	.string "de la roca, el hielo y el acero.\p"
	.string "Cada uno de ellos se esconde\n"
	.string "en lo más profundo de una cueva.\p"
	.string "Ésa es la historia que me contaban\n"
	.string "cuando era pequeñito.$"

PacifidlogTown_House1_Text_SixDotsOpenThreeDoors:
	.string "“Seis puntos abren tres puertas.”\p"
	.string "Es lo que repetía mi abuelo, pero no\n"
	.string "tengo ni idea de qué quería decir…$"

>>>>>>> Egg/spanish
