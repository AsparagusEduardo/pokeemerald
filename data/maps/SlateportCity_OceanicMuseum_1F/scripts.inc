.set LOCALID_FAMILIAR_GRUNT, 13

SlateportCity_OceanicMuseum_1F_MapScripts::
	.byte 0

SlateportCity_OceanicMuseum_1F_EventScript_EntranceAttendant::
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeLeft::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
	end

SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFeeRight::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee
	end

SlateportCity_OceanicMuseum_1F_EventScript_PayEntranceFee::
	showmoneybox 0, 0
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee
	closemessage
	hidemoneybox
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
	waitmovement 0
	releaseall
	end

SlateportCity_OceanicMuseum_1F_EventScript_CheckMoneyForFee::
	checkmoney 50
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney
	playse SE_SHOP
	removemoney 50
	updatemoneybox
	msgbox SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself, MSGBOX_DEFAULT
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
	hidemoneybox
	releaseall
	end

SlateportCity_OceanicMuseum_1F_EventScript_NotEnoughMoney::
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway
	msgbox SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter
	waitmovement 0
	releaseall
	end

SlateportCity_OceanicMuseum_1F_EventScript_AllowEntranceAnyway::
	msgbox SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup, MSGBOX_DEFAULT
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 1
	hidemoneybox
	releaseall
	end

SlateportCity_OceanicMuseum_1F_Movement_PushPlayerBackFromCounter:
	walk_down
	step_end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt1::
	msgbox SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt2::
	msgbox SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt3::
	msgbox SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt4::
	msgbox SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt5::
	msgbox SlateportCity_OceanicMuseum_1F_Text_RustboroBungled, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumGrunt6::
	msgbox SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_WhirlpoolExperiment::
	msgbox SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_WaterfallExperiment::
	msgbox SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_OceanSoilDisplay::
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_BeachSandDisplay::
	msgbox SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact1::
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact2::
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_OceanicMinifact3::
	msgbox SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_FossilDisplay::
	msgbox SlateportCity_OceanicMuseum_1F_Text_FossilDisplay, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_DepthMeasuringMachine::
	msgbox SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron1::
	msgbox SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron2::
	msgbox SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron3::
	msgbox SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_MuseumPatron4::
	msgbox SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGrunt::
	lock
	faceplayer
	delay 8
	playse SE_PIN
	applymovement LOCALID_FAMILIAR_GRUNT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_FAMILIAR_GRUNT, Common_Movement_Delay48
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_THIEF
	goto_if_eq VAR_RESULT, 0, SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief
	setflag FLAG_RECEIVED_TM_THIEF
	msgbox SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain, MSGBOX_DEFAULT
	closemessage
	goto_if_eq VAR_FACING, DIR_NORTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth
	goto_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth
	goto_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
	goto_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast
	end

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitNorth::
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
	end

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitSouth::
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
	end

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExitWestEast::
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast
	applymovement LOCALID_FAMILIAR_GRUNT, SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit
	waitmovement 0
	goto SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited
	end

SlateportCity_OceanicMuseum_1F_EventScript_FamiliarGruntExited::
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT
	playse SE_EXIT
	removeobject LOCALID_FAMILIAR_GRUNT
	release
	end

SlateportCity_OceanicMuseum_1F_EventScript_NoRoomForThief::
	msgbox SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis, MSGBOX_DEFAULT
	release
	end

SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitNorth:
	delay_16
	delay_8
	delay_4
	walk_in_place_faster_down
	step_end

SlateportCity_OceanicMuseum_1F_Movement_PlayerWatchGruntExitWestEast:
	delay_16
	walk_in_place_faster_down
	step_end

SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExit:
	face_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_8
	step_end

SlateportCity_OceanicMuseum_1F_Movement_FamiliarGruntExitNorth:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_8
	step_end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SlateportCity_OceanicMuseum_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SlateportCity_OceanicMuseum_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SlateportCity_OceanicMuseum_1F/text_es.inc"
.else
	.include "data/maps/SlateportCity_OceanicMuseum_1F/text.inc"
