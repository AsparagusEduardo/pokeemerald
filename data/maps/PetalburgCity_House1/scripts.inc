PetalburgCity_House1_MapScripts::
	.byte 0

PetalburgCity_House1_EventScript_Man::
	msgbox PetalburgCity_House1_Text_TravelingIsWonderful, MSGBOX_NPC
	end

PetalburgCity_House1_EventScript_Woman::
	msgbox PetalburgCity_House1_Text_GoOnAdventure, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/PetalburgCity_House1/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/PetalburgCity_House1/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/PetalburgCity_House1/text_es.inc"
.else
	.include "data/maps/PetalburgCity_House1/text.inc"
.endif
.endif
.endif
=======
PetalburgCity_House1_Text_TravelingIsWonderful:
	.string "¡Viajar es maravilloso!\p"
	.string "Cuando era un pimpollo, me recorrí\n"
	.string "el planeta de cabo a rabo…$"

PetalburgCity_House1_Text_GoOnAdventure:
	.string "Ay…\p"
	.string "Ojalá pudiera irme de aventuras\n"
	.string "con algunos POKéMON…\p"
	.string "Atravesar húmedas praderas…\n"
	.string "Escalar rocosas montañas…\p"
	.string "Cruzar el mar embravecido…\n"
	.string "Explorar oscuras cuevas…\p"
	.string "Y, a veces, sentir morriña…\p"
	.string "¡Qué bonito es viajar!$"

>>>>>>> Egg/spanish
