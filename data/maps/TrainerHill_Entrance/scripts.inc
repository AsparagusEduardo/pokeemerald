.set LOCALID_ATTENDANT, 1
.set LOCALID_NURSE, 2
.set LOCALID_GIRL, 4
.set LOCALID_MAN, 5

TrainerHill_Entrance_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_OnResume
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_OnReturn
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_OnFrame
	.byte 0

TrainerHill_Entrance_OnTransition:
	setflag FLAG_LANDMARK_TRAINER_HILL
	getplayerxy VAR_TEMP_D, VAR_RESULT
	end

@ Unused
TrainerHill_Entrance_OnWarp:
	end

TrainerHill_Entrance_OnResume:
	trainerhill_resumetimer
	setvar VAR_TEMP_0, 0
	trainerhill_getusingereader
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_TryFaceAttendant  @ VAR_RESULT always FALSE here
	setobjectxy OBJ_EVENT_ID_PLAYER, 9, 6
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
	end

TrainerHill_Entrance_EventScript_TryFaceAttendant::
	trainerhill_getwon
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
	end

TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant::
	end

TrainerHill_Entrance_OnReturn:
	addobject LOCALID_NURSE
	addobject LOCALID_ATTENDANT
	addobject LOCALID_MAN
	addobject LOCALID_GIRL
	end

TrainerHill_Entrance_OnLoad:
	call_if_eq VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_OpenCounterDoor
	end

TrainerHill_Entrance_EventScript_OpenCounterDoor::
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
	return

TrainerHill_Entrance_OnFrame:
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_EventScript_ExitChallenge
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_ExitElevator
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_EventScript_EntryTrigger
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
	.2byte 0

TrainerHill_Entrance_EventScript_ExitElevator::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
	waitmovement 0
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
	special DrawWholeMapView
	playse SE_CLICK
	waitse
	setvar VAR_TEMP_D, 0
	releaseall
	end

TrainerHill_Entrance_EventScript_ExitChallenge::
	setvar VAR_TEMP_0, 1
	trainerhill_getstatus
	switch VAR_RESULT
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallengeLost
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallengeECard
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_EndExitChallenge

TrainerHill_Entrance_EventScript_ExitChallengeLost::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge

TrainerHill_Entrance_EventScript_ExitChallengeECard::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
TrainerHill_Entrance_EventScript_PlayerExitChallenge::
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
	waitmovement 0
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
	special HealPlayerParty
	releaseall
TrainerHill_Entrance_EventScript_EndExitChallenge::
	end

TrainerHill_Entrance_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

TrainerHill_Entrance_EventScript_Attendant::
	lock
	faceplayer
	trainerhill_inchallenge
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_ThanksForPlaying
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_EventScript_AttendantEnd

TrainerHill_Entrance_EventScript_ThanksForPlaying::
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
TrainerHill_Entrance_EventScript_AttendantEnd::
	release
	end

TrainerHill_Entrance_EventScript_EntryTrigger::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Closed
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
	trainerhill_getsaved
	call_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveGame
	trainerhill_allfloorsused
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_AllFloorsUsed
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers

TrainerHill_Entrance_EventScript_AllFloorsUsed::
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
TrainerHill_Entrance_EventScript_AskChallengeTrainers::
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
	waitmessage
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
	switch VAR_RESULT
	case 0, TrainerHill_Entrance_EventScript_ChooseChallenge
	case 1, TrainerHill_Entrance_EventScript_CancelEntry
	case 2, TrainerHill_Entrance_EventScript_Info
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
	end

TrainerHill_Entrance_EventScript_Info::
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
	end

TrainerHill_Entrance_EventScript_ChooseChallenge::
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
	switch VAR_RESULT
	case 4, TrainerHill_Entrance_EventScript_CancelEntry
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
	trainerhill_setmode VAR_RESULT
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
	setvar VAR_TEMP_5, 0
	special HealPlayerParty
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
	trainerhill_start
	releaseall
	end

TrainerHill_Entrance_EventScript_CancelEntry::
	setvar VAR_TEMP_5, 0
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
	waitmovement 0
	releaseall
	end

TrainerHill_Entrance_EventScript_SaveGame::
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
	trainerhill_setsaved
	setvar VAR_TEMP_5, 1
	call Common_EventScript_SaveGame
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveFailed
	trainerhill_setsaved
	return

TrainerHill_Entrance_EventScript_SaveFailed::
	trainerhill_clearsaved
	goto TrainerHill_Entrance_EventScript_CancelEntry
	end

TrainerHill_Entrance_EventScript_Closed::
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
	waitmovement 0
	releaseall
	end

