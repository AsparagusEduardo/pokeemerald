MeteorFalls_1F_2R_MapScripts::
	.byte 0

MeteorFalls_1F_2R_EventScript_Nicolas::
	trainerbattle_single TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasIntro, MeteorFalls_1F_2R_Text_NicolasDefeat, MeteorFalls_1F_2R_EventScript_RegisterNicolas
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchNicolas
	msgbox MeteorFalls_1F_2R_Text_NicolasPostBattle, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_RegisterNicolas::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MeteorFalls_1F_2R_Text_NicolasRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_NICOLAS_1
	release
	end

MeteorFalls_1F_2R_EventScript_RematchNicolas::
	trainerbattle_rematch TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasRematchIntro, MeteorFalls_1F_2R_Text_NicolasRematchDefeat
	msgbox MeteorFalls_1F_2R_Text_NicolasPostRematch, MSGBOX_AUTOCLOSE
	end

MeteorFalls_1F_2R_EventScript_John::
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnIntro, MeteorFalls_1F_2R_Text_JohnDefeat, MeteorFalls_1F_2R_Text_JohnNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJohn
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchJohn
	msgbox MeteorFalls_1F_2R_Text_JohnPostBattle, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_RegisterJohn::
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_JOHN_AND_JAY_1
	release
	end

MeteorFalls_1F_2R_EventScript_RematchJohn::
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnRematchIntro, MeteorFalls_1F_2R_Text_JohnRematchDefeat, MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons
	msgbox MeteorFalls_1F_2R_Text_JohnPostRematch, MSGBOX_AUTOCLOSE
	end

MeteorFalls_1F_2R_EventScript_Jay::
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayIntro, MeteorFalls_1F_2R_Text_JayDefeat, MeteorFalls_1F_2R_Text_JayNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJay
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MeteorFalls_1F_2R_EventScript_RematchJay
	msgbox MeteorFalls_1F_2R_Text_JayPostBattle, MSGBOX_DEFAULT
	release
	end

MeteorFalls_1F_2R_EventScript_RegisterJay::
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT  @ John speaks for both during register
	register_matchcall TRAINER_JOHN_AND_JAY_1
	release
	end

MeteorFalls_1F_2R_EventScript_RematchJay::
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayRematchIntro, MeteorFalls_1F_2R_Text_JayRematchDefeat, MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons
	msgbox MeteorFalls_1F_2R_Text_JayPostRematch, MSGBOX_AUTOCLOSE
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/MeteorFalls_1F_2R/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/MeteorFalls_1F_2R/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/MeteorFalls_1F_2R/text_es.inc"
.else
	.include "data/maps/MeteorFalls_1F_2R/text.inc"
.endif
.endif
.endif
=======
MeteorFalls_1F_2R_Text_NicolasIntro:
	.string "Aquí es donde los amantes de los\n"
	.string "DRAGONES entrenamos.\p"
	.string "A veces viene el CAMPEÓN de visita.\n"
	.string "¿Ves como somos algo especial?$"

MeteorFalls_1F_2R_Text_NicolasDefeat:
	.string "¡Uf!\n"
	.string "¡No esperaba que fueras tan fuerte!$"

MeteorFalls_1F_2R_Text_NicolasPostBattle:
	.string "Te aguarda un camino largo y difícil.\p"
	.string "¿Cuándo lograré llegar triunfante\n"
	.string "hasta el final con mis POKéMON?$"

MeteorFalls_1F_2R_Text_NicolasRegister:
	.string "Quiero saber más sobre tus habilidades.\n"
	.string "Déjame registrarte en mi POKéNAV.$"

MeteorFalls_1F_2R_Text_NicolasRematchIntro:
	.string "Desde que nos conocimos, hemos\n"
	.string "entrenado duro para ser los mejores.\p"
	.string "¡Veamos cuánto hemos mejorado!$"

MeteorFalls_1F_2R_Text_NicolasRematchDefeat:
	.string "¡Uf!\n"
	.string "¡No esperaba que fueras tan fuerte!$"

