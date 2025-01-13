.set LOCALID_NORMAN, 1
.set LOCALID_WALLY, 10
.set LOCALID_WALLYS_DAD, 11

PetalburgCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
	.byte 0

PetalburgCity_Gym_OnLoad:
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
	call_if_ge VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
	end

@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
	setvar VAR_0x8005, 1
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
	end

PetalburgCity_Gym_EventScript_UnlockAllDoors::
	setvar VAR_0x8005, 1
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
	return

PetalburgCity_Gym_OnTransition:
	call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
	call_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
	end

PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
	setobjectxyperm LOCALID_WALLY, 5, 108
	return

PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
	setobjectxyperm LOCALID_NORMAN, 4, 107
	return

PetalburgCity_Gym_EventScript_CheckNormanForRematch::
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
	specialvar VAR_RESULT, IsTrainerReadyForRematch
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
	setobjectxyperm LOCALID_NORMAN, 4, 107
	return

PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
	setvar VAR_PETALBURG_GYM_STATE, 8
	end

PetalburgCity_Gym_OnWarp:
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
	.2byte 0

PetalburgCity_Gym_EventScript_TurnPlayerNorth::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

PetalburgCity_Gym_OnFrame:
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
	.2byte 0

PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
	lockall
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_WALLY
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
	setvar VAR_PETALBURG_GYM_STATE, 2
	releaseall
	end

PetalburgCity_Gym_Movement_WallyExitGym:
	walk_down
	walk_down
	walk_down
	delay_16
	step_end

PetalburgCity_Gym_EventScript_Norman::
	lock
	faceplayer
	switch VAR_PETALBURG_GYM_STATE
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
	end

PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
	setvar VAR_0x8008, 0
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
	end

PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
	setvar VAR_0x8008, 1
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
	end

PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
	setvar VAR_0x8008, 2
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
	end

PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
	setvar VAR_0x8008, 3
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
	end

PetalburgCity_Gym_EventScript_BeginWallyTutorial::
	addobject LOCALID_WALLY
	playse SE_DOOR
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_DONT_TRANSITION_MUSIC
	playbgm MUS_FOLLOW_ME, FALSE
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
	removeobject LOCALID_WALLY
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
	setvar VAR_PETALBURG_GYM_STATE, 1
	setvar VAR_PETALBURG_CITY_STATE, 2
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	special InitBirchState
	warp MAP_PETALBURG_CITY, 15, 8
	waitstate
	release
	end

PetalburgCity_Gym_EventScript_WallyArriveSouth::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_WallyArriveNorth::
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
	waitmovement 0
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_WallyArriveWestEast::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_WallyFacePlayer::
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_WallyFaceDown::
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_NormanNoBadges::
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_NormanOneBadge::
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_NormanTwoBadges::
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_NormanThreeBadges::
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
	return

@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
	return

PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
	return

PetalburgCity_Gym_EventScript_NormanPostBattle::
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_GiveFacade2::
	call PetalburgCity_Gym_EventScript_GiveFacade
	release
	end

PetalburgCity_Gym_EventScript_NormanRematch::
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
	specialvar VAR_RESULT, IsEnigmaBerryValid
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
	checkitem ITEM_ENIGMA_BERRY
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
	checkpcitem ITEM_ENIGMA_BERRY
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
	setvar VAR_RESULT, TRUE
	return

PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
	setvar VAR_RESULT, FALSE
	return

PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
	giveitem ITEM_ENIGMA_BERRY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
	release
	end

PetalburgCity_Gym_EventScript_NormanBattle::
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_PETALBURG_GYM
	setvar VAR_PETALBURG_GYM_STATE, 7
	setflag FLAG_BADGE05_GET
	special ResetHealLocationFromDewford
	call EventScript_HideMrBriney
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
	clearflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
	setvar VAR_0x8008, 5
	call Common_EventScript_SetGymTrainers
	clearflag FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
	special DrawWholeMapView
	call PetalburgCity_Gym_EventScript_GiveFacade
	delay 30
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
	closemessage
	delay 40
	playse SE_DOOR
	delay 10
	addobject LOCALID_WALLYS_DAD
	switch VAR_FACING
	case DIR_NORTH, PetalburgCity_Gym_EventScript_WallysDadArrivesNorth
	case DIR_WEST, PetalburgCity_Gym_EventScript_WallysDadArrivesWest
	case DIR_EAST, PetalburgCity_Gym_EventScript_WallysDadArrivesEast
	end

