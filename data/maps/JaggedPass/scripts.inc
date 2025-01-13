.set LOCALID_HIDEOUT_GUARD, 5

JaggedPass_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_OnLoad
	.byte 0

JaggedPass_OnResume:
	setstepcallback STEP_CB_ASH
	call_if_eq VAR_JAGGED_PASS_STATE, 0, JaggedPass_EventScript_CheckHasMagmaEmblem
	end

JaggedPass_EventScript_CheckHasMagmaEmblem::
	checkitem ITEM_MAGMA_EMBLEM
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_SetReadyToOpenHideout
	return

JaggedPass_EventScript_SetReadyToOpenHideout::
	setvar VAR_JAGGED_PASS_STATE, 1
	return

JaggedPass_OnTransition:
	call_if_eq VAR_JAGGED_PASS_ASH_WEATHER, 1, JaggedPass_EventScript_SetWeatherAsh
	end

JaggedPass_EventScript_SetWeatherAsh::
	setweather WEATHER_VOLCANIC_ASH
	doweather
	return

JaggedPass_OnLoad:
	goto_if_le VAR_JAGGED_PASS_STATE, 1, JaggedPass_EventScript_ConcealHideoutEntrance
	end

JaggedPass_EventScript_ConcealHideoutEntrance::
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
	end

JaggedPass_EventScript_OpenMagmaHideout::
	lockall
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 1   @ vertical pan
	setvar VAR_0x8005, 1   @ horizontal pan
	setvar VAR_0x8006, 16  @ num shakes
	setvar VAR_0x8007, 3   @ shake delay
	special ShakeCamera
	waitstate
	playse SE_EFFECTIVE
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
	special DrawWholeMapView
	delay 30
	setvar VAR_JAGGED_PASS_STATE, 2
	waitse
	releaseall
	end

JaggedPass_EventScript_MagmaHideoutGuard::
	lockall
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
	waitse
	playse SE_PIN
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
	waitmovement 0
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

JaggedPass_EventScript_GuardDefeated::
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
	waitmovement 0
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

JaggedPass_EventScript_Eric::
	trainerbattle_single TRAINER_ERIC, JaggedPass_Text_EricIntro, JaggedPass_Text_EricDefeat
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Diana::
	trainerbattle_single TRAINER_DIANA_1, JaggedPass_Text_DianaIntro, JaggedPass_Text_DianaDefeat, JaggedPass_EventScript_RegisterDiana
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_DianaRematch
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
	release
	end

JaggedPass_EventScript_RegisterDiana::
	special PlayerFaceTrainerAfterBattle
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DIANA_1
	release
	end

JaggedPass_EventScript_DianaRematch::
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Ethan::
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_EthanRematch
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
	release
	end

JaggedPass_EventScript_RegisterEthan::
	special PlayerFaceTrainerAfterBattle
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ETHAN_1
	release
	end

JaggedPass_EventScript_EthanRematch::
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Julio::
	trainerbattle_single TRAINER_JULIO, JaggedPass_Text_JulioIntro, JaggedPass_Text_JulioDefeat
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Autumn::
	trainerbattle_single TRAINER_AUTUMN, JaggedPass_Text_AutumnIntro, JaggedPass_Text_AutumnDefeat
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/JaggedPass/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/JaggedPass/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/JaggedPass/text_es.inc"
.else
	.include "data/maps/JaggedPass/text.inc"
.endif
.endif
.endif
=======
JaggedPass_Text_EricIntro:
	.string "El DESFILADERO del MONTE CENIZO…\p"
	.string "Siempre he querido encontrar\n"
	.string "una montaña como ésta.\p"
	.string "Esta superficie irregular…\n"
	.string "¡Me hace dar botes de alegría!$"

JaggedPass_Text_EricDefeat:
	.string "Perder me deja hecho polvo…$"

JaggedPass_Text_EricPostBattle:
	.string "Sí, he perdido en el combate POKéMON…\p"
	.string "¡Pero seguro que llego a cualquier\n"
	.string "cima antes que tú!$"

JaggedPass_Text_DianaIntro:
	.string "Este lugar no es el típico al que viene\n"
	.string "la gente a hacer picnics.$"

