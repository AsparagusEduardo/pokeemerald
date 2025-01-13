.set LOCALID_ARCHIE, 1
.set LOCALID_MAXIE, 2
.set LOCALID_TABITHA, 3
.set LOCALID_MAGMA_GRUNT_2, 22
.set LOCALID_MAGMA_GRUNT_1, 29


MtChimney_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
	.byte 0

MtChimney_OnTransition:
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
	end

MtChimney_OnResume:
	setstepcallback STEP_CB_ASH
	end

MtChimney_EventScript_Archie::
	lock
	faceplayer
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
	closemessage
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
	release
	end

MtChimney_EventScript_ArchieGoStopTeamMagma::
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
	return

MtChimney_EventScript_ArchieBusyFighting::
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
	return

MtChimney_EventScript_Maxie::
	lockall
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
	waitmovement 0
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
	closemessage
	delay 30
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_MAXIE
	removeobject LOCALID_MAGMA_GRUNT_1
	removeobject LOCALID_TABITHA
	removeobject LOCALID_MAGMA_GRUNT_2
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
	fadescreen FADE_FROM_BLACK
	setobjectxyperm LOCALID_ARCHIE, 10, 12
	addobject LOCALID_ARCHIE
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
	removeobject LOCALID_ARCHIE
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
	releaseall
	end

MtChimney_EventScript_ArchieApproachPlayerEast::
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
	waitmovement 0
	return

MtChimney_EventScript_ArchieApproachPlayerNorth::
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
	waitmovement 0
	return

MtChimney_EventScript_ArchieExitEast::
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
	waitmovement 0
	return

MtChimney_EventScript_ArchieExitNorth::
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
	waitmovement 0
	return

MtChimney_EventScript_LavaCookieLady::
	lock
	faceplayer
	showmoneybox 0, 0
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
	checkmoney 200
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
	checkitemspace ITEM_LAVA_COOKIE
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
	giveitem ITEM_LAVA_COOKIE
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
	hidemoneybox
	release
	end

MtChimney_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

MtChimney_EventScript_RemoveMoney::
	removemoney 200
	updatemoneybox
	return

MtChimney_EventScript_DeclineLavaCookie::
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

MtChimney_EventScript_NotEnoughMoney::
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

MtChimney_Movement_ArchieApproachPlayerEast:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	step_end

MtChimney_Movement_ArchieExitEast:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_ArchieApproachPlayerNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

MtChimney_Movement_ArchieExitNorth:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused2:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused3:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused4:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused5:
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused6:
	delay_16
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused7:
	delay_16
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused8:
	delay_16
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

MtChimney_Movement_Unused9:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused10:
	walk_down
	step_end

MtChimney_Movement_Unused11:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused12:
	delay_16
	delay_16
	walk_in_place_faster_left
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused13:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_left
	delay_16
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused14:
	lock_facing_direction
	walk_fast_left
	unlock_facing_direction
	face_right
	step_end

MtChimney_Movement_Unused15:
	walk_left
	walk_in_place_faster_right
	delay_16
	step_end

MtChimney_EventScript_BusyAquaGrunt1::
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyAquaGrunt2::
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyAquaGrunt3::
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
	end

MtChimney_EventScript_Tabitha::
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_BusyMagmaGrunt1::
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt2::
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt3::
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt4::
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt5::
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt6::
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
	end

MtChimney_EventScript_MagmaPoochyena::
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
	end

MtChimney_EventScript_AquaPoochyena::
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
	end

MtChimney_EventScript_MeteoriteMachine::
	lockall
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
	giveitem ITEM_METEORITE
	setflag FLAG_RECEIVED_METEORITE
	releaseall
	end

MtChimney_EventScript_LeaveMeteoriteAlone::
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
	releaseall
	end

MtChimney_EventScript_MachineOff::
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
	releaseall
	end

MtChimney_EventScript_MachineOn::
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
	releaseall
	end

MtChimney_EventScript_RouteSign::
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
	end

MtChimney_EventScript_Shelby::
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
	release
	end

MtChimney_EventScript_DefeatedShelby::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_SHELBY_1
	release
	end

MtChimney_EventScript_RematchShelby::
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Melissa::
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Sheila::
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Shirley::
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Sawyer::
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
	release
	end

MtChimney_EventScript_SawyerDefeated::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_SAWYER_1
	release
	end

MtChimney_EventScript_SawyerRematch::
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MtChimney/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MtChimney/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MtChimney/text_es.inc"
.else
	.include "data/maps/MtChimney/text.inc"
