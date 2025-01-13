MossdeepCity_House1_MapScripts::
	.byte 0

MossdeepCity_House1_EventScript_BlackBelt::
	lock
	faceplayer
	bufferleadmonspeciesname STR_VAR_1
	msgbox MossdeepCity_House1_Text_HmmYourPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetPokeblockNameByMonNature
	goto_if_eq VAR_RESULT, 0, MossdeepCity_House1_EventScript_NeutralNature
	msgbox MossdeepCity_House1_Text_ItLikesXPokeblocks, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House1_EventScript_NeutralNature::
	msgbox MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House1_EventScript_Woman::
	msgbox MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MossdeepCity_House1/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MossdeepCity_House1/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MossdeepCity_House1/text_es.inc"
.else
	.include "data/maps/MossdeepCity_House1/text.inc"
.endif
.endif
.endif
=======
MossdeepCity_House1_Text_HmmYourPokemon:
	.string "¡Ajá!\n"
	.string "Tu {STR_VAR_1} lo tiene claro…$"

MossdeepCity_House1_Text_ItLikesXPokeblocks:
	.string "Lo que más le gusta en el mundo\n"
	.string "es un {STR_VAR_1}, ¿a que sí?\p"
	.string "Sí, sí, no cabe ninguna duda. ¡Haría lo\n"
	.string "que fuera por un {STR_VAR_1}!$"

MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks:
	.string "Le da un poco igual qué tipo\n"
	.string "de {POKEBLOCK}S le des, ¿no?$"

MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes:
	.string "Mi marido adivina enseguida qué tipo\n"
	.string "de {POKEBLOCK}S prefiere cada POKéMON.$"

>>>>>>> Egg/spanish
