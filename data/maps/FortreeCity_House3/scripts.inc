FortreeCity_House3_MapScripts::
	.byte 0

FortreeCity_House3_EventScript_Maniac::
	msgbox FortreeCity_House3_Text_MetStevenHadAmazingPokemon, MSGBOX_NPC
	end

FortreeCity_House3_EventScript_SchoolKidM::
	msgbox FortreeCity_House3_Text_OhYouHavePokedex, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/FortreeCity_House3/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/FortreeCity_House3/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/FortreeCity_House3/text_es.inc"
.else
	.include "data/maps/FortreeCity_House3/text.inc"
.endif
.endif
.endif
=======
FortreeCity_House3_Text_MetStevenHadAmazingPokemon:
	.string "Hablando de POKéDEX, me acabo\n"
	.string "de acordar de algo…\p"
	.string "Conocí a un ENTRENADOR, MÁXIMO se\n"
	.string "llamaba, mientras buscaba rocas raras.\p"
	.string "Jo, jo, jo, llevaba consigo POKéMON\n"
	.string "extraordinarios.\p"
	.string "No eran sólo poco comunes, sino que\n"
	.string "además estaban muy bien entrenados.\p"
	.string "Es posible que este chico sea más\n"
	.string "fuerte que la LÍDER del GIMNASIO\l"
	.string "de este pueblo.$"

FortreeCity_House3_Text_OhYouHavePokedex:
	.string "¿Qué es eso que llevas ahí?\p"
	.string "Aaaah…\p"
	.string "¿Entonces se llama POKéDEX?\n"
	.string "¡Está guapa!$"

>>>>>>> Egg/spanish
