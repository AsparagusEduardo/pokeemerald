EverGrandeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
	.byte 0

EverGrandeCity_OnTransition:
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

EverGrandeCity_EventScript_VictoryRoadSign::
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_CitySign::
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_PokemonLeagueSign::
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
	end

EverGrandeCity_EventScript_SetVisitedEverGrande::
	setflag FLAG_VISITED_EVER_GRANDE_CITY
	setvar VAR_TEMP_1, 1
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/EverGrandeCity/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/EverGrandeCity/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/EverGrandeCity/text_es.inc"
.else
	.include "data/maps/EverGrandeCity/text.inc"
.endif
.endif
.endif
=======
EverGrandeCity_Text_EnteringVictoryRoad:
	.string "ENTRADA A LA CALLE VICTORIA$"

EverGrandeCity_Text_EnteringPokemonLeague:
	.string "ENTRADA A LA LIGA POKéMON\n"
	.string "PUERTA PRINCIPAL$"

EverGrandeCity_Text_CitySign:
	.string "CIUDAD COLOSALIA\p"
	.string "“El paraíso de las flores, el mar\n"
	.string "y los POKéMON.”$"
>>>>>>> Egg/spanish