TrainerHill_Entrance_Movement_PlayerFaceAttendant:
	face_right
	step_end

TrainerHill_Entrance_Movement_PushPlayerBackFromCounter:
	walk_down
	step_end

@ Unused
TrainerHill_Entrance_Movement_FaceUp:
	face_up
	step_end

TrainerHill_Entrance_Movement_PlayerExitElevator:
	walk_down
	walk_down
	step_end

TrainerHill_Entrance_EventScript_Records::
	lockall
	fadescreen FADE_TO_BLACK
	special ShowTrainerHillRecords
	waitstate
	releaseall
	end

TrainerHill_Entrance_EventScript_Man::
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ManTrainerHillClosed
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
	end

TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
	end

TrainerHill_Entrance_EventScript_Girl::
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
	end

TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
	end

TrainerHill_Entrance_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ExpandedPokemart
	pokemart TrainerHill_Entrance_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
TrainerHill_Entrance_Pokemart_Basic:
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_SPECIAL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFEND
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_X_ACCURACY
	pokemartlistend

TrainerHill_Entrance_EventScript_ExpandedPokemart::
	pokemart TrainerHill_Entrance_Pokemart_Expanded
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
TrainerHill_Entrance_Pokemart_Expanded:
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_SPECIAL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFEND
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_X_ACCURACY
	pokemartlistend

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/TrainerHill_Entrance/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/TrainerHill_Entrance/text_it.inc"
.else
	.include "data/maps/TrainerHill_Entrance/text.inc"
.endif
.endif
=======
TrainerHill_Entrance_Text_StillGettingReady:
	.string "Ésta es la COLINA DESAFÍO.\n"
	.string "Aquí podrás enfrentarte a otros\l"
	.string "ENTRENADORES en una carrera\l"
	.string "por llegar arriba lo antes posible.\p"
	.string "Por desgracia, aún no está preparado\n"
	.string "todo. Pásate por aquí en otro momento.$"

TrainerHill_Entrance_Text_WelcomeToTrainerHill:
	.string "¡Te damos la bienvenida!\p"
	.string "Ésta es la COLINA DESAFÍO.\n"
	.string "Aquí podrás enfrentarte a otros\l"
	.string "ENTRENADORES en una carrera\l"
	.string "por llegar arriba lo antes posible.$"

TrainerHill_Entrance_Text_SaveGameBeforeEnter:
	.string "¿Es la primera vez que vienes?\p"
	.string "Antes de entrar, debes\n"
	.string "guardar la partida.$"

TrainerHill_Entrance_Text_TrainersUpToFloorX:
	.string "Veamos…\n"
	.string "Los ENTRENADORES están ahora…\p"
	.string "Hasta el nivel {STR_VAR_1}.$"

TrainerHill_Entrance_Text_TrainersInEveryRoom:
	.string "Veamos…\n"
	.string "Los ENTRENADORES están ahora…\p"
	.string "¡Vaya, parece que hay ENTRENADORES\n"
	.string "en todos los niveles!$"

TrainerHill_Entrance_Text_LikeToChallengeTrainers:
	.string "¿Quieres enfrentarte a ellos?$"

TrainerHill_Entrance_Text_TimeProgessGetSetGo:
	.string "Cronometraré tu tiempo.\n"
	.string "¡Suerte!\p"
	.string "A la una…\p"
	.string "A las dos…\p"
	.string "¡Y a las tres!$"

TrainerHill_Entrance_Text_PleaseVisitUsAgain:
	.string "¡Vuelve cuando quieras!$"

TrainerHill_Entrance_Text_TooBadTremendousEffort:
	.string "Qué pena…\p"
	.string "La verdad es que te has esforzado\n"
	.string "mucho.\p"
	.string "¡Bueno, otra vez será!$"

TrainerHill_Entrance_Text_HopeYouGiveItYourBest:
	.string "¡Demuestra lo que sabes!$"

TrainerHill_Entrance_Text_MovedReceptionHereForSwitch:
	.string "Cuando los ENTRENADORES se\n"
	.string "cambian de sitio, organizan una…\l"
	.string "tremenda.\p"
	.string "Para evitar tanto follón pusimos\n"
	.string "la recepción aquí.\p"
	.string "Disculpa las molestias.$"

TrainerHill_Entrance_Text_ThankYouForPlaying:
	.string "¡Gracias por participar!$"

