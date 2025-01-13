const u8 gEasyChatWord_Listen[] = _("A");
const u8 gEasyChatWord_NotVery[] = _("ANTE");
const u8 gEasyChatWord_Mean[] = _("COMO");
const u8 gEasyChatWord_Lie[] = _("DE");
const u8 gEasyChatWord_Lay[] = _("TE");
const u8 gEasyChatWord_Recommend[] = _("PARA");
const u8 gEasyChatWord_Nitwit[] = _("QUE");
const u8 gEasyChatWord_Quite[] = _("BASTANTE");
const u8 gEasyChatWord_From[] = _("DESDE");
const u8 gEasyChatWord_Feeling[] = _("AL");
const u8 gEasyChatWord_But[] = _("PERO");
const u8 gEasyChatWord_However[] = _("POR");
const u8 gEasyChatWord_Case[] = _("TODO");
const u8 gEasyChatWord_The[] = _("EN");
const u8 gEasyChatWord_Miss[] = _("CON");
const u8 gEasyChatWord_How[] = _("VUESTROS");
const u8 gEasyChatWord_Hit[] = _("DEL");
const u8 gEasyChatWord_Enough[] = _("O");
const u8 gEasyChatWord_ALot[] = _("MUCHO");
const u8 gEasyChatWord_ALittle[] = _("ALGO");
const u8 gEasyChatWord_Absolutely[] = _("ME");
const u8 gEasyChatWord_And[] = _("Y");
const u8 gEasyChatWord_Only[] = _("LOS");
const u8 gEasyChatWord_Around[] = _("LO");
const u8 gEasyChatWord_Probably[] = _("LAS");
const u8 gEasyChatWord_If[] = _("SI");
const u8 gEasyChatWord_Very[] = _("MUY");
const u8 gEasyChatWord_ATinyBit[] = _("EL");
const u8 gEasyChatWord_Wild[] = _("E");
const u8 gEasyChatWord_Thats[] = _("LA");
const u8 gEasyChatWord_Just[] = _("MI");
const u8 gEasyChatWord_EvenSo[] = _("CÓMO");
const u8 gEasyChatWord_MustBe[] = _("UNAS");
const u8 gEasyChatWord_Naturally[] = _("UNA");
const u8 gEasyChatWord_ForNow[] = _("UN");
const u8 gEasyChatWord_Understood[] = _("LE");
const u8 gEasyChatWord_Joking[] = _("PUES");
const u8 gEasyChatWord_Ready[] = _("LES");
const u8 gEasyChatWord_Something[] = _("NUESTROS");
const u8 gEasyChatWord_Somehow[] = _("ESO");
const u8 gEasyChatWord_Although[] = _("AUNQUE");
const u8 gEasyChatWord_Also[] = _("SUYA");
const u8 gEasyChatWord_Perfect[] = _("ADEMÁS");
const u8 gEasyChatWord_AsMuchAs[] = _("TUS");
const u8 gEasyChatWord_Really[] = _("TI");
const u8 gEasyChatWord_Truly[] = _("TODA");
const u8 gEasyChatWord_Seriously[] = _("SE");
const u8 gEasyChatWord_Totally[] = _("ALGÚN");
const u8 gEasyChatWord_Until[] = _("TUYA");
const u8 gEasyChatWord_AsIf[] = _("ESA");
const u8 gEasyChatWord_Mood[] = _("NOS");
const u8 gEasyChatWord_Rather[] = _("OS");
const u8 gEasyChatWord_Awfully[] = _("TU");
const u8 gEasyChatWord_Mode[] = _("SU");
const u8 gEasyChatWord_More[] = _("MÍA");
const u8 gEasyChatWord_TooLate[] = _("MIS");
const u8 gEasyChatWord_Finally[] = _("SUS");
const u8 gEasyChatWord_Any[] = _("MÍO");
const u8 gEasyChatWord_Instead[] = _("TUYO");
const u8 gEasyChatWord_Fantastic[] = _("SUYO");

