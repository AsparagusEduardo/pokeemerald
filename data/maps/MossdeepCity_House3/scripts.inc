MossdeepCity_House3_MapScripts::
	.byte 0

MossdeepCity_House3_EventScript_SuperRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SUPER_ROD, MossdeepCity_House3_EventScript_ReceivedSuperRod
	msgbox MossdeepCity_House3_Text_YouWantSuperRod, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House3_EventScript_DeclineSuperRod
	msgbox MossdeepCity_House3_Text_SuperRodIsSuper, MSGBOX_DEFAULT
	giveitem ITEM_SUPER_ROD
	setflag FLAG_RECEIVED_SUPER_ROD
	msgbox MossdeepCity_House3_Text_TryDroppingRodInWater, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_EventScript_ReceivedSuperRod::
	msgbox MossdeepCity_House3_Text_GoAfterSeafloorPokemon, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_EventScript_DeclineSuperRod::
	msgbox MossdeepCity_House3_Text_DontYouLikeToFish, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MossdeepCity_House3/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MossdeepCity_House3/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MossdeepCity_House3/text_es.inc"
.else
	.include "data/maps/MossdeepCity_House3/text.inc"
.endif
.endif
.endif
=======
MossdeepCity_House3_Text_YouWantSuperRod:
	.string "¡Oye, tú, una SUPERCAÑA es lo mejor\n"
	.string "para cualquier ENTRENADOR!\p"
	.string "¿Que no? Pues es lo mejor para\n"
	.string "pescar POKéMON marinos.\p"
	.string "¿Qué te parece?\n"
	.string "¿A que quieres una?$"

MossdeepCity_House3_Text_SuperRodIsSuper:
	.string "¡Si ya lo sabía yo!\p"
	.string "¡Al fin y al cabo una SUPERCAÑA\n"
	.string "es la caña!$"

MossdeepCity_House3_Text_TryDroppingRodInWater:
	.string "Si ves algo de agua, lanza la CAÑA\n"
	.string "y espera a ver qué pica.$"

MossdeepCity_House3_Text_DontYouLikeToFish:
	.string "¿Y eso?\n"
	.string "¿No te gusta pescar?$"

MossdeepCity_House3_Text_GoAfterSeafloorPokemon:
	.string "¡Hazte con los POKéMON marinos\n"
	.string "con la ayuda de tu SUPERCAÑA!$"

>>>>>>> Egg/spanish
