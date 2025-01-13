DewfordTown_House2_MapScripts::
	.byte 0

DewfordTown_House2_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SILK_SCARF, DewfordTown_House2_EventScript_ExplainSilkScarf
	msgbox DewfordTown_House2_Text_WantYouToHaveSilkScarf, MSGBOX_DEFAULT
	giveitem ITEM_SILK_SCARF
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_House2_EventScript_NoRoomForScarf
	setflag FLAG_RECEIVED_SILK_SCARF
	release
	end

DewfordTown_House2_EventScript_NoRoomForScarf::
	msgbox DewfordTown_House2_Text_NoRoom, MSGBOX_DEFAULT
	release
	end

DewfordTown_House2_EventScript_ExplainSilkScarf::
	msgbox DewfordTown_House2_Text_ExplainSilkScarf, MSGBOX_DEFAULT
	release
	end

DewfordTown_House2_EventScript_Boy::
	msgbox DewfordTown_House2_Text_BrawlySoCool, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/DewfordTown_House2/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/DewfordTown_House2/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/DewfordTown_House2/text_es.inc"
.else
	.include "data/maps/DewfordTown_House2/text.inc"
.endif
.endif
.endif
=======
DewfordTown_House2_Text_WantYouToHaveSilkScarf:
	.string "¡Recrea la vista en esto!\p"
	.string "Es un PAÑUELO de SEDA.\n"
	.string "Es lo último de lo último.\l"
	.string "Una preciosidad.\p"
	.string "Ajá, ya veo que te gusta…\n"
	.string "¡Te brillan los ojos y todo!\p"
	.string "¡Me has caído bien!\n"
	.string "¡Toma, te lo voy a dar!$"

DewfordTown_House2_Text_NoRoom:
	.string "Anda, ¿no tienes sitio?\p"
	.string "Escúchame bien: todo el mundo tendría\n"
	.string "que tener un PAÑUELO como éste.\l"
	.string "¡Yo daría lo que fuera por tenerlo!$"

DewfordTown_House2_Text_ExplainSilkScarf:
	.string "El PAÑUELO de SEDA aumenta la potencia\n"
	.string "de los movimientos de tipo NORMAL.\p"
	.string "Es un PAÑUELO maravilloso que sienta\n"
	.string "de miedo a casi cualquier POKéMON.$"

DewfordTown_House2_Text_BrawlySoCool:
	.string "¡Guau! ¿Has cruzado todo el mar\n"
	.string "para venir a AZULIZA?\p"
	.string "¿Has venido aquí porque has oído\n"
	.string "hablar de MARCIAL?\p"
	.string "Es tan guay…\n"
	.string "Todos lo veneran.$"
>>>>>>> Egg/spanish