JaggedPass_Text_DianaDefeat:
	.string "¡Ooooh, no!\n"
	.string "¡El terreno es demasiado irregular!$"

JaggedPass_Text_DianaPostBattle:
	.string "¿Sabes una cosa?\p"
	.string "Hay gente muy habilidosa que sube\n"
	.string "en bici por este horrible camino\l"
	.string "lleno de baches.$"

JaggedPass_Text_DianaRegister:
	.string "¿Piensas volver por aquí?\n"
	.string "En ese caso, quiero mi revancha.$"

JaggedPass_Text_DianaRematchIntro:
	.string "Los picnics son siempre divertidos,\n"
	.string "¡pero los POKéMON lo son aún más!$"

JaggedPass_Text_DianaRematchDefeat:
	.string "¡He perdido, pero sólo porque\n"
	.string "he metido el pie en un bache!$"

JaggedPass_Text_DianaPostRematch:
	.string "Mejor no pienso en la derrota y disfruto\n"
	.string "de este paseo accidentado, ja, ja, ja.$"

JaggedPass_Text_EthanIntro:
	.string "Es difícil caminar por el DESFILADERO,\n"
	.string "pero es lo mejor para entrenarse.$"

JaggedPass_Text_EthanDefeat:
	.string "¡Oye, no es justo, que todavía estaba\n"
	.string "intentando mantener el equilibrio!$"

JaggedPass_Text_EthanPostBattle:
	.string "Si tuviera una BICI ACROBÁTICA, podría\n"
	.string "saltar sobre cualquier desnivel…$"

JaggedPass_Text_EthanRegister:
	.string "Este terreno está lleno de baches,\n"
	.string "pero en cuanto me acostumbre ganaré.\p"
	.string "¿Quieres registrarme en tu POKéNAV?$"

JaggedPass_Text_EthanRematchIntro:
	.string "Me he acostumbrado a estos\n"
	.string "baches y ahora son pan comido.$"

JaggedPass_Text_EthanRematchDefeat:
	.string "Sigue sin ser fácil luchar en este\n"
	.string "terreno tan irregular…$"

JaggedPass_Text_EthanPostRematch:
	.string "Debería comprar a ANACLETO una BICI\n"
	.string "ACROBÁTICA en CIUDAD MALVALONA…$"

JaggedPass_Text_GruntIntro:
	.string "¡Oye!\n"
	.string "¿Qué haces tú aquí?\p"
	.string "Ya puestos, ¿qué hago yo aquí?\p"
	.string "Pero, sobre todo, ¿qué haces tú?$"

JaggedPass_Text_GruntDefeat:
	.string "Aaargh…\p"
	.string "Debería haberme ocultado en la\n"
	.string "GUARIDA nada más verte…$"

JaggedPass_Text_GoWhereverYouWant:
	.string "¡Vale, vale, que sí!\n"
	.string "Lo reconozco: ¡eres fuerte!\p"
	.string "Y, desde luego, pienso dejarte\n"
	.string "ir a donde te plazca…$"

JaggedPass_Text_BoulderShakingInResponseToEmblem:
	.string "¡Oh! ¡Se diría que esta roca está\n"
	.string "temblando ante el SIGNO MAGMA!$"

JaggedPass_Text_JulioIntro:
	.string "¡Aaaah, qué susto! ¡No se puede\n"
	.string "aparecer de repente, sin avisar!$"

JaggedPass_Text_JulioDefeat:
	.string "Me has desinflado…$"

JaggedPass_Text_JulioPostBattle:
	.string "Tengo el trasero hecho polvo por culpa\n"
	.string "de todos los baches que he pillado.$"

JaggedPass_Text_AutumnIntro:
	.string "Subo esta cuesta cada día.\n"
	.string "¡Estoy en forma!$"

JaggedPass_Text_AutumnDefeat:
	.string "Estoy sin aliento…\n"
	.string "¿Cómo ha podido ocurrir?$"

JaggedPass_Text_AutumnPostBattle:
	.string "¿Qué será esa extraña protuberancia\n"
	.string "rocosa que hay arriba de la colina?$"

>>>>>>> Egg/spanish
