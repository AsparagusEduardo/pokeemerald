.set LOCALID_MOM, 1
.set LOCALID_RIVAL_MOM, 4
.set LOCALID_RIVAL, 7

LittlerootTown_BrendansHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
	.byte 0

LittlerootTown_BrendansHouse_1F_OnLoad:
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
	end

LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
	return

LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
	return

LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
	return

LittlerootTown_BrendansHouse_1F_OnTransition:
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
	end

LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
	setobjectxyperm LOCALID_MOM, 8, 4
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
	setobjectxyperm LOCALID_MOM, 4, 5
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
	return

LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
	setobjectxyperm LOCALID_MOM, 9, 8
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
	return

@ Many of the below scripts have no gender check because they assume youre in the correct house
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
LittlerootTown_BrendansHouse_1F_OnFrame:
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
	.2byte 0

LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
	lockall
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
	waitmovement 0
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
	waitstate
	releaseall
	end

LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
	lockall
	setvar VAR_0x8004, LOCALID_MOM
	setvar VAR_0x8005, MALE
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
	end

LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
	lockall
	setvar VAR_0x8004, MALE
	setvar VAR_0x8005, LOCALID_MOM
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
	end

LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
	lockall
	playse SE_PIN
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
	waitmovement 0
	special GetRivalSonDaughterString
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
	setflag FLAG_MET_RIVAL_MOM
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
	releaseall
	end

LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
	lockall
	setvar VAR_0x8004, LOCALID_MOM
	setvar VAR_0x8005, MALE
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
	end

LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
	lockall
	setvar VAR_0x8008, 0
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
	end

LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
	lockall
	setvar VAR_0x8008, 1
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
	end

LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
	lockall
	setvar VAR_0x8008, 2
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
	end

LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
	playse SE_EXIT
	delay 10
	addobject LOCALID_RIVAL
	delay 30
	playse SE_PIN
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
	playse SE_EXIT
	removeobject LOCALID_RIVAL
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	delay 30
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
	walk_in_place_faster_left
	walk_left
	walk_in_place_faster_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
	walk_in_place_faster_right
	walk_right
	walk_in_place_faster_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
	waitmovement 0
	return

LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
	delay_16
	delay_8
	walk_in_place_faster_right
	step_end

LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
	delay_16
	delay_8
	walk_in_place_faster_right
	delay_16
	delay_16
	walk_in_place_faster_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
	walk_in_place_faster_right
	walk_right
	walk_in_place_faster_up
	walk_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
	walk_in_place_faster_right
	walk_right
	walk_in_place_faster_up
	walk_up
	walk_up
	walk_in_place_faster_left
	walk_left
	walk_in_place_faster_up
	walk_up
	step_end

LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
	walk_in_place_faster_left
	walk_left
	walk_in_place_faster_up
	walk_up
	walk_up
	step_end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/LittlerootTown_BrendansHouse_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/LittlerootTown_BrendansHouse_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/LittlerootTown_BrendansHouse_1F/text_es.inc"
.else
	.include "data/maps/LittlerootTown_BrendansHouse_1F/text.inc"
.endif
.endif
.endif
=======
PlayersHouse_1F_Text_IsntItNiceInHere:
	.string "MAMÁ: ¿Ves, {PLAYER}?\n"
	.string "¿A que esto es muy bonito?$"

PlayersHouse_1F_Text_MoversPokemonGoSetClock:
	.string "Los POKéMON del servicio de mudanzas\n"
	.string "hacen todo el trabajo duro y además\l"
	.string "recogen lo que ensucian. ¡Es perfecto!\p"
	.string "{PLAYER}, tu cuarto está arriba.\n"
	.string "¡Ve a verlo, cariño!\p"
	.string "PAPÁ te ha comprado un nuevo\n"
	.string "reloj para que recuerdes este día.\l"
	.string "No olvides ponerlo en hora.$"

PlayersHouse_1F_Text_ArentYouInterestedInRoom:
	.string "MAMÁ: ¿Y bien, {PLAYER}?\n"
	.string "¿No quieres ver tu cuarto?$"

PlayersHouse_1F_Text_GoSetTheClock:
	.string "MAMÁ: {PLAYER}, cielo…\p"
	.string "Pon en hora el reloj de tu cuarto.$"

PlayersHouse_1F_Text_OhComeQuickly:
	.string "MAMÁ: ¡{PLAYER}, {PLAYER}!\n"
	.string "¡Ven! ¡Ven rápido!$"

PlayersHouse_1F_Text_MaybeDadWillBeOn:
	.string "MAMÁ: ¡Mira! ¡El GIMNASIO de PETALIA!\n"
	.string "¡A ver si sale tu padre!$"

PlayersHouse_1F_Text_ItsOverWeMissedHim:
	.string "MAMÁ: Pues no… Qué lástima…\p"
	.string "Creo que estaba hace nada y se\n"
	.string "acaba de ir. Mala suerte.$"

PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
	.string "Ah, sí, una cosa.\n"
	.string "Uno de los amigos de tu padre vive aquí.\p"
	.string "Se llama PROF. ABEDUL.\p"
	.string "Vive aquí al lado. Creo que deberías\n"
	.string "ir a verlo y presentarte, cariño.$"

