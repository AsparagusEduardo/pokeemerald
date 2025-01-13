PacifidlogTown_House4_MapScripts::
	.byte 0

PacifidlogTown_House4_EventScript_LittleGirl::
	msgbox PacifidlogTown_House4_Text_SkyPokemon, MSGBOX_NPC
	end

PacifidlogTown_House4_EventScript_Woman::
	msgbox PacifidlogTown_House4_Text_PeopleSawHighFlyingPokemon, MSGBOX_NPC
	end

PacifidlogTown_House4_EventScript_Boy::
	lock
	faceplayer
	msgbox PacifidlogTown_House4_Text_WhereDidYouComeFrom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PacifidlogTown_House4_EventScript_Yes
	goto_if_eq VAR_RESULT, NO, PacifidlogTown_House4_EventScript_No
	end

PacifidlogTown_House4_EventScript_Yes::
	msgbox PacifidlogTown_House4_Text_YesTown, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House4_EventScript_No::
	msgbox PacifidlogTown_House4_Text_YouHaveToComeFromSomewhere, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/PacifidlogTown_House4/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/PacifidlogTown_House4/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/PacifidlogTown_House4/text_es.inc"
.else
	.include "data/maps/PacifidlogTown_House4/text.inc"
.endif
.endif
.endif
=======
PacifidlogTown_House4_Text_PeopleSawHighFlyingPokemon:
	.string "La gente dice que han visto un POKéMON\n"
	.string "de tipo VOLADOR sobre HOENN.\p"
	.string "Dicen que no para de dar vueltas…\n"
	.string "¿No necesita descansar nunca?$"

PacifidlogTown_House4_Text_SkyPokemon:
	.string "¡Hay un POKéMON en el cielo!\n"
	.string "¡Hay un POKéMON en el cielo!$"

PacifidlogTown_House4_Text_WhereDidYouComeFrom:
	.string "¿De dónde vienes?$"

PacifidlogTown_House4_Text_YesTown:
	.string "¿Ah, sí?\n"
	.string "¿Del PUEBLO SÍ?\p"
	.string "Qué nombre tan raro para un pueblo…$"

PacifidlogTown_House4_Text_YouHaveToComeFromSomewhere:
	.string "¿De NO? ¿No qué? No entiendo nada…\n"
	.string "Tendrás que venir de algún sitio, ¿no?\p"
	.string "A ver… No irás a meterme el rollo de que\n"
	.string "naciste en el fondo del mar, matarile…$"

>>>>>>> Egg/spanish
