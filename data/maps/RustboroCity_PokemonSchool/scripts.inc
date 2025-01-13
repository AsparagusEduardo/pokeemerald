RustboroCity_PokemonSchool_MapScripts::
	.byte 0

RustboroCity_PokemonSchool_EventScript_Blackboard::
	lockall
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
	waitmessage
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
	switch VAR_RESULT
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	end

RustboroCity_PokemonSchool_EventScript_Poison::
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Paralysis::
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Sleep::
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Burn::
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Freeze::
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
	releaseall
	end

RustboroCity_PokemonSchool_EventScript_GameboyKid1::
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_GameboyKid2::
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_RichBoy::
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_Lass::
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_SchoolKidM::
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_StudentNotebook::
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
	end

RustboroCity_PokemonSchool_EventScript_Teacher::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
	giveitem ITEM_QUICK_CLAW
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	setflag FLAG_RECEIVED_QUICK_CLAW
	release
	end

RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	release
	end

RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
	walk_left
	walk_down
	walk_down
	walk_right
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_right
	step_end

RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_right
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

RustboroCity_PokemonSchool_EventScript_Scott::
	lock
	faceplayer
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_RUSTBORO
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
	end

RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
	end

RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/RustboroCity_PokemonSchool/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/RustboroCity_PokemonSchool/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/RustboroCity_PokemonSchool/text_es.inc"
.else
	.include "data/maps/RustboroCity_PokemonSchool/text.inc"
.endif
.endif
.endif
=======
RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
	.string "En la pizarra hay notas sobre los\n"
	.string "cambios de estado que pueden afectar\l"
	.string "a los POKéMON durante un combate.$"

RustboroCity_PokemonSchool_Text_ReadWhichTopic:
	.string "¿Sobre qué tema te gustaría leer?$"

RustboroCity_PokemonSchool_Text_ExplainPoison:
	.string "Si un POKéMON está envenenado,\n"
	.string "irá perdiendo PS continuamente.\p"
	.string "Los efectos del veneno se dejan sentir\n"
	.string "incluso después del combate.\p"
	.string "Los PS de un POKéMON envenenado\n"
	.string "disminuirán mientras viaja.\p"
	.string "Para curar un caso de envenenamiento,\n"
	.string "usa un ANTÍDOTO.$"

RustboroCity_PokemonSchool_Text_ExplainParalysis:
	.string "Si un POKéMON está paralizado,\n"
	.string "su VELOCIDAD cae en picado.\p"
	.string "Es posible que incluso quede\n"
	.string "inmovilizado durante el combate.\p"
	.string "La parálisis permanece después del\n"
	.string "combate. Usa ANTIPARALIZACIÓN.$"

RustboroCity_PokemonSchool_Text_ExplainSleep:
	.string "Si un POKéMON se duerme, no podrá\n"
	.string "atacar a su rival.\p"
	.string "Un POKéMON puede despertarse por\n"
	.string "sí solo, pero, si el combate finaliza\l"
	.string "mientras está dormido, seguirá así.\p"
	.string "Despiértalo usando DESPERTAR.$"

RustboroCity_PokemonSchool_Text_ExplainBurn:
	.string "Una quemadura reduce el poder\n"
	.string "de ATAQUE y los PS de la víctima.\p"
	.string "Sus efectos continúan tras el\n"
	.string "combate. Usa ANTIQUEMAR.$"

RustboroCity_PokemonSchool_Text_ExplainFreeze:
	.string "Si un POKéMON está congelado,\n"
	.string "queda completamente indefenso.\p"
	.string "Continuará congelado tras el combate.\n"
	.string "Descongélalo usando ANTIHIELO.$"

RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
	.string "Cuando un alumno no estudia nada,\n"
	.string "le doy jarabe de GARRA RÁPIDA.\p"
	.string "Tu aplicación en el estudio se verá por\n"
	.string "la manera en que uses este objeto.$"

RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
	.string "Un POKéMON que tiene GARRA RÁPIDA\n"
	.string "a veces ganará velocidad y se moverá\l"
	.string "antes que su rival.\p"
	.string "Hay muchos otros objetos que\n"
	.string "se pueden dar a los POKéMON.\p"
	.string "Sólo eso da para estudiar un montón.$"

