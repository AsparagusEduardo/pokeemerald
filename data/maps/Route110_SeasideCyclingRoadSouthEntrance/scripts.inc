Route110_SeasideCyclingRoadSouthEntrance_MapScripts::
	.byte 0

Route110_SeasideCyclingRoadSouthEntrance_EventScript_Clerk::
	lock
	faceplayer
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_GoAllOutOnCyclingRoad, MSGBOX_DEFAULT
	release
	end

Route110_SeasideCyclingRoadSouthEntrance_EventScript_BikeCheck::
	lockall
	specialvar VAR_RESULT, GetPlayerAvatarBike
	goto_if_eq VAR_RESULT, 0, Route110_SeasideCyclingRoadSouthEntrance_EventScript_NoBike
	setflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 1
	releaseall
	end

Route110_SeasideCyclingRoadSouthEntrance_EventScript_NoBike::
	msgbox Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route110_SeasideCyclingRoadSouthEntrance_Movement_PushPlayerBackFromCounter
	waitmovement 0
	releaseall
	end

Route110_SeasideCyclingRoadSouthEntrance_Movement_PushPlayerBackFromCounter:
	walk_left
	step_end

Route110_SeasideCyclingRoadSouthEntrance_EventScript_ClearCyclingRoad::
	lockall
	clearflag FLAG_SYS_CYCLING_ROAD
	setvar VAR_TEMP_1, 0
	releaseall
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route110_SeasideCyclingRoadSouthEntrance/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route110_SeasideCyclingRoadSouthEntrance/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route110_SeasideCyclingRoadSouthEntrance/text_es.inc"
.else
	.include "data/maps/Route110_SeasideCyclingRoadSouthEntrance/text.inc"
.endif
.endif
.endif
=======
Route110_SeasideCyclingRoadSouthEntrance_Text_GoAllOutOnCyclingRoad:
	.string "En el CAMINO de BICIS, puedes ir\n"
	.string "tan rápido como quieras.\p"
	.string "Es genial correr a esa velocidad, ¡pero\n"
	.string "cuidado con no chocarte con nadie!$"

Route110_SeasideCyclingRoadSouthEntrance_Text_TooDangerousToWalk:
	.string "Lo siento. No puedes entrar a pie en el\n"
	.string "CAMINO de BICIS. Puede ser peligroso.\p"
	.string "Vuelve con una BICI y te dejaré pasar.$"

>>>>>>> Egg/spanish
