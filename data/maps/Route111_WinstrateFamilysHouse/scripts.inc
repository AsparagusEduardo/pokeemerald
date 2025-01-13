.set LOCALID_VIVI, 1
.set LOCALID_VICTOR, 2
.set LOCALID_VICTORIA, 3
.set LOCALID_VICKY, 4

Route111_WinstrateFamilysHouse_MapScripts::
	.byte 0

Route111_WinstrateFamilysHouse_EventScript_Victor::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_VICTOR
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_Victoria::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_VICTORIA
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace, MSGBOX_DEFAULT
	giveitem ITEM_MACHO_BRACE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MACHO_BRACE
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace::
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_Vivi::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_VIVI
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_Vicky::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_VICKY
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
	setflag FLAG_TEMP_4
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
	closemessage
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route111_WinstrateFamilysHouse/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route111_WinstrateFamilysHouse/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route111_WinstrateFamilysHouse/text_es.inc"
.else
	.include "data/maps/Route111_WinstrateFamilysHouse/text.inc"
.endif
.endif
.endif
=======
Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
	.string "Nunca antes había visto a nadie que\n"
	.string "usara los POKéMON con tanto arte.\p"
	.string "No te ofendas, pero mi hijo es\n"
	.string "más fuerte que tú.\p"
	.string "Ha participado incluso en el desafío\n"
	.string "de la LIGA POKéMON. Que lo sepas…$"

Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace:
	.string "Usamos VESTIDURA para que nuestros\n"
	.string "POKéMON mejoren aún más durante\l"
	.string "el entrenamiento.\p"
	.string "Ya que has vencido a toda la familia, no\n"
	.string "creo que la necesites, pero me gustaría\l"
	.string "darte nuestra VESTIDURA igualmente.$"

Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
	.string "Cuando se trata de combates POKéMON,\n"
	.string "tendemos a tomárnoslo muy en serio…$"

Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
	.string "Mamá es más fuerte que papá.\p"
	.string "Yo soy más fuerte que mamá.\p"
	.string "¡Y la abuelita es más fuerte que yo!\p"
	.string "Pero mi hermano mayor es aún\n"
	.string "más fuerte que la abuelita.$"

Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
	.string "No cabe duda de que eres fuerte.\p"
	.string "Pero, si tuvieras que luchar contra mi\n"
	.string "nieto, llorarías pidiendo clemencia.\p"
	.string "Es mucho más fuerte que cualquier\n"
	.string "otro ENTRENADOR que conozcamos.\p"
	.string "Ahora debe de estar enfrentándose al\n"
	.string "CAMPEÓN de la LIGA POKéMON…\p"
	.string "Conociendo a mi nieto…, ¡puede que\n"
	.string "ya sea el nuevo CAMPEÓN y todo!$"

Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
	.string "Mi nieto debe de estar enfrentándose\n"
	.string "al CAMPEÓN de la LIGA POKéMON…\p"
	.string "Conociendo a mi nieto…, ¡puede que\n"
	.string "ya sea el nuevo CAMPEÓN y todo!$"

>>>>>>> Egg/spanish
