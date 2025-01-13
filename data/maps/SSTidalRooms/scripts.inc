SSTidalRooms_MapScripts::
	.byte 0

SSTidalRooms_EventScript_SnatchGiver::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_SNATCH, SSTidalRooms_EventScript_ExplainSnatch
	msgbox SSTidalRooms_Text_NotSuspiciousTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_SNATCH
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_SNATCH
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
	release
	end

SSTidalRooms_EventScript_ExplainSnatch::
	msgbox SSTidalRooms_Text_ExplainSnatch, MSGBOX_DEFAULT
	release
	end

SSTidalRooms_EventScript_Bed::
	lockall
	msgbox SSTidalRooms_Text_TakeRestOnBed, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	call SSTidalRooms_EventScript_ProgessCruiseAfterBed
	releaseall
	end

SSTidalRooms_EventScript_Colton::
	trainerbattle_single TRAINER_COLTON, SSTidalRooms_Text_ColtonIntro, SSTidalRooms_Text_ColtonDefeat
	msgbox SSTidalRooms_Text_ColtonPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_Micah::
	trainerbattle_single TRAINER_MICAH, SSTidalRooms_Text_MicahIntro, SSTidalRooms_Text_MicahDefeat
	msgbox SSTidalRooms_Text_MicahPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_Thomas::
	trainerbattle_single TRAINER_THOMAS, SSTidalRooms_Text_ThomasIntro, SSTidalRooms_Text_ThomasDefeat
	msgbox SSTidalRooms_Text_ThomasPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_Jed::
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_JedIntro, SSTidalRooms_Text_JedDefeat, SSTidalRooms_Text_JedNotEnoughMons
	msgbox SSTidalRooms_Text_JedPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_Lea::
	trainerbattle_double TRAINER_LEA_AND_JED, SSTidalRooms_Text_LeaIntro, SSTidalRooms_Text_LeaDefeat, SSTidalRooms_Text_LeaNotEnoughMons
	msgbox SSTidalRooms_Text_LeaPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_Garret::
	trainerbattle_single TRAINER_GARRET, SSTidalRooms_Text_GarretIntro, SSTidalRooms_Text_GarretDefeat
	msgbox SSTidalRooms_Text_GarretPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalRooms_EventScript_Naomi::
	trainerbattle_single TRAINER_NAOMI, SSTidalRooms_Text_NaomiIntro, SSTidalRooms_Text_NaomiDefeat
	msgbox SSTidalRooms_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SSTidalRooms/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SSTidalRooms/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SSTidalRooms/text_es.inc"
.else
	.include "data/maps/SSTidalRooms/text.inc"
.endif
.endif
.endif
=======
SSTidalRooms_Text_TakeRestOnBed:
	.string "Es una cama.\n"
	.string "Voy a descansar un poco.$"

SSTidalRooms_Text_ColtonIntro:
	.string "A veces suelo ir a CIUDAD CALAGUA.\p"
	.string "Me lo paso genial participando\n"
	.string "en CONCURSOS POKéMON.$"

SSTidalRooms_Text_ColtonDefeat:
	.string "¡Qué combate tan bueno!$"

SSTidalRooms_Text_ColtonPostBattle:
	.string "Yo es que me emociono sólo imaginando\n"
	.string "los tipos de POKéMON a los que me\l"
	.string "enfrentaré en el siguiente CONCURSO…$"

SSTidalRooms_Text_MicahIntro:
	.string "¿Tus amigos son fuertes?$"

SSTidalRooms_Text_MicahDefeat:
	.string "Sí, de hecho son muy fuertes…$"

SSTidalRooms_Text_MicahPostBattle:
	.string "Los amigos suelen ser personas,\n"
	.string "pero los POKéMON también pueden\l"
	.string "ser muy buenos amigos…$"

SSTidalRooms_Text_ThomasIntro:
	.string "Joven…\n"
	.string "¿Has llamado a la puerta?$"

SSTidalRooms_Text_ThomasDefeat:
	.string "Se ha de aceptar la derrota\n"
	.string "con deportividad y caballerosidad.$"

SSTidalRooms_Text_ThomasPostBattle:
	.string "El lema de cualquier CABALLERO que se\n"
	.string "precie es: “Nunca perder la calma”.$"

SSTidalRooms_Text_JedIntro:
	.string "JOEL: Me da un poco de vergüenza,\n"
	.string "pero… ¡vas a ver nuestro dúo de lucha!$"

SSTidalRooms_Text_JedDefeat:
	.string "JOEL: Ay…$"

SSTidalRooms_Text_JedPostBattle:
	.string "JOEL: Es la primera vez que nuestro\n"
	.string "dúo de lucha pierde…\l"
	.string "¡Debes de ser excepcional!$"

SSTidalRooms_Text_JedNotEnoughMons:
	.string "JOEL: ¿Sólo tienes un POKéMON?\n"
	.string "¿Y no es un rollo patatero?$"

SSTidalRooms_Text_LeaIntro:
	.string "LIZ: Me da un poco de cosa, pero…\n"
	.string "¡vas a ver nuestro dúo de lucha!$"

SSTidalRooms_Text_LeaDefeat:
	.string "LIZ: Oh, no…$"

SSTidalRooms_Text_LeaPostBattle:
	.string "LIZ: ¡No me lo puedo creer!\n"
	.string "Nuestro dúo de lucha derrotado…\l"
	.string "¡Debes de ser excepcional!$"

SSTidalRooms_Text_LeaNotEnoughMons:
	.string "LIZ: Me encanta luchar…,\n"
	.string "pero ni siquiera tienes dos POKéMON…$"

SSTidalRooms_Text_GarretIntro:
	.string "Llegas justo a tiempo, o sea.\p"
	.string "Me estaba aburriendo como una ostra,\n"
	.string "de verdad. ¡Haz algo para entretenerme!$"

SSTidalRooms_Text_GarretDefeat:
	.string "Esto no mola para nada, o sea…$"

SSTidalRooms_Text_GarretPostBattle:
	.string "Le voy a decir a papi que me compre\n"
	.string "un yate que he visto, que es ideal.\l"
	.string "¡Sólo para mí y mis POKéMON!$"

SSTidalRooms_Text_NaomiIntro:
	.string "Oh, qué cosita tan mona que eres…\n"
	.string "¿Quieres tomar leche con galletas?\l"
	.string "¿O prefieres luchar un ratito?$"

SSTidalRooms_Text_NaomiDefeat:
	.string "Ya sabía yo que a ti te va la marcha…$"

SSTidalRooms_Text_NaomiPostBattle:
	.string "Relajarse en un crucero de lujo\n"
	.string "no está nada mal…\p"
	.string "Aunque dar vueltas a HOENN\n"
	.string "en un ferry también tiene su encanto.$"

SSTidalRooms_Text_NotSuspiciousTakeThis:
	.string "Oh… Hola… ¡Yo no estoy haciendo nada\n"
	.string "raro! Esto… ¡Toma esto! ¡Gratis!\p"
	.string "Eh… En serio… ¡Yo no se lo he birlado\n"
	.string "a nadie! ¡Nunca jamás haría algo así!\l"
	.string "¡Puedes usarlo sin problemas!$"

SSTidalRooms_Text_ExplainSnatch:
	.string "ROBO se apodera del movimiento\n"
	.string "del rival para poder usarlo en su lugar.$"

>>>>>>> Egg/spanish
