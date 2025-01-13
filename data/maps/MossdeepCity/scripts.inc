.set LOCALID_GRUNT_1, 10
.set LOCALID_GRUNT_2, 11
.set LOCALID_GRUNT_3, 12
.set LOCALID_GRUNT_4, 13
.set LOCALID_MAXIE, 14
.set LOCALID_SCOTT, 16

MossdeepCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
	.byte 0

MossdeepCity_OnTransition:
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

MossdeepCity_EventScript_PokefanF::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_PokefanFMagmaGone::
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_Sailor::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_SailorMagmaGone::
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_NinjaBoy::
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
	end

MossdeepCity_EventScript_ExpertM::
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
	end

MossdeepCity_EventScript_Girl::
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
	end

MossdeepCity_EventScript_Woman::
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
	end

MossdeepCity_EventScript_WhiteRock::
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
	end

MossdeepCity_EventScript_GymSign::
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_CitySign::
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_SpaceCenterSign::
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_VisitedMossdeep::
	setflag FLAG_VISITED_MOSSDEEP_CITY
	setvar VAR_TEMP_1, 1
	end

MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
	lockall
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
	waitmovement 0
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
	waitmovement 0
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
	waitmovement 0
	removeobject LOCALID_MAXIE
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	removeobject LOCALID_GRUNT_4
	delay 30
	setvar VAR_MOSSDEEP_CITY_STATE, 2
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	releaseall
	end

MossdeepCity_Movement_MaxieGestureToSpaceCenter:
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	step_end

MossdeepCity_Movement_GruntFaceSpaceCenter:
	face_right
	delay_16
	delay_16
	delay_16
	step_end

MossdeepCity_Movement_MaxieEnterSpaceCenter:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt1EnterSpaceCenter:
	delay_16
	delay_8
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt2EnterSpaceCenter:
	delay_16
	delay_8
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt3EnterSpaceCenter:
	delay_16
	delay_8
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt4EnterSpaceCenter:
	delay_16
	delay_8
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_EventScript_Man::
	lock
	faceplayer
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MossdeepCity_EventScript_KingsRockBoy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
	giveitem ITEM_KINGS_ROCK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_KINGS_ROCK
	release
	end

MossdeepCity_EventScript_ReceivedKingsRock::
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_DeclineKingsRock::
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_BlackBelt::
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
	end

MossdeepCity_EventScript_Scott::
	lock
	faceplayer
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
	addvar VAR_SCOTT_STATE, 1
	removeobject LOCALID_SCOTT
	release
	end

MossdeepCity_EventScript_ScottExitNorth::
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitNorth
	waitmovement 0
	return

MossdeepCity_EventScript_ScottExitEast::
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitEast
	waitmovement 0
	return

MossdeepCity_Movement_PlayerWatchScottExit:
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

MossdeepCity_Movement_ScottExitNorth:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MossdeepCity_Movement_ScottExitEast:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MossdeepCity/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MossdeepCity/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MossdeepCity/text_es.inc"
.else
	.include "data/maps/MossdeepCity/text.inc"
.endif
.endif
.endif
=======
MossdeepCity_Text_WantKingsRockStevenGaveMe:
	.string "MÁXIMO me ha dado esto,\n"
	.string "pero no sé para qué sirve.\p"
	.string "Creo que se llama ROCA del REY.\n"
	.string "¿La quieres?$"

MossdeepCity_Text_YouCanKeepIt:
	.string "¿Y para qué la quieres?\n"
	.string "Mira que la gente es rara…\p"
	.string "Bueno, quédatela, pero no\n"
	.string "se lo digas a MÁXIMO.$"

MossdeepCity_Text_StevensHouseOverThere:
	.string "¡La casa de MÁXIMO está justo ahí!$"

MossdeepCity_Text_WhatToDoWithWeirdRock:
	.string "¡Justamente eso digo yo! ¿Qué se\n"
	.string "puede hacer con una roca rara?$"

MossdeepCity_Text_WailmerWatching:
	.string "Cerca de ALGARIA, puedes ver\n"
	.string "WAILMER salvajes.\p"
	.string "El sitio en cuestión se llama…\n"
	.string "¿Cómo se llama…?\p"
	.string "Puesto…, puesto de algo…\p"
	.string "¡Puesto de observación de WAILMER!$"

MossdeepCity_Text_SpaceCenterReceivedLetter:
	.string "El CENTRO ESPACIAL de esta isla\n"
	.string "ha estado lanzando cohetes enormes.\p"
	.string "Es que andan bastante alborotados\n"
	.string "a causa de una carta que han recibido.$"

