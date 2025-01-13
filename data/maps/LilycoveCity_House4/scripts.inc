LilycoveCity_House4_MapScripts::
	.byte 0

LilycoveCity_House4_EventScript_Man1::
	msgbox LilycoveCity_House4_Text_MysteriesAtBottomOfSea, MSGBOX_NPC
	end

LilycoveCity_House4_EventScript_Man2::
	msgbox LilycoveCity_House4_Text_UnderwaterTrenchMossdeepSootopolis, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/LilycoveCity_House4/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/LilycoveCity_House4/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/LilycoveCity_House4/text_es.inc"
.else
	.include "data/maps/LilycoveCity_House4/text.inc"
.endif
.endif
.endif
=======
LilycoveCity_House4_Text_MysteriesAtBottomOfSea:
	.string "“Los mayores misterios de nuestro\n"
	.string "planeta están en el fondo del mar.”\p"
	.string "No me acuerdo de quién dijo eso…$"

LilycoveCity_House4_Text_UnderwaterTrenchMossdeepSootopolis:
	.string "Hay una gran zanja submarina entre\n"
	.string "ALGARIA y ARRECÍPOLIS.\p"
	.string "Al menos eso tengo entendido…$"

>>>>>>> Egg/spanish
