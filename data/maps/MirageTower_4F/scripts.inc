.set LOCALID_ROOT_FOSSIL, 1
.set LOCALID_CLAW_FOSSIL, 2

MirageTower_4F_MapScripts::
	.byte 0

MirageTower_4F_EventScript_RootFossil::
	lock
	faceplayer
	msgbox MirageTower_4F_Text_TakeRootFossil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveRootFossil
	giveitem ITEM_ROOT_FOSSIL
	closemessage
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
	removeobject LOCALID_ROOT_FOSSIL
	delay 30
	setflag FLAG_CHOSE_ROOT_FOSSIL
	goto MirageTower_4F_EventScript_CollapseMirageTower
	end

MirageTower_4F_EventScript_LeaveRootFossil::
	msgbox MirageTower_4F_Text_LeftRootFossilAlone, MSGBOX_DEFAULT
	release
	end

MirageTower_4F_EventScript_ClawFossil::
	lock
	faceplayer
	msgbox MirageTower_4F_Text_TakeClawFossil, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MirageTower_4F_EventScript_LeaveClawFossil
	giveitem ITEM_CLAW_FOSSIL
	closemessage
	setflag FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL
	setflag FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL
	removeobject LOCALID_CLAW_FOSSIL
	delay 30
	setflag FLAG_CHOSE_CLAW_FOSSIL
	goto MirageTower_4F_EventScript_CollapseMirageTower
	end

MirageTower_4F_EventScript_LeaveClawFossil::
	msgbox MirageTower_4F_Text_LeaveClawFossilAlone, MSGBOX_DEFAULT
	release
	end

MirageTower_4F_EventScript_CollapseMirageTower::
	setvar VAR_0x8004, 1   @ vertical pan
	setvar VAR_0x8005, 1   @ horizontal pan
	setvar VAR_0x8006, 32  @ num shakes
	setvar VAR_0x8007, 2   @ shake delay
	special ShakeCamera
	waitstate
	special DoMirageTowerCeilingCrumble
	waitstate
	setvar VAR_MIRAGE_TOWER_STATE, 1
	clearflag FLAG_LANDMARK_MIRAGE_TOWER
	warp MAP_ROUTE111, 19, 59
	waitstate
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MirageTower_4F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MirageTower_4F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MirageTower_4F/text_es.inc"
.else
	.include "data/maps/MirageTower_4F/text.inc"
.endif
.endif
.endif
=======
MirageTower_4F_Text_TakeRootFossil:
	.string "Has encontrado el FÓSIL RAÍZ.\p"
	.string "Si recoges este FÓSIL, es probable\n"
	.string "que el terreno se hunda…\p"
	.string "¿Lo recoges de todas formas?$"

MirageTower_4F_Text_LeftRootFossilAlone:
	.string "{PLAYER} dejó el FÓSIL RAÍZ en su sitio.$"

MirageTower_4F_Text_TakeClawFossil:
	.string "Has encontrado el FÓSIL GARRA.\p"
	.string "Si recoges este FÓSIL, es probable\n"
	.string "que el terreno se hunda…\p"
	.string "¿Lo recoges de todas formas?$"

MirageTower_4F_Text_LeaveClawFossilAlone:
	.string "{PLAYER} dejó el FÓSIL GARRA\n"
	.string "en su sitio.$"

>>>>>>> Egg/spanish
