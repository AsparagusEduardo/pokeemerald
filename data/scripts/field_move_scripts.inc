@ Interact with cuttable tree
EventScript_CutTree::
	lockall
	goto_if_unset FLAG_BADGE01_GET, EventScript_CheckTreeCantCut
	checkpartymove MOVE_CUT
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CheckTreeCantCut
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_CUT
	msgbox Text_WantToCut, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelCut
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

@ Use cut from party menu
EventScript_UseCut::
	lockall
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto EventScript_CutTreeDown
	end

EventScript_CutTreeDown::
	applymovement VAR_LAST_TALKED, Movement_CutTreeDown
	waitmovement 0
	removeobject VAR_LAST_TALKED
	releaseall
	end

Movement_CutTreeDown:
	cut_tree
	step_end

EventScript_CheckTreeCantCut::
	msgbox Text_CantCut, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelCut::
	closemessage
	releaseall
	end

.ifdef FRENCH
Text_WantToCut:
	.string "Cet arbre semble pouvoir être COUPE.\p"
	.string "Voulez-vous utiliser COUPE?$"

Text_MonUsedFieldMove:
	.string "{STR_VAR_1} utilise {STR_VAR_2}.$"

Text_CantCut:
	.string "Cet arbre semble pouvoir être COUPE.$"
.else
.ifdef ITALIAN
Text_WantToCut:
	.string "L’albero si può abbattere con TAGLIO.\p"
	.string "Vuoi usare TAGLIO?$"

Text_MonUsedFieldMove:
	.string "{STR_VAR_1} usa {STR_VAR_2}!$"

Text_CantCut:
	.string "L’albero si può abbattere con TAGLIO.$"
.else
.ifdef SPANISH
Text_WantToCut:
	.string "Parece que puedes CORTAR este árbol.\p"
	.string "¿Usas CORTE?$"

Text_MonUsedFieldMove:
	.string "{STR_VAR_1} usó {STR_VAR_2}.$"

Text_CantCut:
	.string "Parece que puedes CORTAR este árbol.$"
.else
Text_WantToCut:
	.string "This tree looks like it can be\n"
	.string "CUT down!\p"
	.string "Would you like to CUT it?$"

Text_MonUsedFieldMove:
	.string "{STR_VAR_1} used {STR_VAR_2}!$"

Text_CantCut:
	.string "This tree looks like it can be\n"
	.string "CUT down!$"
.endif
.endif
.endif

@ Interact with smashable rock
EventScript_RockSmash::
	lockall
	goto_if_unset FLAG_BADGE03_GET, EventScript_CantSmashRock
	checkpartymove MOVE_ROCK_SMASH
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSmashRock
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_ROCK_SMASH
	msgbox Text_WantToSmash, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelSmash
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

@ Use rock smash from party menu
EventScript_UseRockSmash::
	lockall
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

EventScript_SmashRock::
	applymovement VAR_LAST_TALKED, Movement_SmashRock
	waitmovement 0
	removeobject VAR_LAST_TALKED
	specialvar VAR_RESULT, TryUpdateRusturfTunnelState
	goto_if_eq VAR_RESULT, TRUE, EventScript_EndSmash
	special RockSmashWildEncounter
	goto_if_eq VAR_RESULT, FALSE, EventScript_EndSmash
	waitstate
	releaseall
	end

EventScript_EndSmash::
	releaseall
	end

Movement_SmashRock:
	rock_smash_break
	step_end

EventScript_CantSmashRock::
	msgbox Text_CantSmash, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelSmash::
	closemessage
	releaseall
	end

.ifdef FRENCH
Text_WantToSmash:
	.string "Ce bloc de pierre peut être brisé.\n"
	.string "Voulez-vous utiliser ECLATE-ROC?$"

Text_CantSmash:
	.string "C’est un bloc de pierre solide, mais un\n"
	.string "POKéMON peut être apte à le pulvériser.$"
.else
.ifdef ITALIAN
Text_WantToSmash:
	.string "Questa roccia può essere frantumata.\n"
	.string "Vuoi usare SPACCAROCCIA?$"

Text_CantSmash:
	.string "È una roccia dura, ma un POKéMON\n"
	.string "dovrebbe poterla frantumare.$"
.else
.ifdef SPANISH
Text_WantToSmash:
	.string "Parece que se puede romper esta roca.\n"
	.string "¿Usas GOLPE ROCA?$"

Text_CantSmash:
	.string "Es una roca muy dura, pero un\n"
	.string "POKéMON podría hacerla añicos.$"
.else
Text_WantToSmash:
	.string "This rock appears to be breakable.\n"
	.string "Would you like to use ROCK SMASH?$"

Text_CantSmash:
	.string "It's a rugged rock, but a POKéMON\n"
	.string "may be able to smash it.$"
.endif
.endif
.endif

