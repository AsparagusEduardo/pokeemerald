PacifidlogTown_House3_MapScripts::
	.byte 0

PacifidlogTown_House3_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PacifidlogTown_House3_EventScript_TradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_HORSEA
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox PacifidlogTown_House3_Text_WillingToTradeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PacifidlogTown_House3_EventScript_DeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, PacifidlogTown_House3_EventScript_DeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, PacifidlogTown_House3_EventScript_NotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou, MSGBOX_DEFAULT
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
	release
	end

PacifidlogTown_House3_EventScript_DeclineTrade::
	msgbox PacifidlogTown_House3_Text_NotDesperateOrAnything, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House3_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House3_EventScript_TradeCompleted::
	msgbox PacifidlogTown_House3_Text_ReallyWantedToGetBagon, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House3_EventScript_Girl::
	msgbox PacifidlogTown_House3_Text_IsThatAPokedex, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/PacifidlogTown_House3/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/PacifidlogTown_House3/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/PacifidlogTown_House3/text_es.inc"
.else
	.include "data/maps/PacifidlogTown_House3/text.inc"
.endif
.endif
.endif
=======
PacifidlogTown_House3_Text_WillingToTradeIt:
	.string "¿Qué te parece este {STR_VAR_2}?\p"
	.string "¡Es el {STR_VAR_2} que atrapé ayer\n"
	.string "para celebrar mi cumpleaños!\p"
	.string "¡Se te ve en la mirada que lo quieres!\n"
	.string "No me extraña, ¡no tiene precio!\p"
	.string "Te diré algo. Si quieres,\n"
	.string "te lo cambio por tu {STR_VAR_1}.$"

PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou:
	.string "Oh, ¿esto es un {STR_VAR_1}?\p"
	.string "En cierto modo es como un {STR_VAR_2},\n"
	.string "pero, a la vez, sutilmente distinto.\p"
	.string "¡Gracias!$"

PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon:
	.string "¡No, no, no! ¡No aceptaré nada\n"
	.string "que no sea un auténtico {STR_VAR_1}!$"

PacifidlogTown_House3_Text_NotDesperateOrAnything:
	.string "Oh, así que te echas atrás, ¿eh?\p"
	.string "Por mí, perfecto. Yo no es que necesite\n"
	.string "desesperadamente el cambio, ¿sabes?$"

PacifidlogTown_House3_Text_ReallyWantedToGetBagon:
	.string "Ya sé que podía haber ido yo\n"
	.string "a buscarlo…\p"
	.string "Pero es que quería un BAGON\n"
	.string "que hubiera atrapado otro ENTRENADOR…$"

PacifidlogTown_House3_Text_IsThatAPokedex:
	.string "¿Eso es una POKéDEX?\p"
	.string "¿Has encontrado muchos tipos\n"
	.string "diferentes de POKéMON?\p"
	.string "Ojalá fuera como tú…$"

>>>>>>> Egg/spanish
