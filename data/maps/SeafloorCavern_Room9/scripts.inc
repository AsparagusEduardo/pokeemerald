.set LOCALID_KYOGRE, 1
.set LOCALID_ARCHIE, 2
.set LOCALID_MAXIE, 3
.set LOCALID_GRUNT_1, 4
.set LOCALID_GRUNT_2, 5
.set LOCALID_KYOGRE_SLEEPING, 7

SeafloorCavern_Room9_MapScripts::
	.byte 0

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
	lockall
	setvar VAR_0x8004, LOCALID_ARCHIE
	setvar VAR_0x8005, LOCALID_MAXIE
	setvar VAR_0x8006, LOCALID_GRUNT_1
	setvar VAR_0x8007, LOCALID_GRUNT_2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_Delay32
	waitmovement 0
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
	closemessage
	addobject VAR_0x8004
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
	applymovement VAR_0x8004, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieYouMustDisappear, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
	setweather WEATHER_NONE
	doweather
	special Script_FadeOutMapMusic
	waitstate
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
	special WaitWeather
	waitstate
	setvar VAR_RESULT, 1
	playse SE_M_DETECT
	dofieldeffectsparkle 16, 42, 0
	waitfieldeffect FLDEFF_SPARKLE
	closemessage
	setvar VAR_RESULT, 0
	playfanfare MUS_AWAKEN_LEGEND
	playse SE_ORB
	special DoOrbEffect
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 150
	removeobject LOCALID_KYOGRE_SLEEPING
	addobject LOCALID_KYOGRE
	waitstate
	delay 60
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
	waitmovement 0
	special FadeOutOrbEffect
	waitstate
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
	waitmovement 0
	removeobject LOCALID_KYOGRE
	delay 4
	setvar VAR_0x8004, 2  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	delay 30
	setvar VAR_0x8004, LOCALID_ARCHIE
	setvar VAR_0x8005, LOCALID_MAXIE
	setvar VAR_0x8006, LOCALID_GRUNT_1
	setvar VAR_0x8007, LOCALID_GRUNT_2
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
	playse SE_PC_LOGIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
	closemessage
	playse SE_PC_OFF
	delay 20
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
	closemessage
	addobject VAR_0x8005
	addobject VAR_0x8006
	addobject VAR_0x8007
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
	waitmovement 0
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x8004, Common_Movement_Delay48
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
	setvar VAR_ROUTE128_STATE, 1
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
	setflag FLAG_SYS_WEATHER_CTRL
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	setvar VAR_STEVENS_HOUSE_STATE, 2
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
	setflag FLAG_HIDE_MAP_NAME_POPUP
	warp MAP_ROUTE128, 38, 22
	waitstate
	releaseall
	end

SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SeafloorCavern_Room9_Movement_Unused1:
	walk_left
	walk_left
	step_end

SeafloorCavern_Room9_Movement_ArchieListenMessage:
	walk_left
	delay_16
	step_end

SeafloorCavern_Room9_Movement_Unused2:
	walk_right
	step_end

SeafloorCavern_Room9_Movement_ArchieExit:
	face_up
	lock_facing_direction
	walk_down
	unlock_facing_direction
	walk_in_place_faster_right
	step_end

SeafloorCavern_Room9_Movement_KyogreApproach:
	delay_16
	delay_16
	walk_slow_down
	delay_16
	delay_16
	delay_16
	walk_slow_down
	delay_16
	delay_16
	delay_16
	step_end

SeafloorCavern_Room9_Movement_KyogreExit:
	slide_up
	slide_up
	step_end

SeafloorCavern_Room9_Movement_MaxieArrive:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SeafloorCavern_Room9_Movement_MaxieExit:
	walk_right
	walk_right
	step_end

SeafloorCavern_Room9_Movement_MagmaGruntArrive:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SeafloorCavern_Room9_Movement_Delay32:
	delay_16
	delay_16
	step_end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SeafloorCavern_Room9/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SeafloorCavern_Room9/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SeafloorCavern_Room9/text_es.inc"
.else
	.include "data/maps/SeafloorCavern_Room9/text.inc"
.endif
.endif
.endif
=======
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
	.string "AQUILES: ¡No te muevas!$"

