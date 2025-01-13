.set LOCALID_WOMAN_1, 19
.set LOCALID_MAN_1, 20

LilycoveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
	.byte 0

LilycoveCity_OnTransition:
	setflag FLAG_VISITED_LILYCOVE_CITY
	setvar VAR_CONTEST_HALL_STATE, 0
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	call Common_EventScript_SetupRivalGfxId
	end

LilycoveCity_OnLoad:
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
	end

LilycoveCity_EventScript_SetWailmerMetatiles::
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
	return

LilycoveCity_EventScript_BerryGentleman::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
	random 10
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_ReceivedBerry::
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Man3::
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
	end

LilycoveCity_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_GirlAquaGone::
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_RichBoy::
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
	end

LilycoveCity_EventScript_Sailor2::
	lock
	faceplayer
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Sailor2AquaGone::
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Woman2::
	lock
	faceplayer
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Woman2AquaGone::
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Man2::
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
	end

LilycoveCity_EventScript_ExpertM1::
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ExpertF::
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ExpertM2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_ExpertM2AquaGone::
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Sailor1::
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
	end

LilycoveCity_EventScript_FatMan::
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
	end

LilycoveCity_EventScript_Man1::
	lockall
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
	end

LilycoveCity_EventScript_Woman1::
	lockall
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
	end

LilycoveCity_EventScript_CitySign::
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ContestHallSign::
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_MotelSign::
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_MuseumSign::
	lockall
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
	switch VAR_0x8004
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_MuseumSignNoPaintings::
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_HarborSign::
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_HarborSignFerryReady::
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_TrainerFanClubSign::
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_DepartmentStoreSign::
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_MoveDeletersHouseSign::
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_WailmerTrainerGrunt::
	lockall
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_MET_WAILMER_TRAINER
	releaseall
	end

LilycoveCity_EventScript_MetWailmerTrainer::
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_AquaGrunt1::
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
	end

LilycoveCity_EventScript_AquaGrunt2::
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
	end

LilycoveCity_EventScript_AquaGrunt3::
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
	end

LilycoveCity_EventScript_AquaGrunt4::
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
	end

LilycoveCity_EventScript_Rival::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
	end

LilycoveCity_EventScript_May::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, LilycoveCity_EventScript_BattleMayTreecko
	case 1, LilycoveCity_EventScript_BattleMayTorchic
	case 2, LilycoveCity_EventScript_BattleMayMudkip
	end

LilycoveCity_EventScript_MayAskToBattleAgain::
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
	return

LilycoveCity_EventScript_MayAskToBattle::
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
	return

LilycoveCity_EventScript_DeclineMayBattle::
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

LilycoveCity_EventScript_Brendan::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
	end

LilycoveCity_EventScript_BrendanAskToBattleAgain::
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
	return

LilycoveCity_EventScript_BrendanAskToBattle::
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
	return

LilycoveCity_EventScript_DeclineBrendanBattle::
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

LilycoveCity_EventScript_BattleMayTreecko::
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_DefeatedMay
	end

LilycoveCity_EventScript_BattleMayTorchic::
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_DefeatedMay
	end

LilycoveCity_EventScript_BattleMayMudkip::
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_DefeatedMay
	end

LilycoveCity_EventScript_BattleBrendanTreecko::
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_DefeatedBrendan
	end

LilycoveCity_EventScript_BattleBrendanTorchic::
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_DefeatedBrendan
	end

LilycoveCity_EventScript_BattleBrendanMudkip::
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_DefeatedBrendan
	end

LilycoveCity_EventScript_DefeatedMay::
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
	setvar VAR_RESULT, FALSE
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
	goto LilycoveCity_EventScript_RivalFlyAway
	end

LilycoveCity_EventScript_CheckFinalBadge::
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
	return

LilycoveCity_EventScript_HasFinalBadge::
	setvar VAR_RESULT, TRUE
	return

LilycoveCity_EventScript_MayCollectBadges::
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_MayPokemonLeague::
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_MayBattleFrontier::
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_DefeatedBrendan::
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
	setvar VAR_RESULT, FALSE
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
	goto LilycoveCity_EventScript_RivalFlyAway
	end

LilycoveCity_EventScript_BrendanCollectBadges::
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_BrendanPokemonLeague::
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_BrendanBattleFrontier::
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_RivalFlyAway::
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 50
	setfieldeffectargument 0, 1
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 15
	removeobject VAR_LAST_TALKED
	waitfieldeffect FLDEFF_NPCFLY_OUT
	savebgm MUS_DUMMY
	fadedefaultbgm
	setflag FLAG_MET_RIVAL_LILYCOVE
	release
	end

