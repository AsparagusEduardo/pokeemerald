.set LOCALID_FAT_MAN, 1
.set LOCALID_MAN_1, 2
.set LOCALID_RICH_BOY, 3
.set LOCALID_GRUNT_1, 5
.set LOCALID_COOK, 6
.set LOCALID_OLD_WOMAN, 7
.set LOCALID_GIRL, 8
.set LOCALID_TY, 9
.set LOCALID_GABBY, 10
.set LOCALID_CAPT_STERN, 11
.set LOCALID_GRUNT_2, 18
.set LOCALID_GRUNT_3, 19
.set LOCALID_GRUNT_4, 26
.set LOCALID_GRUNT_5, 27
.set LOCALID_GRUNT_6, 28
.set LOCALID_GRUNT_7, 29
.set LOCALID_GRUNT_8, 30
.set LOCALID_GRUNT_9, 31
.set LOCALID_GRUNT_11, 33
.set LOCALID_SCOTT, 35

@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h

SlateportCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
	.byte 0

SlateportCity_OnTransition:
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
	call SlateportCity_EventScript_EnterSlateport
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
	end

SlateportCity_EventScript_EnterSlateport::
	setflag FLAG_VISITED_SLATEPORT_CITY
	setvar VAR_CONTEST_HALL_STATE, 0
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
	return

SlateportCity_EventScript_MovePeopleForSternInterview::
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
	setobjectxyperm LOCALID_COOK, 27, 16
	setobjectxyperm LOCALID_GIRL, 28, 16
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
	setobjectxyperm LOCALID_MAN_1, 31, 14
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
	return

SlateportCity_EventScript_SetReadyForScottScene::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	getplayerxy VAR_0x8004, VAR_0x8005
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
	setobjectxyperm LOCALID_SCOTT, 23, 27
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
	return

SlateportCity_EventScript_MoveScottLeft::
	setobjectxyperm LOCALID_SCOTT, 22, 27
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
	return

SlateportCity_OnFrame:
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
	.2byte 0

SlateportCity_EventScript_ScottScene::
	lockall
	addobject LOCALID_SCOTT
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
	waitmovement 0
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 60
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
	waitmovement 0
	removeobject LOCALID_SCOTT
	setobjectxyperm LOCALID_SCOTT, 10, 12
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
	addvar VAR_SCOTT_STATE, 1
	releaseall
	end

SlateportCity_Movement_PlayerFaceScott:
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

SlateportCity_Movement_ScottApproachPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_Movement_ScottExit:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

SlateportCity_EventScript_EnergyGuru::
	lock
	faceplayer
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
	waitmessage
	pokemart SlateportCity_Pokemart_EnergyGuru
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_Pokemart_EnergyGuru:
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CARBOS
	.2byte ITEM_ZINC
	.2byte ITEM_CALCIUM
	.2byte ITEM_HP_UP
	pokemartlistend

SlateportCity_EventScript_EffortRibbonWoman::
	lock
	faceplayer
	bufferleadmonspeciesname STR_VAR_1
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message SlateportCity_Text_ReceivedEffortRibbon
	waitfanfare
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
	special GiveLeadMonEffortRibbon
	release
	end

SlateportCity_EventScript_MonEVsNotMaxed::
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_MonHasEffortRibbon::
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Cook::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_CookSternInterview::
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_OldWoman::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_OldWomanSternInterview::
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Girl::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_GirlSternInterview::
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_GirlSecretBase::
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_RichBoy::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_RichBoySternInterview::
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_FatMan::
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
	end

SlateportCity_EventScript_FatManSternInterview::
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
	end

SlateportCity_EventScript_Man1::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Man1SternInterview::
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Woman1::
	lock
	faceplayer
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Woman1AquaGone::
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_BattleTentSign::
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_SternsShipyardSign::
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_SternsShipyardNearsCompletion::
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_SternsShipyardFerryComplete::
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_PokemonFanClubSign::
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_OceanicMuseumSign::
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_CitySign::
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
	end

SlateportCity_EventScript_MarketSign::
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_HarborSign::
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_HarborSignFerryComplete::
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_EventScript_NameRatersHouseSign::
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
	end

