OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_Man::
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/OldaleTown_House2/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/OldaleTown_House2/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/OldaleTown_House2/text_es.inc"
.else
	.include "data/maps/OldaleTown_House2/text.inc"
.endif
.endif
.endif
=======
OldaleTown_House2_Text_PokemonLevelUp:
	.string "Cuando los POKéMON luchan,\n"
	.string "suben de nivel y se hacen más fuertes.$"

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
	.string "Si los POKéMON que tienes se vuelven\n"
	.string "más fuertes, podrás viajar más lejos.$"

>>>>>>> Egg/spanish