PetalburgCity_Gym_EventScript_GiveFacade::
	giveitem ITEM_TM_FACADE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	setflag FLAG_RECEIVED_TM_FACADE
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
	return

PetalburgCity_Gym_EventScript_WallysDadArrivesNorth::
	setvar VAR_0x8008, 1
	goto PetalburgCity_Gym_EventScript_WallysDadArrives

PetalburgCity_Gym_EventScript_WallysDadArrivesEast::
	setvar VAR_0x8008, 2
	goto PetalburgCity_Gym_EventScript_WallysDadArrives

PetalburgCity_Gym_EventScript_WallysDadArrivesWest::
	setvar VAR_0x8008, 3
	goto PetalburgCity_Gym_EventScript_WallysDadArrives

PetalburgCity_Gym_EventScript_WallysDadArrives::
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
	waitmovement 0
	delay 10
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
	closemessage
	delay 20
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_DONT_TRANSITION_MUSIC
	playbgm MUS_FOLLOW_ME, FALSE
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
	removeobject LOCALID_WALLYS_DAD
	setvar VAR_PETALBURG_CITY_STATE, 4
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
	warp MAP_PETALBURG_CITY, 15, 8
	waitstate
	release
	end

PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
	waitmovement 0
	return

PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
	waitmovement 0
	return

PetalburgCity_Gym_Movement_WallysDadExitNorth:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_in_place_faster_up
	delay_8
	walk_in_place_down
	set_invisible
	step_end

PetalburgCity_Gym_Movement_WallysDadExitEast:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_in_place_faster_up
	delay_8
	walk_in_place_down
	set_invisible
	step_end

PetalburgCity_Gym_Movement_WallysDadExitWest:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_in_place_faster_up
	delay_8
	walk_in_place_down
	set_invisible
	step_end

PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
	delay_16
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
	delay_16
	walk_down
	walk_down
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
	delay_16
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

PetalburgCity_Gym_Movement_WallysDadEnterGym:
	walk_up
	delay_8
	walk_in_place_faster_right
	delay_8
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_up
	step_end

PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Gym_Movement_Unused:
	walk_in_place_faster_up
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_down
	step_end

PetalburgCity_Gym_Movement_WallyArriveNorth:
	delay_16
	walk_up
	delay_16
	delay_8
	walk_up
	walk_right
	walk_up
	walk_up
	walk_in_place_faster_left
	step_end

PetalburgCity_Gym_Movement_WallyArrive:
	delay_16
	walk_up
	delay_16
	delay_8
	walk_up
	walk_up
	step_end

PetalburgCity_Gym_Movement_WallyExitNorth:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_up
	delay_16
	walk_in_place_down
	step_end

PetalburgCity_Gym_Movement_WallyExitEast:
	walk_down
	walk_down
	walk_right
	walk_down
	walk_in_place_faster_up
	delay_16
	walk_in_place_down
	step_end

PetalburgCity_Gym_Movement_WallyExitSouthWest:
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_up
	delay_16
	walk_in_place_down
	step_end

PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
	delay_16
	delay_16
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
	walk_in_place_faster_down
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_right
	walk_down
	delay_8
	step_end

PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_SpeedRoomDoor::
	lockall
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 7
	setvar VAR_0x8009, 85
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_EnterRoom::
	closemessage
	delay 30
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
	waitstate
	releaseall
	end

PetalburgCity_Gym_EventScript_DontEnterRoom::
	releaseall
	end

PetalburgCity_Gym_EventScript_DoorLocked::
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
	releaseall
	end

@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
	lockall
	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, 98
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_ConfusionRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 7
	setvar VAR_0x8009, 46
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, 59
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_RightDefenseRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 7
	setvar VAR_0x8009, 59
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, 72
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, 20
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 7
	setvar VAR_0x8009, 20
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_LeftOHKORoomDoor::
	lockall
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, 33
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_RightOHKORoomDoor::
	lockall
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 7
	setvar VAR_0x8009, 33
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 1
	setvar VAR_0x8009, 7
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
	lockall
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
	setvar VAR_0x8008, 7
	setvar VAR_0x8009, 7
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
	end

