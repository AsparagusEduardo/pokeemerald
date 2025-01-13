Route114_LanettesHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_LanettesHouse_OnTransition
	.byte 0

Route114_LanettesHouse_OnTransition:
	setflag FLAG_LANDMARK_LANETTES_HOUSE
	end

Route114_LanettesHouse_EventScript_Lanette::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_DOLL_LANETTE, Route114_LanettesHouse_EventScript_OfferAdvice
	setflag FLAG_SYS_PC_LANETTE
	msgbox Route114_LanettesHouse_Text_EverythingClutteredKeepThis, MSGBOX_DEFAULT
	givedecoration DECOR_LOTAD_DOLL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowNoRoomForDecor
	setflag FLAG_RECEIVED_DOLL_LANETTE
	release
	end

Route114_LanettesHouse_EventScript_OfferAdvice::
	msgbox Route114_LanettesHouse_Text_OrganizeYourBoxes, MSGBOX_DEFAULT
	release
	end

Route114_LanettesHouse_EventScript_Notebook::
	lockall
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage2
	msgbox Route114_LanettesHouse_Text_ClosedTheNotebook, MSGBOX_DEFAULT
	releaseall
	end

Route114_LanettesHouse_EventScript_NotebookPage2::
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage2, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage3
	releaseall
	end

Route114_LanettesHouse_EventScript_NotebookPage3::
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage3, MSGBOX_DEFAULT
	return

Route114_LanettesHouse_EventScript_PC::
	msgbox Route114_LanettesHouse_Text_EmailFromBill, MSGBOX_SIGN
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route114_LanettesHouse/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route114_LanettesHouse/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route114_LanettesHouse/text_es.inc"
.else
	.include "data/maps/Route114_LanettesHouse/text.inc"
.endif
.endif
.endif
=======
Route114_LanettesHouse_Text_EverythingClutteredKeepThis:
	.string "AREDIA: ¡Anda! ¡{PLAYER}{KUN}!\p"
	.string "Perdona el desorden, es que estoy\n"
	.string "en medio de una investigación vital\l"
	.string "y no tengo tiempo para nada…\p"
	.string "Qué vergüenza… No le digas a nadie\n"
	.string "lo desastre que soy. Mira, te daré\l"
	.string "esto en agradecimiento…$"

Route114_LanettesHouse_Text_OrganizeYourBoxes:
	.string "¿Quieres algún consejo sobre el Sistema\n"
	.string "de Almacenamiento de POKéMON?\p"
	.string "Ahí va: organiza las CAJAS para que\n"
	.string "puedas encontrar rápido cada POKéMON.$"

Route114_LanettesHouse_Text_ResearchNotesPage1:
	.string "Son notas de investigación de AREDIA.\n"
	.string "Contienen información sobre las CAJAS.\p"
	.string "“Diseñar las CAJAS para que\n"
	.string "alberguen 30 POKéMON cada una.\p"
	.string "Todo ENTRENADOR debería poder\n"
	.string "almacenar 420 POKéMON en el PC.”\p"
	.string "¿Sigo leyendo?$"

Route114_LanettesHouse_Text_ResearchNotesPage2:
	.string "“Añadir un sistema de marcado que\n"
	.string "facilite la organización de los POKéMON.\p"
	.string "Hacer posible el cambio de nombres y\n"
	.string "diseños de papel pintado de las CAJAS\l"
	.string "para agradar a los POKéMON guardados.”\p"
	.string "¿Sigo leyendo?$"

Route114_LanettesHouse_Text_ResearchNotesPage3:
	.string "“Cuando se guarde un POKéMON,\n"
	.string "irá a la última CAJA inspeccionada.\p"
	.string "Si ésta está llena, el POKéMON se\n"
	.string "almacenará en la siguiente CAJA.\p"
	.string "Es decir, al examinar una CAJA, ésta\n"
	.string "pasará a ser la CAJA predeterminada\l"
	.string "a la que se envíen los POKéMON.”$"

Route114_LanettesHouse_Text_ClosedTheNotebook:
	.string "{PLAYER} cerró el cuaderno.$"

Route114_LanettesHouse_Text_EmailFromBill:
	.string "Alguien ha enviado un correo\n"
	.string "electrónico al PC…\p"
	.string "“¡Hola!\p"
	.string "Tu Sistema de Almacenamiento\n"
	.string "parece mucho mejor que el mío.\p"
	.string "Tiene un montón de características que\n"
	.string "lo hacen más útil y divertido de usar.\p"
	.string "Me enorgullece ser parte del equipo\n"
	.string "que ha desarrollado este sistema.\p"
	.string "Espero que tu trabajo mejore aún más\n"
	.string "los Sistemas de Almacenamiento.\p"
	.string "Un abrazo,\p"
	.string "BILL”$"

>>>>>>> Egg/spanish