LilycoveCity_EventScript_SchoolKidM::
	lock
	faceplayer
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
	release
	end

LilycoveCity_EventScript_KnowAboutBerryBlender::
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_DontKnowAboutBerryBlender::
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
	return

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/LilycoveCity/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/LilycoveCity/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/LilycoveCity/text_es.inc"
.else
	.include "data/maps/LilycoveCity/text.inc"
.endif
.endif
.endif
=======
LilycoveCity_Text_MayShoppingLetsBattle:
	.string "AURA: ¡Mira por donde!\n"
	.string "{PLAYER}{KUN}, ¿también estás de compras?\p"
	.string "He comprado un montón de MUÑECOS\n"
	.string "y PÓSTERS.\p"
	.string "Y por supuesto también he atrapado\n"
	.string "un montón de POKéMON y los estoy\l"
	.string "entrenando como se debe hacer.\p"
	.string "De hecho, me preocupa pensar que igual\n"
	.string "tú no entrenas los tuyos como debes…\p"
	.string "Voy a luchar contigo para que puedas\n"
	.string "mostrarme tus POKéMON, {PLAYER}{KUN}.$"

LilycoveCity_Text_MayNotRaisingPokemon:
	.string "AURA: ¡Pero bueno! {PLAYER}{KUN}, ¿acaso\n"
	.string "no has estado entrenando tus POKéMON?\p"
	.string "Pues todo ENTRENADOR que se precie\n"
	.string "debería hacerlo…$"

LilycoveCity_Text_MayBattleMe:
	.string "AURA: Venga, lucha conmigo, que quiero\n"
	.string "ver cómo entrenas tus POKéMON…$"

LilycoveCity_Text_MayWontBeBeaten:
	.string "AURA: Los POKéMON que he entrenado\n"
	.string "dan mil vueltas a los tuyos, {PLAYER}{KUN}.$"

LilycoveCity_Text_MayDefeat:
	.string "Ejem…\p"
	.string "Recuerdo el combate que tuve contigo,\n"
	.string "{PLAYER}{KUN}, en la RUTA 103.\p"
	.string "¿A que ese combate te ayudó\n"
	.string "a ser así de fuerte, {PLAYER}{KUN}?$"

LilycoveCity_Text_MayGoingBackToLittleroot:
	.string "AURA: Creo que voy a volver pronto\n"
	.string "a VILLA RAÍZ.\p"
	.string "He atrapado un buen grupo de POKéMON\n"
	.string "y mi POKéDEX está bastante completa.\l"
	.string "Quiero enseñar todo esto a mis padres.$"

LilycoveCity_Text_MayYouGoingToCollectBadges:
	.string "{PLAYER}{KUN}, ¿qué vas a hacer?\p"
	.string "¿Conseguir todas las MEDALLAS\n"
	.string "de GIMNASIO e ir a la LIGA POKéMON?\p"
	.string "Bueno, mientras tú ganas MEDALLAS,\n"
	.string "yo voy a trabajar en mi POKéDEX.\l"
	.string "¡La voy a completar antes que tú!\p"
	.string "¡Nos vemos!$"

LilycoveCity_Text_MayYouGoingToPokemonLeague:
	.string "{PLAYER}{KUN}, ¿qué vas a hacer?\p"
	.string "¿Conseguir todas las MEDALLAS\n"
	.string "de GIMNASIO e ir a la LIGA POKéMON?\p"
	.string "¿O vas a completar tu POKéDEX?\p"
	.string "Puede que haya perdido luchando contra\n"
	.string "ti, ¡pero la voy a llenar antes que tú!\p"
	.string "¡Nos vemos!$"

LilycoveCity_Text_MayYouGoingToBattleFrontier:
	.string "{PLAYER}{KUN}, ¿qué vas a hacer?\p"
	.string "¿Vas a aceptar el desafío\n"
	.string "del FRENTE de BATALLA?\p"
	.string "¿O vas a completar tu POKéDEX?\p"
	.string "Puede que haya perdido luchando contra\n"
	.string "ti, ¡pero la voy a llenar antes que tú!\p"
	.string "¡Nos vemos!$"

