.set LOCALID_LOTTERY_CLERK, 2

LilycoveCity_DepartmentStore_1F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_1F_EventScript_Greeter::
	msgbox LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_1F_EventScript_LotteryClerk::
	lock
	faceplayer
	dotimebasedevents
	goto_if_ne VAR_POKELOT_PRIZE_ITEM, ITEM_NONE, LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier
	goto_if_set FLAG_DAILY_PICKED_LOTO_TICKET, LilycoveCity_DepartmentStore_1F_EventScript_ComeBackTomorrow
	msgbox LilycoveCity_DepartmentStore_1F_Text_LotteryCornerDrawTicket, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain
	setflag FLAG_DAILY_PICKED_LOTO_TICKET
	message LilycoveCity_DepartmentStore_1F_Text_PleasePickTicket
	waitmessage
	special RetrieveLotteryNumber
	copyvar VAR_0x8008, VAR_RESULT
	special BufferLottoTicketNumber
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketNumberIsXPleaseWait, MSGBOX_DEFAULT
	applymovement LOCALID_LOTTERY_CLERK, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	playse SE_PC_ON
	special DoLotteryCornerComputerEffect
	special PickLotteryCornerTicket
	delay 220
	special EndLotteryCornerComputerEffect
	delay 10
	applymovement LOCALID_LOTTERY_CLERK, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_eq VAR_0x8004, 0, LilycoveCity_DepartmentStore_1F_EventScript_NoMatch
	incrementgamestat GAME_STAT_WON_POKEMON_LOTTERY
	call_if_eq VAR_0x8006, 0, LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPartyMon
	call_if_eq VAR_0x8006, 1, LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPCMon
	bufferitemname STR_VAR_1, VAR_0x8005
	call_if_eq VAR_0x8004, 1, LilycoveCity_DepartmentStore_1F_EventScript_TwoDigitMatch
	call_if_eq VAR_0x8004, 2, LilycoveCity_DepartmentStore_1F_EventScript_ThreeDigitMatch
	call_if_eq VAR_0x8004, 3, LilycoveCity_DepartmentStore_1F_EventScript_FourDigitMatch
	call_if_eq VAR_0x8004, 4, LilycoveCity_DepartmentStore_1F_EventScript_FullMatch
	giveitem VAR_0x8005
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStore_1F_EventScript_RecordPrizeNoRoom
	special TryPutLotteryWinnerReportOnAir
	goto LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2
	end

LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPartyMon::
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPartyMon, MSGBOX_DEFAULT
	return

LilycoveCity_DepartmentStore_1F_EventScript_TicketMatchPCMon::
	msgbox LilycoveCity_DepartmentStore_1F_Text_TicketMatchesPCMon, MSGBOX_DEFAULT
	return

LilycoveCity_DepartmentStore_1F_EventScript_ComeBackTomorrow::
	msgbox LilycoveCity_DepartmentStore_1F_Text_ComeBackTomorrow, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain::
	msgbox LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStore_1F_EventScript_NoMatch::
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoNumbersMatched, MSGBOX_DEFAULT
	goto LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2
	end

LilycoveCity_DepartmentStore_1F_EventScript_PleaseVisitAgain2::
	msgbox LilycoveCity_DepartmentStore_1F_Text_PleaseVisitAgain2, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStore_1F_EventScript_TwoDigitMatch::
	msgbox LilycoveCity_DepartmentStore_1F_Text_TwoDigitsMatched, MSGBOX_DEFAULT
	return

LilycoveCity_DepartmentStore_1F_EventScript_ThreeDigitMatch::
	msgbox LilycoveCity_DepartmentStore_1F_Text_ThreeDigitsMatched, MSGBOX_DEFAULT
	return

LilycoveCity_DepartmentStore_1F_EventScript_FourDigitMatch::
	msgbox LilycoveCity_DepartmentStore_1F_Text_FourDigitsMatched, MSGBOX_DEFAULT
	return

LilycoveCity_DepartmentStore_1F_EventScript_FullMatch::
	msgbox LilycoveCity_DepartmentStore_1F_Text_AllFiveDigitsMatched, MSGBOX_DEFAULT
	return

