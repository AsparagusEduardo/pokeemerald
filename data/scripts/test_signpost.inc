Text_ThisIsATestSignpostMsg::
<<<<<<< HEAD
.ifdef FRENCH
	.string "Message test.\n"
	.string "Panneau.$"
.else
.ifdef ITALIAN
	.string "Questo è un messaggio di prova.\n"
	.string "Questo è un cartello.$"
.else @ENGLISH
	.string "This is a test message.\n"
	.string "This is a signpost.$"
.endif
.endif
=======
	.string "Éste es un mensaje de texto.\n"
	.string "Esto es una señal.$"
>>>>>>> Egg/spanish

EventScript_TestSignpostMsg::
	msgbox Text_ThisIsATestSignpostMsg, MSGBOX_SIGN
	end
