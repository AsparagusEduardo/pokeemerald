FallarborTown_CozmosHouse_MapScripts::
	.byte 0

FallarborTown_CozmosHouse_EventScript_ProfCozmo::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_GaveMeteorite
	checkitem ITEM_METEORITE
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite::
	call_if_unset FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_NoticeMeteorite
	call_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_AskForMeteorite
	goto_if_eq VAR_RESULT, NO, FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_RETURN
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setvar VAR_0x8004, ITEM_METEORITE
	call Common_EventScript_PlayerHandedOverTheItem
	setflag FLAG_RECEIVED_TM_RETURN
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_NoticeMeteorite::
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	msgbox FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt, MSGBOX_YESNO
	return

FallarborTown_CozmosHouse_EventScript_AskForMeteorite::
	msgbox FallarborTown_CozmosHouse_Text_MayIHaveMeteorite, MSGBOX_YESNO
	return

FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite::
	setflag FLAG_TEMP_2
	msgbox FallarborTown_CozmosHouse_Text_CrushedWithDisappointment, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_GaveMeteorite::
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosWife::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/FallarborTown_CozmosHouse/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/FallarborTown_CozmosHouse/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/FallarborTown_CozmosHouse/text_es.inc"
.else
	.include "data/maps/FallarborTown_CozmosHouse/text.inc"
.endif
.endif
.endif
=======
FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow:
	.string "PROF. COZMO: Oh…\n"
	.string "No debería haberme dejado\l"
	.string "amedrentar por el EQUIPO MAGMA y\l"
	.string "revelar dónde hay METEORITOS…\p"
	.string "Ese METEORITO de la CASCADA METEORO…\n"
	.string "Ya nunca lo recuperaré…$"

FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt:
	.string "¡Eh!\n"
	.string "¿Cómo?\p"
	.string "Ese objeto…\p"
	.string "¿Es posible…?\p"
	.string "¿Es el METEORITO que el EQUIPO MAGMA\n"
	.string "robó en la CASCADA METEORO?\p"
	.string "Por favor, ¿puedo…?\p"
	.string "No quiero quitártelo por la cara…\n"
	.string "¿Qué te parece cambiarlo por esta MT?$"

FallarborTown_CozmosHouse_Text_PleaseUseThisTM:
	.string "PROF. COZMO: Esta MT es un símbolo\n"
	.string "de la enorme gratitud que siento.\l"
	.string "¡No dejes de usarla!$"

FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch:
	.string "PROF. COZMO: ¡No puedo creerlo!\n"
	.string "¡Es genial, maravilloso y estupendo!\p"
	.string "¡Será de una enorme ayuda\n"
	.string "en mi investigación!$"

FallarborTown_CozmosHouse_Text_CrushedWithDisappointment:
	.string "PROF. COZMO: Anda ya… ¿No?…\n"
	.string "Me siento profundamente abatido…$"

FallarborTown_CozmosHouse_Text_MayIHaveMeteorite:
	.string "PROF. COZMO: Por favor, ¿me darías\n"
	.string "ese METEORITO?\p"
	.string "No quiero quitártelo por la cara…\n"
	.string "¿Qué te parece cambiarlo por esta MT?$"

FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls:
	.string "El PROF. COZMO fue a la CASCADA\n"
	.string "METEORO, en la RUTA 114, con algunos\l"
	.string "miembros del EQUIPO MAGMA.$"

FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
	.string "Pobre PROF. COZMO…\n"
	.string "Está tan depre… Me da una pena…$"

FallarborTown_CozmosHouse_Text_CozmoIsSoHappy:
	.string "Mira al PROF. COZMO…\n"
	.string "¡Está tan feliz! ¡Da gusto verle!$"

>>>>>>> Egg/spanish
