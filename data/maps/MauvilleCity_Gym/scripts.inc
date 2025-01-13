MauvilleCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
	.byte 0

MauvilleCity_Gym_OnLoad:
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_DeactivatePuzzle
	switch VAR_MAUVILLE_GYM_STATE
	case 0, MauvilleCity_Gym_EventScript_UpdateBarriers
	case 1, MauvilleCity_Gym_EventScript_Switch1Pressed
	case 2, MauvilleCity_Gym_EventScript_Switch2Pressed
	case 3, MauvilleCity_Gym_EventScript_Switch3Pressed
	case 4, MauvilleCity_Gym_EventScript_Switch4Pressed
	end

MauvilleCity_Gym_EventScript_UpdateBarriers::
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
	end

MauvilleCity_Gym_EventScript_SetAltBarriers::
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
	end

MauvilleCity_Gym_EventScript_Switch1Pressed::
	setvar VAR_0x8004, 0
	special MauvilleGymPressSwitch
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
	end

MauvilleCity_Gym_EventScript_Switch2Pressed::
	setvar VAR_0x8004, 1
	special MauvilleGymPressSwitch
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
	end

MauvilleCity_Gym_EventScript_Switch3Pressed::
	setvar VAR_0x8004, 2
	special MauvilleGymPressSwitch
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
	end

MauvilleCity_Gym_EventScript_Switch4Pressed::
	setvar VAR_0x8004, 3
	special MauvilleGymPressSwitch
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
	end

MauvilleCity_Gym_EventScript_DeactivatePuzzle::
	special MauvilleGymDeactivatePuzzle
	end

MauvilleCity_Gym_EventScript_Wattson::
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
	goto_if_unset FLAG_RECEIVED_TM_SHOCK_WAVE, MauvilleCity_Gym_EventScript_GiveShockWave2
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_WattsonDefeated::
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	setflag FLAG_DEFEATED_MAUVILLE_GYM
	setflag FLAG_BADGE03_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	setvar VAR_0x8008, 3
	call Common_EventScript_SetGymTrainers
	special MauvilleGymDeactivatePuzzle
	special DrawWholeMapView
	playse SE_UNLOCK
	call MauvilleCity_Gym_EventScript_GiveShockWave
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
	release
	end

MauvilleCity_Gym_EventScript_GiveShockWave2::
	giveitem ITEM_TM_SHOCK_WAVE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
	release
	end

MauvilleCity_Gym_EventScript_GiveShockWave::
	giveitem ITEM_TM_SHOCK_WAVE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
	return

MauvilleCity_Gym_EventScript_CompletedNewMauville::
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_WattsonRematch::
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Switch1::
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 1
	setvar VAR_0x8004, 0
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
	end

MauvilleCity_Gym_EventScript_Switch2::
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 2
	setvar VAR_0x8004, 1
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
	end

MauvilleCity_Gym_EventScript_Switch3::
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 3
	setvar VAR_0x8004, 2
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
	end

MauvilleCity_Gym_EventScript_Switch4::
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 4
	setvar VAR_0x8004, 3
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
	end

MauvilleCity_Gym_EventScript_PressFloorSwitch::
	special MauvilleGymSetDefaultBarriers
	special MauvilleGymPressSwitch
	special DrawWholeMapView
	playse SE_UNLOCK
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
	releaseall
	end

MauvilleCity_Gym_EventScript_SwitchDoNothing::
	releaseall
	end

MauvilleCity_Gym_EventScript_SetBarriersAltState::
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	releaseall
	end

MauvilleCity_Gym_EventScript_ClearBarriersAltState::
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	releaseall
	end

MauvilleCity_Gym_EventScript_Kirk::
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Shawn::
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Ben::
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Vivian::
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Angelo::
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_GymGuidePostVictory::
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
	goto MauvilleCity_Gym_EventScript_GymStatue
	end

MauvilleCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
	goto MauvilleCity_Gym_EventScript_GymStatue
	end

