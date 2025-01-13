FortreeCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_OnWarp
	.byte 0

FortreeCity_Gym_OnTransition:
	special RotatingGate_InitPuzzle
	end

FortreeCity_Gym_OnWarp:
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
	.2byte 0

@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_3
FortreeCity_Gym_EventScript_InitRotatingGates::
	special RotatingGate_InitPuzzleAndGraphics
	end

FortreeCity_Gym_EventScript_Winona::
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_Gym_EventScript_WinonaRematch
	goto_if_unset FLAG_RECEIVED_TM_AERIAL_ACE, FortreeCity_Gym_EventScript_GiveAerialAce2
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_WinonaDefeated::
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_FORTREE_GYM
	setflag FLAG_BADGE06_GET
	setvar VAR_0x8008, 6
	call Common_EventScript_SetGymTrainers
	call FortreeCity_Gym_EventScript_GiveAerialAce
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
	setvar VAR_SCOTT_FORTREE_CALL_STEP_COUNTER, 0
	setflag FLAG_SCOTT_CALL_FORTREE_GYM
	release
	end

FortreeCity_Gym_EventScript_GiveAerialAce2::
	giveitem ITEM_TM_AERIAL_ACE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
	release
	end

FortreeCity_Gym_EventScript_GiveAerialAce::
	giveitem ITEM_TM_AERIAL_ACE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_AERIAL_ACE
	return

FortreeCity_Gym_EventScript_WinonaRematch::
	trainerbattle_rematch_double TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Jared::
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Edwardo::
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Flint::
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Ashley::
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Humberto::
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Darius::
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_GymGuidePostVictory::
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
	goto FortreeCity_Gym_EventScript_GymStatue
	end

FortreeCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
	goto FortreeCity_Gym_EventScript_GymStatue
	end

FortreeCity_Gym_EventScript_GymStatueCertified::
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

FortreeCity_Gym_EventScript_GymStatue::
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/FortreeCity_Gym/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/FortreeCity_Gym/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/FortreeCity_Gym/text_es.inc"
.else
	.include "data/maps/FortreeCity_Gym/text.inc"
.endif
.endif
.endif
=======
FortreeCity_Gym_Text_GymGuideAdvice:
	.string "Eh, ¿cómo lo llevas, {PLAYER}?\n"
	.string "¿Camino del CAMPEONATO?\p"
	.string "ALANA, la LÍDER del GIMNASIO\n"
	.string "de ARBORADA, es una maestra\l"
	.string "de los POKéMON de tipo VOLADOR.\p"
	.string "Ella está al fondo del GIMNASIO,\n"
	.string "tras las puertas giratorias.\p"
	.string "Está esperando a los ENTRENADORES\n"
	.string "que quieren volar a lo más alto.\p"
	.string "Muy bien, ¡adelante!$"

FortreeCity_Gym_Text_GymGuidePostVictory:
	.string "¡Lo has hecho!\n"
	.string "¡Has conseguido despegar!$"

FortreeCity_Gym_Text_JaredIntro:
	.string "¡Observa con qué elegancia lucha\n"
	.string "mi POKéMON PÁJARO!$"

FortreeCity_Gym_Text_JaredDefeat:
	.string "Tú…\n"
	.string "eres muy fuerte…$"

FortreeCity_Gym_Text_JaredPostBattle:
	.string "Un ENTRENADOR ha de ser listo y saber\n"
	.string "reaccionar ante cualquier situación.\p"
	.string "¿Y tú? ¿Tienes el ingenio que hace\n"
	.string "falta para llegar a nuestra LÍDER?$"

FortreeCity_Gym_Text_EdwardoIntro:
	.string "Los amantes de los POKéMON PÁJARO\n"
	.string "desean ser miembros de este GIMNASIO.\p"
	.string "Y, los que somos miembros ya…,\n"
	.string "¡no podemos permitirnos perder!$"

FortreeCity_Gym_Text_EdwardoDefeat:
	.string "Era una carga demasiado pesada\n"
	.string "para mí…$"

FortreeCity_Gym_Text_EdwardoPostBattle:
	.string "El mundo es enorme y hay montones\n"
	.string "de ENTRENADORES muy fuertes.\p"
	.string "Por eso debo seguir entrenando\n"
	.string "y mejorando cada vez más.$"

FortreeCity_Gym_Text_FlintIntro:
	.string "¡ALANA, nuestra LÍDER de GIMNASIO,\n"
	.string "no tiene por qué perder tiempo contigo!\p"
	.string "¡Yo me sobro para vencerte!$"

FortreeCity_Gym_Text_FlintDefeat:
	.string "Qué dirá ALANA…\n"
	.string "¡He perdido!$"

FortreeCity_Gym_Text_FlintPostBattle:
	.string "ALANA es la LÍDER definitiva:\n"
	.string "¡tiene fuerza y carácter!\p"
	.string "Ella no va a dejarse ganar…$"

FortreeCity_Gym_Text_AshleyIntro:
	.string "ALANA me enseñó todo lo que sé,\n"
	.string "no te pienses que será tan fácil…$"

FortreeCity_Gym_Text_AshleyDefeat:
	.string "Me han derrotado…$"

FortreeCity_Gym_Text_AshleyPostBattle:
	.string "La gente de ARBORADA vive mucho\n"
	.string "más tranquila desde que está ALANA.$"