PetalburgCity_Gym_EventScript_Randall::
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
	setvar VAR_0x8005, 0
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
	special DrawWholeMapView
	release
	end

PetalburgCity_Gym_EventScript_RandallPostBadge::
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
	end

PetalburgCity_Gym_EventScript_Parker::
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
	setvar VAR_0x8005, 0
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
	special DrawWholeMapView
	release
	end

PetalburgCity_Gym_EventScript_ParkerPostBadge::
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
	end

PetalburgCity_Gym_EventScript_George::
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
	setvar VAR_0x8005, 0
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
	special DrawWholeMapView
	release
	end

PetalburgCity_Gym_EventScript_GeorgePostBadge::
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
	end

PetalburgCity_Gym_EventScript_Berke::
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
	setvar VAR_0x8005, 0
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
	special DrawWholeMapView
	release
	end

PetalburgCity_Gym_EventScript_BerkePostBadge::
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
	end

PetalburgCity_Gym_EventScript_Mary::
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
	setvar VAR_0x8005, 0
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
	special DrawWholeMapView
	release
	end

PetalburgCity_Gym_EventScript_MaryPostBadge::
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
	end

PetalburgCity_Gym_EventScript_Alexia::
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
	setvar VAR_0x8005, 0
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
	special DrawWholeMapView
	release
	end

PetalburgCity_Gym_EventScript_AlexiaPostBadge::
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
	end

PetalburgCity_Gym_EventScript_Jody::
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
	end

PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
	setvar VAR_0x8005, 0
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
	special DrawWholeMapView
	release
	end

PetalburgCity_Gym_EventScript_JodyPostBadge::
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
	end

@ VAR_0x8004 below is the room number
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
	setvar VAR_0x8004, 1
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
	setvar VAR_0x8004, 2
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
	setvar VAR_0x8004, 3
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
	setvar VAR_0x8004, 4
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
	setvar VAR_0x8004, 5
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
	setvar VAR_0x8004, 6
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
	setvar VAR_0x8004, 7
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
	setvar VAR_0x8004, 8
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
	return

PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
	return

PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
	special PetalburgGymSlideOpenRoomDoors
	waitstate
	return

PetalburgCity_Gym_EventScript_UnlockRoomDoors::
	special PetalburgGymUnlockRoomDoors
	return

PetalburgCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_GymGuidePostVictory::
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

PetalburgCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
	goto PetalburgCity_Gym_EventScript_GymStatue
	end

PetalburgCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
	goto PetalburgCity_Gym_EventScript_GymStatue
	end

PetalburgCity_Gym_EventScript_GymStatueCertified::
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

PetalburgCity_Gym_EventScript_GymStatue::
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/PetalburgCity_Gym/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/PetalburgCity_Gym/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/PetalburgCity_Gym/text_es.inc"
.else
	.include "data/maps/PetalburgCity_Gym/text.inc"
.endif
.endif
.endif
=======
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
	.string "PAPÁ: ¿Eh?\p"
	.string "¡Anda, si es mi {PLAYER}!\n"
	.string "¿Ya habéis terminado\l"
	.string "con la mudanza?\p"
	.string "Me sorprende que hayas\n"
	.string "llegado aquí sin guía.\p"
	.string "Ah, claro, estás con un buen\n"
	.string "POKéMON…\p"
	.string "Entonces quieres entrenar POKéMON\n"
	.string "como yo, ¿no, {PLAYER}?\p"
	.string "¡Maravilloso!\n"
	.string "¡También es mi mayor deseo!$"

PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
	.string "Eh… Yo… quisiera conseguir\n"
	.string "un POKéMON, por favor…$"

PetalburgCity_Gym_Text_DadOhYoureWallyRight:
	.string "PAPÁ: ¿Cómo? Ah, sí…\n"
	.string "Tú eres BLASCO, ¿no?$"

PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
	.string "BLASCO: Me voy a quedar con mis\n"
	.string "parientes en PUEBLO VERDEGAL.\p"
	.string "Pensé que me sentiría solo allí, así\n"
	.string "que quiero llevarme un POKéMON.\p"
	.string "Pero nunca he conseguido atrapar\n"
	.string "uno, no sé cómo se hace…$"

