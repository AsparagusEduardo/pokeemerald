.set LOCALID_WALLYS_DAD, 1

PetalburgCity_WallysHouse_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
	.byte 0

PetalburgCity_WallysHouse_OnWarp:
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther
	.2byte 0

PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject LOCALID_WALLYS_DAD, DIR_WEST
	end

PetalburgCity_WallysHouse_OnFrame:
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_GiveHMSurf
	.2byte 0

PetalburgCity_WallysHouse_EventScript_GiveHMSurf::
	lockall
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs, MSGBOX_DEFAULT
	giveitem ITEM_HM_SURF
	setflag FLAG_RECEIVED_HM_SURF
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces, MSGBOX_DEFAULT
	setvar VAR_PETALBURG_CITY_STATE, 5
	releaseall
	end

PetalburgCity_WallysHouse_EventScript_WallysDad::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_PlayedWithWally
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
	release
	end

PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf::
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_PlayedWithWally::
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_WallysMom::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_SURF, PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf::
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/PetalburgCity_WallysHouse/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/PetalburgCity_WallysHouse/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/PetalburgCity_WallysHouse/text_es.inc"
.else
	.include "data/maps/PetalburgCity_WallysHouse/text.inc"
.endif
.endif
.endif
=======
PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally:
	.string "Tú eres…\n"
	.string "Sí, tú eres {PLAYER}{KUN}, ¿verdad?\p"
	.string "Gracias por jugar con BLASCO\n"
	.string "hace un rato.\p"
	.string "El pobrecito siempre ha sido\n"
	.string "un chico enfermizo.\p"
	.string "Lo hemos enviado con unos parientes\n"
	.string "que viven en PUEBLO VERDEGAL.\p"
	.string "Allí el aire está mucho más limpio\n"
	.string "y es más sano que aquí.\p"
	.string "¿Cómo? ¿Que dónde está BLASCO?\n"
	.string "¡Ya se ha ido!\p"
	.string "Me pregunto dónde estará\n"
	.string "en estos momentos…$"

PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
	.string "Me pregunto cómo le irá a BLASCO…$"

PetalburgCity_WallysHouse_Text_PleaseExcuseUs:
	.string "¡Hola, {PLAYER}{KUN}! Espero que no\n"
	.string "te moleste haber venido hasta aquí.\p"
	.string "Nuestro BLASCO se ha curado\n"
	.string "del todo mientras estaba\l"
	.string "en PUEBLO VERDEGAL.\p"
	.string "¡Y todo gracias a ti!\p"
	.string "Cuando BLASCO se fue, le ayudaste\n"
	.string "a atrapar un POKéMON, ¿verdad?\p"
	.string "Creo que eso le hizo muy feliz.\p"
	.string "Y también me hizo muy feliz\n"
	.string "a mí, su padre.\p"
	.string "Es estupendo que BLASCO\n"
	.string "tenga amigos tan buenos como tú.\p"
	.string "Estoy tan contento que quiero\n"
	.string "darte esto como agradecimiento.$"

PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces:
	.string "Si tu POKéMON puede hacer SURF,\n"
	.string "podrás ir a cantidad de sitios.$"

PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
	.string "BLASCO pronto volverá a casa.\n"
	.string "Qué ganas tengo…$"

PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
	.string "¿Ah, sí? ¿Te has encontrado con\n"
	.string "BLASCO en CIUDAD COLOSALIA?\p"
	.string "Venga, {PLAYER}{KUN}, no digas\n"
	.string "tonterías.\p"
	.string "Puede que esté más fuerte que\n"
	.string "antes, pero no puede haber ido\l"
	.string "tan lejos él solo…$"

PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
	.string "BLASCO estaba contentísimo\n"
	.string "cuando nos dijo que había atrapado\l"
	.string "un POKéMON.\p"
	.string "Hacía siglos que no lo había visto\n"
	.string "sonreír así…$"

PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
	.string "Quiero contarte algo, pero no\n"
	.string "se lo digas a mi marido…\p"
	.string "BLASCO se fue de PUEBLO VERDEGAL\n"
	.string "sin decir nada a nadie.\p"
	.string "BLASCO es débil, pero tiene una gran\n"
	.string "fuerza de voluntad.\p"
	.string "Estoy convencida de que volverá\n"
	.string "muy pronto hecho un hombretón.$"

>>>>>>> Egg/spanish
