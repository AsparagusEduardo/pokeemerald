.set LOCALID_GRUNT_1, 1
.set LOCALID_GRUNT_2, 2
.set LOCALID_SHELLY, 3
.set LOCALID_SCIENTIST, 5
.set LOCALID_GRUNT_3, 7
.set LOCALID_GRUNT_4, 8

Route119_WeatherInstitute_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
	.byte 0

Route119_WeatherInstitute_2F_OnTransition:
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone
	call_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear
	end

Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere::
	setobjectxyperm LOCALID_SCIENTIST, 1, 6
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
	return

Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone::
	setobjectxyperm LOCALID_SCIENTIST, 4, 6
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
	return

Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear::
	setobjectxyperm LOCALID_SCIENTIST, 2, 2
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_UP
	return

Route119_WeatherInstitute_2F_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_Shelly::
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyIntro, Route119_WeatherInstitute_2F_Text_ShellyDefeat, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_ShellyDefeated::
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_DEFAULT
	closemessage
	addobject LOCALID_GRUNT_3
	applymovement LOCALID_GRUNT_3, Route119_WeatherInstitute_2F_Movement_GruntApproachShelly
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay
	waitmovement 0
	msgbox Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SHELLY, Common_Movement_Delay48
	waitmovement 0
	msgbox Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre, MSGBOX_DEFAULT
	closemessage
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
	fadedefaultbgm
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_SHELLY
	removeobject LOCALID_GRUNT_4
	removeobject LOCALID_GRUNT_3
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition
	waitmovement 0
	fadescreen FADE_FROM_BLACK
	applymovement LOCALID_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer
	waitmovement 0
	copyobjectxytoperm LOCALID_SCIENTIST
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
	end

Route119_WeatherInstitute_2F_EventScript_ReceiveCastform::
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CASTFORM
	givemon SPECIES_CASTFORM, 25, ITEM_MYSTIC_WATER
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty::
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_ExplainCastform
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
	end

Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC::
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
	call Common_EventScript_NameReceivedBoxMon
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
	end

Route119_WeatherInstitute_2F_EventScript_SendCastformToPC::
	call Common_EventScript_TransferredToPC
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
	end

Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare::
	playfanfare MUS_OBTAIN_ITEM
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM
	return

Route119_WeatherInstitute_2F_EventScript_ExplainCastform::
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_CASTFORM
	release
	end

Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather::
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
	setvar VAR_0x8004, 0
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather  @ Both defeated
	call_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
	goto_if_eq VAR_RESULT, 1, Route119_WeatherInstitute_2F_EventScript_KyogreWeather
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_EventScript_KyogreWeather::
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather::
	special CreateAbnormalWeatherEvent
	setflag FLAG_TEMP_2
	return

Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated::
	addvar VAR_0x8004, 1
	return

Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather::
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	ride_water_current_up
	walk_in_place_faster_down
	step_end

Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
	slide_down
	walk_in_place_faster_left
	step_end

Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
	walk_right
	walk_right
	walk_right
	step_end

Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route119_WeatherInstitute_2F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route119_WeatherInstitute_2F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route119_WeatherInstitute_2F/text_es.inc"
.else
	.include "data/maps/Route119_WeatherInstitute_2F/text.inc"
.endif
.endif
.endif
=======
Route119_WeatherInstitute_2F_Text_Grunt2Intro:
	.string "El INSTITUTO ha creado un tipo\n"
	.string "de POKéMON que tiene algo que ver con\l"
	.string "el tiempo. ¡Venimos a por unos cuantos!$"

Route119_WeatherInstitute_2F_Text_Grunt2Defeat:
	.string "¡¿Semejante mequetrefe\n"
	.string "nos está chafando el plan?!$"

Route119_WeatherInstitute_2F_Text_Grunt2PostBattle:
	.string "¡Si los POKéMON creados aquí pueden\n"
	.string "controlar el tiempo a voluntad,\l"
	.string "los del EQUIPO AQUA los necesitamos!$"

Route119_WeatherInstitute_2F_Text_Grunt3Intro:
	.string "¡Somos el EQUIPO AQUA! ¡Aparecemos\n"
	.string "allí donde hay algo extraordinario!$"

Route119_WeatherInstitute_2F_Text_Grunt3Defeat:
	.string "¡Me has parado los pies!$"

Route119_WeatherInstitute_2F_Text_Grunt3PostBattle:
	.string "¡No tienes ni idea de lo que los del\n"
	.string "EQUIPO AQUA estamos planeando!\l"
	.string "¡Fuera de mi camino!$"