const struct EasyChatWordInfo gEasyChatGroup_Speech[] = {
    [EC_INDEX(EC_WORD_LISTEN)] =
    {
        .text = gEasyChatWord_Listen,
<<<<<<< HEAD
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NOT_VERY)] =
    {
        .text = gEasyChatWord_NotVery,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MEAN)] =
    {
        .text = gEasyChatWord_Mean,
        .alphabeticalOrder = 27,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LIE)] =
    {
        .text = gEasyChatWord_Lie,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LAY)] =
    {
        .text = gEasyChatWord_Lay,
        .alphabeticalOrder = 41,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RECOMMEND)] =
    {
        .text = gEasyChatWord_Recommend,
        .alphabeticalOrder = 40,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NITWIT)] =
    {
        .text = gEasyChatWord_Nitwit,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_QUITE)] =
    {
        .text = gEasyChatWord_Quite,
        .alphabeticalOrder = 57,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FROM)] =
    {
        .text = gEasyChatWord_From,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FEELING)] =
    {
        .text = gEasyChatWord_Feeling,
        .alphabeticalOrder = 49,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BUT)] =
    {
        .text = gEasyChatWord_But,
        .alphabeticalOrder = 43,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOWEVER)] =
    {
        .text = gEasyChatWord_However,
        .alphabeticalOrder = 52,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CASE)] =
    {
        .text = gEasyChatWord_Case,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THE)] =
    {
        .text = gEasyChatWord_The,
        .alphabeticalOrder = 12,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MISS)] =
    {
        .text = gEasyChatWord_Miss,
        .alphabeticalOrder = 17,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOW)] =
    {
        .text = gEasyChatWord_How,
        .alphabeticalOrder = 31,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HIT)] =
    {
        .text = gEasyChatWord_Hit,
        .alphabeticalOrder = 59,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ENOUGH)] =
    {
        .text = gEasyChatWord_Enough,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_A_LOT)] =
    {
        .text = gEasyChatWord_ALot,
        .alphabeticalOrder = 56,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_A_LITTLE)] =
    {
        .text = gEasyChatWord_ALittle,
        .alphabeticalOrder = 34,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ABSOLUTELY)] =
    {
        .text = gEasyChatWord_Absolutely,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AND)] =
    {
        .text = gEasyChatWord_And,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ONLY)] =
    {
        .text = gEasyChatWord_Only,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AROUND)] =
    {
        .text = gEasyChatWord_Around,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PROBABLY)] =
    {
        .text = gEasyChatWord_Probably,
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_IF)] =
    {
        .text = gEasyChatWord_If,
        .alphabeticalOrder = 58,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_VERY)] =
    {
        .text = gEasyChatWord_Very,
        .alphabeticalOrder = 36,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_A_TINY_BIT)] =
    {
        .text = gEasyChatWord_ATinyBit,
        .alphabeticalOrder = 30,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WILD)] =
    {
        .text = gEasyChatWord_Wild,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THAT_S)] =
    {
        .text = gEasyChatWord_Thats,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_JUST)] =
    {
        .text = gEasyChatWord_Just,
=======
>>>>>>> Egg/spanish
        .alphabeticalOrder = 0,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EVEN_SO)] =
    {
<<<<<<< HEAD
        .text = gEasyChatWord_EvenSo,
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MUST_BE)] =
    {
        .text = gEasyChatWord_MustBe,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NATURALLY)] =
    {
        .text = gEasyChatWord_Naturally,
        .alphabeticalOrder = 53,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FOR_NOW)] =
    {
        .text = gEasyChatWord_ForNow,
        .alphabeticalOrder = 50,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UNDERSTOOD)] =
    {
        .text = gEasyChatWord_Understood,
        .alphabeticalOrder = 54,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_JOKING)] =
    {
        .text = gEasyChatWord_Joking,
        .alphabeticalOrder = 32,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_READY)] =
    {
        .text = gEasyChatWord_Ready,
        .alphabeticalOrder = 33,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SOMETHING)] =
    {
        .text = gEasyChatWord_Something,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SOMEHOW)] =
    {
        .text = gEasyChatWord_Somehow,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALTHOUGH)] =
    {
        .text = gEasyChatWord_Although,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALSO)] =
    {
        .text = gEasyChatWord_Also,
=======
        .text = gEasyChatWord_NotVery,
>>>>>>> Egg/spanish
        .alphabeticalOrder = 42,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PERFECT)] =
    {
        .text = gEasyChatWord_Mean,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AS_MUCH_AS)] =
    {
        .text = gEasyChatWord_Lie,
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_REALLY)] =
    {
<<<<<<< HEAD
        .text = gEasyChatWord_Really,
        .alphabeticalOrder = 51,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRULY)] =
    {
        .text = gEasyChatWord_Truly,
        .alphabeticalOrder = 37,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SERIOUSLY)] =
    {
        .text = gEasyChatWord_Seriously,
        .alphabeticalOrder = 44,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOTALLY)] =
    {
        .text = gEasyChatWord_Totally,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UNTIL)] =
    {
        .text = gEasyChatWord_Until,
        .alphabeticalOrder = 46,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AS_IF)] =
    {
        .text = gEasyChatWord_AsIf,
        .alphabeticalOrder = 39,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MOOD)] =
    {
        .text = gEasyChatWord_Mood,
        .alphabeticalOrder = 38,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RATHER)] =
    {
        .text = gEasyChatWord_Rather,
        .alphabeticalOrder = 29,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AWFULLY)] =
    {
        .text = gEasyChatWord_Awfully,
        .alphabeticalOrder = 13,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MODE)] =
    {
        .text = gEasyChatWord_Mode,
        .alphabeticalOrder = 55,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MORE)] =
    {
        .text = gEasyChatWord_More,
=======
        .text = gEasyChatWord_Lay,
>>>>>>> Egg/spanish
        .alphabeticalOrder = 47,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOO_LATE)] =
    {
        .text = gEasyChatWord_Recommend,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FINALLY)] =
    {
        .text = gEasyChatWord_Nitwit,
        .alphabeticalOrder = 40,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Quite,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_From,
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Feeling,
        .alphabeticalOrder = 31,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_But,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_However,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Case,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_The,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Miss,
        .alphabeticalOrder = 28,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_How,
        .alphabeticalOrder = 27,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Hit,
        .alphabeticalOrder = 13,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Enough,
        .alphabeticalOrder = 49,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_ALot,
        .alphabeticalOrder = 39,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_ALittle,
        .alphabeticalOrder = 29,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Absolutely,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_And,
        .alphabeticalOrder = 35,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ANY)] =
    {
        .text = gEasyChatWord_Only,
        .alphabeticalOrder = 37,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_INSTEAD)] =
    {
        .text = gEasyChatWord_Around,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Probably,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_If,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Very,
        .alphabeticalOrder = 30,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_ATinyBit,
        .alphabeticalOrder = 54,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Wild,
        .alphabeticalOrder = 57,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Thats,
        .alphabeticalOrder = 55,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Just,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_EvenSo,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FANTASTIC)] =
    {
        .text = gEasyChatWord_MustBe,
        .alphabeticalOrder = 50,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Naturally,
        .alphabeticalOrder = 38,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_ForNow,
        .alphabeticalOrder = 17,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Understood,
        .alphabeticalOrder = 51,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Joking,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Ready,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Something,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Somehow,
        .alphabeticalOrder = 36,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Although,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Also,
        .alphabeticalOrder = 46,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Perfect,
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_AsMuchAs,
        .alphabeticalOrder = 53,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Really,
        .alphabeticalOrder = 56,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Truly,
        .alphabeticalOrder = 41,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Seriously,
        .alphabeticalOrder = 59,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Totally,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Until,
        .alphabeticalOrder = 44,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_AsIf,
        .alphabeticalOrder = 45,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Mood,
        .alphabeticalOrder = 12,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Rather,
        .alphabeticalOrder = 52,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Awfully,
        .alphabeticalOrder = 43,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Mode,
        .alphabeticalOrder = 48,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_More,
        .alphabeticalOrder = 58,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_TooLate,
        .alphabeticalOrder = 34,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Finally,
        .alphabeticalOrder = 33,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Any,
        .alphabeticalOrder = 32,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Instead,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Fantastic,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
};
