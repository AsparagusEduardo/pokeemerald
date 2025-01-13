.set LOCALID_NURSE, 1
.set LOCALID_LANETTE, 4

FallarborTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FallarborTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

FallarborTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

FallarborTown_PokemonCenter_1F_EventScript_Girl::
	msgbox FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown, MSGBOX_NPC
	end

FallarborTown_PokemonCenter_1F_EventScript_ExpertM::
	msgbox FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees, MSGBOX_NPC
	end

FallarborTown_PokemonCenter_1F_EventScript_Lanette::
	lock
	faceplayer
	msgbox FallarborTown_PokemonCenter_1F_Text_LanetteGreeting, MSGBOX_DEFAULT
	closemessage
	switch VAR_FACING
	case DIR_NORTH, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth
	case DIR_WEST, FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest
	end

FallarborTown_PokemonCenter_1F_EventScript_LanetteExitNorth::
	applymovement LOCALID_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth
	waitmovement 0
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
	end

FallarborTown_PokemonCenter_1F_EventScript_LanetteExitWest::
	applymovement LOCALID_LANETTE, FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest
	waitmovement 0
	goto FallarborTown_PokemonCenter_1F_EventScript_LanetteExited
	end

FallarborTown_PokemonCenter_1F_EventScript_LanetteExited::
	playse SE_SLIDING_DOOR
	removeobject LOCALID_LANETTE
	clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
	release
	end

FallarborTown_PokemonCenter_1F_Movement_LanetteExitNorth:
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

FallarborTown_PokemonCenter_1F_Movement_LanetteExitWest:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/FallarborTown_PokemonCenter_1F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/FallarborTown_PokemonCenter_1F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/FallarborTown_PokemonCenter_1F/text_es.inc"
.else
	.include "data/maps/FallarborTown_PokemonCenter_1F/text.inc"
.endif
.endif
.endif
=======
FallarborTown_PokemonCenter_1F_Text_LanetteGreeting:
	.string "Hola.\n"
	.string "¿Quién eres?\p"
	.string "Ah, te llamas {PLAYER}{KUN}.\n"
	.string "Ya veo que entrenas POKéMON.\p"
	.string "Por lo tanto, usas mi Sistema de\n"
	.string "Almacenamiento de POKéMON.\p"
	.string "He llegado a esta conclusión por un\n"
	.string "simple proceso de deducción lógica.\p"
	.string "Hablaste conmigo porque querías\n"
	.string "acceder a algo en este PC.\p"
	.string "Ay, pero si no me he presentado,\n"
	.string "perdona. Yo soy AREDIA.\p"
	.string "Me alegro mucho de conocerte y saber\n"
	.string "que usas el Sistema de Almacenamiento.\p"
	.string "Cuando puedas, ven a verme a casa.\n"
	.string "Vivo en la RUTA 114.$"

FallarborTown_PokemonCenter_1F_Text_FossilManiacEdgeOfTown:
	.string "Me pregunto qué aspecto tenían los\n"
	.string "POKéMON hace mucho, mucho tiempo…\p"
	.string "Puede que el FOSILMANÍACO que vive\n"
	.string "al final del pueblo lo sepa.$"

FallarborTown_PokemonCenter_1F_Text_PlantHardyTrees:
	.string "Plantamos árboles resistentes en los\n"
	.string "campos de PARDAL. Pueden crecer\l"
	.string "incluso en la ceniza volcánica.$"

>>>>>>> Egg/spanish