LilycoveCity_DepartmentStore_1F_EventScript_RecordPrizeNoRoom::
	copyvar VAR_POKELOT_PRIZE_PLACE, VAR_0x8004
	copyvar VAR_POKELOT_PRIZE_ITEM, VAR_0x8005
	goto LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize
	end

LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize::
	msgbox LilycoveCity_DepartmentStore_1F_Text_NoRoomForThis, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStore_1F_EventScript_GivePrizeFromEarlier::
	msgbox LilycoveCity_DepartmentStore_1F_Text_PrizeWeveBeenHolding, MSGBOX_DEFAULT
	giveitem VAR_POKELOT_PRIZE_ITEM
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_DepartmentStore_1F_EventScript_NoRoomForPrize
	copyvar VAR_0x8004, VAR_POKELOT_PRIZE_PLACE
	copyvar VAR_0x8005, VAR_POKELOT_PRIZE_ITEM
	special TryPutLotteryWinnerReportOnAir
	setvar VAR_POKELOT_PRIZE_ITEM, ITEM_NONE
	setvar VAR_POKELOT_PRIZE_PLACE, 0
	release
	end

LilycoveCity_DepartmentStore_1F_EventScript_PokefanF::
	msgbox LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_1F_EventScript_LittleGirl::
	msgbox LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_1F_EventScript_PokefanM::
	msgbox LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_1F_EventScript_Azumarill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	msgbox LilycoveCity_DepartmentStore_1F_Text_Azumarill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycoveCity_DepartmentStore_1F_EventScript_FloorNamesSign::
	msgbox LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign, MSGBOX_SIGN
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/LilycoveCity_DepartmentStore_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/LilycoveCity_DepartmentStore_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/LilycoveCity_DepartmentStore_1F/text_es.inc"
.else
	.include "data/maps/LilycoveCity_DepartmentStore_1F/text.inc"
.endif
.endif
.endif
=======
LilycoveCity_DepartmentStore_1F_Text_WelcomeToDeptStore:
	.string "Hola. Éste es el CENTRO COMERCIAL\n"
	.string "de CALAGUA.$"

LilycoveCity_DepartmentStore_1F_Text_IBuyAllSortsOfThings:
	.string "Siempre que vengo al CENTRO COMERCIAL,\n"
	.string "acabo comprando algo que no necesito…$"

LilycoveCity_DepartmentStore_1F_Text_MomBuyingMeFurniture:
	.string "¡Mi madre va a comprarme muebles!\n"
	.string "¡Sólo para mí!$"

LilycoveCity_DepartmentStore_1F_Text_BuyingSomethingForAzumarill:
	.string "Voy a comprar algo para mi AZUMARILL\n"
	.string "como premio por ganar el CONCURSO.$"

LilycoveCity_DepartmentStore_1F_Text_Azumarill:
	.string "AZUMARILL: ¡Marimariii!$"

LilycoveCity_DepartmentStore_1F_Text_FloorNamesSign:
	.string "PB: MOSTRADOR\n"
	.string "     DESPACHO de LOTERÍA\p"
	.string "P1: ZONA de ENTRENADORES\p"
	.string "P2: COLECCIÓN para el COMBATE\p"
	.string "P3: RINCÓN de las MT\p"
	.string "P4: PLANTA de POKéMUÑECOS\p"
	.string "AZOTEA$"

@ Unused
LilycoveCity_DepartmentStore_1F_Text_WirelessCommIsFun:
	.string "Wireless Communication is a\n"
	.string "lot of fun, isn’t it?\p"
	.string "I think it lets you do things that\n"
	.string "weren’t possible before.\p"
	.string "For instance, you can now trade\n"
	.string "with people you couldn’t before.\p"
	.string "I think it’s going to be exciting!$"

@ Unused
LilycoveCity_DepartmentStore_1F_Text_SpreadWordAboutWirelessComm:
	.string "I want to spread the word about how\n"
	.string "fun Wireless Communication can be.$"

>>>>>>> Egg/spanish