Route119_WeatherInstitute_2F_Text_Grunt5Intro:
	.string "¡No me digas que tú también estás\n"
	.string "buscando ese POKéMON del tiempo!\p"
	.string "¡Ah, pues no, no y no!\n"
	.string "¡Nosotros llegamos aquí primero!$"

Route119_WeatherInstitute_2F_Text_Grunt5Defeat:
	.string "Oh, ¿ves cómo están mis POKéMON?$"

Route119_WeatherInstitute_2F_Text_Grunt5PostBattle:
	.string "Bah, ¿y qué?\n"
	.string "Lo que nosotros buscamos de verdad…\p"
	.string "Lo que nosotros buscamos no está aquí.\n"
	.string "¡Ji, ji, ji, ji!…$"

Route119_WeatherInstitute_2F_Text_ShellyIntro:
	.string "¡Ja, ja, ja, ja!\p"
	.string "¿Vas a mezclarte en los asuntos\n"
	.string "del EQUIPO AQUA?\p"
	.string "¡Entonces, o no tienes miedo o no\n"
	.string "tienes ni idea!\p"
	.string "¡Eres tan dulce que empalagas!\n"
	.string "¡Voy a darte una buena tunda!$"

Route119_WeatherInstitute_2F_Text_ShellyDefeat:
	.string "¡Ja, ja, ja, ja!\p"
	.string "¡Eres tan fuerte que agobias!$"

Route119_WeatherInstitute_2F_Text_ShellyPostBattle:
	.string "¡Ya es un fastidio tener todo el día\n"
	.string "detrás al EQUIPO MAGMA\l"
	.string "para que ahora encima vengas tú!\p"
	.string "¿Se puede saber por qué metes\n"
	.string "las narices donde no te llaman?$"

Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy:
	.string "¡Tenemos un problema!\p"
	.string "Una banda del EQUIPO MAGMA acaba de\n"
	.string "pasar por el INSTITUTO METEOROLÓGICO.\p"
	.string "¡Parece que se dirigen al MONTE PÍRICO!$"

Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre:
	.string "¡¿Qué?! ¡¿Cómo?!\p"
	.string "¡No perdamos más tiempo aquí!\n"
	.string "Deprisa, ¡al MONTE PÍRICO!\p"
	.string "¡Ja, ja, ja, ja!\n"
	.string "¡Prepárate, EQUIPO MAGMA! ¡Allá vamos!$"

Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon:
	.string "¡Gracias, gracias!\n"
	.string "¡Nos has salvado!\p"
	.string "Quiero agradecértelo de algún modo,\n"
	.string "así que voy a darte este POKéMON.$"

@ Unused
Route119_WeatherInstitute_2F_Text_NoRoomForPokemon:
	.string "Hm? You don’t seem to have any room\n"
	.string "for this POKéMON.$"

Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform:
	.string "¡{PLAYER} recibió a CASTFORM!$"

Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather:
	.string "Este POKéMON cambia de forma según\n"
	.string "las condiciones meteorológicas.\p"
	.string "Hay un montón de ellos\n"
	.string "en el INSTITUTO: éste es para ti.$"

Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous:
	.string "He investigado la lluvia durante años,\n"
	.string "pero es ridículo creer que el hombre\l"
	.string "puede cambiar el tiempo a su antojo.$"

Route119_WeatherInstitute_2F_Text_GroudonWeather:
	.string "Me dedico a estudiar los fenómenos\n"
	.string "atmosféricos de la región de HOENN.\p"
	.string "Ahora mismo, se ha detectado\n"
	.string "que hay sequía en {STR_VAR_1}.\p"
	.string "Podría ser en algún punto cercano\n"
	.string "a {STR_VAR_1}…$"

Route119_WeatherInstitute_2F_Text_KyogreWeather:
	.string "Me dedico a estudiar los fenómenos\n"
	.string "atmosféricos de la región de HOENN.\p"
	.string "Ahora mismo, se ha detectado que\n"
	.string "hay inundaciones en {STR_VAR_1}.\p"
	.string "Podría ser en algún punto cercano\n"
	.string "a {STR_VAR_1}…$"

Route119_WeatherInstitute_2F_Text_NoAbnormalWeather:
	.string "Actualmente no se detecta ninguna\n"
	.string "anomalía en lo que al tiempo se refiere.\p"
	.string "La verdad es que la lluvia a veces\n"
	.string "viene como agua de mayo.$"

>>>>>>> Egg/spanish
