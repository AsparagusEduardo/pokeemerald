.set LOCALID_RICH_BOY, 1
.set LOCALID_GENTLEMAN, 2
.set LOCALID_SCIENTIST, 3
.set LOCALID_STEVEN, 4
@ Grunt names numbered like their Trainer values (which are for the full Space Center)
.set LOCALID_GRUNT_6, 5
.set LOCALID_GRUNT_5, 6
.set LOCALID_GRUNT_7, 7
.set LOCALID_TABITHA, 8
.set LOCALID_MAXIE, 9

MossdeepCity_SpaceCenter_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_2F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_2F_OnFrame
	.byte 0

MossdeepCity_SpaceCenter_2F_OnTransition:
	call_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians
	call_if_eq VAR_MOSSDEEP_SPACE_CENTER_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts
	end

MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians::
	clearflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
	setobjectxyperm LOCALID_SCIENTIST, 5, 3
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm LOCALID_RICH_BOY, 3, 2
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm LOCALID_GENTLEMAN, 1, 3
	setobjectmovementtype LOCALID_GENTLEMAN, MOVEMENT_TYPE_FACE_RIGHT
	return

MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts::
	setobjectxyperm LOCALID_GRUNT_6, 11, 2
	setobjectxyperm LOCALID_GRUNT_7, 15, 2
	setobjectxyperm LOCALID_GRUNT_5, 13, 4
	return

MossdeepCity_SpaceCenter_2F_OnFrame:
	map_script_2 VAR_MOSSDEEP_SPACE_CENTER_STATE, 1, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts
	.2byte 0

MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts::
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
	msgbox MossdeepCity_SpaceCenter_2F_Text_GoodAnswer, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerExit
	waitmovement 0
	warp MAP_MOSSDEEP_CITY_SPACE_CENTER_1F, 13, 1
	waitstate
	releaseall
	end

MossdeepCity_SpaceCenter_2F_Movement_PlayerExit:
	walk_up
	step_end

MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts::
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_5, MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat
	applymovement LOCALID_GRUNT_5, MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_6, MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat
	applymovement LOCALID_GRUNT_6, MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_7, MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat
	applymovement LOCALID_GRUNT_7, MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated
	waitmovement 0
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 2
	copyobjectxytoperm LOCALID_GRUNT_6
	copyobjectxytoperm LOCALID_GRUNT_7
	copyobjectxytoperm LOCALID_GRUNT_5
	releaseall
	end

MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated:
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated:
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

MossdeepCity_SpaceCenter_2F_EventScript_Scientist::
	lock
	faceplayer
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
	end

MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal::
	msgbox MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma::
	msgbox MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_Gentleman::
	lock
	faceplayer
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
	end

MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal::
	msgbox MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma::
	msgbox MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_RichBoy::
	lock
	faceplayer
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
	end

MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal::
	msgbox MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace, MSGBOX_DEFAULT
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma::
	msgbox MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace, MSGBOX_DEFAULT
	release
	end

@ Battle for the below 3 grunts is handled in MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
MossdeepCity_SpaceCenter_2F_EventScript_Grunt6::
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_NPC
	end

MossdeepCity_SpaceCenter_2F_EventScript_Grunt7::
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle, MSGBOX_NPC
	end

MossdeepCity_SpaceCenter_2F_EventScript_Grunt5::
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_NPC
	end

MossdeepCity_SpaceCenter_2F_EventScript_Tabitha::
	lock
	faceplayer
	msgbox MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
	lockall
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_Steven::
	lockall
	goto_if_set FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER, MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel, MSGBOX_DEFAULT
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano, MSGBOX_DEFAULT
	closemessage
	delay 30
	playse SE_NOT_EFFECTIVE
	switch VAR_FACING
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth
	applymovement LOCALID_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFight
	waitmovement 0
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth::
	applymovement LOCALID_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth
	waitmovement 0
	releaseall
	end

MossdeepCity_SpaceCenter_2F_Movement_StevenFight:
	lock_facing_direction
	walk_fast_up
	walk_fast_up
	unlock_facing_direction
	delay_16
	delay_16
	walk_slow_down
	walk_slow_down
	step_end

MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth:
	face_left
	lock_facing_direction
	walk_fast_right
	walk_fast_right
	unlock_facing_direction
	delay_16
	delay_16
	walk_slow_left
	walk_slow_left
	face_down
	step_end

MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle::
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	special SavePlayerParty
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	goto_if_ne VAR_RESULT, 0, MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle
	special LoadPlayerParty
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt

MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle::
	special ReducePlayerPartyToSelectedMons
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
	setvar VAR_0x8004, SPECIAL_BATTLE_STEVEN
	setvar VAR_0x8005, 0
	special DoSpecialTrainerBattle
	waitstate
	frontier_saveparty
	special LoadPlayerParty
	switch VAR_RESULT
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha
	fadescreen FADE_TO_BLACK
	special SetCB2WhiteOut
	waitstate

MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha::
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided, MSGBOX_DEFAULT
	closemessage
	delay 20
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 60
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 20
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp, MSGBOX_DEFAULT
	closemessage
	setvar VAR_MOSSDEEP_CITY_STATE, 3
	fadedefaultbgm
	fadescreen FADE_TO_BLACK
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	removeobject LOCALID_GRUNT_6
	removeobject LOCALID_GRUNT_7
	removeobject LOCALID_GRUNT_5
	removeobject LOCALID_TABITHA
	removeobject LOCALID_MAXIE
	setobjectxy LOCALID_SCIENTIST, 5, 6
	turnobject LOCALID_SCIENTIST, DIR_SOUTH
	setobjectxy LOCALID_GENTLEMAN, 11, 8
	turnobject LOCALID_GENTLEMAN, DIR_NORTH
	setobjectxy LOCALID_RICH_BOY, 6, 2
	turnobject LOCALID_RICH_BOY, DIR_NORTH
	call MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer
	fadescreen FADE_FROM_BLACK
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	removeobject LOCALID_STEVEN
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	setvar VAR_STEVENS_HOUSE_STATE, 1
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
	removeobject LOCALID_SCIENTIST
	setobjectxyperm LOCALID_SCIENTIST, 5, 6
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_WANDER_AROUND
	addobject LOCALID_SCIENTIST
	fadescreen FADE_FROM_BLACK
#ifdef BUGFIX
	releaseall
#endif
	end

MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer::
	switch VAR_FACING
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth
	case DIR_WEST, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest
	return

MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth::
	turnobject LOCALID_STEVEN, DIR_NORTH
	return

MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest::
	turnobject LOCALID_STEVEN, DIR_EAST
	return

MossdeepCity_SpaceCenter_2F_EventScript_MaxieTrainer::
	trainerbattle TRAINER_BATTLE_SET_TRAINER_A, TRAINER_MAXIE_MOSSDEEP, 0, MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand, MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand
	end

MossdeepCity_SpaceCenter_2F_EventScript_TabithaTrainer::
	trainerbattle TRAINER_BATTLE_SET_TRAINER_B, TRAINER_TABITHA_MOSSDEEP, 0, MossdeepCity_SpaceCenter_Text_TabithaDefeat, MossdeepCity_SpaceCenter_Text_TabithaDefeat
	end

MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall::
	lockall
	checkplayergender
	call_if_eq VAR_RESULT, MALE, MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall
	call_if_eq VAR_RESULT, FEMALE, MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall
	closemessage
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
	releaseall
	end

MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall::
	pokenavcall MatchCall_Text_MayRayquazaCall
	waitmessage
	return

MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall::
	pokenavcall MatchCall_Text_BrendanRayquazaCall
	waitmessage
	return

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MossdeepCity_SpaceCenter_2F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MossdeepCity_SpaceCenter_2F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MossdeepCity_SpaceCenter_2F/text_es.inc"
.else
	.include "data/maps/MossdeepCity_SpaceCenter_2F/text.inc"
.endif
.endif
.endif
=======
MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets:
	.string "ALGARIA suele tener buen tiempo\n"
	.string "y vientos estables.\p"
	.string "Es el mejor lugar para lanzar cohetes\n"
	.string "al espacio exterior.$"

MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel:
	.string "¿Por qué querrá el EQUIPO MAGMA\n"
	.string "robar el combustible del cohete?$"

MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut:
	.string "Me hubiera gustado ser astronauta.\n"
	.string "Si fuera sólo un pelín más joven…\p"
	.string "Pero no, nunca es demasiado tarde.\n"
	.string "¡Voy a intentarlo!$"

MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis:
	.string "Si el EQUIPO MAGMA se lleva\n"
	.string "el combustible, no podré ir al espacio.\p"
	.string "¡Qué tragedia! ¡Qué ultraje!\n"
	.string "¡No se puede permitir!$"

MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace:
	.string "Ojalá la gente normal pudiera ir\n"
	.string "al espacio de excursión…$"

MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace:
	.string "¿El EQUIPO MAGMA también\n"
	.string "quiere ir al espacio exterior?$"

MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn:
	.string "¿De qué vas?\p"
	.string "¿Te superamos en número\n"
	.string "y aun así quieres desafiarnos?$"

MossdeepCity_SpaceCenter_2F_Text_GoodAnswer:
	.string "¡Bien dicho! ¡Así hablan\n"
	.string "las personas inteligentes!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro:
	.string "¿Te va vivir peligrosamente?\n"
	.string "¡Pues te vas a enterar!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat:
	.string "¡He perdido!\n"
	.string "¡Imposible!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro:
	.string "¡No te creas que puedes\n"
	.string "escapar! ¡Ahora voy yo!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat:
	.string "¡Yo también he perdido!\n"
	.string "¡Imposible!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro:
	.string "Darías lo que fuera por descansar\n"
	.string "un rato, ¿eh? ¡Pues se siente!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat:
	.string "Tendría que haber descansado yo…\n"
	.string "Ya lo creo…$"

MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle:
	.string "No ha servido de nada ser tres.\n"
	.string "Nos has derrotado miserablemente.$"

MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle:
	.string "Hemos perdido los tres…\n"
	.string "¡Ha sido una derrota por triplicado!$"

MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle:
	.string "Somos una vergüenza para el EQUIPO\n"
	.string "y para nuestro líder.$"

MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou:
	.string "¡Je, je, je!\p"
	.string "¡Hemos venido hasta aquí en busca\n"
	.string "del combustible y todo son problemas!\p"
	.string "¡Si quieres desbaratar nuestros planes,\n"
	.string "tendremos que darte una lección!$"

MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere:
	.string "MAGNO: ¡Apártate!\n"
	.string "¡No oses interferir!$"

MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel:
	.string "MÁXIMO: EQUIPO MAGMA…\p"
	.string "¿Por qué queréis robar el combustible\n"
	.string "del cohete?$"

MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano:
	.string "MAGNO: Je, je, je… Ya que tanto\n"
	.string "te interesa, te lo voy a explicar.\p"
	.string "¡Vamos a echarlo todo, todito,\n"
	.string "todo en el MONTE CENIZO!\p"
	.string "¡Ahora que GROUDON ya no está,\n"
	.string "no necesitamos esa estúpida montaña!\p"
	.string "¡Vamos a usar el combustible para\n"
	.string "que el volcán entre en erupción!\p"
	.string "¡Va a ser bestial!$"

MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle:
	.string "MÁXIMO: ¡{PLAYER}{KUN}!\n"
	.string "¿Me ayudarás?\p"
	.string "¡Luchemos juntos!\n"
	.string "¿Estás de acuerdo?$"

MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly:
	.string "MÁXIMO: ¿Cómo que no?\n"
	.string "¡No hay tiempo que perder!$"

MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand:
	.string "Mi único objetivo es…\n"
	.string "expandir la tierra…$"

MossdeepCity_SpaceCenter_Text_TabithaDefeat:
	.string "Estoy con nuestro líder…$"

MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided:
	.string "MAGNO: No conseguimos hacer\n"
	.string "que el volcán entrara en erupción…\p"
	.string "GROUDON escapó a nuestro control\n"
	.string "una vez despierto…\p"
	.string "¿Quizás nuestro objetivo de expandir\n"
	.string "la tierra es una insensatez?\p"
	.string "Uf…\n"
	.string "No sé…\p"
	.string "Si nosotros…\n"
	.string "Si el EQUIPO MAGMA se equivoca…\l"
	.string "Entonces…\p"
	.string "¿Quizás el deseo del EQUIPO AQUA de\n"
	.string "expandir el mar también sea una locura?$"

MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp:
	.string "MAGNO: Muy bien…\n"
	.string "Renunciaremos al combustible…\p"
	.string "Parece haber asuntos más importantes\n"
	.string "que requieren nuestra atención…$"

MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome:
	.string "MÁXIMO: Uf, ha faltado un pelo.\n"
	.string "Gracias por tu ayuda, {PLAYER}{KUN}.\p"
	.string "Quisiera darte algo como muestra\n"
	.string "de agradecimiento.\p"
	.string "No dejes de venir a mi casa\n"
	.string "después.\p"
	.string "Ah, no, no vivo en CIUDAD FÉRRICA,\n"
	.string "sino aquí mismo, en la isla.$"
>>>>>>> Egg/spanish