MauvilleCity_Gym_EventScript_GymStatueCertified::
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

MauvilleCity_Gym_EventScript_GymStatue::
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MauvilleCity_Gym/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MauvilleCity_Gym/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MauvilleCity_Gym/text_es.inc"
.else
	.include "data/maps/MauvilleCity_Gym/text.inc"
.endif
.endif
.endif
=======
MauvilleCity_Gym_Text_GymGuideAdvice:
	.string "Eh, ¿cómo lo llevas, {PLAYER}?\n"
	.string "¿Camino del CAMPEONATO?\p"
	.string "ERICO, el LÍDER del GIMNASIO\n"
	.string "de MALVALONA, usa POKéMON\l"
	.string "de tipo ELÉCTRICO.\p"
	.string "¡Si le desafías con POKéMON\n"
	.string "de tipo AGUA, te fulminará!\p"
	.string "¡Y además ha puesto por todo\n"
	.string "el GIMNASIO puertas controladas\l"
	.string "por interruptores! Mira que es rarito…\p"
	.string "Bueno, ¡ve a por él!$"

MauvilleCity_Gym_Text_GymGuidePostVictory:
	.string "¡Guau, tú sí que tienes chispa!\n"
	.string "¡No hay circuito que se te resista!$"

MauvilleCity_Gym_Text_KirkIntro:
	.string "Tengo una personalidad tan\n"
	.string "electrificante que te voy a\l"
	.string "chamuscar. ¡Jua, jua, jua!$"

MauvilleCity_Gym_Text_KirkDefeat:
	.string "Nunca había visto una actuación\n"
	.string "tan subida de voltios, oye.\l"
	.string "¡Me has puesto los pelos de punta!$"

MauvilleCity_Gym_Text_KirkPostBattle:
	.string "Los POKéMON son como el rock:\n"
	.string "¡tienes que poner el corazón!$"

MauvilleCity_Gym_Text_ShawnIntro:
	.string "¡Yo rocanroleo mejor que nadie!\n"
	.string "¡No puedo perder!$"

MauvilleCity_Gym_Text_ShawnDefeat:
	.string "Me has desenchufado…$"

MauvilleCity_Gym_Text_ShawnPostBattle:
	.string "Nuestro LÍDER de GIMNASIO, ERICO,\n"
	.string "está aquí desde hace siglos.\p"
	.string "Cuando empezó a combatir, tu padre\n"
	.string "aún no había nacido, imagínate.$"

MauvilleCity_Gym_Text_BenIntro:
	.string "Este GIMNASIO está lleno\n"
	.string "de trampas. ¿A que mola?$"

MauvilleCity_Gym_Text_BenDefeat:
	.string "Soy muy mal perdedor…$"

MauvilleCity_Gym_Text_BenPostBattle:
	.string "ERICO dice que le encanta poner\n"
	.string "trampas con interruptores.$"

MauvilleCity_Gym_Text_VivianIntro:
	.string "¡Con mi energía y mis POKéMON,\n"
	.string "te voy a desintegrar!$"

MauvilleCity_Gym_Text_VivianDefeat:
	.string "¡Tu potencia me ha dejado\n"
	.string "cortocircuitada!$"

MauvilleCity_Gym_Text_VivianPostBattle:
	.string "Dicen que ERICO fundó MALVALONA.\p"
	.string "Era ENTRENADOR ya mucho antes\n"
	.string "de que nosotros llegáramos a serlo.\l"
	.string "¡Tiene que saberse todos los trucos!$"

MauvilleCity_Gym_Text_AngeloIntro:
	.string "¡Me encanta todo lo que brilla!$"

MauvilleCity_Gym_Text_AngeloDefeat:
	.string "Oh…\n"
	.string "Me has deslumbrado…$"

MauvilleCity_Gym_Text_AngeloPostBattle:
	.string "A ERICO, del GIMNASIO de MALVALONA,\n"
	.string "le brilla la frente un montón. ¡Es genial!$"

