.set LOCALID_NURSE, 1

SootopolisCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SootopolisCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
	end

SootopolisCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_Gentleman::
	lock
	faceplayer
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
	msgbox SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries::
	msgbox SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_Woman::
	lock
	faceplayer
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
	msgbox SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries::
	msgbox SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/SootopolisCity_PokemonCenter_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/SootopolisCity_PokemonCenter_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/SootopolisCity_PokemonCenter_1F/text_es.inc"
.else
	.include "data/maps/SootopolisCity_PokemonCenter_1F/text.inc"
.endif
.endif
.endif
=======
SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn:
	.string "Dicen que PLUBIO es el mejor\n"
	.string "ENTRENADOR de HOENN.\p"
	.string "El GIMNASIO de este lugar está\n"
	.string "dirigido por el maestro de PLUBIO.\p"
	.string "Pero los del ALTO MANDO… son aún\n"
	.string "más fuertes que el mentor de PLUBIO.\p"
	.string "No me lo puedo ni imaginar…$"

SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge:
	.string "Todo el mundo se ha escondido\n"
	.string "en su casa y no quiere salir.\p"
	.string "Yo desde luego no tengo ninguna\n"
	.string "intención de aventurarme ahí fuera.$"

SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon:
	.string "Pase lo que pase, yo siempre seré\n"
	.string "amiga de los POKéMON.\p"
	.string "¡Es que me divierto tanto con ellos!$"

SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends:
	.string "Los POKéMON son nuestros amigos, ¿no?\p"
	.string "Entonces, ¿a qué viene un\n"
	.string "comportamiento tan salvaje?$"

>>>>>>> Egg/spanish
