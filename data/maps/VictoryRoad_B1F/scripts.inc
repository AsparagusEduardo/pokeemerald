VictoryRoad_B1F_MapScripts::
	.byte 0

VictoryRoad_B1F_EventScript_Samuel::
	trainerbattle_single TRAINER_SAMUEL, VictoryRoad_B1F_Text_SamuelIntro, VictoryRoad_B1F_Text_SamuelDefeat
	msgbox VictoryRoad_B1F_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Shannon::
	trainerbattle_single TRAINER_SHANNON, VictoryRoad_B1F_Text_ShannonIntro, VictoryRoad_B1F_Text_ShannonDefeat
	msgbox VictoryRoad_B1F_Text_ShannonPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Michelle::
	trainerbattle_single TRAINER_MICHELLE, VictoryRoad_B1F_Text_MichelleIntro, VictoryRoad_B1F_Text_MichelleDefeat
	msgbox VictoryRoad_B1F_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Mitchell::
	trainerbattle_single TRAINER_MITCHELL, VictoryRoad_B1F_Text_MitchellIntro, VictoryRoad_B1F_Text_MitchellDefeat
	msgbox VictoryRoad_B1F_Text_MitchellPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_B1F_EventScript_Halle::
	trainerbattle_single TRAINER_HALLE, VictoryRoad_B1F_Text_HalleIntro, VictoryRoad_B1F_Text_HalleDefeat
	msgbox VictoryRoad_B1F_Text_HallePostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/VictoryRoad_B1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/VictoryRoad_B1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/VictoryRoad_B1F/text_es.inc"
.else
	.include "data/maps/VictoryRoad_B1F/text.inc"
.endif
.endif
.endif
=======
VictoryRoad_B1F_Text_SamuelIntro:
	.string "Pensar que estoy cada vez más cerca\n"
	.string "de la LIGA POKéMON…\p"
	.string "Me entra miedo escénico…$"

VictoryRoad_B1F_Text_SamuelDefeat:
	.string "No me he dado ni cuenta…$"

VictoryRoad_B1F_Text_SamuelPostBattle:
	.string "La LIGA POKéMON vuelve a estar\n"
	.string "lejos, lejos… Qué depresión…$"

VictoryRoad_B1F_Text_ShannonIntro:
	.string "Para ganar en la LIGA POKéMON, debes\n"
	.string "contar con la confianza de tus POKéMON.$"

VictoryRoad_B1F_Text_ShannonDefeat:
	.string "Se nota que vuestra relación se basa\n"
	.string "en la mutua confianza.$"

VictoryRoad_B1F_Text_ShannonPostBattle:
	.string "Cuanto más tiempo pasan juntos,\n"
	.string "más crece la confianza entre POKéMON\l"
	.string "y ENTRENADORES.$"

VictoryRoad_B1F_Text_MichelleIntro:
	.string "Éste no es el objetivo final, sólo\n"
	.string "un paso más hacia la LIGA POKéMON.$"

VictoryRoad_B1F_Text_MichelleDefeat:
	.string "¡Tú avanzas rápido!$"

VictoryRoad_B1F_Text_MichellePostBattle:
	.string "¡Seguro que lo haces muy bien!\n"
	.string "¡Tus POKéMON parecen emocionados!$"

VictoryRoad_B1F_Text_MitchellIntro:
	.string "¡Mis POKéMON provocan una\n"
	.string "admiración galáctica!$"

VictoryRoad_B1F_Text_MitchellDefeat:
	.string "Nunca había conocido a nadie igual.$"

VictoryRoad_B1F_Text_MitchellPostBattle:
	.string "De ti y de tus POKéMON emana\n"
	.string "un poder cósmico sin igual,\l"
	.string "incluso cuando no lucháis.$"

VictoryRoad_B1F_Text_HalleIntro:
	.string "¡Eh, tranqui, no te mosquees!\n"
	.string "¡Vamos a luchar con calma!$"

VictoryRoad_B1F_Text_HalleDefeat:
	.string "¡Guau!\n"
	.string "¡Ha sido magnífico!$"

VictoryRoad_B1F_Text_HallePostBattle:
	.string "Estamos en la CALLE VICTORIA.\p"
	.string "Pero en el fondo no es tan distinta\n"
	.string "de cualquier otra ruta.\p"
	.string "¡Intenta disfrutar de todo\n"
	.string "lo que te queda por ver!$"

>>>>>>> Egg/spanish