MossdeepCity_Text_SpaceCenterLaunchingRockets:
	.string "El CENTRO ESPACIAL de esta isla\n"
	.string "ha estado lanzando cohetes enormes.$"

MossdeepCity_Text_MossdeepTargetedByMagma:
	.string "Un MARINERO me ha dicho que el EQUIPO\n"
	.string "AQUA la ha montado gorda en CALAGUA.\p"
	.string "¡También he oído que alguien\n"
	.string "les ha dado una buena paliza!\p"
	.string "Pero ahora CIUDAD ALGARIA ha pasado\n"
	.string "a ser un objetivo del EQUIPO MAGMA.\p"
	.string "Si quieres saber qué están tramando,\n"
	.string "ve a visitar el CENTRO ESPACIAL.$"

MossdeepCity_Text_FeelReliefOnLand:
	.string "Soy un MARINERO, así que el mar\n"
	.string "es muy importante para mí.\p"
	.string "Pero cuando vuelvo a tierra después\n"
	.string "de un viaje, respiro tranquilo, ¿sabes?$"

MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
	.string "Qué bonito sería…\p"
	.string "si el mundo entero estuviera cubierto\n"
	.string "de flores y plantas como las de aquí.$"

MossdeepCity_Text_LifeNeedsSeaToLive:
	.string "Todo ser vivo necesita el mar,\n"
	.string "aunque viva en la tierra.\p"
	.string "Todo ser vivo, con el tiempo, se\n"
	.string "convierte en polvo y vuelve a la tierra.\p"
	.string "El mar y la tierra están conectados…,\p"
	.string "basta mirar la costa para darse cuenta.$"

MossdeepCity_Text_SurfExhilarating:
	.string "Un viaje en barco es divertido.\p"
	.string "Pero cruzar el mar con un POKéMON\n"
	.string "que hace SURF…\p"
	.string "¡Eso sí que es un puntazo!\n"
	.string "¿A que sí?$"

MossdeepCity_Text_SpecialSpaceCenterRock:
	.string "Esta roca tiene un significado especial\n"
	.string "para la gente del CENTRO ESPACIAL.\p"
	.string "Es como un talismán para que los\n"
	.string "cohetes despeguen sin problemas.\p"
	.string "Y tú, cuando formulas un deseo,\n"
	.string "¿usas algún amuleto?\p"
	.string "Yo tengo una frase mágica…\n"
	.string "¡y siempre funciona!$"

MossdeepCity_Text_ItsAWhiteRock:
	.string "Es una roca blanca.$"

MossdeepCity_Text_GymSign:
	.string "GIMNASIO POKéMON de CIUDAD ALGARIA\n"
	.string "LÍDERES: LETI Y VITO\p"
	.string "“¡Una combinación mística!”$"

MossdeepCity_Text_CitySign:
	.string "CIUDAD ALGARIA\p"
	.string "“Nuestra divisa: ¡quiere\n"
	.string "a los POKéMON!”$"

MossdeepCity_Text_SpaceCenterSign:
	.string "CENTRO ESPACIAL de ALGARIA\p"
	.string "“¡A un paso del espacio exterior!”$"

MossdeepCity_Text_ScottSomethingWrongWithTown:
	.string "TRETO: {PLAYER}{KUN}, ¿cómo estás?\n"
	.string "¡Yo estoy estupendamente!\p"
	.string "He oído que los LÍDERES de GIMNASIO\n"
	.string "de CIUDAD ALGARIA son bastante\l"
	.string "fuertes, así que quiero comprobarlo.\p"
	.string "Pero hay algo en esta ciudad\n"
	.string "que no me da buena espina.\p"
	.string "Todos hablan de una misteriosa carta\n"
	.string "de advertencia y del CENTRO ESPACIAL…\p"
	.string "Aunque yo creo que todo eso\n"
	.string "a mí no me atañe.$"

MossdeepCity_Text_SootopolisNewGymLeader:
	.string "Aaah… Qué bien se está con\n"
	.string "el mar acariciándote los pies…\p"
	.string "Hablando de olas, ¿conoces la\n"
	.string "ciudad-isla de ARRECÍPOLIS?\p"
	.string "Creo que el GIMNASIO de allí\n"
	.string "tiene un nuevo LÍDER.\p"
	.string "Al parecer, el nuevo LÍDER fue\n"
	.string "el mentor de PLUBIO en su día.$"

>>>>>>> Egg/spanish
