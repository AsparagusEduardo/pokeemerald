LavaridgeTown_HerbShop_MapScripts::
	.byte 0

LavaridgeTown_HerbShop_EventScript_Clerk::
	lock
	faceplayer
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
	waitmessage
	pokemart LavaridgeTown_HerbShop_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LavaridgeTown_HerbShop_Pokemart:
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REVIVAL_HERB
	pokemartlistend

LavaridgeTown_HerbShop_EventScript_ExpertM::
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
	end

LavaridgeTown_HerbShop_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
	giveitem ITEM_CHARCOAL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_CHARCOAL
	release
	end

LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/LavaridgeTown_HerbShop/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/LavaridgeTown_HerbShop/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/LavaridgeTown_HerbShop/text_es.inc"
.else
	.include "data/maps/LavaridgeTown_HerbShop/text.inc"
.endif
.endif
.endif
=======
LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
	.string "Hola. Éste es el HERBOLARIO. Nuestras\n"
	.string "medicinas son baratas y eficaces.$"

LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
	.string "¿Has venido a comprar hierbas\n"
	.string "medicinales a LAVACALDA?\p"
	.string "Haces bien. Son muy recomendables.\p"
	.string "¡Me has gustado! ¡Toma esto!$"

LavaridgeTown_HerbShop_Text_ExplainCharcoal:
	.string "El CARBÓN que te he dado sirve\n"
	.string "para preparar una medicina natural.\p"
	.string "También hace maravillas cuando\n"
	.string "se lo das a un POKéMON.\p"
	.string "Intensifica la potencia de los\n"
	.string "movimientos de tipo FUEGO.$"

LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
	.string "Las hierbas medicinales funcionan\n"
	.string "increíblemente bien, pero, si le das\l"
	.string "una a un POKéMON, te tendrá manía.\l"
	.string "¡El sabor es superamargo!$"

>>>>>>> Egg/spanish
