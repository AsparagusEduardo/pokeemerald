MauvilleCity_House2_MapScripts::
	.byte 0

MauvilleCity_House2_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_COIN_CASE, MauvilleCity_House2_EventScript_ReceivedCoinCase
	msgbox MauvilleCity_House2_Text_BuyHarborMailAtSlateport, MSGBOX_DEFAULT
	checkitem ITEM_HARBOR_MAIL
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_House2_EventScript_AskToTradeForHarborMail
	release
	end

MauvilleCity_House2_EventScript_AskToTradeForHarborMail::
	playse SE_PIN
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
	waitmovement 0
	msgbox MauvilleCity_House2_Text_TradeHarborMailForCoinCase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_House2_EventScript_AcceptTrade
	goto_if_eq VAR_RESULT, NO, MauvilleCity_House2_EventScript_DeclineTrade
	end

MauvilleCity_House2_EventScript_AcceptTrade::
	msgbox MauvilleCity_House2_Text_IllTradeYouCoinCase, MSGBOX_DEFAULT
	removeitem ITEM_HARBOR_MAIL
	giveitem ITEM_COIN_CASE
	setflag FLAG_RECEIVED_COIN_CASE
	goto MauvilleCity_House2_EventScript_ReceivedCoinCase
	end

MauvilleCity_House2_EventScript_ReceivedCoinCase::
	msgbox MauvilleCity_House2_Text_UseCoinCaseAtGameCorner, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House2_EventScript_DeclineTrade::
	msgbox MauvilleCity_House2_Text_ThatsDisappointing, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MauvilleCity_House2/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MauvilleCity_House2/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MauvilleCity_House2/text_es.inc"
.else
	.include "data/maps/MauvilleCity_House2/text.inc"
.endif
.endif
.endif
=======
MauvilleCity_House2_Text_BuyHarborMailAtSlateport:
	.string "Si tuviera una BICI, sería facilísimo\n"
	.string "ir de compras por CIUDAD PORTUAL.\p"
	.string "Podría comprar una CARTA PUERTO en\n"
	.string "la TIENDA POKéMON de CIUDAD PORTUAL.$"

MauvilleCity_House2_Text_TradeHarborMailForCoinCase:
	.string "Ah, ¿tienes una CARTA PUERTO?\n"
	.string "¿La cambiarías por un MONEDERO?$"

MauvilleCity_House2_Text_IllTradeYouCoinCase:
	.string "¡Qué buena suerte!\n"
	.string "Muy bien, te daré un MONEDERO.$"

MauvilleCity_House2_Text_UseCoinCaseAtGameCorner:
	.string "Ese MONEDERO se puede usar\n"
	.string "en el CASINO.$"

MauvilleCity_House2_Text_ThatsDisappointing:
	.string "Qué disgusto…\p"
	.string "Pues que sepas que necesitas un\n"
	.string "MONEDERO en el CASINO.$"

>>>>>>> Egg/spanish
