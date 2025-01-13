.set LOCALID_DEVON_EMPLOYEE, 2

RustboroCity_DevonCorp_3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_OnFrame
	.byte 0

RustboroCity_DevonCorp_3F_OnTransition:
	call_if_eq VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos
	end

RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos::
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 3, 2
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
	return

RustboroCity_DevonCorp_3F_OnWarp:
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast
	.2byte 0

RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	end

RustboroCity_DevonCorp_3F_OnFrame:
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
	.2byte 0

RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
	lockall
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen
	waitmovement 0
	delay 80
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer
	waitmovement 0
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_FOLLOW_ME, FALSE
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident
	waitmovement 0
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
	closemessage
	fadedefaultbgm
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk
	waitmovement 0
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
	giveitem ITEM_LETTER
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
	waitfanfare
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare, MSGBOX_DEFAULT
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setvar VAR_BRINEY_LOCATION, 1
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
	setvar VAR_DEVON_CORP_3F_STATE, 1
	setvar VAR_RUSTBORO_CITY_STATE, 6
	releaseall
	end

RustboroCity_DevonCorp_3F_Movement_Unused:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_left
	step_end

RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_left
	step_end

RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
	delay_16
	walk_in_place_faster_down
	step_end

RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
	delay_16
	delay_16
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

RustboroCity_DevonCorp_3F_EventScript_MrStone::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_GiveExpShare
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_DevonCorp_3F_EventScript_GiveExpShare::
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_EXP_SHARE
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor::
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_DevonCorp_3F_EventScript_Employee::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls::
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/RustboroCity_DevonCorp_3F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/RustboroCity_DevonCorp_3F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/RustboroCity_DevonCorp_3F/text_es.inc"
.else
	.include "data/maps/RustboroCity_DevonCorp_3F/text.inc"
.endif
.endif
.endif
=======
RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor:
	.string "Soy el SR. PEÑAS, el PRESIDENTE\n"
	.string "de DEVON S.A.\p"
	.string "¿Puedo hablar contigo un segundo?\p"
	.string "Nos has salvado no sólo una vez,\n"
	.string "¡sino dos veces!\p"
	.string "Eres una persona asombrosa…\n"
	.string "y quisiera pedirte un favor.\p"
	.string "Tengo entendido que vas a llevar\n"
	.string "un paquete a los ASTILLEROS\l"
	.string "que hay en CIUDAD PORTUAL.\p"
	.string "¿Podrías parar de camino un\n"
	.string "segundo en PUEBLO AZULIZA?\p"
	.string "Te agradecería que le entregaras\n"
	.string "una CARTA a MÁXIMO en AZULIZA.$"

RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis:
	.string "SR. PEÑAS: No sé si lo sabrás,\n"
	.string "pero soy un gran PRESIDENTE.\p"
	.string "Nunca me he aprovechado de nadie\n"
	.string "y siempre devuelvo los favores.\p"
	.string "¡Por eso quiero darte esto!$"

RustboroCity_DevonCorp_3F_Text_ReceivedPokenav:
	.string "{PLAYER} recibió un POKéNAV.$"

RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp:
	.string "SR. PEÑAS: Este dispositivo es…\p"
	.string "¡un POKéNAVEGADOR!\n"
	.string "POKéNAV, para abreviar…\p"
	.string "Se trata de una herramienta esencial\n"
	.string "para todo ENTRENADOR aventurero.\p"
	.string "Incluye un mapa de la región de HOENN.\p"
	.string "Puedes consultar las ubicaciones\n"
	.string "de AZULIZA y CIUDAD PORTUAL\l"
	.string "en un abrir y cerrar de ojos.\p"
	.string "Por cierto, he oído que esos siniestros\n"
	.string "delincuentes, creo que se llaman MAGMA\l"
	.string "y AQUA, no paran de dar problemas.\p"
	.string "Me parece que sería buena idea\n"
	.string "que descansaras antes de seguir.$"

RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare:
	.string "SR. PEÑAS: En fin, {PLAYER}{KUN},\n"
	.string "ve con cuidado.$"

RustboroCity_DevonCorp_3F_Text_CountingOnYou:
	.string "SR. PEÑAS: ¡Cuento contigo!$"

RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter:
	.string "SR. PEÑAS: ¿Has entregado mi CARTA?\n"
	.string "¡Muchas gracias!\p"
	.string "Y también quiero agradecértelo así.\n"
	.string "Como entrenas POKéMON, te vendrá bien.$"

RustboroCity_DevonCorp_3F_Text_ExplainExpShare:
	.string "SR. PEÑAS: Si un POKéMON tiene\n"
	.string "REPARTIR EXP, obtendrá algunos de los\l"
	.string "puntos de EXPERIENCIA del combate…\p"
	.string "¡Aunque no haya combatido!\p"
	.string "REPARTIR EXP es de lo más\n"
	.string "útil para fortalecer POKéMON débiles.$"

RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends:
	.string "SR. PEÑAS: Desde que era un chaval,\n"
	.string "siempre he trabajado de sol a sol.\p"
	.string "Eso no me ha dejado mucho tiempo\n"
	.string "para estar al tanto de las modas.\p"
	.string "¿Todos los jóvenes de ahora quieren\n"
	.string "ser ENTRENADORES en la LIGA POKéMON?$"

RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere:
	.string "Éste es el segundo piso de DEVON S.A.\p"
	.string "Aquí está el DESPACHO de nuestro\n"
	.string "PRESIDENTE.\p"
	.string "Bueno, sólo quería decirte cuánto\n"
	.string "aprecio lo que has hecho.\p"
	.string "Eh… Por cierto… Ese paquete que\n"
	.string "nos has devuelto…\p"
	.string "¿Podrías llevarlo a los ASTILLEROS\n"
	.string "de CIUDAD PORTUAL?\p"
	.string "Sería horrible que nos lo volvieran\n"
	.string "a robar…\p"
	.string "Así que, ejem, ¿puedo contar contigo\n"
	.string "para que te ocupes de eso?\p"
	.string "¡Qué bien!\n"
	.string "¿Puedes esperar un segundo aquí?$"

RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe:
	.string "Nuestro PRESIDENTE querría hablar\n"
	.string "un momento contigo.\p"
	.string "Acompáñame, por favor.$"

RustboroCity_DevonCorp_3F_Text_PleaseGoAhead:
	.string "Aquí es. Adelante.$"

RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard:
	.string "Si vas a los ASTILLEROS\n"
	.string "de CIUDAD PORTUAL, no olvides visitar\l"
	.string "al CAPITÁN BABOR.$"

RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular:
	.string "Los nuevos productos de DEVON, la\n"
	.string "ACOPIO BALL y la TURNO BALL, están\l"
	.string "haciendo furor entre los ENTRENADORES.$"

RustboroCity_DevonCorp_3F_Text_RareRocksDisplay:
	.string "Se trata de una colección de libros\n"
	.string "raros y rocas poco comunes\l"
	.string "que ha reunido el PRESIDENTE.$"

>>>>>>> Egg/spanish
