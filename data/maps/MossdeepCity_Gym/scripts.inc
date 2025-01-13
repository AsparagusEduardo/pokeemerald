MossdeepCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_Gym_OnLoad
	.byte 0

@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below

@ All the below checks are leftover from RS. FLAG_MOSSDEEP_GYM_SWITCH_X is never set
MossdeepCity_Gym_OnLoad:
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_SetSwitch1Metatiles
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
	end

MossdeepCity_Gym_EventScript_CheckSwitch2::
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_SetSwitch2Metatiles
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
	end

MossdeepCity_Gym_EventScript_CheckSwitch3::
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_SetSwitch3Metatiles
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
	end

MossdeepCity_Gym_EventScript_CheckSwitch4::
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_SetSwitch4Metatiles
	end

@ All the below set metatile scripts are leftover from RS and are functionally unused
MossdeepCity_Gym_EventScript_SetSwitch1Metatiles::
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
	end

MossdeepCity_Gym_EventScript_SetSwitch2Metatiles::
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
	end

MossdeepCity_Gym_EventScript_SetSwitch3Metatiles::
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
	end

MossdeepCity_Gym_EventScript_SetSwitch4Metatiles::
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
	end

MossdeepCity_Gym_EventScript_TateAndLiza::
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_Gym_EventScript_TateAndLizaRematch
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, MossdeepCity_Gym_EventScript_GiveCalmMind2
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
	message MossdeepCity_Gym_Text_ReceivedMindBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
	setflag FLAG_BADGE07_GET
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
	clearflag FLAG_UNKNOWN_0x393
	setvar VAR_0x8008, 7
	call Common_EventScript_SetGymTrainers
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
	setvar VAR_MOSSDEEP_CITY_STATE, 1
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
	call MossdeepCity_Gym_EventScript_GiveCalmMind
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
	release
	end

MossdeepCity_Gym_EventScript_GiveCalmMind2::
	giveitem ITEM_TM_CALM_MIND
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_CALM_MIND
	release
	end

MossdeepCity_Gym_EventScript_GiveCalmMind::
	giveitem ITEM_TM_CALM_MIND
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_CALM_MIND
	return

MossdeepCity_Gym_EventScript_TateAndLizaRematch::
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
	end

@ All the below switch scripts are leftover from RS and are functionally unused
MossdeepCity_Gym_EventScript_Switch1::
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
	special DrawWholeMapView
	playse SE_CLICK
	releaseall
	end

MossdeepCity_Gym_EventScript_ClearSwitch1::
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch2::
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_ClearSwitch2::
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch3::
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_ClearSwitch3::
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch4::
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_ClearSwitch4::
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_WarpToEntrance::
	lockall
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
	waitstate
	releaseall
	end

MossdeepCity_Gym_EventScript_Preston::
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Virgil::
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Blake::
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Hannah::
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Samantha::
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Maura::
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Sylvia::
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nate::
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Macey::
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Clifford::
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nicholas::
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Kathleen::
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_GymGuidePostVictory::
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

@ Leftover from RS, functionally unused
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
	delay_16
	delay_16
	step_end

MossdeepCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
	goto MossdeepCity_Gym_EventScript_GymStatue
	end

MossdeepCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
	goto MossdeepCity_Gym_EventScript_GymStatue
	end

MossdeepCity_Gym_EventScript_GymStatueCertified::
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_EventScript_GymStatue::
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_EventScript_YellowFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 0
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_BlueFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 1
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_GreenFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 2
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 3
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_RedFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 4
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MossdeepCity_Gym/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MossdeepCity_Gym/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MossdeepCity_Gym/text_es.inc"
.else
	.include "data/maps/MossdeepCity_Gym/text.inc"
.endif
.endif
.endif
=======
MossdeepCity_Gym_Text_GymGuideAdvice:
	.string "Eh, ¿cómo lo llevas, {PLAYER}?\n"
	.string "¿Camino del CAMPEONATO?\p"
	.string "Los LÍDERES de este GIMNASIO usan\n"
	.string "POKéMON de tipo PSÍQUICO.\p"
	.string "Si les atacas con POKéMON de los tipos\n"
	.string "LUCHA o VENENO, te destrozarán.\p"
	.string "Además, van a combatirte con ataques\n"
	.string "combinados realmente increíbles.\p"
	.string "Si quieres ganar, tendrás que mostrar\n"
	.string "que estás muy unido a tus POKéMON.\l"
	.string "¡Adelante!$"

