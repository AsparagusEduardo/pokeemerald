SootopolisCity_Gym_B1F_MapScripts::
	.byte 0

SootopolisCity_Gym_B1F_EventScript_Andrea::
	trainerbattle_single TRAINER_ANDREA, SootopolisCity_Gym_B1F_Text_AndreaIntro, SootopolisCity_Gym_B1F_Text_AndreaDefeat
	msgbox SootopolisCity_Gym_B1F_Text_AndreaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Crissy::
	trainerbattle_single TRAINER_CRISSY, SootopolisCity_Gym_B1F_Text_CrissyIntro, SootopolisCity_Gym_B1F_Text_CrissyDefeat
	msgbox SootopolisCity_Gym_B1F_Text_CrissyPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Brianna::
	trainerbattle_single TRAINER_BRIANNA, SootopolisCity_Gym_B1F_Text_BriannaIntro, SootopolisCity_Gym_B1F_Text_BriannaDefeat
	msgbox SootopolisCity_Gym_B1F_Text_BriannaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Connie::
	trainerbattle_single TRAINER_CONNIE, SootopolisCity_Gym_B1F_Text_ConnieIntro, SootopolisCity_Gym_B1F_Text_ConnieDefeat
	msgbox SootopolisCity_Gym_B1F_Text_ConniePostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Bridget::
	trainerbattle_single TRAINER_BRIDGET, SootopolisCity_Gym_B1F_Text_BridgetIntro, SootopolisCity_Gym_B1F_Text_BridgetDefeat
	msgbox SootopolisCity_Gym_B1F_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Olivia::
	trainerbattle_single TRAINER_OLIVIA, SootopolisCity_Gym_B1F_Text_OliviaIntro, SootopolisCity_Gym_B1F_Text_OliviaDefeat
	msgbox SootopolisCity_Gym_B1F_Text_OliviaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Tiffany::
	trainerbattle_single TRAINER_TIFFANY, SootopolisCity_Gym_B1F_Text_TiffanyIntro, SootopolisCity_Gym_B1F_Text_TiffanyDefeat
	msgbox SootopolisCity_Gym_B1F_Text_TiffanyPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Bethany::
	trainerbattle_single TRAINER_BETHANY, SootopolisCity_Gym_B1F_Text_BethanyIntro, SootopolisCity_Gym_B1F_Text_BethanyDefeat
	msgbox SootopolisCity_Gym_B1F_Text_BethanyPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Annika::
	trainerbattle_single TRAINER_ANNIKA, SootopolisCity_Gym_B1F_Text_AnnikaIntro, SootopolisCity_Gym_B1F_Text_AnnikaDefeat
	msgbox SootopolisCity_Gym_B1F_Text_AnnikaPostBattle, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_B1F_EventScript_Daphne::
	trainerbattle_single TRAINER_DAPHNE, SootopolisCity_Gym_B1F_Text_DaphneIntro, SootopolisCity_Gym_B1F_Text_DaphneDefeat
	msgbox SootopolisCity_Gym_B1F_Text_DaphnePostBattle, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SootopolisCity_Gym_B1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SootopolisCity_Gym_B1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SootopolisCity_Gym_B1F/text_es.inc"
.else
	.include "data/maps/SootopolisCity_Gym_B1F/text.inc"
.endif
.endif
.endif
=======
SootopolisCity_Gym_B1F_Text_AndreaIntro:
	.string "Te voy a enseñar una muestra de todo\n"
	.string "lo que he aprendido con GALANO.$"

SootopolisCity_Gym_B1F_Text_AndreaDefeat:
	.string "GALANO no va a estar contento…$"

SootopolisCity_Gym_B1F_Text_AndreaPostBattle:
	.string "Te sugiero que intentes caminar sobre\n"
	.string "todas las baldosas. Pero sobre toditas,\l"
	.string "todas. Podría pasar algo interesante…$"

SootopolisCity_Gym_B1F_Text_CrissyIntro:
	.string "Has venido desde muy lejos, pero no\n"
	.string "creas que llegarás hasta GALANO.\p"
	.string "¡No si depende de mí!$"

SootopolisCity_Gym_B1F_Text_CrissyDefeat:
	.string "¡Qué fuerte eres!\n"
	.string "Me he dejado engañar por tu aspecto…$"

SootopolisCity_Gym_B1F_Text_CrissyPostBattle:
	.string "Puede que tú sí seas capaz\n"
	.string "de poner a GALANO en un brete.$"

SootopolisCity_Gym_B1F_Text_DaphneIntro:
	.string "Ver a GALANO en acción\n"
	.string "es todo un espectáculo.\p"
	.string "De hecho, es lo que me dio ganas\n"
	.string "de llegar a ser una ENTRENADORA.$"