RustboroCity_PokemonSchool_Text_TradingRightNow:
	.string "Voy a intercambiar un POKéMON\n"
	.string "con mi amigo ahora mismo.$"

RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
	.string "Siempre he querido un SEEDOT\n"
	.string "y por fin voy a conseguir uno.$"

RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
	.string "Los POKéMON pueden llevar objetos,\n"
	.string "pero no saben qué hacer con las\l"
	.string "POCIONES y los ANTÍDOTOS, por ejemplo.$"

RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
	.string "¿Sabes que algunos movimientos\n"
	.string "pueden confundir a un POKéMON?\p"
	.string "Un POKéMON confuso puede hacerse\n"
	.string "daño a sí mismo sin querer.\p"
	.string "Pero cuando acaba el combate,\n"
	.string "se pasa el efecto.$"

RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
	.string "Un POKéMON que tiene una BAYA\n"
	.string "puede curarse a sí mismo.\p"
	.string "Hay muchos tipos de objeto que\n"
	.string "se pueden dar a los POKéMON.\p"
	.string "Uf, qué cansado es coger apuntes…$"

RustboroCity_PokemonSchool_Text_StudentsNotes:
	.string "Es un cuaderno de un alumno…\p"
	.string "Se atrapa a los POKéMON usando\n"
	.string "las POKé BALLS.\p"
	.string "Un ENTRENADOR puede llevar hasta\n"
	.string "seis POKéMON consigo.\p"
	.string "Un ENTRENADOR es alguien que atrapa\n"
	.string "a los POKéMON, los entrena y lucha\l"
	.string "con ellos.\p"
	.string "La misión de un ENTRENADOR es derrotar\n"
	.string "a los ENTRENADORES fuertes que están\l"
	.string "en los GIMNASIOS POKéMON.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
	.string "Hola, ¿nos conocemos?\n"
	.string "Quizás de CIUDAD PETALIA…\p"
	.string "Permíteme presentarme:\n"
	.string "me llamo TRETO.\p"
	.string "He estado viajando por el mundo en\n"
	.string "busca de grandes ENTRENADORES.\p"
	.string "O más bien estoy buscando expertos\n"
	.string "en los combates POKéMON.\p"
	.string "Así que, ¿qué te trae por esta ESCUELA?\n"
	.string "¿Tú también entrenas POKéMON?\p"
	.string "Lo primero que tendrías que enseñar\n"
	.string "a un POKéMON es el movimiento CORTE.\p"
	.string "Si no recuerdo mal, alguien de por\n"
	.string "aquí tiene el movimiento CORTE.$"

RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
	.string "TRETO: Mmm…\p"
	.string "Desconocemos el talento real de\n"
	.string "nuestros estudiantes, pero lo que\l"
	.string "está claro es que tienen potencial.$"

RustboroCity_PokemonSchool_Text_ScottStoneBadge:
	.string "TRETO: Eh, ¿qué es eso?\p"
	.string "Una MEDALLA PIEDRA, ¿verdad?\n"
	.string "Estoy impresionado, la verdad.\p"
	.string "Pero de todas formas me hubiera\n"
	.string "gustado verte en acción.\p"
	.string "Las MEDALLAS no bastan para saber\n"
	.string "qué tipo de ENTRENADOR se es.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
	.string "Hola, ¿nos conocemos?\n"
	.string "Quizás de CIUDAD PETALIA…\p"
	.string "Permíteme presentarme:\n"
	.string "me llamo TRETO.\p"
	.string "He estado viajando por el mundo en\n"
	.string "busca de grandes ENTRENADORES.\p"
	.string "O más bien estoy buscando expertos\n"
	.string "en los combates con POKéMON.\p"
	.string "Anda, ¿eso qué es?\n"
	.string "Una MEDALLA PIEDRA, ¿verdad?\p"
	.string "Y eso que no tienes mucha experiencia.\n"
	.string "Estoy impresionado, la verdad.\p"
	.string "Pero de todas formas me hubiera\n"
	.string "gustado verte en acción.\p"
	.string "Las MEDALLAS no bastan para saber\n"
	.string "qué tipo de ENTRENADOR se es.$"

>>>>>>> Egg/spanish
