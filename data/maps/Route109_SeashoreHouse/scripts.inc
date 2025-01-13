Route109_SeashoreHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_SeashoreHouse_OnTransition
	.byte 0

Route109_SeashoreHouse_OnTransition:
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
	end

Route109_SeashoreHouse_EventScript_Owner::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_6_SODA_POP, Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop
	goto_if_set FLAG_DEFEATED_SEASHORE_HOUSE, Route109_SeashoreHouse_EventScript_DefeatedTrainers
	goto_if_set FLAG_TEMP_2, Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction
	msgbox Route109_SeashoreHouse_Text_SeashoreHouseIntro, MSGBOX_DEFAULT
	setflag FLAG_TEMP_2
	release
	end

Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction::
	msgbox Route109_SeashoreHouse_Text_ShowMeSomeHotMatches, MSGBOX_DEFAULT
	release
	end

Route109_SeashoreHouse_EventScript_DefeatedTrainers::
	msgbox Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles, MSGBOX_DEFAULT
	giveitem ITEM_SODA_POP, 6
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_BagFull
	setflag FLAG_RECEIVED_6_SODA_POP
	release
	end

Route109_SeashoreHouse_EventScript_BagFull::
	msgbox Route109_SeashoreHouse_Text_BagFull, MSGBOX_DEFAULT
	release
	end

Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop::
	showmoneybox 0, 0
	msgbox Route109_SeashoreHouse_Text_WantToBuySodaPop, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route109_SeashoreHouse_EventScript_BuySodaPop
	msgbox Route109_SeashoreHouse_Text_ThatsTooBad, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_BuySodaPop::
	checkmoney 300
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughMoney
	checkitemspace ITEM_SODA_POP
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughSpace
	msgbox Route109_SeashoreHouse_Text_HereYouGo, MSGBOX_DEFAULT
	removemoney 300
	updatemoneybox
	giveitem ITEM_SODA_POP
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_NotEnoughMoney::
	msgbox Route109_SeashoreHouse_Text_NotEnoughMoney, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_NotEnoughSpace::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_Dwayne::
	trainerbattle_single TRAINER_DWAYNE, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_Johanna::
	trainerbattle_single TRAINER_JOHANNA, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_Simon::
	trainerbattle_single TRAINER_SIMON, Route109_SeashoreHouse_Text_SimonIntro, Route109_SeashoreHouse_Text_SimonDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
	msgbox Route109_SeashoreHouse_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
	goto_if_not_defeated TRAINER_DWAYNE, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	goto_if_not_defeated TRAINER_JOHANNA, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	goto_if_not_defeated TRAINER_SIMON, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	setflag FLAG_DEFEATED_SEASHORE_HOUSE
	release
	end

Route109_SeashoreHouse_EventScript_TrainersNotCompleted::
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route109_SeashoreHouse/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route109_SeashoreHouse/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route109_SeashoreHouse/text_es.inc"
.else
	.include "data/maps/Route109_SeashoreHouse/text.inc"
.endif
.endif
.endif
=======
Route109_SeashoreHouse_Text_SeashoreHouseIntro:
	.string "Soy el dueño de la CASA de la PLAYA,\n"
	.string "pero me puedes llamar SR. MARINO.\p"
	.string "Lo que más me gusta del mundo es ver\n"
	.string "combates POKéMON bien candentes.\p"
	.string "¡A ver si tú también peleas con pasión!\p"
	.string "Si logras derrotar a todos los\n"
	.string "ENTRENADORES, tendrás una recompensa.$"

Route109_SeashoreHouse_Text_ShowMeSomeHotMatches:
	.string "¡Me encantan los combates al rojo vivo!\p"
	.string "Tengo esta CASA de la PLAYA sólo\n"
	.string "y exclusivamente por eso.$"

Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles:
	.string "¡Eres como un volcán en erupción!\n"
	.string "¡Esos combates han sido tremendos!\l"
	.string "¡Estoy la mar de satisfecho!\p"
	.string "Qué bien que te haya podido ver\n"
	.string "en racha. Toma esto como regalo.\p"
	.string "¡Son seis botellas de REFRESCO!$"

Route109_SeashoreHouse_Text_BagFull:
	.string "Eh, tienes la MOCHILA que va a estallar.\n"
	.string "Te las voy a guardar mientras…$"

Route109_SeashoreHouse_Text_WantToBuySodaPop:
	.string "¿Quieres comprar un REFRESCO?\n"
	.string "¡A los POKéMON les chifla!\p"
	.string "¡Sólo son 300¥ la botella!\n"
	.string "¡Está tirado!$"

Route109_SeashoreHouse_Text_HereYouGo:
	.string "¡Aquí tienes!$"

Route109_SeashoreHouse_Text_NotEnoughMoney:
	.string "Oye, estás sin blanca…$"

Route109_SeashoreHouse_Text_ThatsTooBad:
	.string "¿No quieres?\n"
	.string "¡Tú te lo pierdes!$"

Route109_SeashoreHouse_Text_DwayneIntro:
	.string "¡Si buscas combates en alta mar, yo\n"
	.string "soy el ENTRENADOR adecuado, grumete!$"

Route109_SeashoreHouse_Text_DwayneDefeated:
	.string "¡Éste ha sido un señor combate!\n"
	.string "¡Acepto la derrota, grumete!$"

Route109_SeashoreHouse_Text_DwaynePostBattle:
	.string "Ir a CIUDAD PORTUAL es sinónimo\n"
	.string "de combates al rojo vivo y REFRESCOS\l"
	.string "helados. ¡Todo un contraste!$"

Route109_SeashoreHouse_Text_JohannaIntro:
	.string "Las peleas aburridas no valen la pena.\p"
	.string "Los combates feroces sí que hacen\n"
	.string "mejorar a ENTRENADORES y POKéMON.$"

Route109_SeashoreHouse_Text_JohannaDefeated:
	.string "¡Más feroz que el lobo de Caperucita!$"

Route109_SeashoreHouse_Text_JohannaPostBattle:
	.string "Bueno, tengo una sed que me muero.\n"
	.string "Voy a comprarme un REFRESCO.$"

Route109_SeashoreHouse_Text_SimonIntro:
	.string "Te voy a demostrar que mis POKéMON\n"
	.string "no tienen rival. ¡Luego no te quejes!$"

Route109_SeashoreHouse_Text_SimonDefeated:
	.string "He perdido, pero no me quejo…$"

Route109_SeashoreHouse_Text_SimonPostBattle:
	.string "Si alguno de mis POKéMON supiera\n"
	.string "el movimiento que te transporta por\l"
	.string "el agua, podría olvidarme del flotador…$"

>>>>>>> Egg/spanish
