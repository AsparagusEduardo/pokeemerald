RustboroCity_House3_MapScripts::
	.byte 0

RustboroCity_House3_EventScript_OldMan::
	msgbox RustboroCity_House3_Text_IGivePerfectlySuitedNicknames, MSGBOX_NPC
	end

RustboroCity_House3_EventScript_OldWoman::
	msgbox RustboroCity_House3_Text_NamingPikachuPekachu, MSGBOX_NPC
	end

@ Misspelling on purpose, see nickname
RustboroCity_House3_EventScript_Pekachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox RustboroCity_House3_Text_Pekachu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/RustboroCity_House3/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/RustboroCity_House3/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/RustboroCity_House3/text_es.inc"
.else
	.include "data/maps/RustboroCity_House3/text.inc"
.endif
.endif
.endif
=======
RustboroCity_House3_Text_IGivePerfectlySuitedNicknames:
	.string "Yo siempre pongo motes estupendos\n"
	.string "a mis POKéMON.\p"
	.string "Así puedo demostrar al mundo\n"
	.string "lo original que soy, je, je.$"

RustboroCity_House3_Text_NamingPikachuPekachu:
	.string "¿Y tú piensas que llamar a un PIKACHU\n"
	.string "PEKACHU cambia mucho?\p"
	.string "Ya sé que es mejor poner un nombre\n"
	.string "fácil de entender, pero…$"

RustboroCity_House3_Text_Pekachu:
	.string "PEKACHU: ¡Peka!$"

>>>>>>> Egg/spanish
