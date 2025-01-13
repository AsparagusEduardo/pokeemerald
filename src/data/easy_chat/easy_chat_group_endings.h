const u8 gEasyChatWord_Will[] = _("HAS");
const u8 gEasyChatWord_WillBeHere[] = _("ESTOY");
const u8 gEasyChatWord_Or[] = _("VOY");
const u8 gEasyChatWord_Times[] = _("SIENTO");
const u8 gEasyChatWord_Wonder[] = _("VAS");
const u8 gEasyChatWord_IsItQues[] = _("DEVORA");
const u8 gEasyChatWord_Be[] = _("SER");
const u8 gEasyChatWord_Gimme[] = _("SEAS");
const u8 gEasyChatWord_Could[] = _("DIME");
const u8 gEasyChatWord_LikelyTo[] = _("VER");
const u8 gEasyChatWord_Would[] = _("QUEDAR");
const u8 gEasyChatWord_Is[] = _("ES");
const u8 gEasyChatWord_IsntItQues[] = _("SOY");
const u8 gEasyChatWord_Lets[] = _("ERES");
const u8 gEasyChatWord_Other[] = _("SERVIRÁ");
const u8 gEasyChatWord_Are[] = _("ESTÁS");
const u8 gEasyChatWord_Was[] = _("SON");
const u8 gEasyChatWord_Were[] = _("SERÁ");
const u8 gEasyChatWord_Those[] = _("DICEN");
const u8 gEasyChatWord_Isnt[] = _("ESPERO");
const u8 gEasyChatWord_Wont[] = _("PREFERIRÍA");
const u8 gEasyChatWord_Cant[] = _("PUEDES");
const u8 gEasyChatWord_Can[] = _("PUEDO");
const u8 gEasyChatWord_Dont[] = _("ESTÁ");
const u8 gEasyChatWord_Do[] = _("HAZ");
const u8 gEasyChatWord_Does[] = _("SÉ");
const u8 gEasyChatWord_Whom[] = _("TENGO");
const u8 gEasyChatWord_Which[] = _("FALTA");
const u8 gEasyChatWord_Wasnt[] = _("COMER");
const u8 gEasyChatWord_Werent[] = _("PUEDE");
const u8 gEasyChatWord_Have[] = _("TIENES");
const u8 gEasyChatWord_Havent[] = _("LLEGÓ");
const u8 gEasyChatWord_A[] = _("NECESITO");
const u8 gEasyChatWord_An[] = _("TENER");
const u8 gEasyChatWord_Not[] = _("PONGAS");
const u8 gEasyChatWord_There[] = _("ADORAMOS");
const u8 gEasyChatWord_OkQues[] = _("CREO");
const u8 gEasyChatWord_So[] = _("CORRIDO");
const u8 gEasyChatWord_Maybe[] = _("DEBERÍAMOS");
const u8 gEasyChatWord_About[] = _("EMPEZAR");
const u8 gEasyChatWord_Over[] = _("PODRÁS");
const u8 gEasyChatWord_It[] = _("GUSTAN");
const u8 gEasyChatWord_All[] = _("PORTAS");
const u8 gEasyChatWord_For[] = _("LLEGAN");
const u8 gEasyChatWord_On[] = _("DEBERÍA");
const u8 gEasyChatWord_Off[] = _("PRÉSTAME");
const u8 gEasyChatWord_As[] = _("PODRÍAS");
const u8 gEasyChatWord_To[] = _("UTILIZA");
const u8 gEasyChatWord_With[] = _("CUIDAS");
const u8 gEasyChatWord_Better[] = _("VEO");
const u8 gEasyChatWord_Ever[] = _("EMOCIONAN");
const u8 gEasyChatWord_Since[] = _("QUIERO");
const u8 gEasyChatWord_Of[] = _("HACERME");
const u8 gEasyChatWord_BelongsTo[] = _("HAY");
const u8 gEasyChatWord_At[] = _("CREAS");
const u8 gEasyChatWord_In[] = _("ESCUCHA");
const u8 gEasyChatWord_Out[] = _("DECIDAN");
const u8 gEasyChatWord_Too[] = _("OBSERVA");
const u8 gEasyChatWord_Like[] = _("GUSTA");
const u8 gEasyChatWord_Did[] = _("PARECE");
const u8 gEasyChatWord_Didnt[] = _("QUIERES");
const u8 gEasyChatWord_Doesnt[] = _("DES");
const u8 gEasyChatWord_Without[] = _("DA");
const u8 gEasyChatWord_After[] = _("DESAPARECE");
const u8 gEasyChatWord_Before[] = _("BUSCANDO");
const u8 gEasyChatWord_While[] = _("VEN");
const u8 gEasyChatWord_Than[] = _("DESPIERTA");
const u8 gEasyChatWord_Once[] = _("PASARLO");
const u8 gEasyChatWord_Anywhere[] = _("CONFÍA");

