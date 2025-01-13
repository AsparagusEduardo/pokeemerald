const u8 gEasyChatWord_IChooseYou[] = _("TE ELIJO");
const u8 gEasyChatWord_Gotcha[] = _("HAZTE");
const u8 gEasyChatWord_Trade[] = _("INTERCAMBIA");
const u8 gEasyChatWord_Sapphire[] = _("ZAFIRO");
const u8 gEasyChatWord_Evolve[] = _("EVOLUCIONAR");
const u8 gEasyChatWord_Encyclopedia[] = _("ENCICLOPEDIA");
const u8 gEasyChatWord_Nature[] = _("NATURALEZA");
const u8 gEasyChatWord_Center[] = _("CENTRO");
const u8 gEasyChatWord_Egg[] = _("HUEVO");
const u8 gEasyChatWord_Link[] = _("CONEXIÓN");
const u8 gEasyChatWord_SpAbility[] = _("HAB. ESP.");
const u8 gEasyChatWord_Trainer[] = _("ENTRENADOR");
const u8 gEasyChatWord_Version[] = _("VERSIÓN");
const u8 gEasyChatWord_Pokenav[] = _("POKéNAV");
const u8 gEasyChatWord_Pokemon[] = _("POKéMON");
const u8 gEasyChatWord_Get[] = _("CAPTURA");
const u8 gEasyChatWord_Pokedex[] = _("POKéDEX");
const u8 gEasyChatWord_Ruby[] = _("RUBÍ");
const u8 gEasyChatWord_Level[] = _("NIVEL");
const u8 gEasyChatWord_Red[] = _("ROJO");
const u8 gEasyChatWord_Green[] = _("VERDE");
const u8 gEasyChatWord_Bag[] = _("MOCHILA");
const u8 gEasyChatWord_Flame[] = _("LLAMA");
const u8 gEasyChatWord_Gold[] = _("ORO");
const u8 gEasyChatWord_Leaf[] = _("HOJA");
const u8 gEasyChatWord_Silver[] = _("PLATA");
const u8 gEasyChatWord_Emerald[] = _("ESMERALDA");

const struct EasyChatWordInfo gEasyChatGroup_Trainer[] = {
    [EC_INDEX(EC_WORD_I_CHOOSE_YOU)] =
    {
        .text = gEasyChatWord_IChooseYou,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GOTCHA)] =
    {
        .text = gEasyChatWord_Gotcha,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRADE)] =
    {
        .text = gEasyChatWord_Trade,
<<<<<<< HEAD
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SAPPHIRE)] =
    {
        .text = gEasyChatWord_Sapphire,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EVOLVE)] =
    {
        .text = gEasyChatWord_Evolve,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ENCYCLOPEDIA)] =
    {
        .text = gEasyChatWord_Encyclopedia,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NATURE)] =
    {
        .text = gEasyChatWord_Nature,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CENTER)] =
    {
        .text = gEasyChatWord_Center,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EGG)] =
    {
        .text = gEasyChatWord_Egg,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LINK)] =
    {
        .text = gEasyChatWord_Link,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SP_ABILITY)] =
    {
        .text = gEasyChatWord_SpAbility,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRAINER)] =
    {
        .text = gEasyChatWord_Trainer,
        .alphabeticalOrder = 0,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_VERSION)] =
    {
        .text = gEasyChatWord_Version,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_POKENAV)] =
    {
        .text = gEasyChatWord_Pokenav,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_POKEMON)] =
    {
        .text = gEasyChatWord_Pokemon,
=======
>>>>>>> Egg/spanish
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GET)] =
    {
        .text = gEasyChatWord_Sapphire,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Evolve,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Encyclopedia,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Nature,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Center,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Egg,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Link,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_SpAbility,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Trainer,
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Version,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Pokenav,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Pokemon,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_POKEDEX)] =
    {
        .text = gEasyChatWord_Get,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Pokedex,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RUBY)] =
    {
        .text = gEasyChatWord_Ruby,
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LEVEL)] =
    {
        .text = gEasyChatWord_Level,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RED)] =
    {
        .text = gEasyChatWord_Red,
        .alphabeticalOrder = 14,
        .enabled = FALSE,
    },
    [EC_INDEX(EC_WORD_GREEN)] =
    {
        .text = gEasyChatWord_Green,
        .alphabeticalOrder = 13,
        .enabled = FALSE,
    },
    [EC_INDEX(EC_WORD_BAG)] =
    {
        .text = gEasyChatWord_Bag,
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FLAME)] =
    {
        .text = gEasyChatWord_Flame,
        .alphabeticalOrder = 17,
        .enabled = FALSE,
    },
    [EC_INDEX(EC_WORD_GOLD)] =
    {
        .text = gEasyChatWord_Gold,
        .alphabeticalOrder = 0,
        .enabled = FALSE,
    },
    [EC_INDEX(EC_WORD_LEAF)] =
    {
        .text = gEasyChatWord_Leaf,
        .alphabeticalOrder = 20,
        .enabled = FALSE,
    },
    [EC_INDEX(EC_WORD_SILVER)] =
    {
        .text = gEasyChatWord_Silver,
        .alphabeticalOrder = 12,
        .enabled = FALSE,
    },
    [EC_INDEX(EC_WORD_EMERALD)] =
    {
        .text = gEasyChatWord_Emerald,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
};