.endif
.endif
.endif
=======
MtChimney_Text_MeteoriteWillActivateVolcano:
	.string "Ese METEORITO posee un gran poder…\p"
	.string "Si lo amplificamos con esta máquina,\n"
	.string "la actividad volcánica del MONTE CENIZO\l"
	.string "aumentará al instante…\p"
	.string "Su energía inundará el cráter\n"
	.string "y entonces…\l"
	.string "Jua, jua, jua…$"

MtChimney_Text_MaxieIntro:
	.string "MAGNO: ¿Eh?\n"
	.string "¿Quién eres tú?\p"
	.string "Ajá…\n"
	.string "Ya veo…\p"
	.string "He oído a AQUILES quejarse de alguien\n"
	.string "que intentaba tirar por la borda los\l"
	.string "terribles designios del EQUIPO AQUA.\p"
	.string "Seguro que hablaba de ti.\p"
	.string "¡Ja! ¿Y también buscas problemas\n"
	.string "con nosotros, el EQUIPO MAGMA?\p"
	.string "Escúchame bien. Desde siempre,\n"
	.string "los seres vivos han necesitado\l"
	.string "la tierra para vivir. \p"
	.string "¡La tierra lo es todo!\n"
	.string "¡Su importancia es vital!\p"
	.string "Por eso el EQUIPO MAGMA se está\n"
	.string "dedicando a expandir la tierra firme.\p"
	.string "¡Es por el bien de la humanidad\n"
	.string "y de los POKéMON!\p"
	.string "Y por eso necesitamos el poder\n"
	.string "que duerme en esa montaña.\p"
	.string "¡Oh! No debería haberte dicho eso.\n"
	.string "Total, no es asunto tuyo.\p"
	.string "¡Pero no importa! ¡Ahora sufrirás\n"
	.string "las consecuencias de haberte\l"
	.string "entrometido en nuestros planes!$"

MtChimney_Text_MaxieDefeat:
	.string "¡¿Qué?!\p"
	.string "¡¿A mí, al gran MAGNO,\n"
	.string "me han dado una lección?!$"

MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
	.string "MAGNO: Ya basta.\n"
	.string "Esta vez has ganado.\p"
	.string "Pero no pienses que es la última vez\n"
	.string "que oirás hablar del EQUIPO MAGMA.\p"
	.string "Jua, jua, jua…\p"
	.string "El METEORITO no importa. Si logramos\n"
	.string "hacernos con la ESFERA… Jua, jua…$"

MtChimney_Text_TabithaIntro:
	.string "¡Je, je, je!\p"
	.string "¡Así que has llegado hasta aquí!\p"
	.string "¡Pero ya es demasiado tarde!\n"
	.string "¡He entregado el METEORITO\l"
	.string "de la CASCADA METEORO al JEFE!$"

MtChimney_Text_TabithaDefeat:
	.string "Ji, ji, ji…\p"
	.string "Mi derrota es irrelevante. Si el JEFE\n"
	.string "logra despertar a esa cosa…$"

MtChimney_Text_TabithaPostBattle:
	.string "¡JEFE, date prisa!\n"
	.string "¡Transmítele la energía del METEORITO!\p"
	.string "Ji, ji, ji…$"

MtChimney_Text_Grunt2Intro:
	.string "Nosotros, los del EQUIPO MAGMA,\n"
	.string "estamos trabajando mucho en beneficio\l"
	.string "de todos.\p"
	.string "Porque, si hay más tierra,\n"
	.string "habrá más sitios donde vivir.\l"
	.string "¡Todo el mundo será más feliz!$"

MtChimney_Text_Grunt2Defeat:
	.string "¿Eh?\n"
	.string "¿Qué quieres decir con que he perdido?$"

MtChimney_Text_Grunt2PostBattle:
	.string "Nuestro JEFE dice que todo el mundo\n"
	.string "será más feliz…\p"
	.string "¿Pero por qué todo el mundo parece\n"
	.string "llevarnos la contraria?$"

MtChimney_Text_Grunt1Intro:
	.string "¡Si la tierra fuera más vasta, podría\n"
	.string "tener una casona sólo para mí!\p"
	.string "¡La construiré sobre terreno volcánico!$"

MtChimney_Text_Grunt1Defeat:
	.string "Ya me he quedado sin casona…$"

MtChimney_Text_Grunt1PostBattle:
	.string "¡Alguien tan joven como tú\n"
	.string "no tendría que estar aquí!$"

MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
	.string "Esos plastas del EQUIPO AQUA…\n"
	.string "¡Siempre se meten en todo!$"

