.set LOCALID_WALDAS_DAD, 6

RustboroCity_Flat1_2F_MapScripts::
	.byte 0

RustboroCity_Flat1_2F_EventScript_WaldasDad::
	lock
	faceplayer
	specialvar VAR_RESULT, TryBufferWaldaPhrase
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase

RustboroCity_Flat1_2F_EventScript_GivePhrase::
	special DoWaldaNamingScreen
	waitstate
	goto_if_eq VAR_0x8004, 1, RustboroCity_Flat1_2F_EventScript_CancelGivePhrase
	goto_if_eq VAR_0x8004, 2, RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase
	specialvar VAR_RESULT, TryGetWallpaperWithWaldaPhrase
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase
	end

RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase::
	msgbox RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase

RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase::
	msgbox RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase

RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase::
	msgbox RustboroCity_Flat1_2F_Text_OhIsThatRight, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_CancelGivePhrase::
	msgbox RustboroCity_Flat1_2F_Text_OhYouDontKnowAny, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase::
	msgbox RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase, MSGBOX_DEFAULT
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase::
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry2, MSGBOX_DEFAULT
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
	msgbox RustboroCity_Flat1_2F_Text_OhShesLaughing, MSGBOX_DEFAULT
	applymovement LOCALID_WALDAS_DAD, Common_Movement_FacePlayer
	waitmovement 0
	msgbox RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase::
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry, MSGBOX_DEFAULT
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda::
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
	return

RustboroCity_Flat1_2F_EventScript_WaldasMom::
	msgbox RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard, MSGBOX_NPC
	end

RustboroCity_Flat1_2F_EventScript_PokeDoll::
	msgbox RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll, MSGBOX_SIGN
	end

<<<<<<< HEAD
.ifdef FRENCH
	.include "data/maps/RustboroCity_Flat1_2F/text_fr.inc"
.else
.ifdef ITALIAN
	.include "data/maps/RustboroCity_Flat1_2F/text_it.inc"
.else
.ifdef SPANISH
	.include "data/maps/RustboroCity_Flat1_2F/text_es.inc"
.else
	.include "data/maps/RustboroCity_Flat1_2F/text.inc"
.endif
.endif
.endif
=======
RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard:
	.string "Cada día es tan duro…\p"
	.string "¿Que qué es duro?\n"
	.string "¿Hace falta preguntar?\p"
	.string "Pues levantarse para ir\n"
	.string "a trabajar, claro.\p"
	.string "Llevo fatal lo de madrugar…$"

RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase:
	.string "¡Anda, hola!\n"
	.string "¡Te doy la bienvenida a mi casa!\p"
	.string "Una preguntilla… ¿Has\n"
	.string "hecho de canguro alguna vez?\p"
	.string "Verás, acabo de ser padre y lo\n"
	.string "cierto es que estoy algo perdido.\p"
	.string "Ahora tengo un problemilla…\n"
	.string "Mi hija ANAPEL se ríe muy poco.\p"
	.string "Creo que se reiría más\n"
	.string "si le dijera algo divertido.\p"
	.string "¿No sabrás alguna expresión\n"
	.string "graciosa, por casualidad?$"

RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase:
	.string "He estado diciendo “{STR_VAR_1}”\n"
	.string "a ANAPEL para divertirla.\p"
	.string "¿No sabrás de alguna otra expresión\n"
	.string "que tenga más gracia?$"

RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion:
	.string "¡Vaya, qué bien!\n"
	.string "¿Y cuál es?$"

RustboroCity_Flat1_2F_Text_OhIsThatRight:
	.string "Oh, ¿en serio?\p"
	.string "Bueno, pues, si se te ocurre\n"
	.string "algo, soy todo oídos.$"

RustboroCity_Flat1_2F_Text_LetsGiveItATry2:
	.string "Ah, ya veo.\n"
	.string "Pues vamos a oírla, ¿vale?$"

RustboroCity_Flat1_2F_Text_OhShesLaughing:
	.string "{STR_VAR_1}.\n"
	.string "{STR_VAR_1}.\p"
	.string "¡Genial! ¡¡¡Se ríe!!!\n"
	.string "¡Qué contento que estoy!$"

RustboroCity_Flat1_2F_Text_LetsGiveItATry:
	.string "Ah, ya veo.\n"
	.string "Pues vamos a oírla, ¿vale?$"

RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll:
	.string "{STR_VAR_1}.\n"
	.string "{STR_VAR_1}.\p"
	.string "Mmmm… No le hace ni pizca de gracia.\n"
	.string "Puede que ANAPEL sea una niña seria…$"

RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase:
	.string "Así que no se te ocurre nada.\n"
	.string "Pues a ver si yo pienso algo…\p"
	.string "Mmm…\n"
	.string "¿Qué tal “{STR_VAR_1}”?\l"
	.string "A ver si funciona.$"

RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2:
	.string "{STR_VAR_1}.\n"
	.string "{STR_VAR_1}.\p"
	.string "Mmmm… No le hace ni pizca de gracia.\n"
	.string "Puede que ANAPEL sea una niña seria…$"

RustboroCity_Flat1_2F_Text_OhYouDontKnowAny:
	.string "Así que no se te ocurre nada.\n"
	.string "Pues entonces voy a intentar\l"
	.string "hacerle reír con lo que dije antes.\p"
	.string "Pero, si tuvieras alguna sugerencia,\n"
	.string "no dudes en decírmelo, ¿vale?$"

RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper:
	.string "¡Gracias!\p"
	.string "Muchísimas gracias. ¡Mi querida\n"
	.string "ANAPEL se está riendo!\p"
	.string "¿Y sabes qué? No lo parecerá,\n"
	.string "pero soy uno de los principales\l"
	.string "investigadores de DEVON S.A.\p"
	.string "Y me gustaría hacer algo\n"
	.string "por ti, pero no sé qué…\p"
	.string "Ya sé, te daré más diseños de papel\n"
	.string "pintado para las CAJAS del Sistema de\l"
	.string "Almacenamiento de POKéMON del PC.\p"
	.string "Sólo tendrás que elegir “AMIGOS”\n"
	.string "en el menú correspondiente. \p"
	.string "De esa manera podrás acceder\n"
	.string "a los nuevos diseños de papel pintado.$"

RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll:
	.string "¡Es un MUÑECO de peluche\n"
	.string "con forma de POKéMON!$"

>>>>>>> Egg/spanish