MeteorFalls_1F_2R_Text_NicolasPostRematch:
	.string "Se ve que has estado entrenando\n"
	.string "mucho con tus POKéMON.\p"
	.string "¡Pero yo también puedo mejorar!$"

MeteorFalls_1F_2R_Text_JohnIntro:
	.string "JULI: Siempre hemos luchado a dúo.\n"
	.string "Juntos somos más fuertes.$"

MeteorFalls_1F_2R_Text_JohnDefeat:
	.string "JULI: Oh…\n"
	.string "Hemos perdido, querida.$"

MeteorFalls_1F_2R_Text_JohnPostBattle:
	.string "JULI: Llevamos cincuenta años casados.\p"
	.string "Y ahora que lo pienso… Todavía\n"
	.string "no he vencido a mi mujer en combate.$"

MeteorFalls_1F_2R_Text_JohnNotEnoughMons:
	.string "JULI: ¡Vaya, vaya! ¡Qué joven eres!\p"
	.string "¿Quieres desafiarnos? Pues entonces\n"
	.string "tendrás que volver con más POKéMON.$"

MeteorFalls_1F_2R_Text_JohnRegister:
	.string "JULI: Dime, si surgiera la oportunidad,\n"
	.string "¿volverías a enfrentarte a nosotros?$"

MeteorFalls_1F_2R_Text_JayIntro:
	.string "NELA: Llevamos cincuenta años casados.\p"
	.string "El vínculo que nos une como pareja\n"
	.string "es fuerte como un roble.$"

MeteorFalls_1F_2R_Text_JayDefeat:
	.string "NELA: Oh…\n"
	.string "Hemos perdido, querido.$"

MeteorFalls_1F_2R_Text_JayPostBattle:
	.string "NELA: Cincuenta años de matrimonio…\p"
	.string "Cada vez que discutíamos,\n"
	.string "lo resolvíamos con un combate POKéMON.$"

MeteorFalls_1F_2R_Text_JayNotEnoughMons:
	.string "NELA: ¡Vaya, vaya! ¡Qué joven eres!\p"
	.string "¿Quieres desafiarnos? Pues entonces\n"
	.string "tendrás que volver con más POKéMON.$"

MeteorFalls_1F_2R_Text_JohnRematchIntro:
	.string "JULI: Siempre hemos luchado a dúo.\n"
	.string "Juntos somos más fuertes.$"

MeteorFalls_1F_2R_Text_JohnRematchDefeat:
	.string "JULI: Oh…\n"
	.string "Hemos perdido, querida.$"

MeteorFalls_1F_2R_Text_JohnPostRematch:
	.string "JULI: Llevamos cincuenta años casados.\p"
	.string "Y ahora que lo pienso… Mi mujer y yo\n"
	.string "hemos combatido día sí y día no.$"

MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons:
	.string "JULI: ¡Vaya, vaya! ¡Qué joven eres!\p"
	.string "¿Quieres desafiarnos? Pues entonces\n"
	.string "tendrás que volver con más POKéMON.$"

MeteorFalls_1F_2R_Text_JayRematchIntro:
	.string "NELA: Llevamos cincuenta años casados.\p"
	.string "Nos hemos apoyado el uno al otro\n"
	.string "en las duras y en las maduras.$"

MeteorFalls_1F_2R_Text_JayRematchDefeat:
	.string "NELA: Oh…\n"
	.string "Hemos perdido, querido.$"

MeteorFalls_1F_2R_Text_JayPostRematch:
	.string "NELA: Cincuenta años de matrimonio…\n"
	.string "Han pasado tantas cosas…\p"
	.string "Espero que siempre seamos\n"
	.string "tan felices como hasta ahora.$"

MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons:
	.string "NELA: ¡Vaya, vaya! ¡Qué joven eres!\p"
	.string "¿Quieres desafiarnos? Pues entonces\n"
	.string "tendrás que volver con más POKéMON.$"

>>>>>>> Egg/spanish
