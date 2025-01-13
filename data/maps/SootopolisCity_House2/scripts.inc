SootopolisCity_House2_MapScripts::
	.byte 0

SootopolisCity_House2_EventScript_ExpertF::
	lock
	faceplayer
	msgbox SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, SootopolisCity_House2_EventScript_KnowAboutOrbs
	call_if_eq VAR_RESULT, NO, SootopolisCity_House2_EventScript_DontKnowAboutOrbs
	release
	end

SootopolisCity_House2_EventScript_KnowAboutOrbs::
	msgbox SootopolisCity_House2_Text_YesTwoOrbsSideBySide, MSGBOX_DEFAULT
	return

SootopolisCity_House2_EventScript_DontKnowAboutOrbs::
	msgbox SootopolisCity_House2_Text_OughtToVisitAndSee, MSGBOX_DEFAULT
	return

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SootopolisCity_House2/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SootopolisCity_House2/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SootopolisCity_House2/text_es.inc"
.else
	.include "data/maps/SootopolisCity_House2/text.inc"
.endif
.endif
.endif
=======
SootopolisCity_House2_Text_DidYouKnowAboutMtPyreOrbs:
	.string "El MONTE PÍRICO…\p"
	.string "¿Sabías que en la cumbre hay\n"
	.string "dos esferas, una al lado de otra?$"

SootopolisCity_House2_Text_YesTwoOrbsSideBySide:
	.string "Sí, dos esferas juntas…\p"
	.string "Y cuando las ves te sientes mucho\n"
	.string "más tranquila, no sé por qué.$"

SootopolisCity_House2_Text_OughtToVisitAndSee:
	.string "¿Sabes una cosa?\n"
	.string "Quizás deberías ir a verlas tú.$"

>>>>>>> Egg/spanish
