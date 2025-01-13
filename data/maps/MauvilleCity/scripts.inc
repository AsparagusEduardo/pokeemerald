.set LOCALID_WALLY, 6
.set LOCALID_WALLYS_UNCLE, 7
.set LOCALID_SCOTT, 11

MauvilleCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
	.byte 0

MauvilleCity_OnTransition:
	setflag FLAG_VISITED_MAUVILLE_CITY
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
	setflag FLAG_SYS_TV_START
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	setvar VAR_MAUVILLE_GYM_STATE, 0
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
	end

MauvilleCity_EventScript_MoveWattsonBackToGym::
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
	return

MauvilleCity_EventScript_Boy::
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
	end

MauvilleCity_EventScript_Maniac::
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
	end

MauvilleCity_EventScript_Woman::
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
	end

MauvilleCity_EventScript_RichBoy::
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
	end

MauvilleCity_EventScript_CitySign::
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_GymSign::
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_BikeShopSign::
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_GameCornerSign::
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_SchoolKidM::
	lock
	faceplayer
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
	setflag FLAG_TV_EXPLAINED
	release
	end

MauvilleCity_EventScript_TVExplained::
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_WallysUncle::
	lock
	faceplayer
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MauvilleCity_EventScript_Wally::
	lockall
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_Delay48
	waitmovement 0
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end

MauvilleCity_EventScript_BattleWallyPrompt::
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
	closemessage
	switch VAR_FACING
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
	end

MauvilleCity_EventScript_WallyAndUncleExitNorth::
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
	waitmovement 0
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
	waitmovement 0
	goto MauvilleCity_EventScript_DefeatedWally
	end

MauvilleCity_EventScript_WallyAndUncleExitEast::
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
	waitmovement 0
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
	waitmovement 0
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
	waitmovement 0
	goto MauvilleCity_EventScript_DefeatedWally
	end

MauvilleCity_EventScript_DefeatedWally::
	removeobject LOCALID_WALLY
	removeobject LOCALID_WALLYS_UNCLE
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
	closemessage
	addvar VAR_SCOTT_STATE, 1
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
	removeobject LOCALID_SCOTT
	releaseall
	end

MauvilleCity_EventScript_ScottApproachPlayerNorth::
	addobject LOCALID_SCOTT
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
	waitmovement 0
	return

MauvilleCity_EventScript_ScottApproachPlayerEast::
	setobjectxyperm LOCALID_SCOTT, 12, 13
	addobject LOCALID_SCOTT
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
	waitmovement 0
	return

MauvilleCity_EventScript_ScottExitNorth::
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
	waitmovement 0
	return

MauvilleCity_EventScript_ScottExitEast::
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
	waitmovement 0
	return

MauvilleCity_EventScript_BattleWally::
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
	return

MauvilleCity_EventScript_DeclineWallyBattle::
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_WallyRequestBattleAgain::
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end

MauvilleCity_Movement_WallyExitNorth1:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	step_end

MauvilleCity_Movement_WallyExitEast1:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_WallyExitNorth2:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_8
	step_end

MauvilleCity_Movement_WallyExitEast2:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_8
	step_end

MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_PlayerWatchWallyExitEast2:
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_PlayerWatchScottExitNorth:
	delay_16
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_PlayerWatchScottExitEast:
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_PlayerWatchWallyExitEast1:
	delay_16
	walk_in_place_faster_down
	step_end

MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
	delay_16
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_WallysUncleExitNorth1:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

MauvilleCity_Movement_WallysUncleExitEast1:
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_PlayerFaceUncleNorth:
	delay_16
	delay_8
	delay_4
	walk_in_place_faster_down
	step_end

MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

MauvilleCity_Movement_WallysUncleApproachPlayerEast:
	walk_right
	walk_up
	step_end

MauvilleCity_Movement_WallysUncleExitNorth2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_WallysUncleExitEast2:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_ScottApproachPlayerNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

MauvilleCity_Movement_ScottApproachPlayerEast:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

MauvilleCity_Movement_ScottExitNorth:
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

MauvilleCity_Movement_ScottExitEast:
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

MauvilleCity_EventScript_Wattson::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
	giveitem ITEM_BASEMENT_KEY
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_BegunNewMauville::
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_CompletedNewMauville::
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_THUNDERBOLT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_ReceivedThunderbolt::
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_RegisterWallyCall::
	lockall
	pokenavcall MauvilleCity_Text_WallyPokenavCall
	waitmessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
	releaseall
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MauvilleCity/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MauvilleCity/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MauvilleCity/text_es.inc"
.else
	.include "data/maps/MauvilleCity/text.inc"
.endif
.endif
.endif
=======
MauvilleCity_Text_UncleHesTooPeppy:
	.string "TÍO: Creo que este chico está tan vital\n"
	.string "últimamente gracias a los POKéMON.\l"
	.string "Pero es que ya es demasiado…$"

