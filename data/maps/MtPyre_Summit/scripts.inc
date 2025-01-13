.set LOCALID_ARCHIE, 2
.set LOCALID_OLD_LADY, 3
.set LOCALID_GRUNT_1, 4
.set LOCALID_GRUNT_2, 5
.set LOCALID_GRUNT_3, 6
.set LOCALID_GRUNT_4, 7
.set LOCALID_MAXIE, 8

MtPyre_Summit_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
	.byte 0

MtPyre_Summit_OnTransition:
	call_if_eq VAR_MT_PYRE_STATE, 2, MtPyre_Summit_EventScript_SetArchieMaxiePositions
	end

MtPyre_Summit_EventScript_SetArchieMaxiePositions::
	setobjectxyperm LOCALID_MAXIE, 23, 6
	setobjectxyperm LOCALID_ARCHIE, 22, 6
	end

MtPyre_Summit_EventScript_TeamAquaTrigger0::
	lockall
	setvar VAR_0x8008, 0
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end

MtPyre_Summit_EventScript_TeamAquaTrigger1::
	lockall
	setvar VAR_0x8008, 1
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end

MtPyre_Summit_EventScript_TeamAquaTrigger2::
	lockall
	setvar VAR_0x8008, 2
	goto MtPyre_Summit_EventScript_TeamAquaExits
	end

MtPyre_Summit_EventScript_TeamAquaExits::
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 50
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieFacePlayer0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieFacePlayer1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieFacePlayer2
	msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	removeobject LOCALID_GRUNT_4
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	delay 20
	setvar VAR_MT_PYRE_STATE, 1
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_OldLadyApproachPlayer0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_OldLadyApproachPlayer1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_OldLadyApproachPlayer2
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
	giveitem ITEM_MAGMA_EMBLEM
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
	releaseall
	end

MtPyre_Summit_EventScript_ArchieFacePlayer0::
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
	waitmovement 0
	return

@ Archie is already facing player
MtPyre_Summit_EventScript_ArchieFacePlayer1::
	return

MtPyre_Summit_EventScript_ArchieFacePlayer2::
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
	waitmovement 0
	return

MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer1
	waitmovement 0
	return

MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

MtPyre_Summit_Movement_OldLadyApproachPlayer0:
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_OldLadyApproachPlayer1:
	walk_down
	step_end

MtPyre_Summit_Movement_OldLadyApproachPlayer2:
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_ArchieFacePlayer0:
	walk_left
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_ArchieFacePlayer2:
	walk_right
	walk_in_place_faster_down
	step_end

MtPyre_Summit_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
	release
	end

MtPyre_Summit_EventScript_OldManAfterRayquaza::
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
	release
	end

MtPyre_Summit_EventScript_OldManTale::
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
	return

MtPyre_Summit_EventScript_DeclineOldManTale::
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
	return

MtPyre_Summit_EventScript_OldManNewTale::
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
	return

MtPyre_Summit_EventScript_OldLady::
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
	release
	end

MtPyre_Summit_EventScript_OldLadyOrbsReturned::
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
	release
	end

MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
	release
	end

MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
	release
	end

MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
	lockall
	setvar VAR_0x8008, 0
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end

MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
	lockall
	setvar VAR_0x8008, 1
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end

MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
	lockall
	setvar VAR_0x8008, 2
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
	end

MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 60
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
	playse SE_PIN
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
	waitmovement 0
	delay 30
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
	delay 30
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	removeobject LOCALID_ARCHIE
	removeobject LOCALID_MAXIE
	setvar VAR_MT_PYRE_STATE, 3
	releaseall
	end

MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	return

MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	return

MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachPlayer0::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachPlayer1::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachPlayer2::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachArchie0::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachArchie1::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_EventScript_MaxieApproachArchie2::
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
	waitmovement 0
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

MtPyre_Summit_Movement_PlayerFaceMaxie0:
	delay_16
	delay_16
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_PlayerFaceMaxie:
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_ArchieExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtPyre_Summit_Movement_MaxieExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
	delay_16
	delay_8
	walk_left
	walk_in_place_faster_right
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
	delay_16
	delay_8
	walk_right
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
	delay_16
	delay_8
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_MaxieApproachPlayer0:
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

MtPyre_Summit_Movement_MaxieApproachPlayer1:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_MaxieApproachPlayer2:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

MtPyre_Summit_Movement_ArchieWatchMaxie:
	delay_16
	walk_in_place_faster_up
	step_end

MtPyre_Summit_Movement_PlayerWatchMaxie:
	delay_16
	walk_in_place_faster_down
	step_end

MtPyre_Summit_Movement_MaxieApproachArchie0:
	walk_down
	walk_right
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_MaxieApproachArchie1:
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_Movement_MaxieApproachArchie2:
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