SlateportCity_EventScript_Maniac::
	lock
	faceplayer
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
	release
	end

@ Unclear if the text here was meant to be different, but its not
SlateportCity_EventScript_ManiacSternInterview::
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_Woman2::
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
	end

SlateportCity_EventScript_Sailor1::
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
	end

SlateportCity_EventScript_Sailor2::
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
	end

SlateportCity_EventScript_PokefanF::
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
	end

SlateportCity_EventScript_Man2::
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
	end

SlateportCity_EventScript_AquaGrunt1::
	lock
	faceplayer
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt2::
	lock
	faceplayer
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt3::
	lock
	faceplayer
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt4::
	lock
	faceplayer
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt5::
	lock
	faceplayer
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt6::
	lock
	faceplayer
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt7::
	lock
	faceplayer
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt8::
	lock
	faceplayer
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_AquaGrunt9::
	lock
	faceplayer
	playse SE_PIN
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
	waitmovement 0
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
	waitmovement 0
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
	waitmovement 0
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
	waitmovement 0
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
	waitmovement 0
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
	waitmovement 0
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_Movement_DelayAquaGrunt:
	delay_16
	delay_16
	step_end

SlateportCity_EventScript_AquaGrunt10::
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
	end

SlateportCity_EventScript_AquaGrunt11::
	lock
	faceplayer
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_EventScript_DollClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_PokemartDecor_Dolls:
	.2byte DECOR_AZURILL_DOLL
	.2byte DECOR_MARILL_DOLL
	.2byte DECOR_SKITTY_DOLL
	pokemartlistend

SlateportCity_EventScript_ComeBackWithSecretPower::
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_DecorClerk::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
	message gText_HowMayIServeYou
	waitmessage
	pokemartdecoration SlateportCity_PokemartDecor
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_PokemartDecor:
	.2byte DECOR_RED_BRICK
	.2byte DECOR_BLUE_BRICK
	.2byte DECOR_YELLOW_BRICK
	.2byte DECOR_RED_BALLOON
	.2byte DECOR_BLUE_BALLOON
	.2byte DECOR_YELLOW_BALLOON
	.2byte DECOR_C_LOW_NOTE_MAT
	.2byte DECOR_D_NOTE_MAT
	.2byte DECOR_E_NOTE_MAT
	.2byte DECOR_F_NOTE_MAT
	.2byte DECOR_G_NOTE_MAT
	.2byte DECOR_A_NOTE_MAT
	.2byte DECOR_B_NOTE_MAT
	.2byte DECOR_C_HIGH_NOTE_MAT
	pokemartlistend

SlateportCity_EventScript_PowerTMClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SlateportCity_Pokemart_PowerTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SlateportCity_Pokemart_PowerTMs:
	.2byte ITEM_TM_HIDDEN_POWER
	.2byte ITEM_TM_SECRET_POWER
	pokemartlistend

@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
SlateportCity_EventScript_CaptStern::
	lockall
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 10
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 25
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
	waitmovement 0
	removeobject LOCALID_GABBY
	removeobject LOCALID_TY
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
	waitmovement 0
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
	waitmovement 0
	removeobject LOCALID_CAPT_STERN
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
	setvar VAR_SLATEPORT_CITY_STATE, 2
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
	waitstate
	releaseall
	end

SlateportCity_Movement_OldWomanConcern:
	delay_16
	delay_16
	emote_question_mark
	walk_in_place_faster_right
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

SlateportCity_Movement_ManConcern:
	emote_question_mark
	walk_in_place_faster_up
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

SlateportCity_Movement_GabbyExit:
	delay_16
	walk_left
	walk_left
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

SlateportCity_Movement_TyExit:
	walk_down
	walk_left
	walk_left
	walk_left
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

SlateportCity_Movement_Unused:
	walk_down
	walk_in_place_faster_up
	step_end

SlateportCity_Movement_SternEnterHarbor:
	walk_right
	walk_up
	walk_up
	set_invisible
	step_end

SlateportCity_Movement_SternWatchGabbyAndTyExit:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_left
	step_end

SlateportCity_Movement_PlayerEnterHarbor:
	walk_in_place_faster_right
	delay_16
	delay_16
	walk_right
	walk_up
	step_end