LilycoveCity_Text_BrendanShoppingLetsBattle:
	.string "BRUNO: Eh, hola, {PLAYER}.\p"
	.string "Le estoy haciendo un recado a mi\n"
	.string "padre, no estoy comprando MUÑECOS.\p"
	.string "Pero ya llevo mucho tiempo dando\n"
	.string "vueltas…\p"
	.string "¿Qué te parece si combatimos para ver\n"
	.string "quién entrena POKéMON mejor?$"

LilycoveCity_Text_BrendanNoConfidence:
	.string "BRUNO: ¿Qué te pasa?\n"
	.string "¿Sabes que vas a perder?$"

LilycoveCity_Text_BrendanBattleMe:
	.string "BRUNO: ¿Quieres luchar para ver\n"
	.string "quién entrena POKéMON mejor?$"

LilycoveCity_Text_BrendanWontBeBeaten:
	.string "BRUNO: Je, je, que sepas que no\n"
	.string "tengo intención de perder.$"

LilycoveCity_Text_BrendanDefeat:
	.string "Sí, sí…\n"
	.string "Has mejorado mucho.\p"
	.string "Qué rollo… Yo antes te llevaba ventaja\n"
	.string "entrenando POKéMON…$"

LilycoveCity_Text_BrendanGoingBackToLittleroot:
	.string "BRUNO: Bueno…\n"
	.string "Tengo pensado volver a VILLA RAÍZ.\p"
	.string "Sabes que estoy ayudando a mi padre\n"
	.string "a completar su POKéDEX. Ya está\l"
	.string "casi llena y quiero enseñársela.$"

LilycoveCity_Text_BrendanYouGoingToCollectBadges:
	.string "{PLAYER}, ¿qué vas a hacer?\p"
	.string "¿Conseguir todas las MEDALLAS\n"
	.string "de GIMNASIO e ir a la LIGA POKéMON?\p"
	.string "Puede que yo haga lo mismo…\p"
	.string "Bueno, da igual. ¡Tú, persevera!$"

LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
	.string "{PLAYER}, ¿qué vas a hacer?\p"
	.string "Ya que eres tan fuerte, ¿vas a aceptar\n"
	.string "el desafío de la LIGA POKéMON?\p"
	.string "Pero que conste: si entreno un poco\n"
	.string "más a mis POKéMON, seré más fuerte\l"
	.string "que tú, {PLAYER}.\p"
	.string "Bueno, da igual. ¡Tú, persevera!$"

LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
	.string "{PLAYER}, ¿qué vas a hacer?\p"
	.string "¿Vas a aceptar el desafío\n"
	.string "del FRENTE de BATALLA?\p"
	.string "¿O vas a completar tu POKéDEX?\p"
	.string "Ya que eres tan fuerte, deberías\n"
	.string "pasarte por el FRENTE de BATALLA.\p"
	.string "Pero que conste: si entreno algo más a\n"
	.string "mis POKéMON, seré mejor que tú, {PLAYER}.\p"
	.string "De hecho, quizás debería ir al\n"
	.string "FRENTE de BATALLA.\p"
	.string "Bueno, da igual. ¡Tú, aguanta!$"

LilycoveCity_Text_MovedLootIntoHideoutToday:
	.string "Jua, jua, jua…\p"
	.string "Hoy hemos llevado más botín\n"
	.string "a nuestra GUARIDA secreta…\p"
	.string "¡¿Qui-quién eres tú?!\n"
	.string "¡Yo no he dicho nada!$"

LilycoveCity_Text_ChanceToDoBigThings:
	.string "Soy sólo un SOLDADO, así que no sé\n"
	.string "nada de los planes del JEFE…\p"
	.string "¡Pero, siendo parte del EQUIPO AQUA,\n"
	.string "sé que vamos a hacer grandes cosas!\p"
	.string "¡¿Qui-quién eres tú?!\n"
	.string "¡Yo no he dicho nada!$"

LilycoveCity_Text_DontGoNearCaveInCove:
	.string "¡Eh, tú!\p"
	.string "¡Ni se te ocurra acercarte a la cueva\n"
	.string "que hay en la ensenada!\p"
	.string "¿Por qué? ¡Porque lo digo yo!\n"
	.string "¡Soy mayor que tú, así que obedece!$"

LilycoveCity_Text_IfWorldBecomesOurs:
	.string "Si los del EQUIPO AQUA nos apoderamos\n"
	.string "del mundo entero, será un lugar mejor\l"
	.string "para todos, POKéMON incluidos.$"

LilycoveCity_Text_WailmerLeapOutOfWater:
	.string "¡Eh! ¡WAILMER!\n"
	.string "¡Salid del agua ahora mismo!$"