FortreeCity_Gym_Text_HumbertoIntro:
	.string "Cuando ALANA entra en combate,\n"
	.string "su rostro brilla con determinación…\p"
	.string "¡Pero no dejaré que lo veas\n"
	.string "con tus propios ojos!$"

FortreeCity_Gym_Text_HumbertoDefeat:
	.string "¡Argh!\n"
	.string "No he logrado detenerte.$"

FortreeCity_Gym_Text_HumbertoPostBattle:
	.string "¡Será mejor que te andes con cuidado!\n"
	.string "¡No te distraigas frente a ALANA\l"
	.string "o te hará picadillo en un periquete!$"

FortreeCity_Gym_Text_DariusIntro:
	.string "Sabrás que hay muchísimas clases\n"
	.string "de POKéMON de tipo VOLADOR…\p"
	.string "¿O no tenías ni idea?$"

FortreeCity_Gym_Text_DariusDefeat:
	.string "¡Ya veo que te sabes la lección!$"

FortreeCity_Gym_Text_DariusPostBattle:
	.string "No hay duda de que has vencido, pero\n"
	.string "ve con pies de plomo. Los POKéMON\l"
	.string "de nuestra LÍDER ALANA son cosa seria.$"

FortreeCity_Gym_Text_WinonaIntro:
	.string "Soy ALANA, la LÍDER del GIMNASIO\n"
	.string "de ARBORADA.\p"
	.string "He unido fuerzas con los POKéMON\n"
	.string "PÁJARO y alzado el vuelo.\p"
	.string "Por duro que fuera el combate, siempre\n"
	.string "hemos vencido con gracia y donaire.\p"
	.string "¡Ahora verás con qué elegancia te\n"
	.string "derrotan mis POKéMON PÁJARO!$"

FortreeCity_Gym_Text_WinonaDefeat:
	.string "Nunca antes había visto a ningún\n"
	.string "ENTRENADOR capaz de dirigir a sus\l"
	.string "POKéMON con más arte que yo…\p"
	.string "Debo reconocer tamaña proeza como\n"
	.string "se merece. Toma esta MEDALLA.$"

FortreeCity_Gym_Text_ReceivedFeatherBadge:
	.string "{PLAYER} recibió la MEDALLA PLUMA\n"
	.string "de ALANA.$"

FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis:
	.string "Con la MEDALLA PLUMA te obedecerán\n"
	.string "todos los POKéMON hasta el nivel 70,\l"
	.string "incluso los que has intercambiado.\p"
	.string "También podrás usar el movimiento\n"
	.string "de la MO VUELO fuera de los combates.\p"
	.string "Además quiero hacerte un regalo…$"

FortreeCity_Gym_Text_ExplainAerialAce:
	.string "La MT40 contiene GOLPE AÉREO.\p"
	.string "Es velocísimo: ningún POKéMON\n"
	.string "debería ser capaz de evitarlo.\p"
	.string "Absolutamente ninguno…$"

FortreeCity_Gym_Text_RegisteredWinona:
	.string "Acabas de registrar a ALANA,\n"
	.string "la LÍDER de GIMNASIO, en el POKéNAV.$"

FortreeCity_Gym_Text_WinonaPostBattle:
	.string "Aunque he caído ante ti, seguiré\n"
	.string "siendo fiel a mis POKéMON PÁJARO.$"

FortreeCity_Gym_Text_GymStatue:
	.string "GIMNASIO POKéMON de CIUDAD ARBORADA$"

FortreeCity_Gym_Text_GymStatueCertified:
	.string "GIMNASIO POKéMON de CIUDAD ARBORADA\p"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
	.string "{PLAYER}$"

FortreeCity_Gym_Text_WinonaPreRematch:
	.string "ALANA: Los humanos no podemos\n"
	.string "escapar a la fuerza de la gravedad.\p"
	.string "Pero, con mucho trabajo y esfuerzo,\n"
	.string "podemos llegar a lo más alto.\p"
	.string "Has coronado la cumbre y te has\n"
	.string "hecho con el CAMPEONATO.\p"
	.string "¡Estoy deseando ver cómo\n"
	.string "emprendes el vuelo!$"

FortreeCity_Gym_Text_WinonaRematchDefeat:
	.string "Esta nueva victoria te ha dado alas…$"

FortreeCity_Gym_Text_WinonaPostRematch:
	.string "ALANA: Aunque he perdido,\n"
	.string "mi espíritu permanece intacto.\p"
	.string "Sé que puedo alzar el vuelo\n"
	.string "y tocar las nubes.\p"
	.string "¡Y eso haré!$"

FortreeCity_Gym_Text_WinonaRematchNeedTwoMons:
	.string "ALANA: Los humanos no podemos\n"
	.string "escapar a la fuerza de la gravedad.\p"
	.string "Pero, con mucho trabajo y esfuerzo,\n"
	.string "podemos llegar a lo más alto.\p"
	.string "Has coronado la cumbre y te has\n"
	.string "hecho con el CAMPEONATO.\p"
	.string "¡Estoy deseando ver cómo\n"
	.string "emprendes el vuelo!\p"
	.string "Oh, no…\n"
	.string "¿Sólo llevas un POKéMON contigo?\p"
	.string "Vuelve cuando tengas al menos\n"
	.string "dos POKéMON.$"
>>>>>>> Egg/spanish