SlateportCity_Movement_PlayerFaceStern:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_down
	step_end

SlateportCity_EventScript_Ty::
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
	end

SlateportCity_EventScript_Gabby::
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
	end

SlateportCity_EventScript_Man3::
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
	end

SlateportCity_EventScript_BerryPowderClerk::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
	giveitem ITEM_POWDER_JAR
	setflag FLAG_RECEIVED_POWDER_JAR
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_ReceivedPowderJar::
	setvar VAR_0x8004, 1
	specialvar VAR_RESULT, HasEnoughBerryPowder
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
	special DisplayBerryPowderVendorMenu
	goto SlateportCity_EventScript_ChooseBerryPowderItem
	end

SlateportCity_EventScript_ExplainBerryPowder::
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
	release
	end

SlateportCity_EventScript_ChooseBerryPowderItem::
	message SlateportCity_Text_ExchangeWhatWithIt
	waitmessage
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, SlateportCity_EventScript_EnergyPowder
	case 1, SlateportCity_EventScript_EnergyRoot
	case 2, SlateportCity_EventScript_HealPowder
	case 3, SlateportCity_EventScript_RevivalHerb
	case 4, SlateportCity_EventScript_Protein
	case 5, SlateportCity_EventScript_Iron
	case 6, SlateportCity_EventScript_Carbos
	case 7, SlateportCity_EventScript_Calcium
	case 8, SlateportCity_EventScript_Zinc
	case 9, SlateportCity_EventScript_HPUp
	case 10, SlateportCity_EventScript_PPUp
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
	end

SlateportCity_EventScript_EnergyPowder::
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
	setvar VAR_0x8009, 50
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_EnergyRoot::
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
	setvar VAR_0x8009, 80
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_HealPowder::
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
	setvar VAR_0x8008, ITEM_HEAL_POWDER
	setvar VAR_0x8009, 50
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_RevivalHerb::
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
	setvar VAR_0x8009, 300
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Protein::
	bufferitemname STR_VAR_1, ITEM_PROTEIN
	setvar VAR_0x8008, ITEM_PROTEIN
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Iron::
	bufferitemname STR_VAR_1, ITEM_IRON
	setvar VAR_0x8008, ITEM_IRON
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Carbos::
	bufferitemname STR_VAR_1, ITEM_CARBOS
	setvar VAR_0x8008, ITEM_CARBOS
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Calcium::
	bufferitemname STR_VAR_1, ITEM_CALCIUM
	setvar VAR_0x8008, ITEM_CALCIUM
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_Zinc::
	bufferitemname STR_VAR_1, ITEM_ZINC
	setvar VAR_0x8008, ITEM_ZINC
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_HPUp::
	bufferitemname STR_VAR_1, ITEM_HP_UP
	setvar VAR_0x8008, ITEM_HP_UP
	setvar VAR_0x8009, 1000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_PPUp::
	bufferitemname STR_VAR_1, ITEM_PP_UP
	setvar VAR_0x8008, ITEM_PP_UP
	setvar VAR_0x8009, 3000
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
	end

SlateportCity_EventScript_CancelPowderItemSelect::
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
	special RemoveBerryPowderVendorMenu
	release
	end

SlateportCity_EventScript_TryBuyBerryPowderItem::
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
	copyvar VAR_0x8004, VAR_0x8009
	specialvar VAR_RESULT, HasEnoughBerryPowder
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
	giveitem VAR_0x8008
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
	copyvar VAR_0x8004, VAR_0x8009
	special TakeBerryPowder
	special PrintPlayerBerryPowderAmount
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
	special RemoveBerryPowderVendorMenu
	release
	end

SlateportCity_EventScript_NoRoomForBerryPowderItem::
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
	special RemoveBerryPowderVendorMenu
	release
	end

SlateportCity_EventScript_NotEnoughBerryPowder::
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
	goto SlateportCity_EventScript_ChooseBerryPowderItem
	end