EventScript_StrengthBoulder::
	lockall
	goto_if_unset FLAG_BADGE04_GET, EventScript_CantStrength
	goto_if_set FLAG_SYS_USE_STRENGTH, EventScript_CheckActivatedBoulder
	checkpartymove MOVE_STRENGTH
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantStrength
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToStrength, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelStrength
	closemessage
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_ActivateStrength
	end

EventScript_UseStrength::
	lockall
	dofieldeffect FLDEFF_USE_STRENGTH
	waitstate
	goto EventScript_ActivateStrength
	end

EventScript_ActivateStrength::
	setflag FLAG_SYS_USE_STRENGTH
	msgbox Text_MonUsedStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CantStrength::
	msgbox Text_CantStrength, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CheckActivatedBoulder::
	msgbox Text_StrengthActivated, MSGBOX_DEFAULT
	releaseall
	end

EventScript_CancelStrength::
	closemessage
	releaseall
	end

.ifdef FRENCH
Text_WantToStrength:
	.string "C’est un gros rocher, mais un POKéMON\n"
	.string "peut être apte à le déplacer.\p"
	.string "Voulez-vous utiliser FORCE?$"

Text_MonUsedStrength:
	.string "{STR_VAR_1} utilise FORCE.\p"
	.string "La capacité FORCE de {STR_VAR_1}\n"
	.string "permet de déplacer le rocher.$"

Text_CantStrength:
	.string "C’est un gros rocher, mais un POKéMON\n"
	.string "peut être apte à le déplacer.$"

Text_StrengthActivated:
	.string "FORCE permet de déplacer le rocher.$"
.else
.ifdef ITALIAN
Text_WantToStrength:
	.string "È un masso enorme, ma un POKéMON\n"
	.string "dovrebbe poterlo spostare.\p"
	.string "Vuoi usare FORZA?$"

Text_MonUsedStrength:
	.string "{STR_VAR_1} usa FORZA.\p"
	.string "La FORZA di {STR_VAR_1} riesce a\n"
	.string "spostare i massi.$"

Text_CantStrength:
	.string "È un masso enorme, ma un POKéMON\n"
	.string "dovrebbe poterlo spostare.$"

Text_StrengthActivated:
	.string "FORZA ha reso possibile spostare\n"
	.string "i massi.$"
.else
.ifdef SPANISH
Text_WantToStrength:
	.string "Es una roca enorme, pero un\n"
	.string "POKéMON podría moverla.\p"
	.string "¿Usas FUERZA?$"

Text_MonUsedStrength:
	.string "{STR_VAR_1} usó FUERZA.\p"
	.string "La FUERZA de {STR_VAR_1} logró\n"
	.string "desplazar la roca a un lado.$"

Text_CantStrength:
	.string "Es una roca enorme, pero un\n"
	.string "POKéMON podría apartarla.$"

Text_StrengthActivated:
	.string "Usar FUERZA ha permitido desplazar\n"
	.string "la roca a un lado.$"
.else
Text_WantToStrength:
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.\p"
	.string "Would you like to use STRENGTH?$"

Text_MonUsedStrength:
	.string "{STR_VAR_1} used STRENGTH!\p"
	.string "{STR_VAR_1}'s STRENGTH made it\n"
	.string "possible to move boulders around!$"

Text_CantStrength:
	.string "It's a big boulder, but a POKéMON\n"
	.string "may be able to push it aside.$"

Text_StrengthActivated:
	.string "STRENGTH made it possible to move\n"
	.string "boulders around.$"
.endif
.endif
.endif

EventScript_UseWaterfall::
	lockall
	checkpartymove MOVE_WATERFALL
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantWaterfall
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToWaterfall, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndWaterfall
	msgbox Text_MonUsedWaterfall, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_WATERFALL
	goto EventScript_EndWaterfall

EventScript_CannotUseWaterfall::
	lockall

EventScript_CantWaterfall::
	msgbox Text_CantWaterfall, MSGBOX_DEFAULT

EventScript_EndWaterfall::
	releaseall
	end

.ifdef FRENCH
Text_CantWaterfall:
	.string "Un mur d’eau s’abat dans un vacarme\n"
	.string "assourdissant.$"

Text_WantToWaterfall:
	.string "C’est une grande cascade.\n"
	.string "Voulez-vous utiliser CASCADE?$"

Text_MonUsedWaterfall:
	.string "{STR_VAR_1} utilise CASCADE.$"
.else
.ifdef ITALIAN
Text_CantWaterfall:
	.string "Una parete d’acqua che si schianta\n"
	.string "con un potente fragore…$"

Text_WantToWaterfall:
	.string "C’è un’enorme cascata.\n"
	.string "Vuoi usare CASCATA?$"

Text_MonUsedWaterfall:
	.string "{STR_VAR_1} usa CASCATA.$"
.else
.ifdef SPANISH
Text_CantWaterfall:
	.string "Un muro de agua cae\n"
	.string "con un estruendo estremecedor…$"

