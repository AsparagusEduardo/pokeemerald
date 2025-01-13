SlateportCity_PokemonFanClub_MapScripts::
	.byte 0

SlateportCity_PokemonFanClub_EventScript_Chairman::
	lock
	faceplayer
	goto_if_unset FLAG_ENTERED_CONTEST, SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest
	call_if_unset FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_MeetChairman
	switch VAR_SLATEPORT_FAN_CLUB_STATE
	case 0, SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment
	case 1, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon
	case 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
	release
	end

SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment::
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 1
	msgbox SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon, MSGBOX_DEFAULT
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
	end

SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon::
	setvar VAR_TEMP_2, 0
	call_if_set FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
	call_if_set FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
	call_if_set FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
	call_if_set FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
	call_if_set FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
	call_if_eq VAR_TEMP_2, CONTEST_CATEGORIES_COUNT, SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves
	goto_if_eq VAR_SLATEPORT_FAN_CLUB_STATE, 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
	msgbox SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing, MSGBOX_DEFAULT
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
	end

SlateportCity_PokemonFanClub_EventScript_NoMoreScarves::
	msgbox SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon::
	msgbox SlateportCity_PokemonFanClub_Text_HmHmISee, MSGBOX_DEFAULT
	setvar VAR_TEMP_1, 0
	call_if_unset FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonTough
	call_if_unset FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonSmart
	call_if_unset FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCute
	call_if_unset FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty
	call_if_unset FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCool
	bufferleadmonspeciesname STR_VAR_1
	switch VAR_TEMP_1
	case 0, SlateportCity_PokemonFanClub_EventScript_NoHighConditions
	case 1, SlateportCity_PokemonFanClub_EventScript_GiveRedScarf
	case 2, SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf
	case 3, SlateportCity_PokemonFanClub_EventScript_GivePinkScarf
	case 4, SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf
	case 5, SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf
	release
	end

SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves::
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 2
	return

SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf::
	addvar VAR_TEMP_2, 1
	return

SlateportCity_PokemonFanClub_EventScript_NoHighConditions::
	msgbox SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_GiveRedScarf::
	checkitemspace ITEM_RED_SCARF
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_RED_SCARF
	giveitem ITEM_RED_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_ExplainRedScarf, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf::
	checkitemspace ITEM_BLUE_SCARF
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_BLUE_SCARF
	giveitem ITEM_BLUE_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_ExplainBlueScarf, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_GivePinkScarf::
	checkitemspace ITEM_PINK_SCARF
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_PINK_SCARF
	giveitem ITEM_PINK_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_ExplainPinkScarf, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf::
	checkitemspace ITEM_GREEN_SCARF
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_GREEN_SCARF
	giveitem ITEM_GREEN_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_ExplainGreenScarf, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf::
	checkitemspace ITEM_YELLOW_SCARF
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_YELLOW_SCARF
	giveitem ITEM_YELLOW_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_ExplainYellowScarf, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf::
	msgbox SlateportCity_PokemonFanClub_Text_NoSpaceForReward, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_CheckMonCool::
	specialvar VAR_RESULT, CheckLeadMonCool
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCool
	return

SlateportCity_PokemonFanClub_EventScript_SetMonCool::
	setvar VAR_TEMP_1, 1
	return

SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty::
	specialvar VAR_RESULT, CheckLeadMonBeauty
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonBeauty
	return

SlateportCity_PokemonFanClub_EventScript_SetMonBeauty::
	setvar VAR_TEMP_1, 2
	return

SlateportCity_PokemonFanClub_EventScript_CheckMonCute::
	specialvar VAR_RESULT, CheckLeadMonCute
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCute
	return

SlateportCity_PokemonFanClub_EventScript_SetMonCute::
	setvar VAR_TEMP_1, 3
	return

SlateportCity_PokemonFanClub_EventScript_CheckMonSmart::
	specialvar VAR_RESULT, CheckLeadMonSmart
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonSmart
	return

SlateportCity_PokemonFanClub_EventScript_SetMonSmart::
	setvar VAR_TEMP_1, 4
	return

SlateportCity_PokemonFanClub_EventScript_CheckMonTough::
	specialvar VAR_RESULT, CheckLeadMonTough
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonTough
	return

