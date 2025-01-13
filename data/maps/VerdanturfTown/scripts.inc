.set LOCALID_TWIN, 2

VerdanturfTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
	.byte 0

VerdanturfTown_OnTransition:
	setflag FLAG_VISITED_VERDANTURF_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	end

VerdanturfTown_EventScript_Twin::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_TwinTunnelOpen::
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_Man::
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Camper::
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_BoyTunnelOpen::
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_TownSign::
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_WandasHouseSign::
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_BattleTentSign::
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_RusturfTunnelSign::
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/VerdanturfTown/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/VerdanturfTown/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/VerdanturfTown/text_es.inc"
.else
	.include "data/maps/VerdanturfTown/text.inc"
.endif
.endif
.endif
=======
VerdanturfTown_Text_ManTryingToDigTunnel:
	.string "Me lo ha dicho mi papá.\p"
	.string "Dice que este túnel está lleno\n"
	.string "de POKéMON asustadizos.\p"
	.string "Si escuchan algún ruido fuerte, se\n"
	.string "asustan y montan alborotos.\p"
	.string "Por eso detuvieron el proyecto de\n"
	.string "construcción del túnel.\p"
	.string "¡Pero hay un hombre empeñado en\n"
	.string "terminar el túnel él solito!$"

VerdanturfTown_Text_ManDugTunnelForLove:
	.string "Un hombre excavó un túnel para\n"
	.string "la mujer que amaba…\p"
	.string "Es decir, para poder ir a verla más\n"
	.string "fácilmente. ¡Eso es amor, señores!$"

VerdanturfTown_Text_AirCleanHere:
	.string "Por cómo sopla el viento, aquí nunca\n"
	.string "llega la ceniza volcánica.\p"
	.string "Al contrario, el aire de aquí es puro\n"
	.string "y agradable. Es muy bueno para las\l"
	.string "personas de salud delicada.$"

VerdanturfTown_Text_MakeBattleTentDebut:
	.string "Mis POKéMON y yo estamos de racha.\p"
	.string "Así que he decidido probar suerte en\n"
	.string "la TIENDA de BATALLA que hay aquí.$"

VerdanturfTown_Text_GuyTryingToBustThroughCave:
	.string "¿Has visto la cueva que hay cerca de\n"
	.string "la TIENDA POKéMON?\p"
	.string "Dentro hay un tipo que intenta romper\n"
	.string "rocas para poder llegar al otro lado.\p"
	.string "Sería estupendo tener el túnel…\n"
	.string "Visitar CIUDAD FÉRRICA sería\l"
	.string "más sencillo.$"

VerdanturfTown_Text_EasyToGetToRustboroNow:
	.string "La cueva que hay cerca de la TIENDA\n"
	.string "POKéMON es ahora un túnel que\l"
	.string "conecta dos ciudades.\p"
	.string "Es lo mejor. Ahora no cuesta nada ir\n"
	.string "a comprar productos DEVON a\l"
	.string "CIUDAD FÉRRICA.$"

VerdanturfTown_Text_TownSign:
	.string "PUEBLO VERDEGAL\p"
	.string "“Las ventosas tierras altas que\n"
	.string "siempre huelen a hierba fresca.”$"

VerdanturfTown_Text_WandasHouse:
	.string "CASA de CLARA$"

VerdanturfTown_Text_BattleTentSign:
	.string "TIENDA de BATALLA de PUEBLO VERDEGAL\n"
	.string "“¡Disfruta de los mejores combates!”$"

VerdanturfTown_Text_RusturfTunnelSign:
	.string "TÚNEL FERVERGAL\n"
	.string "“Conecta CIUDAD FÉRRICA y VERDEGAL.\p"
	.string "El proyecto de construcción del\n"
	.string "túnel ha sido cancelado.”$"

>>>>>>> Egg/spanish
