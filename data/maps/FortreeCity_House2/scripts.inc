FortreeCity_House2_MapScripts::
	.byte 0

FortreeCity_House2_EventScript_HiddenPowerGiver::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, FortreeCity_House2_EventScript_ExplainHiddenPower
	call_if_unset FLAG_MET_HIDDEN_POWER_GIVER, FortreeCity_House2_EventScript_Greeting
	msgbox FortreeCity_House2_Text_CoinInWhichHand, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 1, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 1, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand2, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 0, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_YourHiddenPowerHasAwoken, MSGBOX_DEFAULT
	giveitem ITEM_TM_HIDDEN_POWER
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_Greeting::
	msgbox FortreeCity_House2_Text_HiddenPowersArousedByNature, MSGBOX_DEFAULT
	setflag FLAG_MET_HIDDEN_POWER_GIVER
	return

FortreeCity_House2_EventScript_ExplainHiddenPower::
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_WrongGuess::
	msgbox FortreeCity_House2_Text_YouGuessedWrong, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/FortreeCity_House2/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/FortreeCity_House2/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/FortreeCity_House2/text_es.inc"
.else
	.include "data/maps/FortreeCity_House2/text.inc"
.endif
.endif
.endif
=======
FortreeCity_House2_Text_HiddenPowersArousedByNature:
	.string "Los poderes ocultos de la gente y de\n"
	.string "los POKéMON salen a la luz cuando\l"
	.string "viven en contacto con la naturaleza.$"

FortreeCity_House2_Text_CoinInWhichHand:
	.string "Deja que compruebe si tus poderes\n"
	.string "ocultos han despertado…\p"
	.string "Tengo una moneda en una mano.\p"
	.string "Ahora dime, ¿está en la mano derecha?\n"
	.string "¿O quizás en la izquierda?$"

FortreeCity_House2_Text_CorrectTryAgainWhichHand:
	.string "¡Has acertado!\p"
	.string "Volvamos a intentarlo.\p"
	.string "¿Dónde guardo la moneda?\n"
	.string "¿En la mano derecha o en la izquierda?$"

FortreeCity_House2_Text_CorrectTryAgainWhichHand2:
	.string "¡Has acertado!\p"
	.string "Volvamos a intentarlo.\p"
	.string "¿Dónde guardo la moneda?\n"
	.string "¿En la mano derecha o en la izquierda?$"

FortreeCity_House2_Text_YourHiddenPowerHasAwoken:
	.string "¡Magnífico!\n"
	.string "¡Tus poderes ocultos están activos!\p"
	.string "Mira, te voy a dar esto para que puedas\n"
	.string "hacer lo mismo con tus POKéMON.$"

FortreeCity_House2_Text_ExplainHiddenPower:
	.string "PODER OCULTO es un movimiento\n"
	.string "que se adapta a cada POKéMON.$"

FortreeCity_House2_Text_YouGuessedWrong:
	.string "Pues no. Te has equivocado.$"

>>>>>>> Egg/spanish