PetalburgCity_Gym_Text_DadHmISee:
	.string "PAPÁ: Ya…$"

PetalburgCity_Gym_Text_DadPlayerGoWithWally:
	.string "PAPÁ: {PLAYER}, lo has oído,\n"
	.string "¿verdad?\p"
	.string "Ve con BLASCO y asegúrate\n"
	.string "de que atrapa un POKéMON.$"

PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
	.string "Ven, BLASCO, te presto mi POKéMON.\p"
	.string "¡BLASCO recibió un ZIGZAGOON!$"

PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
	.string "BLASCO: ¡Halaaaa!\n"
	.string "¡Un POKéMON!\p"
	.string "PAPÁ: También te voy a dar\n"
	.string "una POKé BALL. ¡Adelante!\p"
	.string "¡BLASCO recibió una POKé BALL!$"

PetalburgCity_Gym_Text_WallyOhWowThankYou:
	.string "BLASCO: ¡Guau!\n"
	.string "¡Gracias!$"

PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
	.string "{PLAYER}…\n"
	.string "¿De verdad que vas a venir conmigo?$"

PetalburgCity_Gym_Text_DadSoDidItWorkOut:
	.string "PAPÁ: ¿Qué tal os fue?$"

PetalburgCity_Gym_Text_WallyThankYouBye:
	.string "BLASCO: Gracias, muy bien.\n"
	.string "Aquí tienes tu POKéMON.\p"
	.string "{PLAYER}, gracias por acompañarme.\p"
	.string "Gracias a vosotros dos he\n"
	.string "logrado atrapar un POKéMON.\p"
	.string "Prometo cuidarlo muy bien.\p"
	.string "¡Huy! Mi madre me está esperando,\n"
	.string "así que me tengo que ir.\p"
	.string "¡Adiós, {PLAYER}!$"

PetalburgCity_Gym_Text_DadGoCollectBadges:
	.string "PAPÁ: Muy bien…\p"
	.string "{PLAYER}, si quieres figurar entre\n"
	.string "los mejores ENTRENADORES,\l"
	.string "tendrás que hacer lo siguiente…\p"
	.string "Ve a CIUDAD FÉRRICA y desafía\n"
	.string "a la LÍDER de GIMNASIO, PETRA.\p"
	.string "Después, ve a otros GIMNASIOS\n"
	.string "POKéMON y derrota a sus LÍDERES.\p"
	.string "Guarda las MEDALLAS que te den\n"
	.string "todos ellos, ¿entendido?\p"
	.string "Como yo también soy un LÍDER \n"
	.string "de GIMNASIO, nos enfrentaremos\l"
	.string "algún día, {PLAYER}.\p"
	.string "Pero eso sólo será cuando seas\n"
	.string "más fuerte, claro…$"

PetalburgCity_Gym_Text_NormanGoToRustboro:
	.string "PAPÁ: ¿Y eso?\n"
	.string "¿No vas a ir al GIMNASIO POKéMON\l"
	.string "de CIUDAD FÉRRICA?\p"
	.string "Desafiar a un ENTRENADOR novato\n"
	.string "no tiene ninguna emoción.\p"
	.string "{PLAYER}, si quieres desafiarme, primero\n"
	.string "tendrás que ser mucho más fuerte.\p"
	.string "Lucharé contigo cuando hayas ganado\n"
	.string "cuatro MEDALLAS, ¿vale?$"

PetalburgCity_Gym_Text_NormanGoToDewford:
	.string "PAPÁ: Ya veo… Has vencido a la LÍDER\n"
	.string "del GIMNASIO de CIUDAD FÉRRICA.\p"
	.string "Pero quedan muchos ENTRENADORES\n"
	.string "que son más fuertes que tú, {PLAYER}.\p"
	.string "Más allá del mar está PUEBLO AZULIZA.\n"
	.string "El LÍDER del GIMNASIO que hay allí\l"
	.string "se llama MARCIAL.\p"
	.string "Deberías lanzarle un desafío.$"

