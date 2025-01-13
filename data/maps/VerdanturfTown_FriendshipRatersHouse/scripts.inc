VerdanturfTown_FriendshipRatersHouse_MapScripts::
	.byte 0

VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater::
	lock
	faceplayer
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	switch VAR_RESULT
	case FRIENDSHIP_NONE, VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou
	case FRIENDSHIP_1_TO_49, VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary
	case FRIENDSHIP_50_TO_99, VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou
	case FRIENDSHIP_100_TO_149, VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou
	case FRIENDSHIP_150_TO_199, VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot
	case FRIENDSHIP_200_TO_254, VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy
	case FRIENDSHIP_MAX, VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryWary, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_Pikachu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/VerdanturfTown_FriendshipRatersHouse/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/VerdanturfTown_FriendshipRatersHouse/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/VerdanturfTown_FriendshipRatersHouse/text_es.inc"
.else
	.include "data/maps/VerdanturfTown_FriendshipRatersHouse/text.inc"
.endif
.endif
.endif
=======
VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou:
	.string "Déjame que vea a tu POKéMON.\n"
	.string "Quiero saber cuánto te quiere…\p"
	.string "Ajá…\n"
	.string "Tu POKéMON…$"

VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou:
	.string "te adora.\n"
	.string "Es que no te puede querer más.\l"
	.string "Tanto amor me conmueve hasta a mí.$"

VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy:
	.string "parece muy feliz.\n"
	.string "Es obvio que te quiere un montón.$"

VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot:
	.string "te quiere mucho.\n"
	.string "Parece que necesita algo más de cariño.$"

VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou:
	.string "se está acostumbrando a ti.\n"
	.string "Parece que tiene confianza en ti.$"

VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou:
	.string "todavía debe acostumbrarse a ti.\n"
	.string "Le traes un poco al fresco.$"

VerdanturfTown_FriendshipRatersHouse_Text_VeryWary:
	.string "desconfía mucho de ti.\n"
	.string "Los ojos le brillan de forma extraña…\l"
	.string "Parece que no le gustas ni un pelo.$"

VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou:
	.string "Ejem, no resulta nada fácil decir esto…\p"
	.string "Lo siento, pero tu POKéMON no\n"
	.string "te traga. ¿No te hace sentirte fatal?$"

VerdanturfTown_FriendshipRatersHouse_Text_Pikachu:
	.string "PIKACHU: ¡Pika, pika!$"

>>>>>>> Egg/spanish