SlateportCity_EventScript_ScottBattleTentScene::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	opendoor 10, 12
	waitdooranim
	addobject LOCALID_SCOTT
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
	waitmovement 0
	closedoor 10, 12
	waitdooranim
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
	waitmovement 0
	removeobject LOCALID_SCOTT
	addvar VAR_SCOTT_STATE, 1
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
	releaseall
	end

SlateportCity_Movement_PushPlayerDown:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

SlateportCity_Movement_PlayerWatchScottExit:
	delay_16
	walk_in_place_faster_right
	step_end

SlateportCity_Movement_ScottExitBattleTent:
	delay_8
	walk_down
	step_end

SlateportCity_Movement_ScottExitAfterBattleTent:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_EventScript_BerryCrushRankingsSign::
	lockall
	special ShowBerryCrushRankings
	waitstate
	releaseall
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SlateportCity/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SlateportCity/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SlateportCity/text_es.inc"
.else
	.include "data/maps/SlateportCity/text.inc"
.endif
.endif
.endif
=======
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
	.string "¡Soy CURRO!\n"
	.string "¡Se me va la olla y te vendo todo\l"
	.string "lo que necesitas barato, barato!$"

SlateportCity_Text_OhYourPokemon:
	.string "¿Eh?\n"
	.string "Tu {STR_VAR_1}…$"

SlateportCity_Text_PleaseGiveItThisEffortRibbon:
	.string "¡Se esfuerza cantidad, sí, señor!\p"
	.string "Como recompensa, dale esta\n"
	.string "CINTA ESFUERZO.$"

SlateportCity_Text_ReceivedEffortRibbon:
	.string "{PLAYER} recibió la CINTA ESFUERZO.$"

SlateportCity_Text_PutEffortRibbonOnMon:
	.string "{PLAYER} dio la CINTA ESFUERZO\n"
	.string "a {STR_VAR_1}.$"

SlateportCity_Text_GoForItLittleHarder:
	.string "Tienes que esforzarte un poco más…\p"
	.string "Si lo haces, le daré algo muy chulo\n"
	.string "a tu POKéMON.$"

SlateportCity_Text_EffortRibbonLooksGoodOnIt:
	.string "¡Oh! ¡La CINTA ESFUERZO le sienta\n"
	.string "estupendamente a tu {STR_VAR_1}!$"

SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
	.string "La luz del faro llega lejísimos…\p"
	.string "Me pregunto si no ciega a los\n"
	.string "POKéMON que viven en el mar…$"

SlateportCity_Text_SeaweedFullOfLife:
	.string "¡Eh, mira esto!\p"
	.string "El pescado que consigues por aquí\n"
	.string "está fresquísimo. ¡Todavía colea!\p"
	.string "¡Vamos, si parece que te va a morder\n"
	.string "y todo!$"

SlateportCity_Text_HowTownIsBornAndGrows:
	.string "Cuando el agua está limpia, la tierra\n"
	.string "da sus frutos con generosidad.\p"
	.string "Allá donde hay comida, se concentra\n"
	.string "la gente y pronto se abre un mercado.\p"
	.string "Y así es como nace y crece una ciudad.$"

SlateportCity_Text_SlateportWonderfulPlace:
	.string "Comprar en un lugar donde el aire\n"
	.string "es fresco y limpio es genial.\p"
	.string "¡CIUDAD PORTUAL es un lugar\n"
	.string "maravilloso!$"

SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
	.string "Si pones los MUÑECOS y los COJINES\n"
	.string "directamente en el suelo, se ensucian.\p"
	.string "Voy a comprar algunos LADRILLOS\n"
	.string "para poner mis MUÑECOS y COJINES\l"
	.string "encima y mantenerlos bien limpios.$"

SlateportCity_Text_GoingToCompeteInBattleTent:
	.string "¡Toma ya! ¡Yo también voy a competir\n"
	.string "en la TIENDA de BATALLA!\p"
	.string "Pero antes tengo que atrapar\n"
	.string "algunos POKéMON…$"

SlateportCity_Text_BushedHikingFromMauville:
	.string "Uf… Esto es impresionante…\p"
	.string "He venido a patita desde CIUDAD\n"
	.string "MALVALONA, pero este sitio es enorme…\p"
	.string "Si lo hubiera sabido, me habría\n"
	.string "traído la BICI…$"

