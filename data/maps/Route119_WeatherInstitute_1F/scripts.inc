.set LOCALID_LITTLE_BOY, 5

Route119_WeatherInstitute_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_OnTransition
	.byte 0

Route119_WeatherInstitute_1F_OnTransition:
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos
	end

Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos::
	setobjectxyperm LOCALID_LITTLE_BOY, 0, 5
	setobjectmovementtype LOCALID_LITTLE_BOY, MOVEMENT_TYPE_FACE_RIGHT
	return

Route119_WeatherInstitute_1F_EventScript_LittleBoy::
	lock
	faceplayer
	special GetPlayerBigGuyGirlString
	goto_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere
	msgbox Route119_WeatherInstitute_1F_Text_WowYoureStrong, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere::
	msgbox Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_InstituteWorker1::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_1F_EventScript_StudyingRain
	setvar VAR_0x8004, 0
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_1F_EventScript_StudyingRain  @ Both defeated
	msgbox Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated::
	addvar VAR_0x8004, 1
	return

Route119_WeatherInstitute_1F_EventScript_StudyingRain::
	msgbox Route119_WeatherInstitute_1F_Text_ProfStudyingRain, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_InstituteWorker2::
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
	end

Route119_WeatherInstitute_1F_EventScript_Bed::
	lockall
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	releaseall
	end

Route119_WeatherInstitute_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_1F_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route119_WeatherInstitute_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route119_WeatherInstitute_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route119_WeatherInstitute_1F/text_es.inc"
.else
	.include "data/maps/Route119_WeatherInstitute_1F/text.inc"
.endif
.endif
.endif
=======
Route119_WeatherInstitute_1F_Text_Grunt1Intro:
	.string "El JEFE está interesado en la\n"
	.string "investigación que están realizando\l"
	.string "aquí, por eso nos ha enviado.\p"
	.string "¡Quítate de en medio!$"

Route119_WeatherInstitute_1F_Text_Grunt1Defeat:
	.string "No me lo creo…\n"
	.string "Me has vencido, mequetrefe…$"

Route119_WeatherInstitute_1F_Text_Grunt1PostBattle:
	.string "No hay nada que nuestro\n"
	.string "JEFE no sepa…\p"
	.string "Pero yo sólo soy un SOLDADO. ¿Cómo\n"
	.string "voy a saber lo que tiene en mente?$"

Route119_WeatherInstitute_1F_Text_Grunt4Intro:
	.string "¿Eh?\n"
	.string "¿Qué haces tú aquí?$"

Route119_WeatherInstitute_1F_Text_Grunt4Defeat:
	.string "¿Yo?\n"
	.string "¿He perdido? ¡¿Yo?!$"

Route119_WeatherInstitute_1F_Text_Grunt4PostBattle:
	.string "Oh, no…\n"
	.string "Qué bronca me va a caer…\p"
	.string "Creo que voy a echarme una siesta\n"
	.string "para olvidar todo esto…$"

Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs:
	.string "¡Mientras dormía, alguien se coló\n"
	.string "arriba!$"

Route119_WeatherInstitute_1F_Text_WowYoureStrong:
	.string "¡Guau, qué fuerte eres!\p"
	.string "¡Ojalá pudiera ser un ENTRENADOR\n"
	.string "POKéMON tan bueno como tú!$"

Route119_WeatherInstitute_1F_Text_ProfStudyingRain:
	.string "Al PROFESOR le encanta la lluvia.\n"
	.string "Eso es un hecho.\p"
	.string "Pero si sigue lloviendo así, tendremos\n"
	.string "problemas. Eso también es un hecho.\p"
	.string "Por eso el PROFESOR está estudiando\n"
	.string "cómo hacer buen uso de esta lluvia.$"

Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather:
	.string "En el primer piso del INSTITUTO\n"
	.string "estudiamos los fenómenos atmosféricos\l"
	.string "de la región de HOENN.\p"
	.string "Últimamente, estamos detectando casos\n"
	.string "aislados de sequía e inundaciones…$"

Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo:
	.string "¡Hola!\n"
	.string "¡Nos has salvado!\p"
	.string "Lo que no logro entender es lo que\n"
	.string "pretenden los del EQUIPO AQUA…$"

Route119_WeatherInstitute_1F_Text_TakeRestInBed:
	.string "Mira, una cama…\n"
	.string "¡A descansar!$"

>>>>>>> Egg/spanish
