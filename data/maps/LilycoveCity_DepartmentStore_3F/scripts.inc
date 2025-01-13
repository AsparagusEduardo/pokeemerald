LilycoveCity_DepartmentStore_3F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins:
	.2byte ITEM_PROTEIN
	.2byte ITEM_CALCIUM
	.2byte ITEM_IRON
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_HP_UP
	pokemartlistend

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters:
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_SPECIAL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFEND
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_X_ACCURACY
	pokemartlistend

LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/LilycoveCity_DepartmentStore_3F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/LilycoveCity_DepartmentStore_3F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/LilycoveCity_DepartmentStore_3F/text_es.inc"
.else
	.include "data/maps/LilycoveCity_DepartmentStore_3F/text.inc"
.endif
.endif
.endif
=======
LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
	.string "Si quieres hacer mejorar rápidamente\n"
	.string "a tus POKéMON, usa objetos.\p"
	.string "La PROTEÍNA mejora el ATAQUE\n"
	.string "y el CALCIO aumenta el AT. ESP.$"

LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance:
	.string "Quiero que mi POKéMON tenga\n"
	.string "más resistencia.\p"
	.string "Ahora no sé si mejorar la DEFENSA\n"
	.string "usando HIERRO o la DEF. ESP. con ZINC.$"

LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon:
	.string "He dado CARBURANTE a mi POKéMON\n"
	.string "y su VELOCIDAD ha aumentado.$"

>>>>>>> Egg/spanish
