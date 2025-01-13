OldaleTown_Mart_MapScripts::
	.byte 0

OldaleTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
	pokemart OldaleTown_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Basic:
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	pokemartlistend

OldaleTown_Mart_ExpandedItems::
	pokemart OldaleTown_Mart_Pokemart_Expanded
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Expanded:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	pokemartlistend

OldaleTown_Mart_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_PokeBallsInStock::
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_Boy::
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/OldaleTown_Mart/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/OldaleTown_Mart/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/OldaleTown_Mart/text_es.inc"
.else
	.include "data/maps/OldaleTown_Mart/text.inc"
.endif
.endif
.endif
=======
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
	.string "No puedo comprar POKé BALLS…\n"
	.string "El encargado dice que están agotadas.$"

OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
	.string "¡Voy a comprar un buen montón de POKé\n"
	.string "BALLS para cazar cantidad de POKéMON!$"

OldaleTown_Mart_Text_RestoreHPWithPotion:
	.string "Si dañan a un POKéMON, éste pierde PS,\n"
	.string "se debilita y no puede seguir luchando.\p"
	.string "Para evitar que se debilite, restaura\n"
	.string "sus PS con una POCIÓN.$"

>>>>>>> Egg/spanish