SeafloorCavern_Room9_Text_ArchieSoItWasYou:
	.string "AQUILES: ¡Jua, jua, jua!\n"
	.string "Así que eres tú otra vez…$"

SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
	.string "AQUILES: ¡Observa!\p"
	.string "¡Contempla la belleza de la figura\n"
	.string "durmiente del antiguo POKéMON KYOGRE!\p"
	.string "He esperado tanto a que llegara\n"
	.string "este día…$"

SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
	.string "AQUILES: Me sorprende que hayas\n"
	.string "logrado llegar hasta aquí.\p"
	.string "Pero ya da igual.\p"
	.string "¡Para que mi sueño se cumpla,\n"
	.string "tengo que quitarte de en medio!$"

SeafloorCavern_Room9_Text_ArchieDefeat:
	.string "¡¿Cómo?!\n"
	.string "¡¿He perdido contra ti?!$"

SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
	.string "AQUILES: Jua, jua, jua…\p"
	.string "Debo felicitarte. Realmente tienes\n"
	.string "un enorme talento.\p"
	.string "Pero…\n"
	.string "¡yo tengo esto en mi poder!\p"
	.string "Con la ESFERA ROJA, puedo hacer\n"
	.string "que KYOGRE…$"

SeafloorCavern_Room9_Text_RedOrbShinesByItself:
	.string "¡La ESFERA ROJA ha empezado\n"
	.string "a brillar sola de repente!$"

SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
	.string "AQUILES: ¡¿Qué?!\p"
	.string "Yo no he hecho nada.\n"
	.string "¿Por qué la ESFERA ROJA ha…?\p"
	.string "¿Adónde ha ido KYOGRE?$"

SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
	.string "AQUILES: ¿Mmm…? Es un mensaje\n"
	.string "de los miembros del exterior…$"

SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
	.string "AQUILES: Sí, ¿qué pasa?\p"
	.string "Mmmm…\n"
	.string "¿Está lloviendo una burrada?\p"
	.string "Muy bien, es lo que tenía que pasar.\n"
	.string "Por eso despertamos a KYOGRE,\l"
	.string "para hacer realidad la visión del\l"
	.string "EQUIPO AQUA: un mundo con más agua.\p"
	.string "¡¿Qué?!\p"
	.string "¿Que está lloviendo mucho más de lo que\n"
	.string "calculamos? ¿Tanto que es peligroso?\p"
	.string "No puede ser…\n"
	.string "No es posible…\p"
	.string "¡Mantened vuestras posiciones e\n"
	.string "intentad controlar la situación!$"

SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
	.string "AQUILES: Hay algo que falla…\p"
	.string "Se supone que la ESFERA ROJA puede\n"
	.string "despertar y controlar a KYOGRE…\p"
	.string "Pero… ¿por qué?\n"
	.string "¿Por qué ha desaparecido KYOGRE?\p"
	.string "¡¿Por qué?!$"

SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
	.string "MAGNO: ¿Qué has hecho?\p"
	.string "AQUILES, has despertado a KYOGRE,\n"
	.string "¿verdad?\p"
	.string "¿Qué ocurrirá si no deja de diluviar\n"
	.string "nunca más?\p"
	.string "La tierra firme acabará siendo tragada\n"
	.string "por el mar…$"

SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
	.string "AQUILES: ¿Qué estás diciendo?\n"
	.string "¡No te des esas ínfulas conmigo!\p"
	.string "¿No fuisteis los del EQUIPO MAGMA\n"
	.string "quienes enfurecisteis a GROUDON?\p"
	.string "La ESFERA ROJA debería permitirme\n"
	.string "controlar a KYOGRE…\p"
	.string "Esto no puede estar pasando…$"

SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
	.string "MAGNO: ¡No tenemos tiempo para\n"
	.string "discutir sobre eso ahora!\p"
	.string "¡Sal y verás el panorama!\p"
	.string "¡Comprueba si es éste el mundo\n"
	.string "que querías crear!$"

SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
	.string "MAGNO: ¡{PLAYER}, vamos, tú también\n"
	.string "tienes que salir de aquí!$"
>>>>>>> Egg/spanish