PlayersHouse_1F_Text_SeeYouHoney:
	.string "MAMÁ: ¡Hasta luego, cielo!$"

PlayersHouse_1F_Text_DidYouMeetProfBirch:
	.string "MAMÁ: ¿Has ido a presentarte\n"
	.string "al PROF. ABEDUL?$"

PlayersHouse_1F_Text_YouShouldRestABit:
	.string "MAMÁ: ¿Cómo estás, {PLAYER}?\n"
	.string "No pareces muy en forma.\p"
	.string "Creo que deberías descansar un poco.$"

PlayersHouse_1F_Text_TakeCareHoney:
	.string "MAMÁ: ¡Cuídate, cielo!$"

PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
	.string "MAMÁ: ¡Mira por dónde! ¿Tu padre\n"
	.string "te ha dado esa MEDALLA?\p"
	.string "¡Pues yo también quiero darte algo!$"

PlayersHouse_1F_Text_DontPushYourselfTooHard:
	.string "No te esfuerces demasiado, cielo.\n"
	.string "Tienes que saber cuándo hay que parar.\p"
	.string "¡Buena suerte y ven a verme\n"
	.string "de vez en cuando!$"

PlayersHouse_1F_Text_IsThatAPokenav:
	.string "MAMÁ: ¿Qué es eso, cariño? ¿Un POKéNAV?\n"
	.string "¿Te lo dio alguien de DEVON?\p"
	.string "Entonces, cielo, tendrás que apuntarme\n"
	.string "en él, ¿no?\p"
	.string "Mmm…$"

PlayersHouse_1F_Text_RegisteredMom:
	.string "Acabas de registrar a MAMÁ\n"
	.string "en el POKéNAV.$"

PlayersHouse_1F_Text_Vigoroth1:
	.string "¡Vigoró, vigoró!$"

PlayersHouse_1F_Text_Vigoroth2:
	.string "Goro, goro-goro…$"

PlayersHouse_1F_Text_ReportFromPetalburgGym:
	.string "ENTREVISTADOR: Y, desde el GIMNASIO\n"
	.string "de PETALIA, nos despedimos de todos.$"

PlayersHouse_1F_Text_TheresAMovieOnTV:
	.string "Hay una peli en la tele.\p"
	.string "Dos hombres están bailando sobre\n"
	.string "el teclado de un piano de cola.\p"
	.string "Bueno, mejor dejo de ver la tele.$"

PlayersHouse_1F_Text_RunningShoesManual:
	.string "Son las instrucciones de las \n"
	.string "DEPORTIVAS.\p"
	.string "“Pulsa el Botón B cuando lleves las\n"
	.string "DEPORTIVAS para salir pitando.\p"
	.string "Ponte las DEPORTIVAS y empieza\n"
	.string "a correr por todas partes.”$"

PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
	.string "PAPÁ: ¿Eh?\p"
	.string "¡Pero si es mi {PLAYER}!\p"
	.string "Hace un siglo que no te veo…\n"
	.string "¡Si pareces mucho más fuerte!\p"
	.string "Ésa es la impresión que das, ¡pero\n"
	.string "tu padre aún puede dar guerra!\p"
	.string "Ah, sí, tengo algo para ti.\n"
	.string "Te lo envía un tal SR. ARENQUE.$"

PlayersHouse_1F_Text_PortsInSlateportLilycove:
	.string "PAPÁ: ¿Un TICKET para el ferry?\p"
	.string "Si recuerdo bien, los puertos donde\n"
	.string "atraca son CIUDAD PORTUAL y CALAGUA.$"

PlayersHouse_1F_Text_BetterGetBackToGym:
	.string "Mejor vuelvo al GIMNASIO de PETALIA.\p"
	.string "Cariño, gracias por ocuparte\n"
	.string "de la casa mientras yo estoy fuera.$"

PlayersHouse_1F_Text_DadShouldStayLonger:
	.string "MAMÁ: Este padre tuyo…\p"
	.string "Cuando por fin viene un poco a casa,\n"
	.string "sólo se le ocurre hablar de POKéMON.\p"
	.string "Debería relajarse un poco y quedarse\n"
	.string "más tiempo aquí tranquilito…$"

PlayersHouse_1F_Text_IsThatABreakingStory:
	.string "MAMÁ: ¿Un especial informativo?$"

PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
	.string "¡Interrumpimos la programación para\n"
	.string "traerles las últimas noticias!\p"
	.string "Hay noticias confusas sobre supuestos\n"
	.string "avistamientos de un POKéMON azzzrt…\l"
	.string "volando en distintos puntos de HOENN.\p"
	.string "Actualmente se desconoce la identidad\n"
	.string "del POKéMON.\p"
	.string "Y ahora les dejamos con la programación\n"
	.string "habitual.$"

PlayersHouse_1F_Text_WhatColorDidTheySay:
	.string "MAMÁ: {PLAYER}, ¿has oído eso?\p"
	.string "¿De qué color ha dicho el de\n"
	.string "la tele que era ese POKéMON?$"

PlayersHouse_1F_Text_StillUnknownPokemon:
	.string "MAMÁ: ¡Ver para creer!\n"
	.string "¡Aún hay POKéMON desconocidos!$"
>>>>>>> Egg/spanish