MossdeepCity_Gym_Text_GymGuidePostVictory:
	.string "¡Guau, eres sorprendente!\n"
	.string "¡Tú sabes cómo luchar!$"

MossdeepCity_Gym_Text_PrestonIntro:
	.string "El resultado del combate depende de tu\n"
	.string "fuerza de voluntad. ¡Nunca te rindas!$"

MossdeepCity_Gym_Text_PrestonDefeat:
	.string "¡Mi fuerza de voluntad ha flaqueado!\n"
	.string "¡Y yo he perdido!$"

MossdeepCity_Gym_Text_PrestonPostBattle:
	.string "Los indecisos siempre pierden.\n"
	.string "Tenlo en cuenta.$"

MossdeepCity_Gym_Text_VirgilIntro:
	.string "¡Demuéstrame lo que vales!$"

MossdeepCity_Gym_Text_VirgilDefeat:
	.string "¡Tú sí que vales!$"

MossdeepCity_Gym_Text_VirgilPostBattle:
	.string "Las maravillas humanas de este mundo\n"
	.string "son los LÍDERES de GIMNASIO.\p"
	.string "Pero es posible que puedas demostrar\n"
	.string "que vales incluso más que ellos…$"

MossdeepCity_Gym_Text_BlakeIntro:
	.string "Ommmmm… Mira cómo hago levitar\n"
	.string "una POKé BALL por telequinesia.\p"
	.string "Huy, huy, huy…\n"
	.string "¡Aaaaaaaaah!\p"
	.string "Ejem… A veces no controlo muy\n"
	.string "bien mis poderes, je, je, je.$"

MossdeepCity_Gym_Text_BlakeDefeat:
	.string "¡Vaya, mi POKéMON tampoco controla\n"
	.string "muy bien sus habilidades de combate!$"

MossdeepCity_Gym_Text_BlakePostBattle:
	.string "La POKé BALL de antes pesaba mucho,\n"
	.string "¡pero ya verás con esta pelusa!\p"
	.string "Ommmmm… \p"
	.string "¡Que no! ¡Que no he hecho trampa!\n"
	.string "¡No he soplado, de verdad! Je, je, je.$"

MossdeepCity_Gym_Text_HannahIntro:
	.string "Cuando pierdas contra mí, no te\n"
	.string "deprimas demasiado…\p"
	.string "No es que seas débil, ¡es que YO\n"
	.string "soy superfuerte!$"

MossdeepCity_Gym_Text_HannahDefeat:
	.string "Ejem… TÚ eres superfuerte…$"

MossdeepCity_Gym_Text_HannahPostBattle:
	.string "Pero no pienso deprimirme por esta\n"
	.string "derrota, voy a entrenarme más.\p"
	.string "¡Hay que pensar de forma positiva! \n"
	.string "¡Y a mí eso se me da requetebién!$"

MossdeepCity_Gym_Text_SamanthaIntro:
	.string "Puedo verlo…\n"
	.string "Puedo verlo claro como el agua…\p"
	.string "¿Quién vencerá en este combate?\n"
	.string "¡No pienso decírtelo!$"

MossdeepCity_Gym_Text_SamanthaDefeat:
	.string "¡Esto no estaba previsto!$"

MossdeepCity_Gym_Text_SamanthaPostBattle:
	.string "Puedo ver que librarás un terrible\n"
	.string "combate con nuestros LÍDERES…\p"
	.string "Y ganará…\n"
	.string "¡No pienso decírtelo!$"

MossdeepCity_Gym_Text_MauraIntro:
	.string "Has viajado mucho y has vivido\n"
	.string "todo tipo de experiencias…\p"
	.string "¡Enséñame ahora qué es lo que\n"
	.string "has aprendido!$"

MossdeepCity_Gym_Text_MauraDefeat:
	.string "¡Has viajado por el camino\n"
	.string "de los grandes!$"

MossdeepCity_Gym_Text_MauraPostBattle:
	.string "A aquellos que trabajan duro\n"
	.string "les aguarda un futuro brillante.\p"
	.string "A aquellos que gandulean sólo\n"
	.string "les esperan bastantes palos…\p"
	.string "¡Siempre se recoge lo que se siembra!$"

