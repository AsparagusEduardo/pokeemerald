PacifidlogTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
	.byte 0

PacifidlogTown_OnTransition:
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
	end

PacifidlogTown_OnResume:
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
	end

PacifidlogTown_EventScript_NinjaBoy::
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Girl::
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
	end

PacifidlogTown_EventScript_Fisherman::
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
	end

PacifidlogTown_EventScript_TownSign::
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/PacifidlogTown/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/PacifidlogTown/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/PacifidlogTown/text_es.inc"
.else
	.include "data/maps/PacifidlogTown/text.inc"
.endif
.endif
.endif
=======
PacifidlogTown_Text_FastRunningCurrent:
	.string "El mar que separa OROMAR de CIUDAD\n"
	.string "PORTUAL tiene muchas corrientes.\p"
	.string "¡Si haces SURF en él, puedes acabar\n"
	.string "en cualquier sitio!$"

PacifidlogTown_Text_NeatHousesOnWater:
	.string "Mira qué cosa más chula.\n"
	.string "¡Las casas flotan sobre el agua!\p"
	.string "¡Yo he nacido aquí!$"

PacifidlogTown_Text_SkyPillarTooScary:
	.string "¿El PILAR CELESTE?\p"
	.string "Ah, tú te refieres a esa torre\n"
	.string "altísima que está más allá.\p"
	.string "Lo que es yo, no subía hasta arriba\n"
	.string "ni loco. Ese sitio me da escalofríos.\p"
	.string "Por el contrario, vivir a nivel del\n"
	.string "mar en OROMAR es una gozada.$"

PacifidlogTown_Text_TownSign:
	.string "PUEBLO OROMAR\p"
	.string "“Donde el radiante sol ilumina\n"
	.string "las aguas cada día.”$"

>>>>>>> Egg/spanish