TrainerHill_Entrance_Text_ExplainTrainerHill:
	.string "En la COLINA DESAFÍO, los participantes\n"
	.string "compiten en la llamada “contrarreloj”.\p"
	.string "Es una carrera donde se cuenta\n"
	.string "el tiempo que tardas en llegar\l"
	.string "desde aquí hasta la azotea,\l"
	.string "donde te espera el dueño del local.\p"
	.string "Los récords de cada categoría están\n"
	.string "expuestos en el PANEL de TIEMPOS.\l"
	.string "¡Demuestra que no hay nadie\l"
	.string "más veloz que tú!\p"
	.string "En los combates que libres contra\n"
	.string "los ENTRENADORES que te encuentres\l"
	.string "en el ascenso, no ganarás ni dinero\l"
	.string "ni puntos de EXPERIENCIA.$"

@ Unused
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon:
	.string "Oh, I’m sorry, but you appear to have\n"
	.string "only one POKéMON with you.\p"
	.string "You will need at least two POKéMON\n"
	.string "to enter this event.$"

TrainerHill_Roof_Text_YouFinallyCameBravo:
	.string "¡Mmm!\p"
	.string "¡Por fin has llegado!\n"
	.string "¡Ya estás aquí!\p"
	.string "¡Espera! ¡No me lo digas!\n"
	.string "¡Ya sé por qué has subido\l"
	.string "corriendo hasta aquí!\p"
	.string "Querías verme a mí, al propietario\n"
	.string "de la COLINA DESAFÍO, porque…\p"
	.string "¡Quieres luchar a mi lado!\n"
	.string "¡¿A que sí?!\p"
	.string "¿Mmm?\n"
	.string "¿Cómo? ¿Que no ha sido por eso?\p"
	.string "Bueno, da igual, he visto cómo subías.\n"
	.string "¡Bien luchado! ¡Bravo! ¡Bravo!$"

TrainerHill_Roof_Text_HaveTheMostMarvelousGift:
	.string "Para alguien tan extraordinario,\n"
	.string "¡tengo un regalo extraordinario!$"

TrainerHill_Roof_Text_FullUpBeBackLaterForThis:
	.string "Oh, no, ¡no tienes sitio para nada!\n"
	.string "¡Vuelve cuando lo tengas!$"

TrainerHill_Roof_Text_GotHereMarvelouslyQuickly:
	.string "¡Oh, espera un momento! ¿De verdad\n"
	.string "has conseguido llegar aquí tan rápido?\p"
	.string "¡Espléndido! ¡Pero no tenías que\n"
	.string "correr tanto para venir a verme!\p"
	.string "Aunque es un detalle, claro.\n"
	.string "¡Le pediré a la chica de recepción\l"
	.string "que actualice el PANEL de TIEMPOS!$"

TrainerHill_Roof_Text_YouWerentVeryQuick:
	.string "Pero bueno…\n"
	.string "No parece que hayas corrido mucho…$"

TrainerHill_Roof_Text_ArriveZippierNextTime:
	.string "¿Sabes? Creo que me alegraría más\n"
	.string "si llegases más rápido la próxima vez.\p"
	.string "¡Seguro que hasta me animaba\n"
	.string "a formar un equipo contigo!\p"
	.string "¡Hasta entonces!$"

@ Unused
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner:
	.string "I had the TRAINER HILL built for but\n"
	.string "one reason and one only!\p"
	.string "To find the most suitable partner\n"
	.string "with whom I may form a tag team!$"

TrainerHill_Entrance_Text_ChallengeTime:
	.string "{STR_VAR_1} min {STR_VAR_2},{STR_VAR_3} s$"

TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead:
	.string "No sé qué clase de ENTRENADORES\n"
	.string "y de POKéMON esperan ahí arriba.\p"
	.string "¡Lo que sí sé es que no dejaré que\n"
	.string "nadie se interponga en mi camino!$"

TrainerHill_Entrance_Text_CantWaitToTestTheWaters:
	.string "He oído que a esta COLINA DESAFÍO\n"
	.string "vienen ENTRENADORES de todas partes.\p"
	.string "¡Estoy deseando probar!\p"
	.string "¡Voy a quitar de en medio a todos\n"
	.string "los que se me pongan por delante!$"

TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop:
	.string "¿Has visto el PANEL de TIEMPOS de ahí?\p"
	.string "Mis amigos y yo estamos a ver quién\n"
	.string "consigue llegar arriba en menos tiempo.$"

TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen:
	.string "¿Tienes idea de cuándo\n"
	.string "van a abrir este sitio?\p"
	.string "¡Quiero ser la primera de todos\n"
	.string "en competir aquí!$"

TrainerHill_Elevator_Text_ReturnToReception:
	.string "¿Quieres volver a la recepción?$"
>>>>>>> Egg/spanish