.endif
.endif
.endif
=======
SlateportCity_OceanicMuseum_1F_Text_WouldYouLikeToEnter:
	.string "Hola. Éste es el MUSEO OCEÁNICO.\p"
	.string "La entrada cuesta 50¥.\n"
	.string "¿Quieres entrar?$"

SlateportCity_OceanicMuseum_1F_Text_PleaseEnjoyYourself:
	.string "Disfruta de la visita.$"

SlateportCity_OceanicMuseum_1F_Text_NotEnoughMoney:
	.string "Vaya, lo siento, pero parece que\n"
	.string "no tienes bastante dinero…$"

SlateportCity_OceanicMuseum_1F_Text_CatchUpWithYourGroup:
	.string "¿Ah, sí? ¿Vienes con el grupo\n"
	.string "que entró justo antes?\p"
	.string "¡Pues llegas tarde!\n"
	.string "¡Date prisa para alcanzarles!$"

SlateportCity_OceanicMuseum_1F_Text_AquaExistForGoodOfAll:
	.string "¡Nosotros, el EQUIPO AQUA, existimos\n"
	.string "por el bien de la humanidad!$"

SlateportCity_OceanicMuseum_1F_Text_OurBossIsntHere:
	.string "Nos dijeron que viniéramos aquí\n"
	.string "y eso hemos hecho, pero…\p"
	.string "Nuestro JEFE no está y sin él\n"
	.string "no somos nada.$"

SlateportCity_OceanicMuseum_1F_Text_WouldStuffHereMakeMeRich:
	.string "Si birlara todas las cosas\n"
	.string "que hay aquí, ¿me haría rico?$"

SlateportCity_OceanicMuseum_1F_Text_CanLearnForNefariousDeeds:
	.string "Todo lo que aprenda aquí puedo\n"
	.string "aplicarlo con fines malvados…$"

SlateportCity_OceanicMuseum_1F_Text_RustboroBungled:
	.string "¡Si nuestro matón no la hubiera\n"
	.string "pifiado en CIUDAD FÉRRICA,\l"
	.string "no tendríamos que estar aquí!$"

SlateportCity_OceanicMuseum_1F_Text_DidntHaveMoney:
	.string "Yo no tenía 50¥, así que tuve que\n"
	.string "burlar a la recepcionista para entrar.\l"
	.string "¡No fue nada fácil!$"

SlateportCity_OceanicMuseum_1F_Text_LearnAboutSeaForBattling:
	.string "Quiero aprender todo lo que pueda\n"
	.string "sobre el mar y aplicarlo al combate.$"

SlateportCity_OceanicMuseum_1F_Text_SternIsRoleModel:
	.string "Me entra un mareo horrible\n"
	.string "cada vez que veo el mar…\p"
	.string "¡Ojalá pudiera ser tan valiente\n"
	.string "como el CAP. BABOR!$"

SlateportCity_OceanicMuseum_1F_Text_MustBePokemonWeDontKnow:
	.string "El mar es tan, tan grande y tan,\n"
	.string "tan profundo…\p"
	.string "Seguro que hay muchos POKéMON\n"
	.string "de los que nunca hemos oído hablar.$"

SlateportCity_OceanicMuseum_1F_Text_WantSeaPokemon:
	.string "Quiero un POKéMON marino.\p"
	.string "Abrazarlo resultaría tan\n"
	.string "fresquito y agradable…$"

SlateportCity_OceanicMuseum_1F_Text_RememberMeTakeThis:
	.string "¡Aaaaah!\n"
	.string "¿Qué haces aquí?\p"
	.string "¿Yo? Soy el miembro del EQUIPO\n"
	.string "AQUA al que diste una paliza en el\l"
	.string "TÚNEL FERVERGAL, ¿recuerdas?\p"
	.string "¡Hala, toma!\n"
	.string "¡Y espero que me perdones!$"

SlateportCity_OceanicMuseum_1F_Text_HopeINeverSeeYouAgain:
	.string "Esa MT va más contigo que\n"
	.string "conmigo.\p"
	.string "¡Hasta nunca, espero!\n"
	.string "¡Jua, ja, ja, ja!$"

