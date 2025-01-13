LilycoveCity_House3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_House3_OnTransition
	.byte 0

LilycoveCity_House3_OnTransition:
	random 4
	copyvar VAR_TEMP_1, VAR_RESULT
	end

LilycoveCity_House3_EventScript_PokefanF::
	lock
	faceplayer
	msgbox LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LilycoveCity_House3_EventScript_DeclinePokeblockLearn
	msgbox LilycoveCity_House3_Text_ExplainPokeblocks, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_House3_EventScript_DeclinePokeblockLearn::
	msgbox LilycoveCity_House3_Text_OhAreYouSure, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_House3_EventScript_Man::
	lock
	faceplayer
	msgbox LilycoveCity_House3_Text_HappyToHaveQuadruplets, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_House3_EventScript_GameBoyKid1::
	lock
	faceplayer
	switch VAR_TEMP_1
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
	end

LilycoveCity_House3_EventScript_GameBoyKid2::
	lock
	faceplayer
	switch VAR_TEMP_1
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
	end

LilycoveCity_House3_EventScript_GameBoyKid3::
	lock
	faceplayer
	switch VAR_TEMP_1
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
	end

LilycoveCity_House3_EventScript_GameBoyKid4::
	lock
	faceplayer
	switch VAR_TEMP_1
	case 0, LilycoveCity_House3_EventScript_WereDoingMultiBattle
	case 1, LilycoveCity_House3_EventScript_WereMixingRecords
	case 2, LilycoveCity_House3_EventScript_WereBlendingBerries
	case 3, LilycoveCity_House3_EventScript_WereDoingContest
	end

LilycoveCity_House3_EventScript_WereDoingMultiBattle::
	msgbox LilycoveCity_House3_Text_GoingToWinMultiBattles, MSGBOX_DEFAULT
	release
	end

LilycoveCity_House3_EventScript_WereMixingRecords::
	msgbox LilycoveCity_House3_Text_LikeMixingAtRecordCorner, MSGBOX_DEFAULT
	release
	end

LilycoveCity_House3_EventScript_WereBlendingBerries::
	msgbox LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender, MSGBOX_DEFAULT
	release
	end

LilycoveCity_House3_EventScript_WereDoingContest::
	msgbox LilycoveCity_House3_Text_GoingToEnterContest, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/LilycoveCity_House3/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/LilycoveCity_House3/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/LilycoveCity_House3/text_es.inc"
.else
	.include "data/maps/LilycoveCity_House3/text.inc"
.endif
.endif
.endif
=======
LilycoveCity_House3_Text_LearnFromMasterOfPokeblocks:
	.string "¡Ahí va! ¿Estás viajando sin compañía?\n"
	.string "¡Si eres muy joven! ¡Qué valiente eres!\p"
	.string "Seguro que mis hijos podrían aprender\n"
	.string "un par de cosas de ti.\p"
	.string "Yo soy la MAESTRA de los {POKEBLOCK}S.\p"
	.string "Si me pongo un poco en serio, vaya,\n"
	.string "hago unos {POKEBLOCK}S increíbles.\p"
	.string "¿Te apetece aprender un par\n"
	.string "de cosas de mí?$"

LilycoveCity_House3_Text_OhAreYouSure:
	.string "¿Seguro? ¿De verdad?\p"
	.string "¡A veces también hay que pedir\n"
	.string "ayuda a los demás, sabes!$"

LilycoveCity_House3_Text_ExplainPokeblocks:
	.string "¡Muy bien! ¡Se ve que piensas!\n"
	.string "Esto va a ser un poco largo,\l"
	.string "así que escucha.\p"
	.string "¡Atención, allá voy!\p"
	.string "Si te fijas, verás que los {POKEBLOCK}S\n"
	.string "están clasificados según su masa.\p"
	.string "Cuanta menos masa tengan,\n"
	.string "mejor es el resultado. ¡No lo olvides!\p"
	.string "Un buen {POKEBLOCK} tiene poca\n"
	.string "masa y mucha eficacia.\p"
	.string "Un POKéMON puede comer más\n"
	.string "{POKEBLOCK}S buenos que {POKEBLOCK}S\l"
	.string "normales.\p"
	.string "Y esto es muy importante…\p"
	.string "Si quieres que tus {POKEBLOCK}S sean\n"
	.string "suaves, usa diferentes tipos de BAYA.\p"
	.string "Recuerda que el tipo de BAYA influye\n"
	.string "en la suavidad de los {POKEBLOCK}S.\p"
	.string "Y otra cosa más…\p"
	.string "Cuanta más gente mezcle BAYAS,\n"
	.string "más suaves serán los {POKEBLOCK}S.\p"
	.string "Por eso debes hablar con la gente\n"
	.string "y hacer {POKEBLOCK}S juntos.\p"
	.string "Eso es todo lo que necesitas saber\n"
	.string "para hacer buenos {POKEBLOCK}S.\p"
	.string "Si todos tuvieran POKéMON cariñosos,\n"
	.string "{POKEBLOCK}S suaves y muchos amigos,\l"
	.string "el mundo sería un lugar mejor.\p"
	.string "¡Ánimo y no te rindas!$"

LilycoveCity_House3_Text_HappyToHaveQuadruplets:
	.string "Cuando mi mujer tuvo cuatrillizos,\n"
	.string "casi me dio un ataque…\p"
	.string "Pero ahora, cuando los veo jugar\n"
	.string "juntos, me siento tan feliz…$"

LilycoveCity_House3_Text_GoingToWinMultiBattles:
	.string "Estamos entablando COMBATES\n"
	.string "MÚLTIPLES y sé que voy a ganar.$"

LilycoveCity_House3_Text_LikeMixingAtRecordCorner:
	.string "Nos encanta mezclar cosas\n"
	.string "en el CENTRO de RÉCORDS.\p"
	.string "Pero ¿qué se mezcla allí?$"

LilycoveCity_House3_Text_MakePokeblocksWithBerryBlender:
	.string "Vamos a hacer {POKEBLOCK}S buenísimos\n"
	.string "con una LICUABAYAS.$"

LilycoveCity_House3_Text_GoingToEnterContest:
	.string "Quiero poder fardar de POKéMON, por\n"
	.string "eso vamos a apuntarnos a un CONCURSO.$"

>>>>>>> Egg/spanish
