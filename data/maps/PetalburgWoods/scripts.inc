.set LOCALID_GRUNT, 3
.set LOCALID_DEVON_EMPLOYEE, 4

PetalburgWoods_MapScripts::
	.byte 0

PetalburgWoods_EventScript_DevonResearcherLeft::
	lockall
	call PetalburgWoods_EventScript_DevonResearcherIntro
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
	waitmovement 0
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
	waitmovement 0
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
	waitmovement 0
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
	waitmovement 0
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end

PetalburgWoods_EventScript_DevonResearcherRight::
	lockall
	call PetalburgWoods_EventScript_DevonResearcherIntro
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
	waitmovement 0
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
	waitmovement 0
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
	waitmovement 0
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
	waitmovement 0
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
	waitmovement 0
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end

PetalburgWoods_EventScript_DevonResearcherIntro::
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
	waitmovement 0
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_EventScript_DevonResearcherPostBattle::
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
	waitmovement 0
	removeobject LOCALID_GRUNT
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
	giveitem ITEM_GREAT_BALL
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
	goto PetalburgWoods_EventScript_DevonResearcherFinish
	end

PetalburgWoods_EventScript_BagFull::
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
	goto PetalburgWoods_EventScript_DevonResearcherFinish
	end

PetalburgWoods_EventScript_DevonResearcherFinish::
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
	waitmovement 0
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_EventScript_RemoveDevonResearcher::
	removeobject LOCALID_DEVON_EMPLOYEE
	setvar VAR_PETALBURG_WOODS_STATE, 1
	releaseall
	end

PetalburgWoods_Movement_DevonResearcherLookAround:
	face_up
	delay_16
	delay_4
	face_right
	delay_16
	delay_8
	face_left
	delay_16
	delay_8
	face_down
	delay_16
	face_right
	delay_16
	delay_8
	face_up
	delay_16
	step_end

PetalburgWoods_Movement_DevonResearcherExitLeft:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
	delay_16
	face_player
	walk_down
	walk_down
	step_end

PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
	delay_16
	face_player
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

PetalburgWoods_Movement_DevonResearcherExitRight:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

PetalburgWoods_Movement_WatchResearcherLeave:
	delay_16
	delay_16
	walk_in_place_faster_up
	step_end

PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_in_place_faster_up
	step_end

PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
	walk_fast_down
	walk_fast_right
	walk_in_place_faster_up
	step_end

PetalburgWoods_Movement_DevonResearcherStartExit:
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_up
	step_end

PetalburgWoods_Movement_AquaApproachResearcherLeft:
	walk_fast_down
	walk_fast_down
	step_end

PetalburgWoods_Movement_AquaBackOff:
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

PetalburgWoods_Movement_AquaRunAway:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	delay_16
	delay_16
	step_end

PetalburgWoods_Movement_AquaApproachResearcherRight:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

PetalburgWoods_Movement_AquaEntrance:
	walk_down
	walk_down
	delay_16
	delay_16
	step_end

PetalburgWoods_Movement_AquaApproachPlayer:
	walk_down
	step_end

PetalburgWoods_EventScript_Boy1::
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
	end

PetalburgWoods_EventScript_Boy2::
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
	end

PetalburgWoods_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
	giveitem ITEM_MIRACLE_SEED
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MIRACLE_SEED
	release
	end

PetalburgWoods_EventScript_ExplainMiracleSeed::
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_Sign1::
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_Sign2::
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_Lyle::
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_EventScript_James::
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
	setvar VAR_0x8004, TRAINER_JAMES_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_TryRegisterJames::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
	release
	end

PetalburgWoods_EventScript_RegisterJames::
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
	register_matchcall TRAINER_JAMES_1
	release
	end

PetalburgWoods_EventScript_TryRegisterJames2::
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_RegisterJames2::
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
	register_matchcall TRAINER_JAMES_1
	release
	end

PetalburgWoods_EventScript_JamesRematch::
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/PetalburgWoods/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/PetalburgWoods/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/PetalburgWoods/text_es.inc"
.else
	.include "data/maps/PetalburgWoods/text.inc"