SlateportCity_Text_EveryoneCallsHimCaptStern:
	.string "BABOR, el hombre que fundó el MUSEO,\n"
	.string "también es el jefe de un equipo\l"
	.string "de exploración submarina.\p"
	.string "Por eso todos le llaman CAP. BABOR.$"

SlateportCity_Text_WhatsLongLineOverThere:
	.string "¿Qué es eso de allí?\n"
	.string "Esa cola tan larga…$"

SlateportCity_Text_VisitedMuseumOften:
	.string "Cuando era pequeña, venía mucho\n"
	.string "al MUSEO.\p"
	.string "Después de ver las colecciones, soñaba\n"
	.string "despierta con los misterios del mar…$"

SlateportCity_Text_QuitPushing:
	.string "¡Oye, tú! ¡No te cueles!\n"
	.string "¿No ves que hay una cola?$"

SlateportCity_Text_AquaHasPolicy:
	.string "El EQUIPO AQUA suele reunirse\n"
	.string "en los lugares donde van a realizar\l"
	.string "alguna operación.$"

SlateportCity_Text_BossIsBrilliant:
	.string "Nuestro JEFE es un genio.\p"
	.string "¿Qué querrá hacer con un MUSEO?$"

SlateportCity_Text_WhatsNewSchemeIWonder:
	.string "¿Cuál será el nuevo plan?\p"
	.string "Nuestro JEFE da miedo cuando\n"
	.string "se enfada, así que mejor procuro\l"
	.string "no meter la pata.$"

SlateportCity_Text_ShouldTakeItAll:
	.string "¡Si hay algo que nos interesa en el\n"
	.string "MUSEO, deberíamos llevárnoslo entero!$"

SlateportCity_Text_DontButtIn:
	.string "¡Oye, tú!\n"
	.string "¡Aquí no pintas nada! ¡Aire!$"

SlateportCity_Text_RemindsMeOfLongLineForGames:
	.string "Vaya cola, ¿eh?\p"
	.string "Me recuerda a aquellos tiempos cuando\n"
	.string "hacía cola en la tienda de videojuegos\l"
	.string "para comprar la última novedad.$"

SlateportCity_Text_WhyAreWeLiningUp:
	.string "¿Y por qué hacemos cola y pagamos\n"
	.string "entrada y todo? ¡Deberíamos colarnos!$"

SlateportCity_Text_WhatDoYouWant:
	.string "¿Qué?\n"
	.string "¿Qué quieres?$"

SlateportCity_Text_IllReadSignForYou:
	.string "¿Quieres leer este cartel?\n"
	.string "¡Deja, ya lo hago yo!$"

SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
	.string "Vamos a ver…\p"
	.string "Mmm… Creo que pone esto:\n"
	.string "“La vida en el mar es infinita”.\p"
	.string "Sí, sí, segurísimo que pone eso.$"

SlateportCity_Text_ShouldveBroughtMyGameBoy:
	.string "Ufff…\p"
	.string "Cómo me aburro… Debería haberme\n"
	.string "traído mi consola Game Boy Advance.\p"
	.string "Dónde tendré la cabeza…$"

SlateportCity_Text_HotSpringsAfterOperation:
	.string "¡Cuando esto acabe, el JEFE\n"
	.string "nos va a llevar de excursión!\p"
	.string "Lo ha prometido.\n"
	.string "¡Qué ganas tengo!$"

SlateportCity_Text_SeaIsSoWet:
	.string "El mar es tan, tan inmenso…\p"
	.string "¿Saldrá toda esta agua de las lágrimas\n"
	.string "derramadas por los POKéMON?$"

SlateportCity_Text_SinkOldBoats:
	.string "¿Sabes qué se hace con los barcos que\n"
	.string "están demasiado viejos para navegar?\p"
	.string "Los hunden en el mar para que\n"
	.string "los POKéMON puedan vivir en ellos.$"

SlateportCity_Text_BuyTooMuch:
	.string "Cada vez que vengo aquí me entran\n"
	.string "ganas de comprarlo todo.$"

