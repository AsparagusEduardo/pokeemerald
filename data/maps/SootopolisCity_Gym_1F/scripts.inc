SootopolisCity_Gym_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_Gym_1F_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_Gym_1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
	.byte 0

SootopolisCity_Gym_1F_OnTransition:
	setvar VAR_ICE_STEP_COUNT, 1
	end

SootopolisCity_Gym_1F_OnResume:
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
	end

SootopolisCity_Gym_1F_OnLoad:
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special SetSootopolisGymCrackedIceMetatiles
	end

SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles::
	goto_if_lt VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_StopCheckingStairs  @ All stairs ice
	goto_if_lt VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_OpenFirstStairs
	goto_if_lt VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs::
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
SootopolisCity_Gym_1F_EventScript_OpenFirstStairs::
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
SootopolisCity_Gym_1F_EventScript_StopCheckingStairs::
	return

SootopolisCity_Gym_1F_OnFrame:
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_FallThroughIce
	.2byte 0

SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_FallThroughIce::
	lockall
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
	waitmovement 0
	playse SE_FALL
	delay 60
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
	waitstate
	end

SootopolisCity_Gym_1F_Movement_FallThroughIce:
	set_invisible
	step_end

SootopolisCity_Gym_1F_EventScript_Juan::
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, SootopolisCity_Gym_1F_EventScript_JuanRematch
	goto_if_unset FLAG_RECEIVED_TM_WATER_PULSE, SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_JuanDefeated::
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
	setflag FLAG_BADGE08_GET
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
	setvar VAR_0x8008, 8
	call Common_EventScript_SetGymTrainers
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
	release
	end

SootopolisCity_Gym_1F_EventScript_GiveWaterPulse::
	giveitem ITEM_TM_WATER_PULSE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_WATER_PULSE
	return

SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2::
	giveitem ITEM_TM_WATER_PULSE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_WATER_PULSE
	release
	end

SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_JuanRematch::
	trainerbattle_rematch_double TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanPreRematch, SootopolisCity_Gym_1F_Text_JuanRematchDefeat, SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_1F_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
	end

SootopolisCity_Gym_1F_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
	end

SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_Gym_1F_EventScript_GymStatue::
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SootopolisCity_Gym_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SootopolisCity_Gym_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SootopolisCity_Gym_1F/text_es.inc"
.else
	.include "data/maps/SootopolisCity_Gym_1F/text.inc"
.endif
.endif
.endif
=======
SootopolisCity_Gym_1F_Text_GymGuideAdvice:
	.string "Eh, ¿cómo lo llevas, {PLAYER}?\n"
	.string "¿Camino del CAMPEONATO?\p"
	.string "GALANO, el LÍDER del GIMNASIO\n"
	.string "de ARRECÍPOLIS es un maestro\l"
	.string "de los POKéMON de tipo AGUA.\p"
	.string "Y, si quieres llegar hasta GALANO,\n"
	.string "tendrás que superar un suelo helado.\p"
	.string "Lo siento, pero no puedo decirte más.\p"
	.string "¡El resto tendrás que descubrirlo tú!$"

SootopolisCity_Gym_1F_Text_GymGuidePostVictory:
	.string "¡Guau! ¡Has vencido incluso a GALANO,\n"
	.string "que según dicen es el mejor de HOENN!\p"
	.string "Muy bien, comprueba tu FICHA\n"
	.string "de ENTRENADOR.\p"
	.string "Si tienes todas las MEDALLAS, puedes\n"
	.string "aceptar el desafío de la LIGA POKéMON.$"

SootopolisCity_Gym_1F_Text_JuanIntro:
	.string "Quisiera explicarte algo.\n"
	.string "No sé si sabrás…\l"
	.string "Uf, no sé por qué me da corte…\p"
	.string "Verás, yo enseñé a PLUBIO todo lo que\n"
	.string "se puede saber sobre los POKéMON.\p"
	.string "Cuando acabé, renuncié a mi puesto\n"
	.string "como LÍDER de GIMNASIO.\p"
	.string "Decidí confiar esa responsabilidad\n"
	.string "a PLUBIO.\p"
	.string "Sin embargo, retomé mi puesto\n"
	.string "por una razón de peso…\p"
	.string "Pero ya basta de charlas…\n"
	.string "Deberíamos luchar, ¿no?\p"
	.string "Quisiera que fueras testigo\n"
	.string "de nuestra maestría.\p"
	.string "¡Mis POKéMON y yo hemos\n"
	.string "creado una gran ilusión acuática!$"