const struct EasyChatWordInfo gEasyChatGroup_Endings[] = {
    [EC_INDEX(EC_WORD_WILL)] =
    {
        .text = gEasyChatWord_Will,
<<<<<<< HEAD
        .alphabeticalOrder = 32,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WILL_BE_HERE)] =
    {
        .text = gEasyChatWord_WillBeHere,
        .alphabeticalOrder = 39,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OR)] =
    {
        .text = gEasyChatWord_Or,
        .alphabeticalOrder = 63,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TIMES)] =
    {
        .text = gEasyChatWord_Times,
        .alphabeticalOrder = 42,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WONDER)] =
    {
        .text = gEasyChatWord_Wonder,
        .alphabeticalOrder = 33,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IS_IT_QUES)] =
    {
        .text = gEasyChatWord_IsItQues,
        .alphabeticalOrder = 68,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BE)] =
    {
        .text = gEasyChatWord_Be,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GIMME)] =
    {
        .text = gEasyChatWord_Gimme,
        .alphabeticalOrder = 46,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COULD)] =
    {
        .text = gEasyChatWord_Could,
        .alphabeticalOrder = 54,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LIKELY_TO)] =
    {
        .text = gEasyChatWord_LikelyTo,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WOULD)] =
    {
        .text = gEasyChatWord_Would,
        .alphabeticalOrder = 64,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IS)] =
    {
        .text = gEasyChatWord_Is,
        .alphabeticalOrder = 53,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ISN_T_IT_QUES)] =
    {
        .text = gEasyChatWord_IsntItQues,
        .alphabeticalOrder = 49,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LET_S)] =
    {
        .text = gEasyChatWord_Lets,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OTHER)] =
    {
        .text = gEasyChatWord_Other,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ARE)] =
    {
        .text = gEasyChatWord_Are,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WAS)] =
    {
        .text = gEasyChatWord_Was,
        .alphabeticalOrder = 59,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WERE)] =
    {
        .text = gEasyChatWord_Were,
        .alphabeticalOrder = 60,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THOSE)] =
    {
        .text = gEasyChatWord_Those,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ISN_T)] =
    {
        .text = gEasyChatWord_Isnt,
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WON_T)] =
    {
        .text = gEasyChatWord_Wont,
        .alphabeticalOrder = 61,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CAN_T)] =
    {
        .text = gEasyChatWord_Cant,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CAN)] =
    {
        .text = gEasyChatWord_Can,
        .alphabeticalOrder = 50,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DON_T)] =
    {
        .text = gEasyChatWord_Dont,
        .alphabeticalOrder = 43,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DO)] =
    {
        .text = gEasyChatWord_Do,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DOES)] =
    {
        .text = gEasyChatWord_Does,
        .alphabeticalOrder = 30,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHOM)] =
    {
        .text = gEasyChatWord_Whom,
        .alphabeticalOrder = 31,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHICH)] =
    {
        .text = gEasyChatWord_Which,
        .alphabeticalOrder = 55,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WASN_T)] =
    {
        .text = gEasyChatWord_Wasnt,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WEREN_T)] =
    {
        .text = gEasyChatWord_Werent,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HAVE)] =
    {
        .text = gEasyChatWord_Have,
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HAVEN_T)] =
    {
        .text = gEasyChatWord_Havent,
        .alphabeticalOrder = 12,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_A)] =
    {
        .text = gEasyChatWord_A,
        .alphabeticalOrder = 41,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AN)] =
    {
        .text = gEasyChatWord_An,
        .alphabeticalOrder = 13,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NOT)] =
    {
        .text = gEasyChatWord_Not,
        .alphabeticalOrder = 58,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THERE)] =
    {
        .text = gEasyChatWord_There,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OK_QUES)] =
    {
        .text = gEasyChatWord_OkQues,
        .alphabeticalOrder = 38,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SO)] =
    {
        .text = gEasyChatWord_So,
        .alphabeticalOrder = 34,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MAYBE)] =
    {
        .text = gEasyChatWord_Maybe,
        .alphabeticalOrder = 52,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ABOUT)] =
    {
        .text = gEasyChatWord_About,
        .alphabeticalOrder = 45,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OVER)] =
    {
        .text = gEasyChatWord_Over,
        .alphabeticalOrder = 36,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IT)] =
    {
        .text = gEasyChatWord_It,
        .alphabeticalOrder = 44,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALL)] =
    {
        .text = gEasyChatWord_All,
        .alphabeticalOrder = 67,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FOR)] =
    {
        .text = gEasyChatWord_For,
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ON)] =
    {
        .text = gEasyChatWord_On,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OFF)] =
    {
        .text = gEasyChatWord_Off,
        .alphabeticalOrder = 56,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AS)] =
    {
        .text = gEasyChatWord_As,
        .alphabeticalOrder = 40,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TO)] =
    {
        .text = gEasyChatWord_To,
        .alphabeticalOrder = 51,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WITH)] =
    {
        .text = gEasyChatWord_With,
        .alphabeticalOrder = 37,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BETTER)] =
    {
        .text = gEasyChatWord_Better,
        .alphabeticalOrder = 66,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EVER)] =
    {
        .text = gEasyChatWord_Ever,
=======
>>>>>>> Egg/spanish
        .alphabeticalOrder = 35,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SINCE)] =
    {
        .text = gEasyChatWord_WillBeHere,
        .alphabeticalOrder = 64,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OF)] =
    {
<<<<<<< HEAD
        .text = gEasyChatWord_Of,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BELONGS_TO)] =
    {
        .text = gEasyChatWord_BelongsTo,
        .alphabeticalOrder = 47,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AT)] =
    {
        .text = gEasyChatWord_At,
        .alphabeticalOrder = 57,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IN)] =
    {
        .text = gEasyChatWord_In,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OUT)] =
    {
        .text = gEasyChatWord_Out,
=======
        .text = gEasyChatWord_Or,
>>>>>>> Egg/spanish
        .alphabeticalOrder = 28,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOO)] =
    {
        .text = gEasyChatWord_Times,
        .alphabeticalOrder = 68,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LIKE)] =
    {
        .text = gEasyChatWord_Wonder,
        .alphabeticalOrder = 37,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DID)] =
    {
        .text = gEasyChatWord_IsItQues,
        .alphabeticalOrder = 54,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Be,
        .alphabeticalOrder = 36,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Gimme,
        .alphabeticalOrder = 48,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Could,
        .alphabeticalOrder = 62,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_LikelyTo,
        .alphabeticalOrder = 44,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Would,
        .alphabeticalOrder = 38,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Is,
        .alphabeticalOrder = 56,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_IsntItQues,
        .alphabeticalOrder = 61,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Lets,
        .alphabeticalOrder = 63,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Other,
        .alphabeticalOrder = 66,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Are,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Was,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Were,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Those,
        .alphabeticalOrder = 50,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Isnt,
        .alphabeticalOrder = 39,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Wont,
        .alphabeticalOrder = 13,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Cant,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Can,
        .alphabeticalOrder = 55,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Dont,
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Do,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Does,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Whom,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Which,
        .alphabeticalOrder = 27,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DIDN_T)] =
    {
        .text = gEasyChatWord_Wasnt,
        .alphabeticalOrder = 58,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Werent,
        .alphabeticalOrder = 41,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Have,
        .alphabeticalOrder = 52,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Havent,
        .alphabeticalOrder = 0,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_A,
        .alphabeticalOrder = 53,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_An,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Not,
        .alphabeticalOrder = 43,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_There,
        .alphabeticalOrder = 31,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_OkQues,
        .alphabeticalOrder = 32,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_So,
        .alphabeticalOrder = 57,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Maybe,
        .alphabeticalOrder = 59,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_About,
        .alphabeticalOrder = 67,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Over,
        .alphabeticalOrder = 40,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_It,
        .alphabeticalOrder = 46,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_All,
        .alphabeticalOrder = 34,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_For,
        .alphabeticalOrder = 42,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_On,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Off,
        .alphabeticalOrder = 45,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_As,
        .alphabeticalOrder = 29,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_To,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_With,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Better,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Ever,
        .alphabeticalOrder = 60,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Since,
        .alphabeticalOrder = 51,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Of,
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_BelongsTo,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_At,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_In,
        .alphabeticalOrder = 17,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Out,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Too,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Like,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Did,
        .alphabeticalOrder = 12,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Didnt,
        .alphabeticalOrder = 33,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DOESN_T)] =
    {
        .text = gEasyChatWord_Doesnt,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WITHOUT)] =
    {
        .text = gEasyChatWord_Without,
        .alphabeticalOrder = 30,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AFTER)] =
    {
        .text = gEasyChatWord_After,
        .alphabeticalOrder = 47,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BEFORE)] =
    {
        .text = gEasyChatWord_Before,
<<<<<<< HEAD
        .alphabeticalOrder = 48,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHILE)] =
    {
        .text = gEasyChatWord_While,
        .alphabeticalOrder = 62,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THAN)] =
    {
        .text = gEasyChatWord_Than,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ONCE)] =
    {
        .text = gEasyChatWord_Once,
=======
>>>>>>> Egg/spanish
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ANYWHERE)] =
    {
        .text = gEasyChatWord_While,
        .alphabeticalOrder = 65,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Than,
        .alphabeticalOrder = 49,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Once,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Anywhere,
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
};
