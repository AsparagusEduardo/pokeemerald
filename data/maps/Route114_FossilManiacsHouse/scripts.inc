Route114_FossilManiacsHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsHouse_OnTransition
	.byte 0

Route114_FossilManiacsHouse_OnTransition:
	setflag FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE
	end

Route114_FossilManiacsHouse_EventScript_FossilManiacsBrother::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_DIG, Route114_FossilManiacsHouse_EventScript_ReceivedDig
	msgbox Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother, MSGBOX_DEFAULT
	giveitem ITEM_TM_DIG
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_DIG
	release
	end

Route114_FossilManiacsHouse_EventScript_ReceivedDig::
	msgbox Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsHouse_EventScript_RockDisplay::
	msgbox Route114_FossilManiacsHouse_Text_RocksFillDisplayCase, MSGBOX_SIGN
	end

Route114_FossilManiacsHouse_EventScript_Bookshelf::
	msgbox Route114_FossilManiacsHouse_Text_CrammedWithBooks, MSGBOX_SIGN
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route114_FossilManiacsHouse/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route114_FossilManiacsHouse/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route114_FossilManiacsHouse/text_es.inc"
.else
	.include "data/maps/Route114_FossilManiacsHouse/text.inc"
.endif
.endif
.endif
=======
Route114_FossilManiacsHouse_Text_HaveThisToDigLikeMyBrother:
	.string "Mi hermano mayor es el FOSILMANÍACO.\n"
	.string "Le enseñas un fósil y se vuelve loco…\p"
	.string "También le pirra cavar agujeros…\n"
	.string "Él mismo cavó esta cueva que ves.\p"
	.string "Te voy a dar esto para que puedas\n"
	.string "EXCAVAR agujeros como mi hermano.$"

Route114_FossilManiacsHouse_Text_DigReturnsYouToEntrance:
	.string "Si haces que un POKéMON use EXCAVAR\n"
	.string "en una cueva, vuelves a la entrada.$"

Route114_FossilManiacsHouse_Text_RocksFillDisplayCase:
	.string "La vitrina de exhibición contiene\n"
	.string "rocas con formas extrañas.$"

Route114_FossilManiacsHouse_Text_CrammedWithBooks:
	.string "“La composición de los estratos”…\n"
	.string "“Cómo erosiona la lluvia”…\l"
	.string "“Piedras, rocas y suelos”…\p"
	.string "Está repleto de libros…$"

>>>>>>> Egg/spanish