LilycoveCity_Text_GetLostMessingUpTraining:
	.string "¿Mmm? ¿Qué quieres?\p"
	.string "Estás fastidiando el entrenamiento,\n"
	.string "así que ¿por qué no te pierdes?$"

LilycoveCity_Text_ContestHallInTown:
	.string "Hay una SALA de CONCURSOS\n"
	.string "POKéMON en esta misma ciudad.\p"
	.string "Eso quiere decir que POKéMON fabulosos\n"
	.string "llegan desde cada rincón de la región.\p"
	.string "¡Estoy deseando verlos en acción!$"

LilycoveCity_Text_StrangeCaveInCove:
	.string "¿Has visto esa extraña cueva que hay\n"
	.string "en la ensenada, al otro lado del pueblo?$"

LilycoveCity_Text_GoingToMoveDeleterForHMs:
	.string "Voy a enseñar a mi POKéMON algún\n"
	.string "movimiento nuevo para que participe\l"
	.string "en algún CONCURSO.\p"
	.string "Para eso tengo que visitar al QUITA-\n"
	.string "MOVIMIENTOS y hacerle olvidar algún\l"
	.string "movimiento de MO.$"

LilycoveCity_Text_ImFromKanto:
	.string "Vengo desde KANTO.\p"
	.string "Me parece que HOENN, con tanta agua\n"
	.string "y tanto verde, es realmente precioso.\p"
	.string "Pero una duda me corroe…\p"
	.string "¿Es posible que haya POKéMON raros\n"
	.string "que sólo vivan aquí?$"

LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
	.string "El EQUIPO AQUA ha estado entrenando\n"
	.string "sus WAILMER en la ensenada.\p"
	.string "Y, como están en medio, no nos dejan\n"
	.string "a nosotros, los MARINEROS, sacar\l"
	.string "nuestras barcas al mar…$"

LilycoveCity_Text_SomeonePuntedTeamAquaOut:
	.string "¿Te has enterado?\p"
	.string "¡Alguien ha dado su merecido\n"
	.string "al EQUIPO AQUA por nosotros!\p"
	.string "¡Los WAILMER han salido de la\n"
	.string "ensenada y por fin podemos\l"
	.string "sacar nuestras barcas tranquilos!$"

LilycoveCity_Text_SomeoneStoleMyPokemon:
	.string "Estaba echándome una siestecita\n"
	.string "en la posada de la costa, arrullada\l"
	.string "por el sonido de las olas…\p"
	.string "¡cuando alguien robó mi POKéMON!\p"
	.string "¿Quién ha sido, quién?\n"
	.string "¿El EQUIPO AQUA? ¿Serán ellos?$"

LilycoveCity_Text_MissingPokemonCameBack:
	.string "Mi pobre POKéMON desaparecido…\n"
	.string "Volvió solito cuando no lo esperaba.$"

LilycoveCity_Text_ImArtDealer:
	.string "Soy un MARCHANTE de ARTE.\p"
	.string "Compro y vendo arte del bueno,\n"
	.string "sobre todo cuadros.\p"
	.string "Me han dicho que el MUSEO de aquí\n"
	.string "expone unas obras magníficas…$"

LilycoveCity_Text_SeaRemainsForeverYoung:
	.string "Nosotros envejecemos y nos arrugamos,\n"
	.string "pero el mar continúa joven y bravío,\l"
	.string "lleno de vida, por siempre…\p"
	.string "Qué pensamiento tan profundo, ¿eh?$"

LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
	.string "Hace sesenta años que mi marido se me\n"
	.string "declaró aquí… El mar sigue tan hermoso\l"
	.string "como en aquel entonces…\p"
	.string "Ay, que me emociono…$"

LilycoveCity_Text_TeamAquaRenovatedCavern:
	.string "Dime, ¿has oído hablar de esa gruta\n"
	.string "que hay en la ensenada?\p"
	.string "Se ha creado de forma natural,\n"
	.string "pero el dichoso EQUIPO AQUA llegó\l"
	.string "y tuvo que hacer reformas, claro.\p"
	.string "¡Y se atreven a llamarse el “equipo\n"
	.string "amante de la naturaleza”!\p"
	.string "Lo que dicen no tiene nada que ver\n"
	.string "con lo que hacen en realidad…$"

LilycoveCity_Text_TeamAquaLotGoneForGood:
	.string "Esa cueva en la ensenada…\p"
	.string "No me di cuenta enseguida, pero\n"
	.string "se ve que está completamente vacía.\p"
	.string "Los del EQUIPO AQUA deben de\n"
	.string "haberse largado. Ya era hora…$"