PetalburgCity_Gym_Text_YouHaveGottenStronger:
	.string "PAPÁ: Mmm… {PLAYER}, te has vuelto\n"
	.string "bastante más fuerte.\p"
	.string "Se ve por el número de MEDALLAS\n"
	.string "que has conseguido.$"

PetalburgCity_Gym_Text_NormanIntro:
	.string "PAPÁ: Mmm… Así que has conseguido\n"
	.string "hacerte con las cuatro MEDALLAS.\p"
	.string "Estupendo. Como te prometí,\n"
	.string "tendremos un combate POKéMON.\p"
	.string "{PLAYER}…\p"
	.string "Estoy tan orgulloso de poder\n"
	.string "enfrentarme a ti…\p"
	.string "¡Pero un combate es un combate!\p"
	.string "Haré todo lo que pueda como\n"
	.string "LÍDER de GIMNASIO para ganar.\p"
	.string "{PLAYER}, ¡será mejor que tú\n"
	.string "también des lo mejor de ti!$"

PetalburgCity_Gym_Text_NormanDefeat:
	.string "Hala…\p"
	.string "Increíble…\p"
	.string "No puedo creérmelo…\p"
	.string "He perdido contra la sangre\n"
	.string "de mi sangre… {PLAYER}…\p"
	.string "Pero las reglas son las reglas.\n"
	.string "Aquí tienes.$"

PetalburgCity_Gym_Text_ReceivedBalanceBadge:
	.string "¡{PLAYER} recibió la MEDALLA\n"
	.string "EQUILIBRIO de PAPÁ!$"

PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
	.string "PAPÁ: Con esta MEDALLA, la DEFENSA\n"
	.string "de tus POKéMON aumentará.\p"
	.string "Los POKéMON que conozcan\n"
	.string "el movimiento de MO SURF podrán\l"
	.string "usarlo para desplazarse por el agua.\p"
	.string "Éste es mi regalo para ti, {PLAYER}.\n"
	.string "Sé que harás buen uso de él.$"

PetalburgCity_Gym_Text_ExplainFacade:
	.string "PAPÁ: La MT42 contiene IMAGEN.\p"
	.string "Duplica la potencia de los\n"
	.string "movimientos si el POKéMON está\l"
	.string "envenenado, paralizado o quemado.\p"
	.string "Puede sacar ventaja de una\n"
	.string "situación poco favorable.$"

PetalburgCity_Gym_Text_DadHappyAndSad:
	.string "PAPÁ: Como LÍDER de GIMNASIO,\n"
	.string "me entristece perder…\p"
	.string "Pero, como padre, estoy orgulloso\n"
	.string "y algo triste de ver que ya te has\l"
	.string "hecho mayor. Es extraño…$"

PetalburgCity_Gym_Text_PleaseComeWithMe:
	.string "¡Anda, si estás aquí, {PLAYER}{KUN}!\p"
	.string "Ven conmigo un segundo.\n"
	.string "Tengo algo para ti.$"

PetalburgCity_Gym_Text_LetMeBorrowPlayer:
	.string "NORMAN, discúlpanos un momento.\p"
	.string "Déjame a {PLAYER}{KUN} un rato.\n"
	.string "Un momento, ¿eh?$"

PetalburgCity_Gym_Text_DadGoingToKeepTraining:
	.string "PAPÁ: {PLAYER}, no olvides visitar\n"
	.string "a tu madre de vez en cuando.\p"
	.string "Yo voy a quedarme aquí\n"
	.string "para entrenar a conciencia.\p"
	.string "¡Como ENTRENADOR, necesito\n"
	.string "tomarme mi revancha, {PLAYER}!$"

PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
	.string "PAPÁ: {PLAYER}, ¿qué tal te está\n"
	.string "yendo?\p"
	.string "El mundo de los POKéMON\n"
	.string "es complejo.\p"
	.string "Por mucho que te entrenes,\n"
	.string "nunca terminas de conocerlo…$"

