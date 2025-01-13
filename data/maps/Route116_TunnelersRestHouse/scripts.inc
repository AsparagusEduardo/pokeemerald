Route116_TunnelersRestHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
	.byte 0

Route116_TunnelersRestHouse_OnTransition:
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
	end

Route116_TunnelersRestHouse_EventScript_Tunneler1::
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
	end

Route116_TunnelersRestHouse_EventScript_Tunneler2::
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
	end

Route116_TunnelersRestHouse_EventScript_Tunneler3::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
	release
	end

Route116_TunnelersRestHouse_EventScript_TunnelOpened::
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/Route116_TunnelersRestHouse/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/Route116_TunnelersRestHouse/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/Route116_TunnelersRestHouse/text_es.inc"
.else
	.include "data/maps/Route116_TunnelersRestHouse/text.inc"
.endif
.endif
.endif
=======
Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
	.string "El TÚNEL FERVERGAL…\p"
	.string "Al principio teníamos un equipo con el\n"
	.string "último grito en maquinaria trabajando\l"
	.string "en él y tuvimos que parar.\p"
	.string "Resulta que podríamos haber afectado\n"
	.string "negativamente a los POKéMON\l"
	.string "salvajes de la zona.\p"
	.string "Por eso ahora nos dedicamos\n"
	.string "a tocarnos la barriga…$"

Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
	.string "Hay un hombre que está cavando\n"
	.string "un TÚNEL a VERDEGAL él solito.\l"
	.string "Parece desesperado por terminar.\p"
	.string "Dice que, si cava poco a poco, sin usar\n"
	.string "máquinas, no molestará a los POKéMON\l"
	.string "ni causará daños medioambientales…$"

Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
	.string "Para llegar a VERDEGAL sin usar\n"
	.string "el TÚNEL, tienes que atravesar el mar\l"
	.string "hasta AZULIZA, navegar a CIUDAD\l"
	.string "PORTUAL y luego viajar a MALVALONA…$"

Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
	.string "¿Te has enterado?\n"
	.string "¡Han terminado el TÚNEL a VERDEGAL!\p"
	.string "A veces creo que, si lo deseas de veras,\n"
	.string "tus sueños se pueden hacer realidad…$"

>>>>>>> Egg/spanish