Text_WantToWaterfall:
	.string "Es una gran catarata.\n"
	.string "¿Usas CASCADA?$"

Text_MonUsedWaterfall:
	.string "{STR_VAR_1} usó CASCADA.$"
.else
Text_CantWaterfall:
	.string "A wall of water is crashing down with\n"
	.string "a mighty roar.$"

Text_WantToWaterfall:
	.string "It's a large waterfall.\n"
	.string "Would you like to use WATERFALL?$"

Text_MonUsedWaterfall:
	.string "{STR_VAR_1} used WATERFALL.$"
.endif
.endif
.endif

EventScript_UseDive::
	lockall
	checkpartymove MOVE_DIVE
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantDive
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToDive, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndDive
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndDive
	end

EventScript_CantDive::
	msgbox Text_CantDive, MSGBOX_DEFAULT
	releaseall
	end

EventScript_EndDive::
	releaseall
	end

EventScript_UseDiveUnderwater::
	lockall
	checkpartymove MOVE_DIVE
	goto_if_eq VAR_RESULT, PARTY_SIZE, EventScript_CantSurface
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	setfieldeffectargument 1, 1
	msgbox Text_WantToSurface, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EndSurface
	msgbox Text_MonUsedDive, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_DIVE
	goto EventScript_EndSurface
	end

EventScript_CantSurface::
	lockall
	msgbox Text_CantSurface, MSGBOX_DEFAULT
	goto EventScript_EndSurface
	end

EventScript_EndSurface::
	releaseall
	end

.ifdef FRENCH
Text_CantDive:
	.string "La mer est profonde. Un POKéMON\n"
	.string "doit pouvoir aller sous l’eau ici.$"

Text_WantToDive:
	.string "La mer est profonde ici.\n"
	.string "Voulez-vous utiliser PLONGEE?$"

Text_MonUsedDive:
	.string "{STR_VAR_1} utilise PLONGEE.$"

Text_CantSurface:
	.string "Une lumière vient d’en haut. Un POKéMON\n"
	.string "doit pouvoir remonter à la surface.$"

Text_WantToSurface:
	.string "Une lumière vient d’en haut.\n"
	.string "Voulez-vous utiliser PLONGEE?$"

EventScript_FailSweetScent::
	msgbox Text_FailSweetScent, MSGBOX_SIGN
	end

Text_FailSweetScent:
	.string "Apparemment, il n’y a rien ici…$"
.else
.ifdef ITALIAN
Text_CantDive:
	.string "Il mare è profondo qui. Ci si potrebbe\n"
	.string "immergere anche un POKéMON.$"

Text_WantToDive:
	.string "Il mare è profondo qui.\n"
	.string "Vuoi usare SUB?$"

Text_MonUsedDive:
	.string "{STR_VAR_1} usa SUB.$"

Text_CantSurface:
	.string "Una luce illumina l’acqua dall’alto.\n"
	.string "Da qui un POKéMON potrebbe riemergere.$"

Text_WantToSurface:
	.string "Una luce illumina l’acqua dall’alto.\n"
	.string "Vuoi usare SUB?$"

EventScript_FailSweetScent::
	msgbox Text_FailSweetScent, MSGBOX_SIGN
	end

Text_FailSweetScent:
	.string "Pare non ci sia nulla qui…$"
.else
.ifdef SPANISH
Text_CantDive:
	.string "El mar es muy profundo en esta zona.\n"
	.string "Un POKéMON podría bucear aquí.$"

Text_WantToDive:
	.string "El mar es muy profundo en esta zona.\n"
	.string "¿Usas BUCEO?$"

Text_MonUsedDive:
	.string "{STR_VAR_1} usó BUCEO.$"

Text_CantSurface:
	.string "La luz se filtra desde la superficie.\n"
	.string "Un POKéMON puede emerger aquí.$"

Text_WantToSurface:
	.string "La luz se filtra desde la superficie.\n"
	.string "¿Usas BUCEO?$"

EventScript_FailSweetScent::
	msgbox Text_FailSweetScent, MSGBOX_SIGN
	end

Text_FailSweetScent:
	.string "Parece que aquí no hay nada…$"
.else
Text_CantDive:
	.string "The sea is deep here. A POKéMON\n"
	.string "may be able to go underwater.$"

Text_WantToDive:
	.string "The sea is deep here.\n"
	.string "Would you like to use DIVE?$"

Text_MonUsedDive:
	.string "{STR_VAR_1} used DIVE.$"

Text_CantSurface:
	.string "Light is filtering down from above.\n"
	.string "A POKéMON may be able to surface.$"

Text_WantToSurface:
	.string "Light is filtering down from above.\n"
	.string "Would you like to use DIVE?$"

EventScript_FailSweetScent::
	msgbox Text_FailSweetScent, MSGBOX_SIGN
	end

Text_FailSweetScent:
	.string "Looks like there's nothing here…$"
.endif
.endif
.endif
