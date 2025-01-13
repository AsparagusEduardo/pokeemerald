const u8 gEasyChatWord_Fall[] = _("OTOÑO");
const u8 gEasyChatWord_Morning[] = _("MAÑANAS");
const u8 gEasyChatWord_Tomorrow[] = _("MAÑANA");
const u8 gEasyChatWord_Last[] = _("ÚLTIMO");
const u8 gEasyChatWord_Day[] = _("DÍA");
const u8 gEasyChatWord_Sometime[] = _("ALGÚN DÍA");
const u8 gEasyChatWord_Always[] = _("SIEMPRE");
const u8 gEasyChatWord_Current[] = _("ACTUAL");
const u8 gEasyChatWord_Forever[] = _("NUNCA");
const u8 gEasyChatWord_Days[] = _("DÍAS");
const u8 gEasyChatWord_End[] = _("FIN");
const u8 gEasyChatWord_Tuesday[] = _("MARTES");
const u8 gEasyChatWord_Yesterday[] = _("AYER");
const u8 gEasyChatWord_Today[] = _("HOY");
const u8 gEasyChatWord_Friday[] = _("VIERNES");
const u8 gEasyChatWord_Monday[] = _("LUNES");
const u8 gEasyChatWord_Later[] = _("DESPUÉS");
const u8 gEasyChatWord_Earlier[] = _("ANTES");
const u8 gEasyChatWord_Another[] = _("JAMÁS");
const u8 gEasyChatWord_Time[] = _("HORA");
const u8 gEasyChatWord_Finish[] = _("MOMENTO");
const u8 gEasyChatWord_Wednesday[] = _("MIÉRCOLES");
const u8 gEasyChatWord_Soon[] = _("PRONTO");
const u8 gEasyChatWord_Start[] = _("PRINCIPIO");
const u8 gEasyChatWord_Month[] = _("MES");
const u8 gEasyChatWord_Stop[] = _("ACABAR");
const u8 gEasyChatWord_Now[] = _("AHORA");
const u8 gEasyChatWord_Final[] = _("FINAL");
const u8 gEasyChatWord_Next[] = _("SIGUIENTE");
const u8 gEasyChatWord_Age[] = _("ÉPOCA");
const u8 gEasyChatWord_Saturday[] = _("SÁBADO");
const u8 gEasyChatWord_Summer[] = _("VERANO");
const u8 gEasyChatWord_Sunday[] = _("DOMINGO");
const u8 gEasyChatWord_Beginning[] = _("INICIO");
const u8 gEasyChatWord_Spring[] = _("PRIMAVERA");
const u8 gEasyChatWord_Daytime[] = _("DIURNO");
const u8 gEasyChatWord_Winter[] = _("INVIERNO");
const u8 gEasyChatWord_Daily[] = _("DIARIO");
const u8 gEasyChatWord_Olden[] = _("ANTIGUO");
const u8 gEasyChatWord_Almost[] = _("MADRUGADA");
const u8 gEasyChatWord_Nearly[] = _("TEMPRANO");
const u8 gEasyChatWord_Thursday[] = _("JUEVES");
const u8 gEasyChatWord_Nighttime[] = _("NOCTURNO");
const u8 gEasyChatWord_Night[] = _("NOCHE");
const u8 gEasyChatWord_Week[] = _("SEMANA");