MtPyre_Summit_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_Summit_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_Summit_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_Summit_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MtPyre_Summit/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MtPyre_Summit/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MtPyre_Summit/text_es.inc"
.else
	.include "data/maps/MtPyre_Summit/text.inc"
.endif
.endif
.endif
=======
MtPyre_Summit_Text_Grunt1Intro:
	.string "¡Aaaah! ¡Los niñatos del EQUIPO MAGMA\n"
	.string "se han adelantado!\p"
	.string "¡Hay que ponerse las pilas!$"

MtPyre_Summit_Text_Grunt1Defeat:
	.string "Creía que eras parte del EQUIPO MAGMA\n"
	.string "y que volvías atrás por algo…$"

MtPyre_Summit_Text_Grunt1PostBattle:
	.string "Sí, eres fuerte…,\n"
	.string "¡pero nosotros lo somos más!$"

MtPyre_Summit_Text_Grunt2Intro:
	.string "¡Ja!\n"
	.string "¡Qué mala suerte tienes!\p"
	.string "Si hubieras venido antes, te habría\n"
	.string "tocado luchar contra el EQUIPO MAGMA.\p"
	.string "Pero te ha tocado con nosotros…\n"
	.string "¡y no somos tan enclenques como ellos!$"

MtPyre_Summit_Text_Grunt2Defeat:
	.string "Argh… Lástima que no te tocara\n"
	.string "primero con el EQUIPO MAGMA…$"

MtPyre_Summit_Text_Grunt2PostBattle:
	.string "No tienes ni idea de nada.\n"
	.string "¡Deja de molestarnos!$"

MtPyre_Summit_Text_Grunt3Intro:
	.string "Tú…\n"
	.string "Te hemos visto en el MONTE CENIZO.\p"
	.string "Si no perteneces a ninguno de los dos\n"
	.string "EQUIPOS, ¿qué estás haciendo aquí?$"

MtPyre_Summit_Text_Grunt3Defeat:
	.string "Oye, si quieres fastidiar a alguien,\n"
	.string "mejor que sea al EQUIPO MAGMA…$"

MtPyre_Summit_Text_Grunt3PostBattle:
	.string "¡No importa!\n"
	.string "¡Hemos ganado algo de tiempo!\p"
	.string "El JEFE debe de haberse apoderado\n"
	.string "de lo que andaba buscando.$"

MtPyre_Summit_Text_Grunt4Intro:
	.string "¡Ah, ya sé!\n"
	.string "¡Querías entrar en el EQUIPO\l"
	.string "MAGMA, pero no te dejaron!\p"
	.string "¡Pues no te pienses que te vamos\n"
	.string "a dejar entrar en el EQUIPO AQUA!$"

MtPyre_Summit_Text_Grunt4Defeat:
	.string "Si tanto quieres entrar en el EQUIPO\n"
	.string "AQUA, algo se podría hacer…$"

MtPyre_Summit_Text_Grunt4PostBattle:
	.string "Todos los miembros del EQUIPO\n"
	.string "se compenetran muy bien…$"

MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo:
	.string "AQUILES: MAGNO, del EQUIPO MAGMA, se ha\n"
	.string "adelantado, pero no está todo perdido.\p"
	.string "La ESFERA ROJA del MONTE PÍRICO…\n"
	.string "¡está en nuestras manos!\p"
	.string "Jua, jua, jua… ¡Por fin podemos hacer\n"
	.string "realidad nuestro objetivo final!\p"
	.string "¡Muy bien, EQUIPO!\n"
	.string "¡Retirada!$"

MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
	.string "Oh, no…\n"
	.string "No puede ser verdad…\p"
	.string "Se han llevado tanto la ESFERA AZUL\n"
	.string "como la ESFERA ROJA…\p"
	.string "No se puede separar la una de la otra.\n"
	.string "Las ESFERAS deben permanecer unidas.\p"
	.string "¿Cuál será la intención de esa gente?\n"
	.string "¿Qué querrán hacer con las ESFERAS?\p"
	.string "Uf…\n"
	.string "Ni idea…\p"
	.string "¡Ya sé! Primero vino el EQUIPO MAGMA\n"
	.string "para llevarse la ESFERA AZUL, ¿verdad?\p"
	.string "Pues, con las prisas, debieron\n"
	.string "de olvidarse de esto.\p"
	.string "No puede ser de otra manera.\p"
	.string "En cualquier caso, toma.\n"
	.string "Puede que te resulte útil de algún modo.$"

MtPyre_Summit_Text_OrbsHaveBeenTaken:
	.string "Esos villanos se han llevado la\n"
	.string "ESFERA AZUL y la ESFERA ROJA…\p"
	.string "Y las ESFERAS deben permanecer unidas…\n"
	.string "Me temo que va a suceder algo horrible…$"

