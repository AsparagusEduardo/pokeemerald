MysteryGiftScript_SurfPichu::
	setvaddress MysteryGiftScript_SurfPichu
	vgoto_if_unset FLAG_MYSTERY_GIFT_DONE, SurfPichu_GiveIfPossible
	returnram

SurfPichu_GiveIfPossible:
	specialvar VAR_GIFT_PICHU_SLOT, CalculatePlayerPartyCount
	vgoto_if_eq VAR_GIFT_PICHU_SLOT, PARTY_SIZE, SurfPichu_FullParty
	setflag FLAG_MYSTERY_GIFT_DONE
	vcall SurfPichu_GiveEgg
	lock
	faceplayer
	vmessage sText_MysteryGiftEgg
	waitmessage
	waitbuttonpress
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	release
	end

SurfPichu_FullParty:
	lock
	faceplayer
	vmessage sText_FullParty
	waitmessage
	waitbuttonpress
	release
	end

SurfPichu_GiveEgg:
	giveegg SPECIES_PICHU
	setmodernfatefulencounter VAR_GIFT_PICHU_SLOT
	setmonmetlocation VAR_GIFT_PICHU_SLOT, METLOC_FATEFUL_ENCOUNTER
	vgoto_if_eq VAR_GIFT_PICHU_SLOT, 1, SurfPichu_Slot1
	vgoto_if_eq VAR_GIFT_PICHU_SLOT, 2, SurfPichu_Slot2
	vgoto_if_eq VAR_GIFT_PICHU_SLOT, 3, SurfPichu_Slot3
	vgoto_if_eq VAR_GIFT_PICHU_SLOT, 4, SurfPichu_Slot4
	vgoto_if_eq VAR_GIFT_PICHU_SLOT, 5, SurfPichu_Slot5
	return

SurfPichu_Slot1:
	setmonmove 1, 2, MOVE_SURF
	return

SurfPichu_Slot2::
	setmonmove 2, 2, MOVE_SURF
	return

SurfPichu_Slot3:
	setmonmove 3, 2, MOVE_SURF
	return

SurfPichu_Slot4:
	setmonmove 4, 2, MOVE_SURF
	return

SurfPichu_Slot5:
	setmonmove 5, 2, MOVE_SURF
	return

.ifdef FRENCH
sText_MysteryGiftEgg:
	.string "Merci d’utiliser le système\n"
	.string "CADEAU MYST.\p"
	.string "Nous avons un OEUF pour vous!\p"
	.string "Elevez-le avec amour et\n"
	.string "gentillesse.$"

sText_FullParty:
	.string "Oh, l’équipe est pleine.\p"
	.string "Revenez quand vous aurez rangé\n"
	.string "un POKéMON dans votre PC.$"
.else
.ifdef ITALIAN
sText_MysteryGiftEgg:
	.string "Grazie per usare il Sistema\n"
	.string "DONO SEGRETO.\p"
	.string "Abbiamo un regalo per te da un\n"
	.string "CENTRO POKéMON, un UOVO POKéMON!\p"
	.string "Trattalo con tanto amore!$"

sText_FullParty:
	.string "Non hai più posto nella tua\n"
	.string "squadra.\p"
	.string "Torna a trovarmi dopo aver\n"
	.string "depositato uno o più\l"
	.string "POKéMON nel PC.$"
.else
.ifdef SPANISH
sText_MysteryGiftEgg:
	.string "Gracias por usar el sistema\n"
	.string "del REGALO MISTERIOSO.\p"
	.string "Tenemos un REGALO del CENTRO\n"
	.string "POKéMON: ¡un HUEVO POKéMON!\p"
	.string "Cuídalo con tacto y cariño.$"

sText_FullParty:
	.string "Parece que tu equipo está\n"
	.string "completo.\p"
	.string "Vuelve cuando dejes algún POKéMON\n"
	.string "en el PC.$"
.else @ENGLISH
sText_MysteryGiftEgg:
	.string "Thank you for using the MYSTERY\n"
	.string "GIFT System.\p"
	.string "From the POKéMON CENTER we\n"
	.string "have a gift--a POKéMON EGG!\p"
	.string "Please raise it with love and\n"
	.string "kindness.$"

sText_FullParty:
	.string "Oh, your party appears to be full.\p"
	.string "Please come see me after storing\n"
	.string "a POKéMON on a PC.$"
.endif
.endif
.endif