SlateportCity_PokemonFanClub_EventScript_SetMonTough::
	setvar VAR_TEMP_1, 5
	return

SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest::
	goto_if_set FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
	release
	end

SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest::
	msgbox SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_MeetChairman::
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
	return

SlateportCity_PokemonFanClub_EventScript_SootheBellWoman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell
	msgbox SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, SlateportCity_PokemonFanClub_EventScript_GiveSootheBell
	release
	end

SlateportCity_PokemonFanClub_EventScript_GiveSootheBell::
	playse SE_PIN
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
	waitmovement 0
	msgbox SlateportCity_PokemonFanClub_Text_PokemonAdoresYou, MSGBOX_DEFAULT
	giveitem ITEM_SOOTHE_BELL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SOOTHE_BELL
	release
	end

SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell::
	msgbox SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_Man::
	msgbox SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting, MSGBOX_NPC
	end

SlateportCity_PokemonFanClub_EventScript_Twin::
	msgbox SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein, MSGBOX_NPC
	end

SlateportCity_PokemonFanClub_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox SlateportCity_PokemonFanClub_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SlateportCity_PokemonFanClub_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox SlateportCity_PokemonFanClub_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SlateportCity_PokemonFanClub_EventScript_Azumarill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	msgbox SlateportCity_PokemonFanClub_Text_Azumarill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SlateportCity_PokemonFanClub/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SlateportCity_PokemonFanClub/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SlateportCity_PokemonFanClub/text_es.inc"
.else
	.include "data/maps/SlateportCity_PokemonFanClub/text.inc"
.endif
.endif
.endif
=======
SlateportCity_PokemonFanClub_Text_MeetChairman:
	.string "Ejem, ejem… ¡Soy el PRESIDENTE\n"
	.string "del CLUB de FANS de POKéMON!\p"
	.string "Naturalmente, el PRESIDENTE\n"
	.string "es la persona más importante…\p"
	.string "Nadie me iguala entrenando POKéMON.\n"
	.string "¡Nadie!\p"
	.string "Bueno, te voy a explicar qué son\n"
	.string "los CONCURSOS POKéMON.\p"
	.string "¡Son competiciones donde puedes\n"
	.string "mostrar tus POKéMON al mundo mundial!\p"
	.string "Pero siempre tienen lugar en el quinto\n"
	.string "pino, así que no puedo participar mucho.\p"
	.string "Por eso nos reunimos aquí, para\n"
	.string "que todo el mundo pueda fardar\l"
	.string "de POKéMON, aunque sea un poco.$"

SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon:
	.string "Ya me gustaría ver al POKéMON de algún\n"
	.string "ENTRENADOR que haya participado\l"
	.string "en algún CONCURSO POKéMON…$"

SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon:
	.string "Ejem, ejem… ¡Ya veo que has\n"
	.string "participado en un CONCURSO POKéMON!\p"
	.string "Estoy deseando ver cómo\n"
	.string "has criado a tu POKéMON.\p"
	.string "Es maravilloso ver cómo los demás\n"
	.string "ENTRENADORES cuidan a sus POKéMON.\p"
	.string "Me encantan las caras satisfechas\n"
	.string "de los POKéMON bien entrenados…\p"
	.string "Y las cariñosas miradas de sus\n"
	.string "orgullosos ENTRENADORES…\p"
	.string "Ay, ver tanta felicidad me llena\n"
	.string "de gozo…\p"
	.string "¡Oh, pero discúlpame, empiezo\n"
	.string "a hablar y no paro!\p"
	.string "Te lo ruego, permíteme examinar tu\n"
	.string "POKéMON, a ver cuánto ha crecido.$"

SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing:
	.string "¿Qué tal está creciendo tu\n"
	.string "POKéMON? Déjame examinarlo…$"

SlateportCity_PokemonFanClub_Text_HmHmISee:
	.string "Ajá… Muy bien…\n"
	.string "Ya veo…$"

SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks:
	.string "Mmmm… No está mal, pero\n"
	.string "tampoco está bien…\p"
	.string "¡Tú, que entrenas POKéMON,\n"
	.string "deberías esforzarte más con éste!\p"
	.string "Una sugerencia… ¿Por qué no\n"
	.string "le das más {POKEBLOCK}S?$"

