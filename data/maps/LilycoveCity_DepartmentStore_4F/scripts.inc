LilycoveCity_DepartmentStore_4F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
	.2byte ITEM_TM_FIRE_BLAST
	.2byte ITEM_TM_THUNDER
	.2byte ITEM_TM_BLIZZARD
	.2byte ITEM_TM_HYPER_BEAM
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs:
<<<<<<< HEAD
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_TM_SAFEGUARD
	.2byte ITEM_TM_REFLECT
	.2byte ITEM_TM_LIGHT_SCREEN
	pokemartlistend
=======
	.2byte ITEM_TM17  @ Protect
	.2byte ITEM_TM20  @ Safeguard
	.2byte ITEM_TM33  @ Reflect
	.2byte ITEM_TM16  @ Light Screen
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
	.string "Mmmm…\p"
	.string "Un movimiento de ATAQUE…\n"
	.string "Un movimiento de DEFENSA…\p"
	.string "No es fácil decidir qué movimientos de\n"
	.string "MT hay que enseñar a un POKéMON…$"

LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
	.string "Hay tantos movimientos de MT…\p"
	.string "He leído en un catálogo que hay como\n"
	.string "cincuenta tipos diferentes.$"

LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
	.string "Quisiera tener todas las MT, pero da\n"
	.string "igual porque un POKéMON sólo puede\l"
	.string "aprender cuatro movimientos.$"
>>>>>>> Egg/spanish

.ifdef FRENCH
	.include "data/maps/LilycoveCity_DepartmentStore_4F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/LilycoveCity_DepartmentStore_4F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/LilycoveCity_DepartmentStore_4F/text_es.inc"
.else
	.include "data/maps/LilycoveCity_DepartmentStore_4F/text.inc"
.endif
.endif
.endif