MtChimney_Text_MeteoritesPackAmazingPower:
	.string "¡Los METEORITOS contienen\n"
	.string "un poder inmenso!$"

MtChimney_Text_YouBetterNotMessWithUs:
	.string "¡Será mejor que no nos\n"
	.string "busques las cosquillas!\p"
	.string "¡Queremos despertar a esa\n"
	.string "cosa en beneficio de todos!$"

MtChimney_Text_AquasNameSimilar:
	.string "¡Somos el EQUIPO MAGMA!\p"
	.string "¡Ellos son el EQUIPO AQUA!\p"
	.string "¡Me fastidia mogollón que\n"
	.string "casi nos copien el nombre!$"

MtChimney_Text_DouseThemInFire:
	.string "¡Eso, eso!\n"
	.string "¡Abrasémoslos!$"

MtChimney_Text_KeepMakingMoreLand:
	.string "¡Seguiremos luchando por expandir\n"
	.string "la tierra firme!$"

MtChimney_Text_Bufoh:
	.string "¡Guaguaguauuuu!$"

MtChimney_Text_ArchieGoStopTeamMagma:
	.string "AQUILES: ¡{PLAYER}, grrrr!\n"
	.string "¡Tendría que haberlo supuesto!\p"
	.string "¡Ya puedes ver hasta dónde llega\n"
	.string "la locura del EQUIPO MAGMA!\p"
	.string "¡Están intentando transmitir el poder\n"
	.string "del METEORITO robado al volcán!\p"
	.string "¡Eso provocará que el volcán\n"
	.string "entre en erupción!$"

MtChimney_Text_ArchieIHaveMyHandsFull:
	.string "AQUILES: Grrr…\p"
	.string "¡Quiero pararle los pies a ese MAGNO,\n"
	.string "pero no puedo!\p"
	.string "¡No si tengo que enfrentarme\n"
	.string "a tres adversarios a la vez!$"

MtChimney_Text_ArchieThankYou:
	.string "AQUILES: ¡{PLAYER}, gracias!\p"
	.string "¡Con tu ayuda hemos echado por tierra\n"
	.string "el destructivo plan del EQUIPO MAGMA!\p"
	.string "Pero tú…\n"
	.string "¿de qué lado estás?\p"
	.string "Bah, no importa.\p"
	.string "No bajaremos la guardia en lo que\n"
	.string "concierne al malvado EQUIPO MAGMA.\p"
	.string "¡Hasta la próxima, {PLAYER}!$"

MtChimney_Text_MagmaOutnumbersUs:
	.string "Vaya… El EQUIPO MAGMA nos supera\n"
	.string "en número. ¡No podemos con ellos!$"

MtChimney_Text_LessHabitatForWaterPokemon:
	.string "Si expanden la tierra, el hábitat de los\n"
	.string "POKéMON de tipo AGUA se reducirá.$"

MtChimney_Text_MagmasNameSimilar:
	.string "¡Somos el EQUIPO AQUA!\p"
	.string "¡Ellos son el EQUIPO MAGMA!\p"
	.string "¡Me fastidia mogollón que\n"
	.string "casi nos copien el nombre!$"

MtChimney_Text_Bushaa:
	.string "¡Guau, guau, guau!$"

MtChimney_Text_LavaCookiesJust200:
	.string "Las GALLETAS LAVA son la especialidad\n"
	.string "del MONTE CENIZO.\p"
	.string "Prueba una. Son sólo 200¥.$"

MtChimney_Text_ThankYouDear:
	.string "¡Muchas gracias!$"

MtChimney_Text_YouveNotGotTheMoney:
	.string "Pero vamos a ver: si no tienes dinero,\n"
	.string "no puedes comprar nada de nada.$"

MtChimney_Text_OhFineThen:
	.string "Bueno. Tú te lo pierdes…$"

MtChimney_Text_MetoriteFittedOnMachine:
	.string "Hay un METEORITO dentro de\n"
	.string "una extraña máquina…\p"
	.string "Parece que la máquina está almacenando\n"
	.string "energía dentro del METEORITO.$"

MtChimney_Text_RemoveTheMeteorite:
	.string "Hay un METEORITO dentro de\n"
	.string "una extraña máquina…\p"
	.string "¿Quieres sacar el METEORITO?$"

MtChimney_Text_PlayerRemovedMeteorite:
	.string "{PLAYER} sacó el METEORITO\n"
	.string "de la extraña máquina.$"

MtChimney_Text_PlayerLeftMeteorite:
	.string "{PLAYER} dejó el METEORITO\n"
	.string "donde estaba.$"

