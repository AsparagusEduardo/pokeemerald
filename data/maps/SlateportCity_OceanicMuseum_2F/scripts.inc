.set LOCALID_CAPT_STERN, 1
.set LOCALID_ARCHIE, 2
.set LOCALID_GRUNT_1, 3
.set LOCALID_GRUNT_2, 4

SlateportCity_OceanicMuseum_2F_MapScripts::
	.byte 0

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
	lock
	faceplayer
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	addobject LOCALID_GRUNT_1
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
	waitmovement 0
	addobject LOCALID_GRUNT_2
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
	waitmovement 0
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
	waitmovement 0
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
	call_if_ne VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
	waitmovement 0
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth
	call_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
	waitmovement 0
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
	waitmovement 0
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
	closemessage
	delay 35
	addobject LOCALID_ARCHIE
	applymovement LOCALID_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
	closemessage
	savebgm MUS_DUMMY
	fadedefaultbgm
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	fadescreen FADE_FROM_BLACK
	delay 30
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
	setvar VAR_0x8004, ITEM_DEVON_GOODS
	call Common_EventScript_PlayerHandedOverTheItem
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	removeobject LOCALID_CAPT_STERN
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
	call_if_eq VAR_REGISTER_BIRCH_STATE, 0, SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
	setflag FLAG_DELIVERED_DEVON_GOODS
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
	fadescreen FADE_FROM_BLACK
	release
	end

SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
	setvar VAR_REGISTER_BIRCH_STATE, 1
	return

SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
	walk_left
	walk_down
	walk_in_place_faster_left
	step_end

SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
	walk_up
	walk_left
	walk_left
	walk_down
	walk_in_place_faster_left
	step_end

SlateportCity_OceanicMuseum_2F_Movement_Unused:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	delay_8
	step_end

SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
	walk_down
	walk_right
	walk_in_place_faster_down
	step_end

SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
	walk_down
	step_end

SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_8
	walk_fast_down
	walk_in_place_faster_up
	step_end

SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
	lock
	faceplayer
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SlateportCity_OceanicMuseum_2F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SlateportCity_OceanicMuseum_2F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SlateportCity_OceanicMuseum_2F/text_es.inc"
.else
	.include "data/maps/SlateportCity_OceanicMuseum_2F/text.inc"
.endif
.endif
.endif
=======
SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts:
	.string "Si estás buscando a un tal BABOR,\n"
	.string "ése soy yo.\p"
	.string "¡Anda! Ésas deben de ser las piezas\n"
	.string "que pedí al SR. PEÑAS de DEVON.\p"
	.string "¡Gracias! ¡Qué bien me vienen!\n"
	.string "Ya puedo preparar la expedición.$"

SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts:
	.string "¡Je, je, je! ¡Alto ahí!\n"
	.string "¡Esas piezas son nuestras!$"

SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou:
	.string "CAP. BABOR: ¿Pe-pero…?\n"
	.string "¿Quiénes sois vosotros?$"

SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua:
	.string "¡Somos el EQUIPO AQUA!\p"
	.string "¡Nuestro JEFE quiere esas piezas!\n"
	.string "¡Cierra el pico y suéltalas!$"

SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat:
	.string "¡Aaaah!\n"
	.string "¡Me ha ganado una criatura!$"

SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious:
	.string "Ay, ay, ay, qué desastre…\n"
	.string "El JEFE se va a mosquear…$"

SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis:
	.string "¡Apártate, llorica!\n"
	.string "¡Yo me ocupo de todo!$"

SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat:
	.string "¡¿Cómo puede ser?!\n"
	.string "¡Yo también he perdido!$"

SlateportCity_OceanicMuseum_2F_Text_MeddlingKid:
	.string "¿Y ahora qué? ¡Si no conseguimos\n"
	.string "las piezas, estamos listos!\p"
	.string "¡Aaaah, nunca pensé que alguien\n"
	.string "mangonearía nuestros planes\l"
	.string "de mangoneo!$"

SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong:
	.string "Vine a ver por qué tardabais tanto\n"
	.string "en robar unas piezas de nada\l"
	.string "y me encuentro con esto.\p"
	.string "¿Ahora os dejáis vencer por párvulos?$"