MtPyre_Summit_Text_GroudonKyogreAwakened:
	.string "Me estás poniendo los pelos de punta…\p"
	.string "¿Dices que han despertado tanto\n"
	.string "a GROUDON como a KYOGRE?\p"
	.string "Se cuenta que la ESFERA AZUL y\n"
	.string "la ESFERA ROJA sofocaron la ira\l"
	.string "de esos dos POKéMON…\p"
	.string "También se asegura que el auténtico\n"
	.string "dueño de las ESFERAS sigue vivo.\p"
	.string "Sin embargo, nadie sabe a quién\n"
	.string "o a qué pertenecen las ESFERAS.\p"
	.string "Podría ser un humano, o incluso\n"
	.string "un POKéMON. Vete tú a saber…$"

MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
	.string "Los hombres que robaron las ESFERAS\n"
	.string "volvieron para devolverlas.\p"
	.string "Lo que son las cosas…\n"
	.string "Puede que tampoco fueran tan malos…$"

MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
	.string "Nada menos que la personificación\n"
	.string "de la tierra, el mar y el cielo…\p"
	.string "Ésa es la identidad de los POKéMON\n"
	.string "más antiguos…\p"
	.string "Del mismo modo que los humanos\n"
	.string "y los POKéMON estamos vivos,\l"
	.string "nuestro mundo también lo está…\p"
	.string "Es la lección que nos enseñaron\n"
	.string "los POKéMON más antiguos…$"

MtPyre_Summit_Text_WillYouHearOutMyTale:
	.string "El MONTE PÍRICO es donde descansan\n"
	.string "los espíritus de los POKéMON\l"
	.string "que han partido…\p"
	.string "Desde aquí se puede ver todo HOENN.\p"
	.string "Eso debe de ayudar a las almas\n"
	.string "de los POKéMON a encontrar reposo.\p"
	.string "Qué coincidencia que estés aquí…\p"
	.string "¿Quieres oír un cuento muy antiguo\n"
	.string "de la región de HOENN?$"

MtPyre_Summit_Text_GroudonKyogreTale:
	.string "Érase una vez, hace mucho tiempo…,\p"
	.string "el mundo estaba devastado por el feroz\n"
	.string "enfrentamiento entre los POKéMON\l"
	.string "terrestres y los POKéMON marinos…\p"
	.string "Los POKéMON terrestres creaban\n"
	.string "montañas y continentes…\p"
	.string "Los POKéMON marinos creaban\n"
	.string "grandes olas y océanos…\p"
	.string "Su violento duelo parecía eterno…\p"
	.string "El mundo se vio asolado por terribles\n"
	.string "tormentas y colosales incendios.\p"
	.string "La ESFERA ROJA y la ESFERA AZUL\n"
	.string "pusieron fin a esta desgracia.\p"
	.string "La luz que emanó de ambas ESFERAS\n"
	.string "calmó la fiereza de los adversarios.\p"
	.string "Éstos, amansados, se adentraron\n"
	.string "en las profundidades de la tierra\l"
	.string "hasta desaparecer…$"

MtPyre_Summit_Text_WellThatTooIsFine:
	.string "Ah…\n"
	.string "Bueno, pues vale…$"

MtPyre_Summit_Text_MaxieSilence:
	.string "MAGNO: {PLAYER}…\p"
	.string "Esto…\n"
	.string "Verás…$"

MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
	.string "Mi deber es transmitir las leyendas\n"
	.string "de HOENN a las futuras generaciones.\p"
	.string "Y la crisis que acabamos de superar en\n"
	.string "ARRECÍPOLIS ha reescrito la leyenda…\p"
	.string "¿Tienes tiempo para oír\n"
	.string "la nueva leyenda de HOENN?$"

MtPyre_Summit_Text_HoennTrioTale:
	.string "Érase una vez, hace mucho tiempo…,\p"
	.string "el mundo estaba devastado por el feroz\n"
	.string "enfrentamiento entre los POKéMON\l"
	.string "terrestres y los POKéMON marinos…\p"
	.string "Los POKéMON terrestres creaban\n"
	.string "montañas y continentes…\p"
	.string "Los POKéMON marinos creaban\n"
	.string "grandes olas y océanos…\p"
	.string "Su violento duelo parecía eterno…\p"
	.string "El mundo se vio asolado por terribles\n"
	.string "tormentas y colosales incendios.\p"
	.string "Fue entonces cuando los POKéMON\n"
	.string "aéreos bajaron a lomos de una tormenta.\p"
	.string "Estos POKéMON, de un verde intenso,\n"
	.string "calmaron a los enfurecidos POKéMON.\p"
	.string "Hecho esto, los POKéMON verdes\n"
	.string "se perdieron entre las nubes…$"

>>>>>>> Egg/spanish