.endif
.endif
.endif
=======
PetalburgWoods_Text_NotAOneToBeFound:
	.string "Mmmm…\n"
	.string "Ni uno… No hay ni uno…$"

PetalburgWoods_Text_HaveYouSeenShroomish:
	.string "Hola, ¿has visto a un POKéMON\n"
	.string "llamado SHROOMISH por aquí?\p"
	.string "Me encanta ese POKéMON…$"

PetalburgWoods_Text_IWasGoingToAmbushYou:
	.string "Iba a tenderte una emboscada, pero\n"
	.string "tú tenías que eternizarte haciendo\l"
	.string "el tonto en el BOSQUE PETALIA, ¿no?\p"
	.string "Ya me he cansado de esperar,\n"
	.string "así que ¡aquí estoy!$"

PetalburgWoods_Text_HandOverThosePapers:
	.string "¡Tú! ¡INVESTIGADOR de DEVON!\p"
	.string "¡Suelta esos papeles!$"

PetalburgWoods_Text_YouHaveToHelpMe:
	.string "¡Aaaaaaah!\p"
	.string "Tú entrenas POKéMON, ¿verdad?\n"
	.string "¡Pues entonces ayúdameeeee!$"

PetalburgWoods_Text_NoOneCrossesTeamAqua:
	.string "¿Eh? ¿Qué crees que estás haciendo?\n"
	.string "¿Tú vas a protegerle?\p"
	.string "¡Nadie que se cruce en el camino\n"
	.string "del EQUIPO AQUA sale bien librado,\l"
	.string "aunque no levante dos palmos del suelo!\p"
	.string "¡Ven a que te dé jarabe de palo!$"

PetalburgWoods_Text_YoureKiddingMe:
	.string "¡Esto tiene que ser una broma!\n"
	.string "¡Eres muy fuerte!$"

PetalburgWoods_Text_YouveGotSomeNerve:
	.string "Brrrr… Hay que tener valor para\n"
	.string "entrometerse en los planes del EQUIPO\l"
	.string "AQUA… ¡Vuelve a luchar conmigo!\p"
	.string "Bueno, eso me gustaría, pero no me\n"
	.string "queda ni un POKéMON en forma…\p"
	.string "Pues que sepas que los del EQUIPO AQUA\n"
	.string "estamos tras algo en CIUDAD FÉRRICA.\p"
	.string "¡Por hoy te perdono la vida!$"

PetalburgWoods_Text_ThatWasAwfullyClose:
	.string "Huy, huy, huy…\n"
	.string "Casi no lo contamos…\p"
	.string "Gracias a ti, ese granuja no me robó\n"
	.string "unos papeles muy importantes.\p"
	.string "Para agradecerte tu ayuda quiero\n"
	.string "darte esta SUPERBALL.$"

PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
	.string "¿No ha dicho ese matón del EQUIPO AQUA\n"
	.string "que buscaba algo en CIUDAD FÉRRICA?$"

PetalburgWoods_Text_ICantBeWastingTime:
	.string "Huy, huy, huy… ¡Esto es muy serio!\n"
	.string "¡No hay tiempo que perder!$"

PetalburgWoods_Text_YoureLoadedWithItems:
	.string "Tienes un montón de objetos.\n"
	.string "No puedo darte la SUPERBALL.$"

PetalburgWoods_Text_GoBugPokemonTeam:
	.string "¡He atrapado un montón de POKéMON!\p"
	.string "¡Adelante, vosotros podéis!\n"
	.string "¡Vivan los POKéMON BICHO!$"

PetalburgWoods_Text_ICouldntWin:
	.string "A pesar de tener todos estos POKéMON,\n"
	.string "he perdido miserablemente…$"

PetalburgWoods_Text_ImOutOfPokeBalls:
	.string "Como he atrapado tantísimos POKéMON,\n"
	.string "ya no me queda ni una POKé BALL.$"

PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
	.string "Si llevas POKéMON BICHO a la escuela,\n"
	.string "te haces con un club de fans.$"

PetalburgWoods_Text_CantBePopularIfILose:
	.string "¡Si quiero conservar mi club de fans,\n"
	.string "no puedo perder!$"

PetalburgWoods_Text_PeopleRespectYou:
	.string "Si tienes un POKéMON BICHO grande,\n"
	.string "la gente parece que te respeta más.$"

PetalburgWoods_Text_IWantRematch1:
	.string "¡Cuando mi POKéMON BICHO crezca,\n"
	.string "me tomaré la revancha!\p"
	.string "¡Te voy a registrar en mi POKéNAV\n"
	.string "ya mismo!$"

PetalburgWoods_Text_IWantRematch2:
	.string "¡Cuando mi POKéMON BICHO crezca,\n"
	.string "me tomaré la revancha!\p"
	.string "¡Te voy a registrar en mi POKéNAV\n"
	.string "ya mismo!$"

PetalburgWoods_Text_MyPokemonHaveGrown:
	.string "Mis POKéMON BICHO han evolucionado.\n"
	.string "¡Ahora recuperaré mi club de fans!$"

PetalburgWoods_Text_CantBePopularIfLose:
	.string "¡Si quiero conservar mi club de fans,\n"
	.string "no puedo perder!$"

PetalburgWoods_Text_IveBeenTrainingHard:
	.string "Consigues un club de fans si tus\n"
	.string "POKéMON son fuertes, ¿no es así?\l"
	.string "Por eso me he entrenado mucho.$"

PetalburgWoods_Text_StayOutOfTallGrass:
	.string "¡Hola!\n"
	.string "¿Qué tal están tus POKéMON?\p"
	.string "Si están débiles y quieres evitar\n"
	.string "los combates, aléjate de las zonas\l"
	.string "con hierba alta.$"

PetalburgWoods_Text_HiddenItemsExplanation:
	.string "A veces hay cosas en el suelo,\n"
	.string "aunque no puedas verlas.\p"
	.string "Por eso siempre tengo los ojos abiertos\n"
	.string "cuando voy de paseo.$"

PetalburgWoods_Text_TryUsingThisItem:
	.string "¡Cómo mola! ¡La MEDALLA del GIMNASIO\n"
	.string "de CIUDAD FÉRRICA!\p"
	.string "Tú seguro que entrenas POKéMON.\n"
	.string "Pues prueba a usar este objeto.$"

PetalburgWoods_Text_MiracleSeedExplanation:
	.string "Es una SEMILLA MILAGRO.\n"
	.string "Dásela a un POKéMON para reforzar\l"
	.string "los movimientos de tipo PLANTA.\p"
	.string "Pero creo que hay muchos más objetos\n"
	.string "que puedes dar a los POKéMON.$"

PetalburgWoods_Text_TrainerTipsExperience:
	.string "PISTAS para ENTRENADORES\p"
	.string "Cuando un POKéMON hace acto\n"
	.string "de presencia en un combate,\l"
	.string "recibe puntos de EXPERIENCIA.\p"
	.string "Si quieres entrenar sin riesgos\n"
	.string "a un POKéMON débil, ponlo al principio\l"
	.string "de la lista del equipo.\p"
	.string "En cuanto empiece el combate,\n"
	.string "sustitúyelo. Así ganará puntos de\l"
	.string "EXPERIENCIA sin sufrir ningún daño.$"

PetalburgWoods_Text_TrainerTipsPP:
	.string "PISTAS para ENTRENADORES\p"
	.string "Además de los PUNTOS de SALUD (PS),\n"
	.string "los POKéMON tienen PUNTOS de PODER\l"
	.string "(PP), que necesitan para realizar\l"
	.string "movimientos durante el combate.\p"
	.string "Si un POKéMON se queda sin PP,\n"
	.string "hay que llevarlo a un CENTRO POKéMON.$"

>>>>>>> Egg/spanish