PetalburgCity_Gym_Text_GymGuideAdvice:
	.string "Eh, ¿cómo lo llevas, {PLAYER}?\n"
	.string "¿Camino del CAMPEONATO?\p"
	.string "Las puertas de este GIMNASIO\n"
	.string "se abren cuando derrotas a los\l"
	.string "ENTRENADORES del camino.\p"
	.string "¡Oye, oye! ¡Estas puertas están\n"
	.string "abiertas! ¡No me ataques!\p"
	.string "Los ENTRENADORES del GIMNASIO\n"
	.string "de PETALIA usan toda clase\l"
	.string "de objetos.\p"
	.string "La puerta de la izquierda conduce\n"
	.string "a la SALA de VELOCIDAD.\p"
	.string "La puerta de la derecha lleva\n"
	.string "a la SALA de PRECISIÓN.\p"
	.string "El nombre de la sala está marcado\n"
	.string "en la puerta. Elige con cuidado.\p"
	.string "Cuando te hayas decidido\n"
	.string "por una, ¡ve a por todas!$"

PetalburgCity_Gym_Text_GymGuidePostVictory:
	.string "¡{PLAYER}! ¡Impresionante!\n"
	.string "¡Has vencido a tu propio padre!\p"
	.string "¡Me has dejado con la boca abierta!\n"
	.string "¡Es un momento emocionante!$"

PetalburgCity_Gym_Text_RandallIntro:
	.string "La capacidad de atacar antes\n"
	.string "que tu oponente…\p"
	.string "Sólo eso constituye una gran\n"
	.string "ventaja, ¿no crees?$"

PetalburgCity_Gym_Text_RandallDefeat:
	.string "¡Ha sido un gran combate!$"

PetalburgCity_Gym_Text_RandallPostBattle:
	.string "Ve a la siguiente sala, donde\n"
	.string "te aguarda un nuevo desafío.\p"
	.string "A la izquierda está la SALA\n"
	.string "de CONFUSIÓN.\p"
	.string "A la derecha se encuentra\n"
	.string "la SALA de DEFENSA.$"

PetalburgCity_Gym_Text_RandallPostBadge:
	.string "Venzas a quien venzas, y te derrote\n"
	.string "quien te derrote, nunca dejes de\l"
	.string "entrenarte y entrenar tus POKéMON.\p"
	.string "Más o menos en eso consiste\n"
	.string "ser un LÍDER de GIMNASIO.$"

PetalburgCity_Gym_Text_ParkerIntro:
	.string "Ésta es la SALA de CONFUSIÓN.\p"
	.string "¡Vamos a comprobar lo bien que\n"
	.string "te llevas con tus POKéMON!$"

PetalburgCity_Gym_Text_ParkerDefeat:
	.string "No hay quien confunda a tu equipo…\n"
	.string "Se nota que estáis unidos a tope.$"

PetalburgCity_Gym_Text_ParkerPostBattle:
	.string "La siguiente sala es la SALA\n"
	.string "de FUERZA. ¿Resistirás un combate\l"
	.string "a la máxima potencia?$"

PetalburgCity_Gym_Text_ParkerPostBadge:
	.string "Desde que derrotaste a nuestro\n"
	.string "LÍDER, el entrenamiento se ha\l"
	.string "vuelto mucho más duro.$"

PetalburgCity_Gym_Text_GeorgeIntro:
	.string "Justo cuando piensas que vas\n"
	.string "a ganar, tu rival restaura PS…\p"
	.string "¿Tienes idea de lo mal que\n"
	.string "sienta una cosa así?\p"
	.string "¡Pues ahora mismo lo vas\n"
	.string "a comprobar!$"

PetalburgCity_Gym_Text_GeorgeDefeat:
	.string "No conseguí restaurar\n"
	.string "suficientes PS…\p"
	.string "Vaya potencia de ATAQUE…$"

PetalburgCity_Gym_Text_GeorgePostBattle:
	.string "No debería haber esperado\n"
	.string "menos de alguien como tú.\p"
	.string "Un momento… Tener un padre\n"
	.string "ENTRENADOR no basta.\l"
	.string "¡También hay que esforzarse!\p"
	.string "Y yo he perdido porque no me\n"
	.string "he esforzado lo suficiente…\p"
	.string "¡Adelante! Ahora viene la\n"
	.string "SALA de K.O. INSTANTÁNEO.$"

PetalburgCity_Gym_Text_GeorgePostBadge:
	.string "Voy a seguir entrenándome mucho\n"
	.string "hasta convertirme en un LÍDER\l"
	.string "de GIMNASIO.$"