MauvilleCity_Gym_Text_WattsonIntro:
	.string "He abandonado mis planes de\n"
	.string "remodelación urbanística…\p"
	.string "Y me he dedicado a instalar trampas\n"
	.string "eléctricas en mi GIMNASIO.\p"
	.string "Y tú ¿qué haces aquí?\p"
	.string "¿Cómo? ¿Que has conseguido burlar\n"
	.string "todas las puertas amañadas?\p"
	.string "¡Jua, jua, jua!\n"
	.string "¡Tienes madera!\p"
	.string "¡Pues ahora yo, ERICO, LÍDER\n"
	.string "del GIMNASIO de MALVALONA,\l"
	.string "te voy a dar una buena descarga!$"

MauvilleCity_Gym_Text_WattsonDefeat:
	.string "¡Jua, jua, jua!\n"
	.string "¡Vale, he perdido!\p"
	.string "Ha sido un combate emocionante.\n"
	.string "¡Toma esta MEDALLA!$"

MauvilleCity_Gym_Text_ReceivedDynamoBadge:
	.string "{PLAYER} recibió la MEDALLA DINAMO\n"
	.string "de ERICO.$"

MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
	.string "La MEDALLA DINAMO te permite usar\n"
	.string "GOLPE ROCA fuera de los combates.\p"
	.string "Además, hará que tus POKéMON\n"
	.string "sean un poco más rápidos.\p"
	.string "Mmmm…\n"
	.string "Toma esto también.$"

MauvilleCity_Gym_Text_ExplainShockWave:
	.string "Es la MT34, contiene ONDA VOLTIO.\p"
	.string "Se trata de un gran movimiento\n"
	.string "que nunca falla. ¡Nunca jamás!\p"
	.string "Digo…$"

MauvilleCity_Gym_Text_RegisteredWattson:
	.string "Acabas de registrar a ERICO,\n"
	.string "el LÍDER de GIMNASIO, en el POKéNAV.$"

MauvilleCity_Gym_Text_WattsonPostBattle:
	.string "¡Ver a una joven promesa como tú\n"
	.string "me llena de confianza en el futuro!$"

MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
	.string "¡Jua, jua, jua!\n"
	.string "¡Sigue trabajando así!$"

MauvilleCity_Gym_Text_GymStatue:
	.string "GIMNASIO POKéMON de CIUDAD MALVALONA$"

MauvilleCity_Gym_Text_GymStatueCertified:
	.string "GIMNASIO POKéMON de CIUDAD MALVALONA\p"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
	.string "{PLAYER}$"

MauvilleCity_Gym_Text_WattsonPreRematch:
	.string "ERICO: ¡Ajajá! ¡Por fin!\n"
	.string "Yo sé lo que tú quieres…\l"
	.string "¡Quieres luchar contra mis POKéMON!\p"
	.string "¡Jua, jua, jua, jua!\p"
	.string "¡Van a saltar chispas!\n"
	.string "¡Te lo advierto!$"

MauvilleCity_Gym_Text_WattsonRematchDefeat:
	.string "Uf…\n"
	.string "Me he quedado sin pilas…$"

MauvilleCity_Gym_Text_WattsonPostRematch:
	.string "ERICO: Habrá que recargar pilas…\p"
	.string "Pero, una vez que estemos a tope\n"
	.string "de energía, será un placer volver\l"
	.string "a medir fuerzas contigo.\p"
	.string "Así que vuelve por aquí un día\n"
	.string "de éstos, ¿vale?$"

MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
	.string "ERICO: ¡Ajajá! ¡Por fin!\n"
	.string "Yo sé lo que tú quieres…\l"
	.string "¡Quieres luchar contra mis POKéMON!\p"
	.string "¡Jua, jua, jua, jua!\p"
	.string "Huy, un momento…\n"
	.string "¡Si sólo tienes un POKéMON!\p"
	.string "Vuelve cuando tengas dos\n"
	.string "POKéMON por lo menos, ¿vale?$"

>>>>>>> Egg/spanish
