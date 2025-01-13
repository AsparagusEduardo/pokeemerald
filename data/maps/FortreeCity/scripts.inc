FortreeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
	.byte 0

FortreeCity_OnTransition:
	setflag FLAG_VISITED_FORTREE_CITY
	end

FortreeCity_OnResume:
	setstepcallback STEP_CB_FORTREE_BRIDGE
	end

FortreeCity_EventScript_Man::
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
	end

FortreeCity_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_WomanGymAccessible::
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_Girl::
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
	end

FortreeCity_EventScript_OldMan::
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
	end

FortreeCity_EventScript_Boy::
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
	end

FortreeCity_EventScript_GameboyKid::
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
	end

FortreeCity_EventScript_CitySign::
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
	end

FortreeCity_EventScript_GymSign::
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
	end

FortreeCity_EventScript_Kecleon::
	lock
	faceplayer
	checkitem ITEM_DEVON_SCOPE
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
	release
	end

FortreeCity_EventScript_AskUseDevonScope::
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
	release
	end

FortreeCity_EventScript_UseDevonScope::
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
	waitmovement 0
	waitse
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
	waitmovement 0
	removeobject VAR_LAST_TALKED
	setflag FLAG_KECLEON_FLED_FORTREE
	release
	end

FortreeCity_Movement_KecleonFlee:
	walk_right
	step_end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/FortreeCity/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/FortreeCity/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/FortreeCity/text_es.inc"
.else
	.include "data/maps/FortreeCity/text.inc"
.endif
.endif
.endif
=======
FortreeCity_Text_SawGiganticPokemonInSky:
	.string "Nadie me cree, pero he visto un\n"
	.string "POKéMON gigantesco en el cielo.\p"
	.string "Parecía que se retorcía. Iba volando\n"
	.string "en dirección a la RUTA 131.\p"
	.string "Mmm… Hueles a chamuscado…\p"
	.string "¿Has estado en un volcán o algo así?$"

FortreeCity_Text_SomethingBlockingGym:
	.string "Quiero ir al GIMNASIO POKéMON,\n"
	.string "pero hay algo bloqueando el camino.\p"
	.string "Después de todas las molestias que me\n"
	.string "he tomado, he tenido que ir a entrenar\l"
	.string "a la RUTA 120…$"

FortreeCity_Text_ThisTimeIllBeatWinona:
	.string "Tengo junto a mí a mi POKéMON favorito.\n"
	.string "Seguro que esta vez venzo a ALANA.$"

FortreeCity_Text_TreesGrowByDrinkingRainwater:
	.string "La tierra absorbe el agua de lluvia\n"
	.string "y los árboles absorben esa agua.\p"
	.string "CIUDAD ARBORADA existe porque\n"
	.string "tenemos agua y tierra.$"

FortreeCity_Text_EveryoneHealthyAndLively:
	.string "Todas las casas de la ciudad están\n"
	.string "construidas sobre árboles.\p"
	.string "Gracias a nuestro estilo de vida,\n"
	.string "todos aquí somos alegres y sanos.\p"
	.string "Vamos, mírame a mí…,\n"
	.string "¡estoy hecho un chaval!$"

FortreeCity_Text_BugPokemonComeThroughWindow:
	.string "Vivir en la copa de los árboles mola.\p"
	.string "Pero a veces entran POKéMON de tipo\n"
	.string "BICHO por la ventana…\l"
	.string "¡Y te pegan cada susto…!$"

FortreeCity_Text_PokemonThatEvolveWhenTraded:
	.string "Algunos POKéMON evolucionan cuando\n"
	.string "los intercambias o al menos eso dicen.$"

FortreeCity_Text_SomethingUnseeable:
	.string "Algo invisible corta el paso.$"

FortreeCity_Text_UnseeableUseDevonScope:
	.string "Algo invisible corta el paso.\p"
	.string "¿Usas el DETECTOR DEVON?$"

FortreeCity_Text_UsedDevonScopePokemonFled:
	.string "{PLAYER} usó el DETECTOR DEVON.\p"
	.string "¡Un POKéMON invisible se ha vuelto\n"
	.string "totalmente visible!\p"
	.string "¡El POKéMON ha huido asustado!$"

FortreeCity_Text_CitySign:
	.string "CIUDAD ARBORADA\n"
	.string "“La ciudad arbórea que juega\l"
	.string "con la naturaleza.”$"

FortreeCity_Text_GymSign:
	.string "GIMNASIO POKéMON de CIUDAD ARBORADA\n"
	.string "LÍDER: ALANA\p"
	.string "“La amante de los pájaros POKéMON\n"
	.string "que planea en las alturas.”$"

>>>>>>> Egg/spanish