MossdeepCity_Gym_Text_SylviaIntro:
	.string "¡Pienso ganar este combate\n"
	.string "cueste lo que cueste!$"

MossdeepCity_Gym_Text_SylviaDefeat:
	.string "Tu forma de luchar…\n"
	.string "es aterradora…$"

MossdeepCity_Gym_Text_SylviaPostBattle:
	.string "¿Cómo osas derrotarme?\p"
	.string "No será culpa mía si te ocurre\n"
	.string "algo malo muy pronto…$"

MossdeepCity_Gym_Text_NateIntro:
	.string "Jo, jo, jo…\p"
	.string "Será un placer mostrarte lo tenaz\n"
	.string "que puede ser el tipo PSÍQUICO.$"

MossdeepCity_Gym_Text_NateDefeat:
	.string "¡Fantástico! ¡Excepcional!\n"
	.string "¡Qué estilo de lucha tan magnífico!$"

MossdeepCity_Gym_Text_NatePostBattle:
	.string "Yo… nunca me dejo achantar por\n"
	.string "la derrota…, aunque sea apabullante.$"

MossdeepCity_Gym_Text_KathleenIntro:
	.string "¡Prepárate para pasar más miedo\n"
	.string "que en toda tu vida!$"

MossdeepCity_Gym_Text_KathleenDefeat:
	.string "¡Noooo!$"

MossdeepCity_Gym_Text_KathleenPostBattle:
	.string "¡Me has dejado temblando!\n"
	.string "¡Aléjate de mí!$"

MossdeepCity_Gym_Text_CliffordIntro:
	.string "Puede que ya no sea un pimpollo,\n"
	.string "pero aún tengo cuerda para rato.$"

MossdeepCity_Gym_Text_CliffordDefeat:
	.string "¡Ah, esta juventud!\n"
	.string "¡Siempre avasallando!$"

MossdeepCity_Gym_Text_CliffordPostBattle:
	.string "Me temo que me he dejado arrollar\n"
	.string "por tu imperiosa juventud.$"

MossdeepCity_Gym_Text_MaceyIntro:
	.string "¡No pasarás!\n"
	.string "¡No, si puedo impedirlo!$"

MossdeepCity_Gym_Text_MaceyDefeat:
	.string "¿A quién quieres impresionar\n"
	.string "con esa demostración de fuerza?$"

MossdeepCity_Gym_Text_MaceyPostBattle:
	.string "¡Bah! ¡Serás fuerte, pero no tienes\n"
	.string "cualidades para el tipo PSÍQUICO!\p"
	.string "¡Tu manera de luchar es brutal!$"

MossdeepCity_Gym_Text_NicholasIntro:
	.string "¡Grrrrr! ¡Vas a probar mi jarabe\n"
	.string "de POKéMON! ¡Prepárate!$"

MossdeepCity_Gym_Text_NicholasDefeat:
	.string "¡Ah!\n"
	.string "¡Se acabó lo que se daba!$"

MossdeepCity_Gym_Text_NicholasPostBattle:
	.string "La próxima vez ya verás…\n"
	.string "¡Te daré jarabe de POKéMON del bueno!$"

MossdeepCity_Gym_Text_TateAndLizaIntro:
	.string "VITO: Je, je, je, ¿no lo esperabas?\p"
	.string "LETI: Ji, ji, ji, ¿no lo esperabas?\p"
	.string "VITO: ¡Somos dos LÍDERES de GIMNASIO!\n"
	.string "LETI: ¡Somos dos LÍDERES de GIMNASIO!\p"
	.string "VITO: ¡Somos mellizos!\n"
	.string "LETI: ¡Somos mellizos!\p"
	.string "VITO: No necesitamos hablar porque…\n"
	.string "LETI: los dos siempre sabemos lo que…\p"
	.string "VITO: el otro piensa.\n"
	.string "LETI: ¡Es telepatía!\p"
	.string "VITO: Los dos juntos…\n"
	.string "LETI: ¡somos invencibles!$"

