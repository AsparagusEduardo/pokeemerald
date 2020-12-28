Lumbridge_Bank_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_Bank_OnTransition
	.byte 0


Lumbridge_Bank_OnTransition::
	setrespawn HEAL_LOCATION_LUMBRIDGE
	end







BANK_EventScript_Banker::
	setvar VAR_0x800B, LOCALID_NURSE
	lock
	faceplayer
	msgbox Text_1, MSGBOX_DEFAULT
	msgbox Text_SimpleYesNoScriptQuestion, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Script_PlayerAnsweredNo
	msgbox Text_PlayerAnsweredYes, MSGBOX_DEFAULT
	special HealPlayerParty
	msgbox Text_3, MSGBOX_DEFAULT
	release
	end
	
	
		Text_1:
	.string "Welcome to the Bank of PokeScape.$"
	
	Text_SimpleYesNoScriptQuestion:
	.string "Would you like to heal your Monsters?$"

	Script_PlayerAnsweredNo:
	msgbox Text_2, MSGBOX_DEFAULT
	release
	end
	
	Text_2:
	.string "SHOO!\n"
	.string "BEGONE!$"
	
	Text_PlayerAnsweredYes:
	.string "Eat this Raw Shark!\n"
	.string "Your team is now healed.$"

	Text_3:
	.string "Smell ya later!$"
	
	
	
	
BANK_EventScript_PC::
	lock
	faceplayer
	msgbox Text_1, MSGBOX_DEFAULT
	msgbox Text_yesorno, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Script_PlayerAnsweredNo
	msgbox Text_YES, MSGBOX_DEFAULT
	special ShowPokemonStorageSystemPC
	waitstate
	msgbox Text_5, MSGBOX_DEFAULT
	release
	end
	
	

		
	Text_yesorno:
	.string "Would you like to access your\n"
	.string "Bank Account?$"
	
	Text_YES:
	.string "Beep Boop Beep!$"	
	
	Text_5:
	.string "Thank you for using the\n"
	.string "Bank of PokeScape!$"
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	