MtChimney_Text_MachineMakesNoResponse:
	.string "Esta extraña máquina…\n"
	.string "No responde…$"

MtChimney_Text_RouteSign:
	.string "{DOWN_ARROW} DESFILADERO\n"
	.string "PUEBLO LAVACALDA MÁS ADELANTE$"

MtChimney_Text_ShelbyIntro:
	.string "He estado en las fuentes termales\n"
	.string "y he descansado mis pobres huesos.\l"
	.string "¡Ahora me siento fuerte como un roble!$"

MtChimney_Text_ShelbyDefeat:
	.string "Vaya, vaya, vaya…\n"
	.string "Tienes un estilo increíble luchando.$"

MtChimney_Text_ShelbyPostBattle:
	.string "Soy una POKéABU con mucha experiencia,\n"
	.string "pero aún me pueden dar una lección…$"

MtChimney_Text_ShelbyRegister:
	.string "Gracias, joven. Me ha hecho ilusión\n"
	.string "enfrentarme a las nuevas generaciones.\p"
	.string "No dudes en venir a verme en alguna\n"
	.string "otra ocasión para combatir de nuevo.$"

MtChimney_Text_ShelbyRematchIntro:
	.string "Si eres capaz de fundir tu corazón\n"
	.string "con los de tus POKéMON, sin duda\l"
	.string "lograrás todo lo que te propongas.$"

MtChimney_Text_ShelbyRematchDefeat:
	.string "Vaya, vaya, vaya…\n"
	.string "Tienes un estilo increíble luchando.$"

MtChimney_Text_ShelbyPostRematch:
	.string "Es posible que tu corazón y los de tus\n"
	.string "POKéMON sean sólo uno.$"

MtChimney_Text_MelissaIntro:
	.string "Estoy la mar de nerviosa. Tengo que\n"
	.string "descargar adrenalina. ¡Vamos a luchar!$"

MtChimney_Text_MelissaDefeat:
	.string "Me he quedado la mar de tranquila…$"

MtChimney_Text_MelissaPostBattle:
	.string "No hay nada como un poco de ejercicio\n"
	.string "para recuperar el buen humor.$"

MtChimney_Text_SheilaIntro:
	.string "Por fin he llegado al MONTE CENIZO.\n"
	.string "¡Y ahora quiero un combate POKéMON!$"

MtChimney_Text_SheilaDefeat:
	.string "Tu manera de luchar…\n"
	.string "¡es como una erupción volcánica!$"

MtChimney_Text_SheilaPostBattle:
	.string "Pues sí, por fin he llegado al MONTE\n"
	.string "CENIZO y no me voy a dedicar\l"
	.string "sólo a hacer visitas…\p"
	.string "También quiero luchar un poquito\n"
	.string "y comprar GALLETAS de recuerdo.$"

MtChimney_Text_ShirleyIntro:
	.string "Desde que fui a los baños termales,\n"
	.string "me siento como nueva.\l"
	.string "¡Seguro que te gano!$"

MtChimney_Text_ShirleyDefeat:
	.string "¡Achís!\n"
	.string "¡Creo que he pillado frío!$"

MtChimney_Text_ShirleyPostBattle:
	.string "Mejor me vuelvo a los baños…\n"
	.string "¿Te apuntas?\p"
	.string "Ya, ya sé que tienes cosas más\n"
	.string "importantes que hacer…$"

MtChimney_Text_SawyerIntro:
	.string "¡Esta montaña está que arde! ¡Está\n"
	.string "llena de gente impetuosa y apasionada!$"

MtChimney_Text_SawyerDefeat:
	.string "¡Me has dejado echando humo!$"

MtChimney_Text_SawyerPostBattle:
	.string "¡Debería ir a los BAÑOS TERMALES\n"
	.string "de LAVACALDA, como hacen todos!$"

MtChimney_Text_SawyerRegister:
	.string "Me gusta la gente entusiasta como tú.\n"
	.string "Te voy a registrar en mi POKéNAV.$"

MtChimney_Text_SawyerRematchIntro:
	.string "¡Hay tanta gente que rebosa energía\n"
	.string "a mi alrededor que no puedo perder!$"

MtChimney_Text_SawyerRematchDefeat:
	.string "¡Se ve que a ti te gusta\n"
	.string "escaldar a la gente!$"

MtChimney_Text_SawyerPostRematch:
	.string "Va a ser que me he abrigado demasiado\n"
	.string "para el calor que hace por aquí.$"

>>>>>>> Egg/spanish