PetalburgCity_Gym_Text_BerkeIntro:
	.string "No voy a ponértelo fácil porque\n"
	.string "tu padre sea nuestro LÍDER.\p"
	.string "Te voy a enseñar lo mal que\n"
	.string "sienta recibir un golpe crítico.$"

PetalburgCity_Gym_Text_BerkeDefeat:
	.string "Qué fuerza…\n"
	.string "Eres el no va más.$"

PetalburgCity_Gym_Text_BerkePostBattle:
	.string "Tu padre es muy fuerte.\n"
	.string "Es un ENTRENADOR muy respetado.\p"
	.string "Y tengo la impresión de que\n"
	.string "llegarás tan lejos como él.\p"
	.string "¡Espero que ambos entabléis\n"
	.string "un gran combate!$"

PetalburgCity_Gym_Text_BerkePostBadge:
	.string "Desde que tu padre es el LÍDER,\n"
	.string "los ENTRENADORES de CIUDAD\l"
	.string "PETALIA son mucho más fuertes.$"

PetalburgCity_Gym_Text_MaryIntro:
	.string "Ji, ji, ji…\n"
	.string "Ésta es la SALA de PRECISIÓN.\p"
	.string "A nuestros rivales no les sienta\n"
	.string "muy bien que todos los ataques\l"
	.string "den en el blanco.$"

PetalburgCity_Gym_Text_MaryDefeat:
	.string "Eres muy superior a mí…$"

PetalburgCity_Gym_Text_MaryPostBattle:
	.string "Hay ENTRENADORES aún\n"
	.string "más fuertes esperándote.\p"
	.string "A la izquierda, está la SALA\n"
	.string "de DEFENSA y, a la derecha,\l"
	.string "la SALA de RECUPERACIÓN.\p"
	.string "Cualquiera de las dos pondrá\n"
	.string "a prueba el poder de ATAQUE\l"
	.string "de tus POKéMON.$"

PetalburgCity_Gym_Text_MaryPostBadge:
	.string "¿Sabes lo que los ENTRENADORES\n"
	.string "queremos conseguir?\p"
	.string "¡Convertirnos en las almas\n"
	.string "gemelas de nuestros POKéMON!$"

PetalburgCity_Gym_Text_AlexiaIntro:
	.string "Cuanto más alta es la DEFENSA,\n"
	.string "más implacable es mi ataque.$"

PetalburgCity_Gym_Text_AlexiaDefeat:
	.string "Nuestras defensas no han sido\n"
	.string "suficientes…$"

PetalburgCity_Gym_Text_AlexiaPostBattle:
	.string "Creo que me has enseñado\n"
	.string "una valiosa lección.\p"
	.string "¡Sigue adelante! La puerta de la\n"
	.string "izquierda lleva a la SALA de FUERZA.\p"
	.string "La puerta de la derecha lleva\n"
	.string "a la SALA de K.O. INSTANTÁNEO.\p"
	.string "Los ENTRENADORES de ambas\n"
	.string "salas poseen habilidades ofensivas.$"

PetalburgCity_Gym_Text_AlexiaPostBadge:
	.string "¡Hola! ¿Has probado a hacer SURF?$"

PetalburgCity_Gym_Text_JodyIntro:
	.string "El LÍDER de nuestro GIMNASIO\n"
	.string "nos ha dicho que debemos vencerte.\p"
	.string "¡Da igual que sea tu padre!$"

PetalburgCity_Gym_Text_JodyDefeat:
	.string "Pero si… ¡me has vencido!$"

PetalburgCity_Gym_Text_JodyPostBattle:
	.string "Usas los POKéMON igualito\n"
	.string "que tu padre.\p"
	.string "¡Venga! Tu padre, el LÍDER\n"
	.string "del GIMNASIO, te espera.$"

PetalburgCity_Gym_Text_JodyPostBadge:
	.string "Sin duda es importante\n"
	.string "fortalecer tus POKéMON.\p"
	.string "Pero ¿qué distingue al vencedor?\p"
	.string "Está claro: los sentimientos que\n"
	.string "alberga hacia sus POKéMON.$"