MauvilleCity_Text_WallyWantToChallengeGym:
	.string "BLASCO: Eh… ¿TÍO?\p"
	.string "Quiero desafiar al LÍDER de este\n"
	.string "GIMNASIO y ver cuánto he mejorado.\p"
	.string "¿Puedo? ¿Puedo? Porfaaaa…$"

MauvilleCity_Text_UncleYourePushingIt:
	.string "TÍO: Espera un poco, BLASCO…\p"
	.string "Es cierto que desde que vives con\n"
	.string "POKéMON eres mucho más fuerte.\p"
	.string "¿Pero no crees que exageras\n"
	.string "un poco cuando hablas de desafiar\l"
	.string "a un LÍDER de GIMNASIO?$"

MauvilleCity_Text_WallyWeCanBeatAnyone:
	.string "BLASCO: No exagero…\p"
	.string "¡Si RALTS y yo unimos fuerzas,\n"
	.string "podemos con todo!$"

MauvilleCity_Text_WallyWillYouBattleMe:
	.string "BLASCO: Oh, hola, {PLAYER}.\p"
	.string "Soy mogollón más fuerte que la última\n"
	.string "vez que nos vimos.\p"
	.string "{PLAYER}, quiero que mi TÍO y tú no\n"
	.string "tengáis ninguna duda al respecto.\p"
	.string "{PLAYER}, ¿querrías luchar conmigo?$"

MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
	.string "BLASCO: Oh, pues si no tenemos\n"
	.string "un combate, mi TÍO no podrá ver\l"
	.string "lo fuerte que me he vuelto…$"

MauvilleCity_Text_UncleCanYouBattleWally:
	.string "TÍO: {PLAYER}{KUN}, ¿verdad?\n"
	.string "En nombre de BLASCO, ¿puedo pedirte\l"
	.string "que os enfrentéis sólo esta vez?\p"
	.string "Está tan empeñado que no habrá\n"
	.string "manera de convencerle de lo contrario.$"

MauvilleCity_Text_WallyPleaseBattleMe:
	.string "BLASCO: {PLAYER}, porfa…\n"
	.string "¡Lucha conmigo, anda!$"

MauvilleCity_Text_WallyHereICome:
	.string "BLASCO: Gracias, {PLAYER}.\p"
	.string "Muy bien… ¡Allá vamos!$"

MauvilleCity_Text_WallyDefeat:
	.string "BLASCO: Pues…\p"
	.string "Pues…\p"
	.string "Pues he perdido…$"

MauvilleCity_Text_WallyIllGoBackToVerdanturf:
	.string "BLASCO: TÍO…\n"
	.string "Me vuelvo a VERDEGAL…$"

MauvilleCity_Text_ThankYouNotEnoughToBattle:
	.string "Gracias, {PLAYER}.\n"
	.string "Es duro ser un ENTRENADOR, ¿no?\p"
	.string "No basta con tener POKéMON\n"
	.string "y hacerlos combatir.\l"
	.string "Ser ENTRENADOR es más que eso…$"

MauvilleCity_Text_UncleNoNeedToBeDown:
	.string "TÍO: BLASCO, no debes venirte abajo\n"
	.string "por esto…\p"
	.string "A ver, ¿qué te impide mejorar cada\n"
	.string "vez más?\p"
	.string "Venga, vamos a casa.\n"
	.string "Todos te están esperando.$"

MauvilleCity_Text_UncleVisitUsSometime:
	.string "TÍO: {PLAYER}{KUN}, acabo de darme cuenta\n"
	.string "de que tú fuiste quien ayudó a BLASCO\l"
	.string "a atrapar su POKéMON.\p"
	.string "¿Por qué no vienes a visitarnos\n"
	.string "a VERDEGAL algún día?\l"
	.string "A BLASCO le haría ilusión.$"


MauvilleCity_Text_WallyPokenavCall:
	.string "¡Bip!\p"
	.string "BLASCO: ¡Hey, hola, {PLAYER}!\p"
	.string "¡Sólo quería decirte que mi TÍO\n"
	.string "me ha comprado un POKéNAV!\p"
	.string "¡Así que ya puedo hablar contigo\n"
	.string "siempre que quiera, {PLAYER}!\p"
	.string "¡Clic!$"

MauvilleCity_Text_RegisteredWally:
	.string "Acabas de registrar a BLASCO\n"
	.string "en el POKéNAV.$"

