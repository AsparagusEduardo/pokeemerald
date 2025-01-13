.set LOCALID_STEVEN, 1

MeteorFalls_StevensCave_MapScripts::
	.byte 0

MeteorFalls_StevensCave_EventScript_Steven::
	lock
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Defeated
	waitse
	playse SE_PIN
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
	release
	end

MeteorFalls_StevensCave_EventScript_Defeated::
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MeteorFalls_StevensCave/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MeteorFalls_StevensCave/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MeteorFalls_StevensCave/text_es.inc"
.else
	.include "data/maps/MeteorFalls_StevensCave/text.inc"
.endif
.endif
.endif
=======
MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst:
	.string "MÁXIMO: Anda, {PLAYER}{KUN}.\n"
	.string "Me sorprende que me hayas encontrado.\p"
	.string "Dime… ¿Tú crees que las rocas\n"
	.string "me encantan?\p"
	.string "Pues que sepas que no.\p"
	.string "Ya nos enfrentamos en el CENTRO\n"
	.string "ESPACIAL de CIUDAD ALGARIA.\p"
	.string "Deberías saber de sobra que soy muy,\n"
	.string "pero que muy bueno.\p"
	.string "¡Tú lo has querido, {PLAYER}{KUN},\n"
	.string "si buscas pelea, espérate lo peor!$"

MeteorFalls_StevensCave_Text_StevenDefeat:
	.string "Vaya…\n"
	.string "Pues sí que has mejorado…$"

MeteorFalls_StevensCave_Text_MyPredictionCameTrue:
	.string "MÁXIMO: Ahora que lo pienso, lo supe\n"
	.string "desde que nos encontramos en la\l"
	.string "CUEVA GRANITO de PUEBLO AZULIZA.\p"
	.string "Ya sabía yo que acabarías por hacerte\n"
	.string "con el CAMPEONATO.\p"
	.string "Mis predicciones nunca fallan.\p"
	.string "¿Y ahora qué te depara el futuro?\p"
	.string "Mmmm…\n"
	.string "Mmmm…\p"
	.string "Je, je, je, ni yo lo sé.$"

>>>>>>> Egg/spanish
