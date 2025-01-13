FallarborTown_Mart_MapScripts::
	.byte 0

FallarborTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart FallarborTown_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
FallarborTown_Mart_Pokemart:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_X_SPECIAL
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFEND
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	pokemartlistend

FallarborTown_Mart_EventScript_Woman::
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_PokefanM::
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
	end

FallarborTown_Mart_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/FallarborTown_Mart/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/FallarborTown_Mart/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/FallarborTown_Mart/text_es.inc"
.else
	.include "data/maps/FallarborTown_Mart/text.inc"
.endif
.endif
.endif
=======
FallarborTown_Mart_Text_DecidingSkittyEvolve:
	.string "No acabo de decidirme sobre si quiero\n"
	.string "que mi SKITTY evolucione o no…\p"
	.string "Sólo tengo que usar la PIEDRA LUNAR,\n"
	.string "pero es una decisión tan difícil…\p"
	.string "Si lo hago evolucionar, será mucho\n"
	.string "más fuerte…\p"
	.string "Pero también tendrá otro aspecto…$"

FallarborTown_Mart_Text_Skitty:
	.string "SKITTY: ¿Skimiau?$"

FallarborTown_Mart_Text_SellNuggetIFound:
	.string "La PEPITA que encontré aquí…\n"
	.string "Supongo que o la vendo o me la como,\l"
	.string "porque no sirve para nada…$"

>>>>>>> Egg/spanish
