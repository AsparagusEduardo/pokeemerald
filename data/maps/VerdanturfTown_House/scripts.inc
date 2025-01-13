VerdanturfTown_House_MapScripts::
	.byte 0

VerdanturfTown_House_EventScript_Woman1::
	msgbox VerdanturfTown_House_Text_TrainersGatherAtPokemonLeague, MSGBOX_NPC
	end

VerdanturfTown_House_EventScript_Woman2::
	msgbox VerdanturfTown_House_Text_DefeatEliteFourInARow, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/VerdanturfTown_House/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/VerdanturfTown_House/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/VerdanturfTown_House/text_es.inc"
.else
	.include "data/maps/VerdanturfTown_House/text.inc"
.endif
.endif
.endif
=======
VerdanturfTown_House_Text_TrainersGatherAtPokemonLeague:
	.string "Lejos, muy lejos, en CIUDAD COLOSALIA,\n"
	.string "está la LIGA POKéMON.\p"
	.string "Los ENTRENADORES que se reúnen\n"
	.string "allí son espeluznantemente buenos.$"

VerdanturfTown_House_Text_DefeatEliteFourInARow:
	.string "Según las reglas de la LIGA POKéMON,\n"
	.string "tienes que luchar contra los miembros\l"
	.string "del ALTO MANDO uno tras otro, seguidos.\p"
	.string "Si pierdes contra alguno de ellos, debes\n"
	.string "comenzar otra vez desde el primero.$"

>>>>>>> Egg/spanish