SlateportCity_PokemonFanClub_Text_NoSpaceForReward:
	.string "Vaya, vaya…\p"
	.string "Tu POKéMON está creciendo\n"
	.string "muy bien. ¡Te mereces un premio!\p"
	.string "Lástima que no tengas sitio\n"
	.string "en la MOCHILA…$"

SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis:
	.string "¡Tu {STR_VAR_1} está creciendo\n"
	.string "a un ritmo impresionante!\l"
	.string "¡Qué magnífico ejemplar!\p"
	.string "Pero, si le das esto, crecerá\n"
	.string "aún mejor. ¡Te lo digo yo!$"

SlateportCity_PokemonFanClub_Text_ExplainRedScarf:
	.string "Dale el PAÑUELO ROJO a un POKéMON.\p"
	.string "¡Así todo el mundo podrá ver\n"
	.string "lo carismático que es!$"

SlateportCity_PokemonFanClub_Text_ExplainBlueScarf:
	.string "Dale el PAÑUELO AZUL a un POKéMON.\p"
	.string "¡De esta manera conseguirás realzar\n"
	.string "su belleza aún más!$"

SlateportCity_PokemonFanClub_Text_ExplainPinkScarf:
	.string "Dale el PAÑUELO ROSA a un POKéMON.\p"
	.string "¡Con él lograrás que parezca aún\n"
	.string "más dulce de lo que ya es!$"

SlateportCity_PokemonFanClub_Text_ExplainGreenScarf:
	.string "Dale el PAÑUELO VERDE a un POKéMON.\p"
	.string "¡Potenciará su ingenio!$"

SlateportCity_PokemonFanClub_Text_ExplainYellowScarf:
	.string "Dale el PAÑUELO AMARILLO a un POKéMON.\p"
	.string "¡Le hará ser mucho más duro\n"
	.string "de lo que es ahora!$"

SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou:
	.string "Lo siento, pero no me queda nada\n"
	.string "más que darte… ¡Nada de nada!\p"
	.string "Después de todo, tienes el don de\n"
	.string "saber entrenar POKéMON sin recurrir\l"
	.string "continuamente a objetos, ¿no?$"

SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou:
	.string "Me encanta ver POKéMON que\n"
	.string "quieren a sus ENTRENADORES.\p"
	.string "Los POKéMON son muy sensibles a los\n"
	.string "sentimientos de sus ENTRENADORES.\p"
	.string "Si tratas a tus POKéMON con amor\n"
	.string "y cariño, te corresponderán.\p"
	.string "Cuando tus POKéMON te quieran\n"
	.string "un poco más, vuelve a verme.$"

SlateportCity_PokemonFanClub_Text_PokemonAdoresYou:
	.string "Tu POKéMON te adora.\p"
	.string "¡Como has demostrado tener un gran\n"
	.string "corazón, el CLUB de FANS te regala esto!$"

SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove:
	.string "Los POKéMON son muy sensibles a los\n"
	.string "sentimientos de los ENTRENADORES.\p"
	.string "Si tratas a tus POKéMON con amor\n"
	.string "y cariño, te corresponderán.$"

SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting:
	.string "Si continuamente dejas que tus POKéMON\n"
	.string "caigan debilitados durante un combate,\l"
	.string "acabarán por resentirse de esto.\p"
	.string "Muy pronto empezarán a perder\n"
	.string "confianza en su ENTRENADOR.\p"
	.string "En otras palabras, terminarás\n"
	.string "por no gustarles ni un pelo.$"

SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein:
	.string "¿A los POKéMON les gusta\n"
	.string "que se les dé objetos?\p"
	.string "No sé, los míos se pusieron muy\n"
	.string "contentos cuando les di PROTEÍNA.$"

SlateportCity_PokemonFanClub_Text_Skitty:
	.string "SKITTY: Skitiiiiii…$"

SlateportCity_PokemonFanClub_Text_Zigzagoon:
	.string "ZIGZAGOON: Zigzaaaa…$"

SlateportCity_PokemonFanClub_Text_Azumarill:
	.string "AZUMARILL: ¿Marimari?$"

>>>>>>> Egg/spanish