PetalburgCity_Gym_Text_DoorAppearsLocked:
	.string "Parece que esta puerta está cerrada…$"

PetalburgCity_Gym_Text_EnterSpeedRoom:
	.string "En el cartel pone: “SALA\n"
	.string "de VELOCIDAD”.\p"
	.string "¿Quieres entrar?$"

@ Unused
PetalburgCity_Gym_Text_DoorAppearsLocked2:
	.string "This door appears to be locked\n"
	.string "right now…$"

PetalburgCity_Gym_Text_EnterAccuracyRoom:
	.string "En el cartel pone: “SALA\n"
	.string "de PRECISIÓN”.\p"
	.string "¿Quieres entrar?$"

PetalburgCity_Gym_Text_EnterConfusionRoom:
	.string "En el cartel pone: “SALA\n"
	.string "de CONFUSIÓN”.\p"
	.string "¿Quieres entrar?$"

PetalburgCity_Gym_Text_EnterDefenseRoom:
	.string "En el cartel pone: “SALA\n"
	.string "de DEFENSA”.\p"
	.string "¿Quieres entrar?$"

PetalburgCity_Gym_Text_EnterRecoveryRoom:
	.string "En el cartel pone: “SALA\n"
	.string "de RECUPERACIÓN”.\p"
	.string "¿Quieres entrar?$"

PetalburgCity_Gym_Text_EnterStrengthRoom:
	.string "En el cartel pone: “SALA\n"
	.string "de FUERZA”.\p"
	.string "¿Quieres entrar?$"

PetalburgCity_Gym_Text_EnterOHKORoom:
	.string "En el cartel pone: “SALA\n"
	.string "de K.O. INSTANTÁNEO”.\p"
	.string "¿Quieres entrar?$"

PetalburgCity_Gym_Text_EnterGymLeadersRoom:
	.string "“SALA del LÍDER del GIMNASIO”\p"
	.string "El cartel dice: “Comprueba por ti\n"
	.string "mismo qué POKéMON te espera”.\p"
	.string "¿Quieres entrar?$"

PetalburgCity_Gym_Text_GymStatue:
	.string "GIMNASIO POKéMON de CIUDAD PETALIA$"

PetalburgCity_Gym_Text_GymStatueCertified:
	.string "GIMNASIO POKéMON de CIUDAD PETALIA\p"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
	.string "{PLAYER}$"

PetalburgCity_Gym_Text_NormanPreRematch:
	.string "PAPÁ: {PLAYER}…\n"
	.string "Ya sabía yo que ibas a venir.\p"
	.string "Yo siempre estoy dispuesto\n"
	.string "a aceptar un desafío.\p"
	.string "Sabes qué quiero decir, ¿verdad?\p"
	.string "En un GIMNASIO, los lazos familiares\n"
	.string "que te puedan unir no importan.\p"
	.string "Es más, precisamente porque soy tu\n"
	.string "padre, debemos luchar dando lo mejor\l"
	.string "de nosotros, ¿no crees, {PLAYER}?$"

PetalburgCity_Gym_Text_NormanRematchDefeat:
	.string "Eh… Ja, ja, ja… Está claro que\n"
	.string "no te has andado con chiquitas…$"

PetalburgCity_Gym_Text_NormanPostRematch:
	.string "PAPÁ: {PLAYER}…\n"
	.string "Dime, ¿cuál es tu sueño?\p"
	.string "Pues el mío…\n"
	.string "Ja, ja, ja…\l"
	.string "¡Justamente acaba de hacerse realidad!$"

PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
	.string "PAPÁ: {PLAYER}…\n"
	.string "Ya sabía yo que ibas a venir.\p"
	.string "Yo siempre estoy dispuesto\n"
	.string "a aceptar un desafío.\p"
	.string "Sabes qué quiero decir, ¿verdad?\p"
	.string "En un GIMNASIO, los lazos familiares\n"
	.string "que te puedan unir no importan.\p"
	.string "¿Cómo? Un momento, {PLAYER}.\p"
	.string "¿Sólo tienes un POKéMON\n"
	.string "en condiciones de luchar?\p"
	.string "Lo siento mucho, pero necesitas\n"
	.string "al menos dos POKéMON.$"

>>>>>>> Egg/spanish