@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
@ the existence of that unused array of ints.
SootopolisCity_Gym_1F_Text_JuanDefeat:
	.string "¡Ja, ja, ja! ¡Magnífico!\n"
	.string "La victoria es tuya.\p"
	.string "Tengo el presentimiento de que\n"
	.string "tu destreza te llevará a lo más alto.\p"
	.string "No obstante, en comparación conmigo\n"
	.string "o PLUBIO, te falta elegancia.\p"
	.string "Puede que sea una buena idea\n"
	.string "prestarte mi traje…\p"
	.string "¿Te lo presto?…\n"
	.string "¿No te lo presto? …\p"
	.string "¡Que no, que es broma!\p"
	.string "¡Te voy a dar algo mejor! ¡Aquí\n"
	.string "tienes la MEDALLA LLUVIA!$"

SootopolisCity_Gym_1F_Text_ReceivedRainBadge:
	.string "{PLAYER} recibió la MEDALLA LLUVIA\n"
	.string "de GALANO.$"

SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis:
	.string "La MEDALLA LLUVIA te concede la\n"
	.string "obediencia total de todos tus POKéMON\l"
	.string "a cada una de tus órdenes.\p"
	.string "También te permite usar el movimiento\n"
	.string "de la MO CASCADA, que hace posible\l"
	.string "que subas por cualquier catarata.\p"
	.string "Y, además, para que nunca olvides\n"
	.string "nuestro combate, toma esto…$"

SootopolisCity_Gym_1F_Text_ExplainWaterPulse:
	.string "La MT que te he dado contiene\n"
	.string "HIDROPULSO.\p"
	.string "Lanza ondas ultrasónicas que pueden\n"
	.string "confundir a tu rival.\p"
	.string "Es una pasada…$"

SootopolisCity_Gym_1F_Text_RegisteredJuan:
	.string "Acabas de registrar a GALANO,\n"
	.string "el LÍDER de GIMNASIO, en el POKéNAV.$"

SootopolisCity_Gym_1F_Text_JuanPostBattle:
	.string "Los ENTRENADORES que han reunido\n"
	.string "todas las MEDALLAS de GIMNASIO\l"
	.string "de HOENN deben dar el siguiente paso…\p"
	.string "¡La LIGA POKéMON!\p"
	.string "Viaja al extremo oriental de HOENN,\n"
	.string "a la isla de COLOSALIA.\l"
	.string "La LIGA POKéMON está allí.$"

SootopolisCity_Gym_1F_Text_GoGetFortreeBadge:
	.string "Sólo te queda una MEDALLA\n"
	.string "por obtener en HOENN.\p"
	.string "Si quieres llegar hasta la LIGA\n"
	.string "POKéMON, debes conseguirla\l"
	.string "en el GIMNASIO de ARBORADA.$"

SootopolisCity_Gym_1F_Text_GymStatue:
	.string "GIMNASIO POKéMON de ARRECÍPOLIS$"

SootopolisCity_Gym_1F_Text_GymStatueCertified:
	.string "GIMNASIO POKéMON de ARRECÍPOLIS\p"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
	.string "{PLAYER}$"

SootopolisCity_Gym_1F_Text_JuanPreRematch:
	.string "GALANO: Ah, este GIMNASIO por fin\n"
	.string "ha vuelto a ser un oasis de serenidad…\p"
	.string "Pero nuestro pequeño maremoto\n"
	.string "ha regresado para ponernos a prueba.\p"
	.string "¡Será un placer darte satisfacción!\p"
	.string "¡Estaré dispuesto a enfrentarme\n"
	.string "a ti todas las veces que quieras!$"

SootopolisCity_Gym_1F_Text_JuanRematchDefeat:
	.string "¡Ja, ja, ja! La victoria es tuya.\n"
	.string "¡Me has derrotado una vez más!$"

SootopolisCity_Gym_1F_Text_JuanPostRematch:
	.string "GALANO: Si te propusiera que fueras\n"
	.string "mi aprendiz, te negarías, lo sé.\p"
	.string "Quisiera ofrecerte mi abrigo\n"
	.string "como regalo.\p"
	.string "Pero también lo rechazarías,\n"
	.string "estoy convencido.\p"
	.string "¡Y eso, sin duda, demuestra\n"
	.string "la nobleza de tu carácter!$"

SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons:
	.string "GALANO: Ah, este GIMNASIO por fin\n"
	.string "ha vuelto a ser un oasis de serenidad…\p"
	.string "Pero nuestro pequeño maremoto\n"
	.string "ha regresado para ponernos a prueba.\p"
	.string "¡Será un placer darte satisfacción!\p"
	.string "Pero no, no, no. Ni hablar.\n"
	.string "Sólo tienes un POKéMON.\p"
	.string "Te agradecería que regresaras\n"
	.string "con dos o incluso más POKéMON.$"

>>>>>>> Egg/spanish
