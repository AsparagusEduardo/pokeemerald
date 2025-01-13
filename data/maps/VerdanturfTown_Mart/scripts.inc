VerdanturfTown_Mart_MapScripts::
	.byte 0

VerdanturfTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart VerdanturfTown_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
VerdanturfTown_Mart_Pokemart:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_NEST_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_X_SPECIAL
	.2byte ITEM_FLUFFY_TAIL
	pokemartlistend

VerdanturfTown_Mart_EventScript_Boy::
	msgbox VerdanturfTown_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
	end

VerdanturfTown_Mart_EventScript_ExpertF::
	msgbox VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
	end

VerdanturfTown_Mart_EventScript_Lass::
	msgbox VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/VerdanturfTown_Mart/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/VerdanturfTown_Mart/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/VerdanturfTown_Mart/text_es.inc"
.else
	.include "data/maps/VerdanturfTown_Mart/text.inc"
.endif
.endif
.endif
=======
VerdanturfTown_Mart_Text_XSpecialIsCrucial:
	.string "En cualquier combate POKéMON,\n"
	.string "un ESPECIAL X es crucial.\p"
	.string "Potencia la fuerza de algunos\n"
	.string "movimientos, pero sólo durante\l"
	.string "un combate.$"

VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent:
	.string "Parece que no venden por ningún lado\n"
	.string "libros de estrategia para ganar\l"
	.string "en la TIENDA de BATALLA…\p"
	.string "Habrá que fiarse del instinto de una…$"

VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon:
	.string "La NIDO BALL funciona mejor\n"
	.string "con los POKéMON de menor nivel.\p"
	.string "VERDEGAL es el único lugar\n"
	.string "donde se puede comprar una.$"

>>>>>>> Egg/spanish
