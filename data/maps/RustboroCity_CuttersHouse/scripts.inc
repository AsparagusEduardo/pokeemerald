RustboroCity_CuttersHouse_MapScripts::
	.byte 0

RustboroCity_CuttersHouse_EventScript_Cutter::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_CUT, RustboroCity_CuttersHouse_EventScript_ExplainCut
	msgbox RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse, MSGBOX_DEFAULT
	giveitem ITEM_HM_CUT
	setflag FLAG_RECEIVED_HM_CUT
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
	release
	end

RustboroCity_CuttersHouse_EventScript_ExplainCut::
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
	release
	end

RustboroCity_CuttersHouse_EventScript_Lass::
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/RustboroCity_CuttersHouse/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/RustboroCity_CuttersHouse/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/RustboroCity_CuttersHouse/text_es.inc"
.else
	.include "data/maps/RustboroCity_CuttersHouse/text.inc"
.endif
.endif
.endif
=======
RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse:
	.string "Esa expresión decidida…\n"
	.string "Esa manera de caminar…\l"
	.string "Esos POKéMON tan bien entrenados…\p"
	.string "Sin duda tú sabes entrenar POKéMON.\p"
	.string "No, espera, no digas nada.\n"
	.string "Me basta con mirarte…\p"
	.string "Estoy seguro de que puedes\n"
	.string "dar buen uso a esta MO.\p"
	.string "Nada de falsa modestia…\n"
	.string "Anda, toma.$"

RustboroCity_CuttersHouse_Text_ExplainCut:
	.string "Esta MO es CORTE.\p"
	.string "Un movimiento de MO es aquel que un\n"
	.string "POKéMON puede usar fuera del combate.\p"
	.string "Cualquier POKéMON que haya aprendido\n"
	.string "CORTE puede derribar árboles si su\l"
	.string "ENTRENADOR tiene la MEDALLA PIEDRA.\p"
	.string "Y, al contrario de lo que ocurre\n"
	.string "con las MT, las MO se pueden usar\l"
	.string "más de una vez.$"

RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees:
	.string "Mi padre colaboró en las obras de\n"
	.string "expansión de CIUDAD FÉRRICA.\p"
	.string "Hizo que sus POKéMON usaran CORTE\n"
	.string "para abrir claros donde construir.$"

>>>>>>> Egg/spanish
