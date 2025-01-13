MossdeepCity_House4_MapScripts::
	.byte 0

MossdeepCity_House4_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_House4_EventScript_CanBattleAtSecretBases
	msgbox MossdeepCity_House4_Text_BrotherLikesToFindBases, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House4_EventScript_CanBattleAtSecretBases::
	msgbox MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House4_EventScript_NinjaBoy::
	lock
	faceplayer
	special CheckPlayerHasSecretBase
	goto_if_eq VAR_RESULT, FALSE, MossdeepCity_House4_EventScript_NoSecretBase
	special GetSecretBaseNearbyMapName
	msgbox MossdeepCity_House4_Text_YouMadeSecretBaseNearX, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House4_EventScript_NoSecretBase::
	msgbox MossdeepCity_House4_Text_MakeSecretBase, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House4_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox MossdeepCity_House4_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MossdeepCity_House4/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MossdeepCity_House4/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MossdeepCity_House4/text_es.inc"
.else
	.include "data/maps/MossdeepCity_House4/text.inc"
.endif
.endif
.endif
=======
MossdeepCity_House4_Text_BrotherLikesToFindBases:
	.string "Mi hermano pequeño dice que quiere\n"
	.string "encontrar las BASES SECRETAS\l"
	.string "de otros ENTRENADORES.$"

MossdeepCity_House4_Text_BrotherLikesToVisitBasesAndBattle:
	.string "Mi hermano pequeño dice que le gusta\n"
	.string "visitar las BASES SECRETAS de otros\l"
	.string "ENTRENADORES y desafiarlos.$"

MossdeepCity_House4_Text_YouMadeSecretBaseNearX:
	.string "¿Tú tienes una BASE SECRETA\n"
	.string "en la {STR_VAR_1}?$"

MossdeepCity_House4_Text_MakeSecretBase:
	.string "Deberías crear una BASE SECRETA\n"
	.string "en alguna parte. ¡Yo iría a buscarla!$"

MossdeepCity_House4_Text_Skitty:
	.string "DELCATTY: ¿Delmiau?$"

>>>>>>> Egg/spanish
