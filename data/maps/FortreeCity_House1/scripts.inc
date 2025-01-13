FortreeCity_House1_MapScripts::
	.byte 0

FortreeCity_House1_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, FortreeCity_House1_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_PLUSLE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox FortreeCity_House1_Text_YouWillTradeWontYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FortreeCity_House1_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FortreeCity_House1_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, FortreeCity_House1_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox FortreeCity_House1_Text_MonYouTakeCare, MSGBOX_DEFAULT
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
	release
	end

FortreeCity_House1_EventScript_DeclineTrade::
	msgbox FortreeCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox FortreeCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_EventScript_TradeCompleted::
	msgbox FortreeCity_House1_Text_GoingToMakeVolbeatStrong, MSGBOX_DEFAULT
	release
	end

FortreeCity_House1_EventScript_ExpertF::
	msgbox FortreeCity_House1_Text_TradingMemoriesWithOthers, MSGBOX_NPC
	end

FortreeCity_House1_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox FortreeCity_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/FortreeCity_House1/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/FortreeCity_House1/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/FortreeCity_House1/text_es.inc"
.else
	.include "data/maps/FortreeCity_House1/text.inc"
.endif
.endif
.endif
=======
FortreeCity_House1_Text_YouWillTradeWontYou:
	.string "¡Grrrrrr! ¡Quiero uno!\n"
	.string "¡Necesito un {STR_VAR_1}!\l"
	.string "¡Daría lo que fuera!\p"
	.string "Eh… ¿Has oído el grito desgarrado\n"
	.string "que sale del fondo de mi corazón?\p"
	.string "Pues si lo has oído, no dudarás\n"
	.string "en cambiarme tu {STR_VAR_1}\l"
	.string "por mi {STR_VAR_2}, ¿verdad?$"

FortreeCity_House1_Text_MonYouTakeCare:
	.string "¡Sí, sí, cómo mola!\p"
	.string "¡Bienvenido, {STR_VAR_1}!\n"
	.string "¡Y tú cuida de {STR_VAR_2}!$"

FortreeCity_House1_Text_ThisIsntAMon:
	.string "Vaya, pues va a ser que no.\n"
	.string "Eso no es un {STR_VAR_1}.$"

FortreeCity_House1_Text_YouWontTradeMe:
	.string "¿Que no? ¿No me lo vas a cambiar?\n"
	.string "¿No tienes corazón o qué?$"

FortreeCity_House1_Text_GoingToMakeVolbeatStrong:
	.string "¡A partir de ahora haré todo lo que sea\n"
	.string "necesario para fortalecer a VOLBEAT!\p"
	.string "¡Espero que tú hagas lo mismo\n"
	.string "por PLUSLE!$"

FortreeCity_House1_Text_TradingMemoriesWithOthers:
	.string "Cambiar POKéMON…\p"
	.string "Para mí es como dar parte de ti\n"
	.string "a otra persona…$"

FortreeCity_House1_Text_Zigzagoon:
	.string "ZIGZAGOON: ¿Gungún?$"

>>>>>>> Egg/spanish
