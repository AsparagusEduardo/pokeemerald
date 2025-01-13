VictoryRoad_B2F_MapScripts::
	.byte 0

VictoryRoad_B2F_EventScript_Vito::
	trainerbattle_single TRAINER_VITO, VictoryRoad_B2F_Text_VitoIntro, VictoryRoad_B2F_Text_VitoDefeat
	msgbox VictoryRoad_B2F_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Owen::
	trainerbattle_single TRAINER_OWEN, VictoryRoad_B2F_Text_OwenIntro, VictoryRoad_B2F_Text_OwenDefeat
	msgbox VictoryRoad_B2F_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Caroline::
	trainerbattle_single TRAINER_CAROLINE, VictoryRoad_B2F_Text_CarolineIntro, VictoryRoad_B2F_Text_CarolineDefeat
	msgbox VictoryRoad_B2F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Julie::
	trainerbattle_single TRAINER_JULIE, VictoryRoad_B2F_Text_JulieIntro, VictoryRoad_B2F_Text_JulieDefeat
	msgbox VictoryRoad_B2F_Text_JuliePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Felix::
	trainerbattle_single TRAINER_FELIX, VictoryRoad_B2F_Text_FelixIntro, VictoryRoad_B2F_Text_FelixDefeat
	msgbox VictoryRoad_B2F_Text_FelixPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B2F_EventScript_Dianne::
	trainerbattle_single TRAINER_DIANNE, VictoryRoad_B2F_Text_DianneIntro, VictoryRoad_B2F_Text_DianneDefeat
	msgbox VictoryRoad_B2F_Text_DiannePostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/VictoryRoad_B2F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/VictoryRoad_B2F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/VictoryRoad_B2F/text_es.inc"
.else
	.include "data/maps/VictoryRoad_B2F/text.inc"
.endif
.endif
.endif
=======
VictoryRoad_B2F_Text_VitoIntro:
	.string "He entrenado con toda mi familia,\n"
	.string "toda enterita. ¡No voy a perder!$"

VictoryRoad_B2F_Text_VitoDefeat:
	.string "¡¿Mejor que mi familia?!\n"
	.string "¡¿Cómo puede ser?!$"

VictoryRoad_B2F_Text_VitoPostBattle:
	.string "Logré superar a toda mi familia.\n"
	.string "Nunca había perdido…\p"
	.string "Vaya palo…\n"
	.string "Me voy a casa a entrenar más.$"

VictoryRoad_B2F_Text_OwenIntro:
	.string "Me han dicho que por aquí había\n"
	.string "una personita que da mucha guerra.\l"
	.string "¿Eres tú?$"

VictoryRoad_B2F_Text_OwenDefeat:
	.string "¡No hay que fiarse de tu juventud,\n"
	.string "está claro!$"

VictoryRoad_B2F_Text_OwenPostBattle:
	.string "Y, según los rumores, vienes\n"
	.string "de CIUDAD PETALIA, ¿no?$"

VictoryRoad_B2F_Text_CarolineIntro:
	.string "Yo creo que tanta lucha ya debe\n"
	.string "de haberte agotado…$"

VictoryRoad_B2F_Text_CarolineDefeat:
	.string "¡Pues no!$"

VictoryRoad_B2F_Text_CarolinePostBattle:
	.string "Tanto CALLE VICTORIA como la LIGA\n"
	.string "POKéMON son desafíos largos y duros.\l"
	.string "¡Procura no fatigarte demasiado!$"

VictoryRoad_B2F_Text_JulieIntro:
	.string "No deberías dormirte en los laureles\n"
	.string "sólo porque tienes un montón\l"
	.string "de MEDALLAS de GIMNASIO.\p"
	.string "¡Siempre puedes encontrar a alguien\n"
	.string "que sea mejor que tú!$"

VictoryRoad_B2F_Text_JulieDefeat:
	.string "¡Eres mejor que yo!$"

VictoryRoad_B2F_Text_JuliePostBattle:
	.string "Mira todas tus MEDALLAS y acuérdate\n"
	.string "de los ENTRENADORES contra los que\l"
	.string "te has enfrentado.$"

VictoryRoad_B2F_Text_FelixIntro:
	.string "He llegado hasta aquí, pero tanta\n"
	.string "tensión me destroza el estómago…$"

VictoryRoad_B2F_Text_FelixDefeat:
	.string "Ayyyy…\n"
	.string "Qué dolor…$"

VictoryRoad_B2F_Text_FelixPostBattle:
	.string "No puedo evitar ponerme tenso al saber\n"
	.string "que me acerco a la LIGA POKéMON.\p"
	.string "Curiosamente, es la única forma\n"
	.string "de controlar los nervios.$"

VictoryRoad_B2F_Text_DianneIntro:
	.string "En esta cueva encontrarás\n"
	.string "lo mejor de lo mejor.\p"
	.string "Hasta ahora, ¿qué te parece?$"

VictoryRoad_B2F_Text_DianneDefeat:
	.string "¡Esto no me afecta lo más mínimo!$"

VictoryRoad_B2F_Text_DiannePostBattle:
	.string "¡Tienes agallas y eso me gusta!\n"
	.string "¡Sigue así!$"

>>>>>>> Egg/spanish
