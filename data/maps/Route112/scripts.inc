.set LOCALID_GRUNT_1, 1
.set LOCALID_GRUNT_2, 6

Route112_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route112_OnTransition
	.byte 0

Route112_OnTransition:
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
	end

Route112_EventScript_MagmaGrunts::
	lockall
	delay 40
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 20
	msgbox Route112_Text_LeaderGoingToAwakenThing, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	delay 40
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 20
	msgbox Route112_Text_YeahWeNeedMeteorite, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	delay 40
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 20
	msgbox Route112_Text_OhThatsWhyCrewWentToFallarbor, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	delay 40
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 20
	msgbox Route112_Text_CantLetAnyonePassUntilTheyreBack, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

Route112_EventScript_MtChimneyCableCarSign::
	msgbox Route112_Text_MtChimneyCableCarSign, MSGBOX_SIGN
	end

Route112_EventScript_MtChimneySign::
	msgbox Route112_Text_MtChimneySign, MSGBOX_SIGN
	end

Route112_EventScript_RouteSignLavaridge::
	msgbox Route112_Text_RouteSignLavaridge, MSGBOX_SIGN
	end

Route112_EventScript_Hiker::
	msgbox Route112_Text_NotEasyToGetBackToLavaridge, MSGBOX_NPC
	end

Route112_EventScript_Brice::
	trainerbattle_single TRAINER_BRICE, Route112_Text_BriceIntro, Route112_Text_BriceDefeat
	msgbox Route112_Text_BricePostBattle, MSGBOX_AUTOCLOSE
	end

Route112_EventScript_Trent::
	trainerbattle_single TRAINER_TRENT_1, Route112_Text_TrentIntro, Route112_Text_TrentDefeat, Route112_EventScript_RegisterTrent
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route112_EventScript_RematchTrent
	msgbox Route112_Text_TrentPostBattle, MSGBOX_DEFAULT
	release
	end

Route112_EventScript_RegisterTrent::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route112_Text_TrentRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_TRENT_1
	release
	end

Route112_EventScript_RematchTrent::
	trainerbattle_rematch TRAINER_TRENT_1, Route112_Text_TrentRematchIntro, Route112_Text_TrentRematchDefeat
	msgbox Route112_Text_TrentRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route112_EventScript_Larry::
	trainerbattle_single TRAINER_LARRY, Route112_Text_LarryIntro, Route112_Text_LarryDefeat
	msgbox Route112_Text_LarryPostBattle, MSGBOX_AUTOCLOSE
	end

Route112_EventScript_Carol::
	trainerbattle_single TRAINER_CAROL, Route112_Text_CarolIntro, Route112_Text_CarolDefeat
	msgbox Route112_Text_CarolPostBattle, MSGBOX_AUTOCLOSE
	end

Route112_EventScript_Bryant::
	trainerbattle_single TRAINER_BRYANT, Route112_Text_BryantIntro, Route112_Text_BryantDefeat
	msgbox Route112_Text_BryantPostBattle, MSGBOX_AUTOCLOSE
	end

Route112_EventScript_Shayla::
	trainerbattle_single TRAINER_SHAYLA, Route112_Text_ShaylaIntro, Route112_Text_ShaylaDefeat
	msgbox Route112_Text_ShaylaPostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route112/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route112/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route112/text_es.inc"
.else
	.include "data/maps/Route112/text.inc"
.endif
.endif
.endif
=======
Route112_Text_LeaderGoingToAwakenThing:
	.string "Eh, ¿tú crees que nuestro líder\n"
	.string "va a despertar de verdad a esa cosa?$"

Route112_Text_YeahWeNeedMeteorite:
	.string "Eso parece, colega, pero se ve que\n"
	.string "necesita un METEORITO para hacerlo.$"

Route112_Text_OhThatsWhyCrewWentToFallarbor:
	.string "Ah, ya lo pillo. Por eso los demás\n"
	.string "han tirado para PUEBLO PARDAL.$"

Route112_Text_CantLetAnyonePassUntilTheyreBack:
	.string "Afirmativo. Y, hasta que vuelvan,\n"
	.string "por aquí no pasa nadie.$"

Route112_Text_NotEasyToGetBackToLavaridge:
	.string "Me gustaría ir a MALVALONA, pero si\n"
	.string "salto por aquí luego no podré volver\l"
	.string "a LAVACALDA tan fácilmente…$"

Route112_Text_MtChimneyCableCarSign:
	.string "TELEFÉRICO del MONTE CENIZO\n"
	.string "“¡Un paseíto hacia {UP_ARROW}!”$"

Route112_Text_MtChimneySign:
	.string "MONTE CENIZO\p"
	.string "“Para ir a PUEBLO LAVACALDA o a\n"
	.string "la cima, coge el TELEFÉRICO.”$"

Route112_Text_RouteSignLavaridge:
	.string "RUTA 112\n"
	.string "{LEFT_ARROW} PUEBLO LAVACALDA$"

>>>>>>> Egg/spanish