SlateportCity_Text_GetNameRaterToHelpYou:
	.string "Si quieres cambiar el nombre de tu\n"
	.string "POKéMON, ve a ver al INSPECTOR\l"
	.string "de los MOTES.$"

SlateportCity_Text_CantChangeTradeMonName:
	.string "Cuando recibes un POKéMON por\n"
	.string "intercambio, no puedes cambiarle\l"
	.string "el nombre. ¿Sabes por qué?\p"
	.string "El cariño que el ENTRENADOR de ese\n"
	.string "POKéMON le tenía está reflejado\l"
	.string "en el nombre que lleva. Por eso.$"

SlateportCity_Text_BattleTentBuiltRecently:
	.string "Han construido una TIENDA de\n"
	.string "BATALLA en CIUDAD PORTUAL.\p"
	.string "Los GIMNASIOS molan, pero las TIENDAS\n"
	.string "de BATALLA tienen algo especial.\p"
	.string "¡Deberías hacerte con POKéMON\n"
	.string "fuertes antes de entrar en una!$"

SlateportCity_Text_CaptSternBeingInterviewed:
	.string "Pensaba que igual era una estrella\n"
	.string "de cine y podría pedirle un autógrafo.\p"
	.string "Pero ¿a quién están entrevistando?\n"
	.string "¿No es el CAP. BABOR?$"

SlateportCity_Text_InterviewerSoCool:
	.string "Ser periodista parece guay.\p"
	.string "¡Cuando sea mayor, yo también quiero\n"
	.string "tener un trabajo así de chulo!$"

SlateportCity_Text_SternSaysDiscoveredSomething:
	.string "El CAP. BABOR dice que han descubierto\n"
	.string "algo en el fondo del mar.\p"
	.string "¿Qué será?$"

SlateportCity_Text_CaptainComeBackWithBigFish:
	.string "¿Qué pasa aquí?\p"
	.string "¿El CAPITÁN ha pescado algo gordo\n"
	.string "en el fondo del mar?$"

SlateportCity_Text_AmIOnTV:
	.string "¡Eh! ¿Ves la imagen en la cámara?\n"
	.string "¿Salgo en la tele? ¿Salgo?$"

SlateportCity_Text_CaptainsACelebrity:
	.string "¡Una entrevista para la tele!\n"
	.string "¡El CAPITÁN tiene que ser famosísimo!$"

SlateportCity_Text_BigSmileForCamera:
	.string "TEO: ¡CAP. BABOR, regale una gran\n"
	.string "sonrisa a nuestros telespectadores!$"

SlateportCity_Text_MostInvaluableExperience:
	.string "GABI: Ya veo… Ha sido una\n"
	.string "experiencia inolvidable…$"

SlateportCity_Text_SternMoveAheadWithExploration:
	.string "CAP. BABOR: Así es. Y queremos seguir\n"
	.string "avanzando con la investigación.$"

SlateportCity_Text_GabbyWonderfulThanksForInterview:
	.string "GABI: ¡Qué gran noticia, CAP. BABOR!\n"
	.string "Muchísimas gracias por sacar un rato de\l"
	.string "su apretada agenda para dedicárnoslo.\p"
	.string "Esperamos poder seguir disfrutando de\n"
	.string "sus fascinantes historias en próximas\l"
	.string "entrevistas.$"

SlateportCity_Text_SternWhewFirstInterview:
	.string "CAP. BABOR: Uf…\p"
	.string "Era la primera vez que me grababan\n"
	.string "para la tele… ¡Qué nervios!$"

SlateportCity_Text_OhPlayerWeMadeDiscovery:
	.string "¡Oh, {PLAYER}{KUN}!\n"
	.string "¡Qué buen aspecto tienes!\p"
	.string "En nuestro último viaje de exploración\n"
	.string "hicimos un gran descubrimiento.\p"
	.string "Encontramos una caverna submarina\n"
	.string "en la RUTA 128.\p"
	.string "Pensamos que en ella viven POKéMON\n"
	.string "que se creían extintos.$"

SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
	.string "¡Jua, jua, jua!\n"
	.string "El CAP. BABOR, supongo.\p"
	.string "¡Nosotros, el EQUIPO AQUA, vamos\n"
	.string "a tomar el control de su submarino!\p"
	.string "¡No hay objeción que valga!\n"
	.string "¡Confiamos en que coopere!\p"
	.string "¡Jua, jua, jua!\n"
	.string "Mire lo que ha planeado\l"
	.string "el EQUIPO AQUA…$"

SlateportCity_Text_SternWhatWasAllThat:
	.string "CAP. BABOR: ¿De qué va todo esto?\p"
	.string "Parece como si alguien estuviera\n"
	.string "hablando por un megáfono…\p"
	.string "¿De dónde viene esa voz?…$"

SlateportCity_Text_FromHarborTryingToTakeSub:
	.string "¡Viene del PUERTO!\p"
	.string "¡El submarino!\n"
	.string "¡Están intentando llevárselo!$"

SlateportCity_Text_PleaseComeWithMe:
	.string "¡{PLAYER}{KUN}!\n"
	.string "¡Ven conmigo!$"

SlateportCity_Text_BattleTentSign:
	.string "TIENDA de BATALLA de CIUDAD PORTUAL\n"
	.string "“¡Hazte con el POKéMON definitivo!”$"

SlateportCity_Text_SternsShipyardWantedSign:
	.string "ASTILLEROS BABOR\p"
	.string "“Se busca marinero con experiencia\n"
	.string "en los siete mares.”$"

SlateportCity_Text_SternsShipyardNearsCompletion:
	.string "ASTILLEROS BABOR\p"
	.string "“El ferry S.S. MAREA pronto\n"
	.string "podrá cubrir el trayecto entre\l"
	.string "CIUDAD PORTUAL y CALAGUA.”$"

SlateportCity_Text_SternsShipyardFerryComplete:
	.string "ASTILLEROS BABOR\p"
	.string "“Dirigíos al PUERTO para embarcar\n"
	.string "a bordo del ferry S.S. MAREA, con\l"
	.string "recorrido CIUDAD PORTUAL-CALAGUA.”$"

SlateportCity_Text_PokemonFanClubSign:
	.string "CLUB de FANS de POKéMON\n"
	.string "“¡Reunión de fans de POKéMON!”$"

SlateportCity_Text_OceanicMuseumSign:
	.string "MUSEO OCEÁNICO\p"
	.string "“El vasto mar es la fuente de toda\n"
	.string "la vida.”$"

SlateportCity_Text_CitySign:
	.string "CIUDAD PORTUAL\p"
	.string "“El puerto donde se cruzan los caminos\n"
	.string "de ENTRENADORES y POKéMON.”$"

SlateportCity_Text_MarketSign:
	.string "MERCADO de CIUDAD PORTUAL\n"
	.string "“¡El mercado más completo y\l"
	.string "exclusivo del mundo!”$"

SlateportCity_Text_HarborFerryUnderConstruction:
	.string "PUERTO de CIUDAD PORTUAL\p"
	.string "“El ferry S.S. MAREA está siendo\n"
	.string "construido en los ASTILLEROS.\p"
	.string "El servicio entrará en funcionamiento\n"
	.string "en breve.”$"

SlateportCity_Text_HarborSign:
	.string "PUERTO de CIUDAD PORTUAL\p"
	.string "“Disfruta de un maravilloso crucero\n"
	.string "en el S.S. MAREA.”$"

SlateportCity_Text_NameRatersHouseSign:
	.string "CASA del INSPECTOR de los MOTES\n"
	.string "“Evalúa el nombre de tu POKéMON.”$"

SlateportCity_Text_ExplainBerries:
	.string "Cuando un POKéMON salvaje está herido,\n"
	.string "se cura comiendo BAYAS.\p"
	.string "¿Lo sabías?\p"
	.string "Alguien lo vio y tuvo la idea de\n"
	.string "elaborar medicinas con BAYAS.\p"
	.string "¿Lo sabías?\p"
	.string "Para usarlas con fines medicinales, hay\n"
	.string "que MACHACARLAS y extraer un POLVO.\p"
	.string "¿Lo sabías?\p"
	.string "¡Se diría que las BAYAS\n"
	.string "te interesan una barbaridad!\p"
	.string "Pues tengo algo ideal para alguien\n"
	.string "como tú.$"

