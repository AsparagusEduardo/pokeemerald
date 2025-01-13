.set LOCALID_GROUDON, 1
.set LOCALID_GRUNT_1, 2
.set LOCALID_GRUNT_2, 3
.set LOCALID_GRUNT_3, 4
.set LOCALID_TABITHA, 5
.set LOCALID_MAXIE, 6
.set LOCALID_GROUDON_SLEEPING, 7

MagmaHideout_4F_MapScripts::
	.byte 0

MagmaHideout_4F_EventScript_Maxie::
	lockall
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
	closemessage
	delay 20
	setvar VAR_RESULT, 1
	playse SE_M_DETECT
	dofieldeffectsparkle 18, 42, 0
	waitfieldeffect FLDEFF_SPARKLE
	setvar VAR_RESULT, 1
	playfanfare MUS_AWAKEN_LEGEND
	playse SE_ORB
	special DoOrbEffect
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 150
	removeobject LOCALID_GROUDON_SLEEPING
	addobject LOCALID_GROUDON
	waitstate
	delay 60
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
	waitmovement 0
	special FadeOutOrbEffect
	waitstate
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
	waitmovement 0
	removeobject LOCALID_GROUDON
	delay 4
	setvar VAR_0x8004, 2  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	delay 30
	applymovement LOCALID_MAXIE, MagmaHideout_4F_Movement_MaxieLookAround
	waitmovement 0
	msgbox MagmaHideout_4F_Text_MaxieGroudonWhatsWrong, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
	setvar VAR_SLATEPORT_CITY_STATE, 1
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_MAXIE
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	removeobject LOCALID_TABITHA
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
	fadescreen FADE_FROM_BLACK
	releaseall
	end

MagmaHideout_4F_Movement_GroudonApproach:
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

MagmaHideout_4F_Movement_GroudonExit:
	slide_up
	slide_up
	step_end

MagmaHideout_4F_Movement_MaxieLookAround:
	face_left
	delay_16
	face_right
	delay_16
	face_left
	delay_16
	face_right
	delay_16
	face_up
	delay_16
	delay_16
	step_end

MagmaHideout_4F_EventScript_Grunt11::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_11, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Grunt12::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Grunt13::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Tabitha::
	trainerbattle_single TRAINER_TABITHA_MAGMA_HIDEOUT, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MagmaHideout_4F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MagmaHideout_4F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MagmaHideout_4F/text_es.inc"
.else
	.include "data/maps/MagmaHideout_4F/text.inc"
.endif
.endif
.endif
=======
MagmaHideout_4F_Text_Grunt11Intro:
	.string "Yo también quiero ver a GROUDON, pero\n"
	.string "no me dejan ni acercarme a la cola…\p"
	.string "Qué frustración más grande…\p"
	.string "¡Oh, no!\n"
	.string "¡Se me ha escapado lo de GROUDON!$"

MagmaHideout_4F_Text_Grunt11Defeat:
	.string "Supongo que no se puede ganar cuando\n"
	.string "no se está tranquilo y concentrado…$"

MagmaHideout_4F_Text_Grunt11PostBattle:
	.string "¿Tendrá cola GROUDON?…$"

MagmaHideout_4F_Text_Grunt12Intro:
	.string "¡Jua, jua, jua!\n"
	.string "¡Queda poco! ¡Muy poco!\l"
	.string "¡Se va a cumplir nuestro objetivo!$"

MagmaHideout_4F_Text_Grunt12Defeat:
	.string "Grrr…\n"
	.string "¿He venido tan lejos para esto?$"

MagmaHideout_4F_Text_Grunt12PostBattle:
	.string "¡Tengo que avisar a MAGNO de que\n"
	.string "se nos ha colado alguien!$"

MagmaHideout_4F_Text_Grunt13Intro:
	.string "¡Todavía no hemos acabado contigo!\n"
	.string "¡No te voy a dejar pasar porque sí!$"

MagmaHideout_4F_Text_Grunt13Defeat:
	.string "¿Tan fácil es derrotarme?$"

MagmaHideout_4F_Text_Grunt13PostBattle:
	.string "Anda, dame la revancha…$"

MagmaHideout_4F_Text_TabithaIntro:
	.string "¡Je, je, je!\n"
	.string "¡Has llegado lejos, lo reconozco!\p"
	.string "¡Y sí, tienes razón!\n"
	.string "¡GROUDON duerme algo más arriba!\p"
	.string "¡MAGNO acaba de ir ahora mismo\n"
	.string "hacia donde está GROUDON!\p"
	.string "¡Le falta poco para despertarse!\n"
	.string "¡Je, je! ¡Je, je, je!$"

MagmaHideout_4F_Text_TabithaDefeat:
	.string "Otra vez vencido…\n"
	.string "Je, je…$"

MagmaHideout_4F_Text_TabithaPostBattle:
	.string "Mientras perdías el tiempo conmigo,\n"
	.string "MAGNO ha despertado a GROUDON…$"

MagmaHideout_4F_Text_MaxieAwakenGroudon:
	.string "MAGNO: GROUDON…\p"
	.string "Nada ha logrado despertarte y liberarte\n"
	.string "de tu prisión de magma…\p"
	.string "Lo que buscabas era esta\n"
	.string "ESFERA AZUL, ¿a que sí?\p"
	.string "Pues aquí la tienes.\n"
	.string "¡Que su brillo te despierte!\p"
	.string "¡Muéstrame tu gran poder\n"
	.string "en toda su plenitud!$"

MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
	.string "MAGNO: ¡GROUDON!\n"
	.string "¿Qué ocurre?\p"
	.string "¿La ESFERA AZUL no es la llave?\p"
	.string "¡GROUDON!\n"
	.string "¿Adónde te has ido?$"

MagmaHideout_4F_Text_MaxieOhItWasYou:
	.string "MAGNO: Ah, ¿así que has sido tú?\p"
	.string "Ya me había fijado en cómo metías\n"
	.string "las narices donde no te llamaban…\p"
	.string "¡Ya está!\n"
	.string "¡Seguro que todo es culpa tuya!$"

MagmaHideout_4F_Text_MaxieDefeat:
	.string "¿Por qué te gusta tanto andar\n"
	.string "con los POKéMON?$"

MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
	.string "MAGNO: Debe de haber algún motivo\n"
	.string "por el que GROUDON se ha ido…\p"
	.string "Eso es lo que estás intentando\n"
	.string "decirme, ¿verdad?\p"
	.string "Ya…\n"
	.string "Claro…\p"
	.string "Mmmm…\n"
	.string "¿Crees que no me había dado cuenta?\p"
	.string "Como GROUDON se ha ido, ya no\n"
	.string "necesitamos este estúpido volcán.\p"
	.string "¡Me voy en busca de GROUDON,\n"
	.string "así que hasta nunca!$"
>>>>>>> Egg/spanish