MauvilleCity_Text_ScottYouDidntHoldBack:
	.string "TRETO: Je, je…\n"
	.string "¡He presenciado ese enfrentamiento!\p"
	.string "Tienes amistad con ese tal BLASCO,\n"
	.string "¿verdad?\p"
	.string "Pues no te has cortado ni un pelo.\n"
	.string "Le has vencido de forma impresionante.\p"
	.string "¡Ése es el verdadero espíritu de los\n"
	.string "combates POKéMON, sí, señor!\p"
	.string "¡Admiro a la gente que entrena como tú!\p"
	.string "¡Seguiré animándote!$"

MauvilleCity_Text_WattsonNeedFavorTakeKey:
	.string "ERICO: ¡Anda, {PLAYER}{KUN}!\n"
	.string "¡Te veo muy en forma!\l"
	.string "Me parece genial, ja, ja, ja.\p"
	.string "Vale. Está decidido.\n"
	.string "Necesito que me hagas un favor.\p"
	.string "En CIUDAD MALVALONA hay una zona\n"
	.string "subterránea llamada MALVALANOVA.\p"
	.string "{PLAYER}{KUN}, necesito que vayas allí\n"
	.string "y apagues el GENERADOR.\p"
	.string "El GENERADOR ha estado funcionando\n"
	.string "de cualquier manera. No es seguro.\p"
	.string "Toma. Ésta es la LLAVE para entrar\n"
	.string "en MALVALANOVA.$"

MauvilleCity_Text_WattsonWontBeChallenge:
	.string "ERICO: No te preocupes. No creo\n"
	.string "que te suponga ningún problema.\p"
	.string "La entrada a MALVALANOVA está\n"
	.string "cerca. Sólo hay que ir a la RUTA 110 \l"
	.string "y hacer un poco de SURF.\p"
	.string "Pues eso es. Cuento contigo.\n"
	.string "¡Jua, jua, jua, jua!$"

MauvilleCity_Text_WattsonThanksTakeTM:
	.string "ERICO: ¡Jua, jua, jua, jua!\p"
	.string "¡Lo sabía, {PLAYER}{KUN}!\n"
	.string "¡Sabía que no me equivocaba contigo!\p"
	.string "Y quiero agradecértelo: toma la MT\n"
	.string "que contiene RAYO.\p"
	.string "¡Te la has ganado!$"

MauvilleCity_Text_WattsonYoungTakeCharge:
	.string "ERICO: ¡Jua, jua, jua, jua!\p"
	.string "Me alegra mucho ver cómo los jóvenes\n"
	.string "van avanzando hasta la cumbre.$"

MauvilleCity_Text_NurseHurtMonBackToHealth:
	.string "Es verdad. Mola entablar combates\n"
	.string "POKéMON y todo eso, pero recuerda:\p"
	.string "si tu POKéMON se hace daño, debes\n"
	.string "cuidarlo hasta que se ponga bueno.$"

MauvilleCity_Text_AllSortsOfPeopleComeThrough:
	.string "Las carreteras de este pueblo van\n"
	.string "en todas las direcciones.\p"
	.string "Por eso viene tanta gente\n"
	.string "diferente continuamente.$"

MauvilleCity_Text_RydelVeryGenerous:
	.string "¿Ya has estado en la TIENDA de BICIS\n"
	.string "de ANACLETO?\p"
	.string "ANACLETO, el dueño, es muy generoso.$"

MauvilleCity_Text_PokemonCanJumpYouOnBike:
	.string "Aunque montes en BICI, los POKéMON\n"
	.string "salvajes pueden atacarte.$"

MauvilleCity_Text_CitySign:
	.string "CIUDAD MALVALONA\n"
	.string "“¡Una ciudad que rebosa diversión!”$"

MauvilleCity_Text_GymSign:
	.string "GIMNASIO POKéMON de CIUDAD MALVALONA\n"
	.string "LÍDER: ERICO\l"
	.string "“¡Una personalidad electrificante!”$"

MauvilleCity_Text_BikeShopSign:
	.string "TIENDA de BICIS de ANACLETO\n"
	.string "“¡Todo para ir sobre ruedas!”$"

MauvilleCity_Text_GameCornerSign:
	.string "CASINO de MALVALONA\n"
	.string "“¡Juega a lo que te apetezca!”$"

MauvilleCity_Text_ExplainTV:
	.string "Hola. ¿Tú ves la tele?\p"
	.string "Últimamente hay un montón de programas\n"
	.string "muy buenos.\p"
	.string "Es superguay. Hasta han salido\n"
	.string "mis amigos.\p"
	.string "Y, a veces, tú también sales,\n"
	.string "aunque no lo sepas.\p"
	.string "Me gustaría salir un día…\p"
	.string "¡Por eso voy a ver la tele cada\n"
	.string "dos por tres!$"

MauvilleCity_Text_BeenCheckingOutTV:
	.string "Hola. ¿Has estado viendo la tele?$"
>>>>>>> Egg/spanish