LilycoveCity_Text_CitySign:
	.string "CIUDAD CALAGUA\p"
	.string "“Allí donde acaba la tierra\n"
	.string "y empieza el mar.”$"

LilycoveCity_Text_ContestHallSign:
	.string "SALA de CONCURSOS POKéMON\p"
	.string "“¡Un punto de encuentro para\n"
	.string "grandes ENTRENADORES!”$"

LilycoveCity_Text_MotelSign:
	.string "MOTEL AGUACALA\p"
	.string "“¡El único lugar de CALAGUA\n"
	.string "donde el agua no cala!”$"

LilycoveCity_Text_MuseumSign:
	.string "MUSEO de CALAGUA\p"
	.string "“Contempla la magnífica exposición\n"
	.string "de obras de arte POKéMON.”$"

LilycoveCity_Text_MuseumSignPlayersExhibit:
	.string "MUSEO de CALAGUA\p"
	.string "“Contempla la magnífica exposición\n"
	.string "de obras de arte POKéMON de {PLAYER}.”$"

LilycoveCity_Text_HarborSignUnderConstruction:
	.string "PUERTO de CIUDAD CALAGUA\p"
	.string "“El ferry S.S. MAREA está siendo\n"
	.string "construido en CIUDAD PORTUAL.\p"
	.string "Se espera que el servicio entre\n"
	.string "en funcionamiento en breve.”$"

LilycoveCity_Text_HarborSign:
	.string "PUERTO de CIUDAD CALAGUA\p"
	.string "“Disfruta de un agradable crucero\n"
	.string "a bordo del ferry S.S. MAREA.”$"

LilycoveCity_Text_TrainerFanClubSign:
	.string "CLUB de FANS de ENTRENADORES POKéMON\p"
	.string "En el cartel hay garabateados un\n"
	.string "montón de nombres de ENTRENADORES…$"

LilycoveCity_Text_DepartmentStoreSign:
	.string "CENTRO COMERCIAL de CALAGUA\p"
	.string "“¡Un lugar donde comprar\n"
	.string "y divertirse hasta la saciedad!\p"
	.string "Busques lo que busques…,\n"
	.string "¡lo encontrarás aquí!”$"

LilycoveCity_Text_MoveDeletersHouseSign:
	.string "CASA del QUITA-MOVIMIENTOS\p"
	.string "“Si no te gusta un movimiento\n"
	.string "POKéMON, ¡bórralo!”$"

LilycoveCity_Text_DoYouKnowAboutBerryBlender:
	.string "¿Sabes algo de la LICUABAYAS?$"

LilycoveCity_Text_FasterSpinBetterPokeblocks:
	.string "La gente tiene que trabajar en equipo\n"
	.string "para hacer que gire más rápido.\p"
	.string "Cuanto más rápido gira, mejor salen\n"
	.string "los {POKEBLOCK}S. Eso dicen.$"

LilycoveCity_Text_ExplainBerryBlender:
	.string "Se usa para crear una especie\n"
	.string "de caramelo que se llama {POKEBLOCK}.\p"
	.string "Si le das un buen {POKEBLOCK} a un POKéMON,\n"
	.string "éste mejorará un montón.$"

LilycoveCity_Text_HeardTowerCalledSkyPillar:
	.string "He oído que hay una torre en\n"
	.string "alguna de las rutas marítimas.\p"
	.string "Creo que se llama PILAR CELESTE.$"

LilycoveCity_Text_SawTallTowerOnRoute131:
	.string "Vi una torre muy alta en algún\n"
	.string "punto de la RUTA 131.\p"
	.string "¿Podría tratarse de…?$"

LilycoveCity_Text_JustArrivedAndSawRarePokemon:
	.string "Acabamos de llegar y estamos\n"
	.string "de luna de miel.\p"
	.string "Y justo hemos visto un POKéMON\n"
	.string "de tipo DRAGÓN volando en el cielo.\p"
	.string "¿Hay muchos POKéMON de ese tipo\n"
	.string "en la región de HOENN?$"

LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
	.string "Durante nuestra luna de miel,\n"
	.string "intentamos ver tantos POKéMON\l"
	.string "raros como fuera posible.\p"
	.string "Por eso nos alegró tanto ver a ese\n"
	.string "extraño POKéMON nada más llegar.\p"
	.string "¡Ha sido muy emocionante!$"

>>>>>>> Egg/spanish