SlateportCity_Text_ExplainBerryPowder:
	.string "Hace poco hice instalar unas máquinas\n"
	.string "en los CENTROS POKéMON que sirven\l"
	.string "para MACHACAR BAYAS.\p"
	.string "Las máquinas machacadoras de BAYAS\n"
	.string "están arriba, en la ZONA DIRECTA.\p"
	.string "¿Lo sabías?\p"
	.string "¿Podrías hacer POLVO de BAYA\n"
	.string "usando esas máquinas?\p"
	.string "Si me traes mucho POLVO de BAYA,\n"
	.string "elaboraré diversas medicinas para ti.$"

SlateportCity_Text_BroughtMeSomeBerryPowder:
	.string "¿Me has traído POLVO de BAYA?$"

SlateportCity_Text_ExchangeWhatWithIt:
	.string "¿Por qué quieres que te lo cambie?$"

SlateportCity_Text_ExchangeBerryPowderForItem:
	.string "Vale, te cambio el POLVO de BAYA\n"
	.string "por una unidad de {STR_VAR_1}.$"

SlateportCity_Text_DontHaveEnoughBerryPowder:
	.string "¿Eh?\n"
	.string "No tienes suficiente POLVO de BAYA.$"

SlateportCity_Text_FineBerryPowderTradeSomethingElse:
	.string "Este POLVO de BAYA es excelente.\n"
	.string "Va a salir una medicina buenísima.\p"
	.string "¿Quieres cambiar más POLVO de BAYA\n"
	.string "por alguna otra cosilla?$"

SlateportCity_Text_WhenYouGetMoreBringItToMe:
	.string "¡Muy bien! Cuando consigas más POLVO\n"
	.string "de BAYA, tráemelo. Hasta la próxima.$"

SlateportCity_Text_ComeBackToTradeBerryPowder:
	.string "Ven a verme cuando quieras cambiar\n"
	.string "POLVO de BAYA por alguna medicina.\p"
	.string "Tengo montado un negocio aquí.\p"
	.string "¿Lo sabías?$"

SlateportCity_Text_YouDroveTeamAquaAway:
	.string "TRETO: ¿Eh?\n"
	.string "Tu cara me suena muchísimo.\p"
	.string "¿Ya nos hemos presentado?\n"
	.string "Si no es así, me llamo TRETO.\p"
	.string "Acabo de ver al EQUIPO AQUA\n"
	.string "salir de aquí a todo correr.\p"
	.string "A ver si lo adivino, ¿es obra tuya?$"

SlateportCity_Text_MaybeThisTrainer:
	.string "TRETO: Mmm… Puede que, pero\n"
	.string "sólo es una posibilidad…$"

SlateportCity_Text_LetsRegisterEachOther:
	.string "TRETO: ¡Muy bien! Creo que éste\n"
	.string "es el inicio de una bella amistad.\p"
	.string "Así que vamos a registrarnos\n"
	.string "en nuestros POKéNAV.\p"
	.string "A ver…$"

SlateportCity_Text_RegisteredScott:
	.string "Acabas de registrar al tal TRETO\n"
	.string "en el POKéNAV.$"

SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
	.string "TRETO: Me encantaría seguirte de cerca,\n"
	.string "pero no debo perder de vista\l"
	.string "a otros ENTRENADORES con talento.\p"
	.string "Así que voy a seguir pateando\n"
	.string "rutas y pueblos un poco más.\p"
	.string "¡Hasta la próxima, {PLAYER}{KUN}!$"

SlateportCity_Text_TakingBattleTentChallenge:
	.string "TRETO: ¡Eh, tú!\n"
	.string "¡Pero si eres {PLAYER}{KUN}!\p"
	.string "{PLAYER}{KUN}, a ver si lo adivino,\n"
	.string "¿vas a luchar en la TIENDA de BATALLA?\p"
	.string "¡Qué buena idea!\n"
	.string "¡No podría ser mejor!\p"
	.string "¡Al fin y al cabo, todo ENTRENADOR\n"
	.string "fuerte debe aceptar ese desafío!\p"
	.string "¡Esfuérzate al máximo!$"
>>>>>>> Egg/spanish
