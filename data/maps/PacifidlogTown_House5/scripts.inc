PacifidlogTown_House5_MapScripts::
	.byte 0

PacifidlogTown_House5_EventScript_MirageIslandWatcher::
	lock
	faceplayer
	specialvar VAR_RESULT, IsMirageIslandPresent
	goto_if_eq VAR_RESULT, TRUE, PacifidlogTown_House5_EventScript_MirageIslandPresent
	msgbox PacifidlogTown_House5_Text_CantSeeMirageIslandToday, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_MirageIslandPresent::
	msgbox PacifidlogTown_House5_Text_CanSeeMirageIslandToday, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_Gentleman::
	msgbox PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather, MSGBOX_NPC
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/PacifidlogTown_House5/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/PacifidlogTown_House5/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/PacifidlogTown_House5/text_es.inc"
.else
	.include "data/maps/PacifidlogTown_House5/text.inc"
.endif
.endif
.endif
=======
PacifidlogTown_House5_Text_CantSeeMirageIslandToday:
	.string "Hoy no se ve la ISLA ESPEJISMO…$"

PacifidlogTown_House5_Text_CanSeeMirageIslandToday:
	.string "¡Ay, ay, ay! ¡Sí, la veo!\n"
	.string "¡Hoy sí que veo la ISLA ESPEJISMO!$"

PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather:
	.string "La ISLA ESPEJISMO…\p"
	.string "es visible o invisible dependiendo de\n"
	.string "las condiciones meteorológicas que\l"
	.string "provocan la aparición de espejismos.\p"
	.string "¿O quizás es que aparece y\n"
	.string "desaparece así, sin más?…$"

>>>>>>> Egg/spanish