const struct EasyChatWordInfo gEasyChatGroup_Time[] = {
    [EC_INDEX(EC_WORD_FALL)] =
    {
        .text = gEasyChatWord_Fall,
<<<<<<< HEAD
        .alphabeticalOrder = 29,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MORNING)] =
    {
        .text = gEasyChatWord_Morning,
        .alphabeticalOrder = 39,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOMORROW)] =
    {
        .text = gEasyChatWord_Tomorrow,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LAST)] =
    {
        .text = gEasyChatWord_Last,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DAY)] =
    {
        .text = gEasyChatWord_Day,
        .alphabeticalOrder = 33,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SOMETIME)] =
    {
        .text = gEasyChatWord_Sometime,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALWAYS)] =
    {
        .text = gEasyChatWord_Always,
        .alphabeticalOrder = 37,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CURRENT)] =
    {
        .text = gEasyChatWord_Current,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FOREVER)] =
    {
        .text = gEasyChatWord_Forever,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DAYS)] =
    {
        .text = gEasyChatWord_Days,
        .alphabeticalOrder = 35,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_END)] =
    {
        .text = gEasyChatWord_End,
        .alphabeticalOrder = 17,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TUESDAY)] =
    {
        .text = gEasyChatWord_Tuesday,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YESTERDAY)] =
    {
        .text = gEasyChatWord_Yesterday,
        .alphabeticalOrder = 0,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TODAY)] =
    {
        .text = gEasyChatWord_Today,
        .alphabeticalOrder = 27,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FRIDAY)] =
    {
        .text = gEasyChatWord_Friday,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MONDAY)] =
    {
        .text = gEasyChatWord_Monday,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LATER)] =
    {
        .text = gEasyChatWord_Later,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EARLIER)] =
    {
        .text = gEasyChatWord_Earlier,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ANOTHER)] =
    {
        .text = gEasyChatWord_Another,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TIME)] =
    {
        .text = gEasyChatWord_Time,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FINISH)] =
    {
        .text = gEasyChatWord_Finish,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WEDNESDAY)] =
    {
        .text = gEasyChatWord_Wednesday,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SOON)] =
    {
        .text = gEasyChatWord_Soon,
        .alphabeticalOrder = 40,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_START)] =
    {
        .text = gEasyChatWord_Start,
        .alphabeticalOrder = 28,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MONTH)] =
    {
        .text = gEasyChatWord_Month,
        .alphabeticalOrder = 43,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STOP)] =
    {
        .text = gEasyChatWord_Stop,
        .alphabeticalOrder = 42,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NOW)] =
    {
        .text = gEasyChatWord_Now,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FINAL)] =
    {
        .text = gEasyChatWord_Final,
        .alphabeticalOrder = 38,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NEXT)] =
    {
        .text = gEasyChatWord_Next,
        .alphabeticalOrder = 30,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AGE)] =
    {
        .text = gEasyChatWord_Age,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SATURDAY)] =
    {
        .text = gEasyChatWord_Saturday,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SUMMER)] =
    {
        .text = gEasyChatWord_Summer,
        .alphabeticalOrder = 34,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SUNDAY)] =
    {
        .text = gEasyChatWord_Sunday,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BEGINNING)] =
    {
        .text = gEasyChatWord_Beginning,
=======
>>>>>>> Egg/spanish
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SPRING)] =
    {
        .text = gEasyChatWord_Morning,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DAYTIME)] =
    {
        .text = gEasyChatWord_Tomorrow,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Last,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Day,
        .alphabeticalOrder = 17,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Sometime,
        .alphabeticalOrder = 38,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Always,
        .alphabeticalOrder = 12,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Current,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Forever,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Days,
        .alphabeticalOrder = 37,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_End,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Tuesday,
        .alphabeticalOrder = 35,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Yesterday,
        .alphabeticalOrder = 32,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WINTER)] =
    {
        .text = gEasyChatWord_Today,
        .alphabeticalOrder = 29,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DAILY)] =
    {
        .text = gEasyChatWord_Friday,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Monday,
        .alphabeticalOrder = 27,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Later,
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OLDEN)] =
    {
        .text = gEasyChatWord_Earlier,
        .alphabeticalOrder = 13,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALMOST)] =
    {
        .text = gEasyChatWord_Another,
        .alphabeticalOrder = 33,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NEARLY)] =
    {
<<<<<<< HEAD
        .text = gEasyChatWord_Nearly,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THURSDAY)] =
    {
        .text = gEasyChatWord_Thursday,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NIGHTTIME)] =
    {
        .text = gEasyChatWord_Nighttime,
        .alphabeticalOrder = 44,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NIGHT)] =
    {
        .text = gEasyChatWord_Night,
=======
        .text = gEasyChatWord_Time,
>>>>>>> Egg/spanish
        .alphabeticalOrder = 36,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WEEK)] =
    {
        .text = gEasyChatWord_Finish,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Wednesday,
        .alphabeticalOrder = 41,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Soon,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Start,
        .alphabeticalOrder = 39,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Month,
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Stop,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Now,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Final,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Next,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Age,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Saturday,
        .alphabeticalOrder = 43,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Summer,
        .alphabeticalOrder = 42,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Sunday,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Beginning,
        .alphabeticalOrder = 0,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Spring,
        .alphabeticalOrder = 34,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Daytime,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Winter,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Daily,
        .alphabeticalOrder = 30,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Olden,
        .alphabeticalOrder = 44,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Almost,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Nearly,
        .alphabeticalOrder = 28,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Thursday,
        .alphabeticalOrder = 40,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Nighttime,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Night,
        .alphabeticalOrder = 31,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Week,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
};