SootopolisCity_Gym_B1F_Text_DaphneDefeat:
	.string "Has luchado con mucha más gracia\n"
	.string "y elegancia que yo…$"

SootopolisCity_Gym_B1F_Text_DaphnePostBattle:
	.string "Tu estilo combatiendo es inigualable.\p"
	.string "Y yo soy tan feliz de poder disfrutar\n"
	.string "de la belleza de los POKéMON…$"

SootopolisCity_Gym_B1F_Text_ConnieIntro:
	.string "Vas a aprender lo duro que puede\n"
	.string "ser un combate…$"

SootopolisCity_Gym_B1F_Text_ConnieDefeat:
	.string "Ejem…\n"
	.string "Más bien lo he aprendido yo…$"

SootopolisCity_Gym_B1F_Text_ConniePostBattle:
	.string "Te voy a decir algo…\p"
	.string "Si quieres llegar hasta GALANO, debes\n"
	.string "caminar sobre cada baldosa de la sala,\l"
	.string "pero sólo una vez sobre cada una.$"

SootopolisCity_Gym_B1F_Text_BridgetIntro:
	.string "El GIMNASIO POKéMON de mayor nivel\n"
	.string "en toda la región de HOENN es…\p"
	.string "¡el GIMNASIO de ARRECÍPOLIS!$"

SootopolisCity_Gym_B1F_Text_BridgetDefeat:
	.string "¡Tu nivel de combate es superior!$"

SootopolisCity_Gym_B1F_Text_BridgetPostBattle:
	.string "Yo creo que no hay que anclarse\n"
	.string "en ningún GIMNASIO, aunque sea bueno.\p"
	.string "Se mejora mucho más entrenando\n"
	.string "en varios sitios. ¡Y es más divertido!$"

SootopolisCity_Gym_B1F_Text_OliviaIntro:
	.string "Entreno mis POKéMON con GALANO.\p"
	.string "¡No será tan fácil vencerme!$"

SootopolisCity_Gym_B1F_Text_OliviaDefeat:
	.string "Me han derrotado…$"

SootopolisCity_Gym_B1F_Text_OliviaPostBattle:
	.string "Creo que tienes potencial.\n"
	.string "¿Por qué no te quedas a entrenar\l"
	.string "en este GIMNASIO?$"

SootopolisCity_Gym_B1F_Text_TiffanyIntro:
	.string "¿Imaginas deslizarte grácilmente\n"
	.string "por el hielo sin caer ni una vez?\p"
	.string "¡Un ENTRENADOR capaz de hacer\n"
	.string "eso es el colmo de la elegancia!$"

SootopolisCity_Gym_B1F_Text_TiffanyDefeat:
	.string "Eh… ¿Qué ha pasado aquí?$"

SootopolisCity_Gym_B1F_Text_TiffanyPostBattle:
	.string "Voy a decir una perogrullada, pero está\n"
	.string "claro que ganar o perder no depende\l"
	.string "de la edad… Y ése es tu caso.$"

SootopolisCity_Gym_B1F_Text_BethanyIntro:
	.string "Cuando estoy con mis POKéMON,\n"
	.string "el tiempo pasa en un “plisplás”.$"

SootopolisCity_Gym_B1F_Text_BethanyDefeat:
	.string "Me has dejado “plisplada”.$"

SootopolisCity_Gym_B1F_Text_BethanyPostBattle:
	.string "Espero que este incidente no me haga\n"
	.string "olvidar que la vida es “plisplante”.$"

SootopolisCity_Gym_B1F_Text_AnnikaIntro:
	.string "Si lo prefieres, puedo usar POKéMON\n"
	.string "muy, pero que muy raros en combate.$"

SootopolisCity_Gym_B1F_Text_AnnikaDefeat:
	.string "¡Pues vaya! ¿Pero has podido echar\n"
	.string "un buen vistazo a mis POKéMON?$"

SootopolisCity_Gym_B1F_Text_AnnikaPostBattle:
	.string "Vine a este GIMNASIO porque GALANO\n"
	.string "alabó encarecidamente a mis POKéMON.\p"
	.string "Oh, ojalá hubiera conocido a GALANO\n"
	.string "hace años, cuando era joven…$"

SootopolisCity_Gym_B1F_Text_BriannaIntro:
	.string "Ji, ji, ji…\n"
	.string "Tienes un encanto especial.$"

SootopolisCity_Gym_B1F_Text_BriannaDefeat:
	.string "Qué mal…\n"
	.string "Te lo he puesto muy fácil.$"

SootopolisCity_Gym_B1F_Text_BriannaPostBattle:
	.string "Estoy segura de que GALANO no dejará\n"
	.string "que le pongas un dedo encima. Ji, ji…$"

>>>>>>> Egg/spanish