SlateportCity_OceanicMuseum_2F_Text_ArchieWarning:
	.string "¡Somos el EQUIPO AQUA\n"
	.string "y nos encanta el mar!\p"
	.string "¡Y yo soy AQUILES, el líder\n"
	.string "del EQUIPO AQUA!\p"
	.string "A ver, ¿por qué te inmiscuyes\n"
	.string "en nuestros nobles asuntos?\p"
	.string "¡No! ¡No puede ser!\n"
	.string "¿No eres del EQUIPO MAGMA?\p"
	.string "Un momento, hay algo que no va.\n"
	.string "Tu ropa no es como debería ser…\p"
	.string "No sé, no sé…\p"
	.string "En fin, has de saber que los POKéMON, la\n"
	.string "gente…, toda la vida depende del mar.\p"
	.string "Por esta razón, el EQUIPO AQUA se\n"
	.string "ha consagrado a la expansión del mar.\p"
	.string "¿No estás de acuerdo?\n"
	.string "¡Si nuestra labor es encomiable!\p"
	.string "Ah, claro, es natural…\n"
	.string "Todavía eres muy joven para\l"
	.string "entender tan loable objetivo.\p"
	.string "Pero, si te vuelves a oponer a\n"
	.string "nuestros designios, ¡tendrás que\l"
	.string "sufrir las consecuencias!\p"
	.string "¡No digas que no te lo he\n"
	.string "advertido! \p"
	.string "¡Que no se te olvide!$"

SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs:
	.string "CAP. BABOR: Eres…\n"
	.string "Ah, sí, eres {PLAYER}{KUN}…\p"
	.string "Uf, qué situación tan violenta…\n"
	.string "¡Gracias por salvarnos!\p"
	.string "Ah, sí, casi me olvido de que además\n"
	.string "has traído las piezas de DEVON.$"

SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo:
	.string "CAP. BABOR: ¡Pues adelante!\n"
	.string "¡No hay tiempo que perder!\p"
	.string "Tenemos que zarpar lo antes posible\n"
	.string "para llevar a cabo nuestra expedición\l"
	.string "al fondo oceánico.\p"
	.string "Gracias y discúlpame, pero es que\n"
	.string "tengo cosas que hacer…\p"
	.string "¡Ahora bien, tú puedes darte todas\n"
	.string "las vueltas que quieras por aquí\l"
	.string "y curiosear cuanto te apetezca!$"

SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
	.string "He visto un modelo de barco aquí.\p"
	.string "Me ha recordado a la NAO ABANDONADA\n"
	.string "que hay cerca de PUEBLO AZULIZA.$"

SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
	.string "¡Ni se te ocurra correr\n"
	.string "por el MUSEO!$"

SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
	.string "¡Guau, este submarino es impresionante!\n"
	.string "¡Yo me quiero montar!$"

SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
	.string "La etiqueta dice: “MUESTRA de CALIDAD\n"
	.string "de AGUA 1”.\p"
	.string "Todos los mares se comunican, pero\n"
	.string "el agua parece diferente en cada zona.$"

SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
	.string "La etiqueta dice: “MUESTRA de CALIDAD\n"
	.string "de AGUA 2”.\p"
	.string "Es posible que la salinidad del agua sea\n"
	.string "diferente de un mar a otro…$"

SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
	.string "Una bola de goma se hincha y deshincha.\p"
	.string "“En el mar, el mismo peso del agua\n"
	.string "ejerce presión.\p"
	.string "En aguas poco profundas, la presión\n"
	.string "no es tan fuerte.\p"
	.string "Pero en aguas profundas, la presión\n"
	.string "puede llegar a ser de decenas de miles\l"
	.string "de toneladas en una pequeña zona.”$"

SlateportCity_OceanicMuseum_2F_Text_HoennModel:
	.string "“MODELO de la REGIÓN de HOENN”\p"
	.string "Es un diorama en miniatura\n"
	.string "de la región de HOENN.\p"
	.string "¿Dónde está VILLA RAÍZ aquí?$"

SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
	.string "Es una exposición sobre las corrientes\n"
	.string "marinas.\p"
	.string "“Cerca del fondo del mar, el agua\n"
	.string "fluye porque hay diferencias de\l"
	.string "temperatura y salinidad.”$"

SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
	.string "Es una exposición sobre las corrientes\n"
	.string "marinas.\p"
	.string "“Cerca de la superficie, el agua\n"
	.string "fluye debido a las corrientes que\l"
	.string "provoca el viento.”$"

SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
	.string "EL FERRY S.S. MAREA\p"
	.string "“Una réplica a escala de la nave que se\n"
	.string "está construyendo en los ASTILLEROS\l"
	.string "BABOR.”$"

SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
	.string "SUBMARINO EXPLORADOR 1\p"
	.string "“Una réplica del modernísimo submarino\n"
	.string "de exploración del fondo oceánico.”$"

SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
	.string "VEHÍCULO SUMERGIBLE\p"
	.string "“Una réplica de un vehículo de\n"
	.string "exploración del fondo oceánico\l"
	.string "compacto y no tripulado.”$"

SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
	.string "S.S. ANNE\p"
	.string "“Una réplica de un transatlántico de\n"
	.string "lujo que navega por todo el mundo.”$"

>>>>>>> Egg/spanish