MossdeepCity_Gym_Text_TateAndLizaDefeat:
	.string "VITO: ¡¿Pe-pero…?! Los dos juntos…\n"
	.string "LETI: ¡nos hemos dejado derrotar!\p"
	.string "VITO: La vida es así. Has ganado…\n"
	.string "LETI: Y también te has ganado esto…$"

MossdeepCity_Gym_Text_ReceivedMindBadge:
	.string "{PLAYER} recibió la MEDALLA MENTE\n"
	.string "de LETI y VITO.$"

MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
	.string "VITO: La MEDALLA MENTE mejora el\n"
	.string "AT. ESP. y la DEF. ESP. de los POKéMON.\p"
	.string "LETI: También te permite usar la MO\n"
	.string "BUCEO fuera del combate.\p"
	.string "VITO: Toma esto también…$"

MossdeepCity_Gym_Text_ExplainCalmMind:
	.string "VITO: La MT04 contiene…\n"
	.string "LETI: ¡PAZ MENTAL!\p"
	.string "VITO: Mejora el AT. ESP. y…\n"
	.string "LETI: ¡también la DEF. ESP.!\p"
	.string "VITO: Es un movimiento perfecto…\n"
	.string "LETI: ¡para los POKéMON PSÍQUICOS!\p"
	.string "(…)$"

MossdeepCity_Gym_Text_RegisteredTateAndLiza:
	.string "Acabas de registrar a VITO y LETI, los \n"
	.string "LÍDERES de GIMNASIO, en el POKéNAV.$"

MossdeepCity_Gym_Text_TateAndLizaPostBattle:
	.string "VITO: Parece que el vínculo que te une\n"
	.string "a tus POKéMON es más fuerte\l"
	.string "que el que nos une como mellizos.\p"
	.string "LETI: ¡Y te harás todavía más fuerte!\n"
	.string "Estamos seguros por cómo combates.$"

MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
	.string "VITO: Je, je, je, ¿no lo esperabas?\p"
	.string "LETI: ¡Somos dos LÍDERES de GIMNASIO!\p"
	.string "VITO: O-oh, sólo tienes un…\n"
	.string "LETI: POKéMON para luchar.\p"
	.string "VITO: ¡Así no se puede!\p"
	.string "LETI: Si quieres desafiarnos,\n"
	.string "trae algún POKéMON más.$"

MossdeepCity_Gym_Text_GymStatue:
	.string "GIMNASIO POKéMON de CIUDAD ALGARIA$"

MossdeepCity_Gym_Text_GymStatueCertified:
	.string "GIMNASIO POKéMON de CIUDAD ALGARIA\p"
	.string "NUEVOS ENTRENADORES CERTIFICADOS:\n"
	.string "{PLAYER}$"

MossdeepCity_Gym_Text_TateAndLizaPreRematch:
	.string "VITO: POKéMON por aquí…\n"
	.string "LETI: POKéMON por allá…\p"
	.string "VITO: Cambia la composición del equipo…\n"
	.string "LETI: y cambiarás tu estilo de lucha.\p"
	.string "VITO: Pero yo…\n"
	.string "LETI: Pero yo…\p"
	.string "VITO: ¡siempre estaré con LETI!\n"
	.string "LETI: ¡siempre estaré con VITO!\p"
	.string "VITO: Los dos juntos…\n"
	.string "LETI: ¡somos invencibles!$"

MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
	.string "VITO: Tus POKéMON y tú…\n"
	.string "LETI: ¡estáis muy unidos!$"

MossdeepCity_Gym_Text_TateAndLizaPostRematch:
	.string "VITO: ¡Podrás derrotarnos,\n"
	.string "pero nunca achantarnos!\p"
	.string "LETI: ¡Porque nos apoyamos\n"
	.string "y animamos mutuamente!$"

MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
	.string "VITO: Así que has vuelto…\n"
	.string "LETI: Ya sabemos por qué…\p"
	.string "VITO: Quieres luchar con nosotros.\n"
	.string "LETI: No lo niegues.\p"
	.string "VITO: Pero…,\n"
	.string "LETI: si quieres pelea…,\p"
	.string "VITO: ¡no basta con un POKéMON!\n"
	.string "LETI: ¡Y sólo tienes uno!\p"
	.string "VITO: Necesitas…\n"
	.string "LETI: al menos dos POKéMON.$"
>>>>>>> Egg/spanish
