.set LOCALID_FOSSIL_MANIAC, 1

Route114_FossilManiacsTunnel_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsTunnel_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route114_FossilManiacsTunnel_OnLoad
	.byte 0

Route114_FossilManiacsTunnel_OnTransition:
	call_if_set FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac
	end

Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac::
	setobjectxyperm LOCALID_FOSSIL_MANIAC, 6, 5
	setobjectmovementtype LOCALID_FOSSIL_MANIAC, MOVEMENT_TYPE_FACE_DOWN
	return

Route114_FossilManiacsTunnel_OnLoad:
	call_if_unset FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass
	end

Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass::
	setmetatile 6, 1, METATILE_Fallarbor_RedRockWall, TRUE
	setmetatile 6, 2, METATILE_Fallarbor_RedRockWall, TRUE
	return

Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn::
	lockall
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_WalkInPlaceFasterUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox Route114_FossilManiacsTunnel_Text_NotSafeThatWay, MSGBOX_DEFAULT
	setvar VAR_FOSSIL_MANIAC_STATE, 2
	releaseall
	end

Route114_FossilManiacsTunnel_EventScript_FossilManiac::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_REVIVED_FOSSIL_MON, Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil
	checkitem ITEM_ROOT_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
	checkitem ITEM_CLAW_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
	msgbox Route114_FossilManiacsTunnel_Text_LookInDesertForFossils, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil::
	msgbox Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil::
	msgbox Route114_FossilManiacsTunnel_Text_FossilsAreWonderful, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route114_FossilManiacsTunnel/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route114_FossilManiacsTunnel/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route114_FossilManiacsTunnel/text_es.inc"
.else
	.include "data/maps/Route114_FossilManiacsTunnel/text.inc"
.endif
.endif
.endif
=======
Route114_FossilManiacsTunnel_Text_LookInDesertForFossils:
	.string "Soy el FOSILMANÍACO…\n"
	.string "Me enseñas un FÓSIL y lo flipo…\p"
	.string "¿Quieres un FÓSIL?\p"
	.string "Me parece muy bien, pero todos los que\n"
	.string "hay aquí son míos, sólo míos…\p"
	.string "Si necesitas desesperadamente\n"
	.string "un FÓSIL, ve al desierto. Allí hay rocas\l"
	.string "y arena que quizás escondan FÓSILES…$"

Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils:
	.string "Has encontrado un FÓSIL, ¿no?\n"
	.string "Qué bien… Qué envidia me das…\p"
	.string "¿Qué vas a hacer con ese FÓSIL?\p"
	.string "Por lo que cuentan, DEVON está\n"
	.string "investigando cómo reanimar\l"
	.string "POKéMON a partir de FÓSILES.\p"
	.string "A mí me chiflan mis FÓSILES, así\n"
	.string "que no se me ocurriría hacer eso.$"

Route114_FossilManiacsTunnel_Text_FossilsAreWonderful:
	.string "Los FÓSILES son tan… guays…\n"
	.string "Me encantan…$"

Route114_FossilManiacsTunnel_Text_NotSafeThatWay:
	.string "Oh…\n"
	.string "Ese camino es peligroso…\p"
	.string "Yo estaba excavando, ¿sabes?…\n"
	.string "Y de repente se derrumbó la pared…\p"
	.string "Creo que debajo hay una cueva gigante…\p"
	.string "Pero a mí no me interesa porque no\n"
	.string "creo que haya FÓSILES ahí…$"

>>>>>>> Egg/spanish
