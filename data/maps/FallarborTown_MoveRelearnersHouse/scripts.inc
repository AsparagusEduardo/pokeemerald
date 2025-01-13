.set LOCALID_MOVE_RELEARNER, 1

FallarborTown_MoveRelearnersHouse_MapScripts::
	.byte 0

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
	lockall
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
	waitmovement 0
	goto_if_set FLAG_TEMP_1, FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
	end

FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
	checkitem ITEM_HEART_SCALE
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
	end

FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
	removeitem ITEM_HEART_SCALE
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
	end

FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
	end

FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
	releaseall
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/FallarborTown_MoveRelearnersHouse/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/FallarborTown_MoveRelearnersHouse/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/FallarborTown_MoveRelearnersHouse/text_es.inc"
.else
	.include "data/maps/FallarborTown_MoveRelearnersHouse/text.inc"
.endif
.endif
.endif
=======
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
	.string "Soy el TUTOR de MOVIMIENTOS.\p"
	.string "Me sé todos los movimientos que\n"
	.string "aprenden los POKéMON. Todos, toditos,\l"
	.string "todos. Y además los puedo enseñar.\p"
	.string "Si quieres, puedo enseñar a uno\n"
	.string "de tus POKéMON un movimiento.\p"
	.string "Lo haré por una insignificante ESCAMA\n"
	.string "CORAZÓN. Es que las colecciono.$"

FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
	.string "¡Sí! ¡Ésa es! ¡Una auténtica ESCAMA\n"
	.string "CORAZÓN! ¡Una de las de verdad!\p"
	.string "A ver que lo adivine, ¿quieres que\n"
	.string "enseñe un movimiento a tu POKéMON?$"

FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
	.string "¿Qué POKéMON quieres que lo aprenda?$"

FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
	.string "¿Qué movimiento quieres que aprenda?$"

FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
	.string "Perdona…\p"
	.string "Parece que no puedo enseñar ningún\n"
	.string "movimiento a ese POKéMON…$"

FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
	.string "{PLAYER} entregó una ESCAMA CORAZÓN\n"
	.string "a cambio de la lección.$"

FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
	.string "Si tu POKéMON necesita aprender\n"
	.string "un movimiento, vuelve con una ESCAMA\l"
	.string "CORAZÓN.$"

FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
	.string "¿Eh? No puedo enseñar absolutamente\n"
	.string "ningún movimiento a un HUEVO…$"

>>>>>>> Egg/spanish