SlateportCity_OceanicMuseum_1F_Text_YouHaveToTakeThis:
	.string "¡Encima esto!\n"
	.string "¡Toma esto y deja que me largue!$"

SlateportCity_OceanicMuseum_1F_Text_WhirlpoolExperiment:
	.string "Un líquido azul fluye en espiral dentro\n"
	.string "de un recipiente de cristal.\p"
	.string "“Éste es un experimento que se sirve\n"
	.string "de la fuerza del viento para recrear\l"
	.string "un TORBELLINO.”$"

SlateportCity_OceanicMuseum_1F_Text_WaterfallExperiment:
	.string "Una bola roja sube y baja dentro\n"
	.string "de un recipiente de cristal.\p"
	.string "“Éste es un experimento que se sirve\n"
	.string "del principio de la flotabilidad para\l"
	.string "simular una CASCADA.”$"

SlateportCity_OceanicMuseum_1F_Text_OceanSoilDisplay:
	.string "Se trata de una muestra de tierra\n"
	.string "del fondo oceánico.\p"
	.string "“A lo largo de miles de años, los\n"
	.string "restos orgánicos se van depositando\l"
	.string "en el fondo del mar y crean capas.\p"
	.string "Mediante el análisis de estas capas\n"
	.string "sedimentarias, se puede aprender mucho\l"
	.string "sobre el pasado más remoto.”$"

SlateportCity_OceanicMuseum_1F_Text_BeachSandDisplay:
	.string "Se trata de una muestra de arena\n"
	.string "de playa.\p"
	.string "“El agua de los ríos erosiona las rocas\n"
	.string "de las montañas, las fragmenta y las\l"
	.string "entierra en el lecho de los mismos.\p"
	.string "Son reducidas a gravilla por la fricción\n"
	.string "del agua y acaban depositándose\l"
	.string "en las playas.”$"

SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact1:
	.string "MINI-INFO OCEÁNICA 1\n"
	.string "¿Por qué el agua del mar es azul?\p"
	.string "“La luz se compone de muchos colores.\p"
	.string "Cuando la luz atraviesa el agua,\n"
	.string "la mayoría de estos colores son\l"
	.string "absorbidos, sobre todo los rojos.\p"
	.string "La luz azul se dispersa más fácilmente,\n"
	.string "por eso el mar tiene ese color.”$"

SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact2:
	.string "MINI-INFO OCEÁNICA 2\n"
	.string "¿Por qué el mar es salado?\p"
	.string "“El agua del mar contiene sal disuelta\n"
	.string "bajo forma de iones de sodio y cloruro.\p"
	.string "Estos iones se separan de las rocas y\n"
	.string "llegan al mar por la acción de la lluvia.\p"
	.string "La alta concentración de sal disuelta\n"
	.string "hace que el mar sea salado.”$"

SlateportCity_OceanicMuseum_1F_Text_OceanicMinifact3:
	.string "MINI-INFO OCEÁNICA 3\n"
	.string "¿Qué es mayor? ¿La tierra o el mar?\p"
	.string "“El mar cubre alrededor de un 70% del\n"
	.string "planeta, y el resto es tierra firme.\p"
	.string "Por lo tanto, el mar es más del doble\n"
	.string "de grande que la tierra.”$"

SlateportCity_OceanicMuseum_1F_Text_FossilDisplay:
	.string "Se trata de un fósil con crestas\n"
	.string "onduladas.\p"
	.string "“La marea erosiona el suelo\n"
	.string "del fondo oceánico.\p"
	.string "Las corrientes marcan el suelo\n"
	.string "con pequeñas crestas y valles.\p"
	.string "Si este suelo termina fosilizándose,\n"
	.string "recibe el nombre de marca fósil.”$"

SlateportCity_OceanicMuseum_1F_Text_DepthMeasuringMachine:
	.string "Una extraña máquina está rotando\n"
	.string "bajo una cúpula de cristal.\p"
	.string "Quizás sirva para medir la\n"
	.string "profundidad de algo…$"

>>>>>>> Egg/spanish
