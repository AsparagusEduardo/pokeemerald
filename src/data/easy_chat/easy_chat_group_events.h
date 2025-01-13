const u8 gEasyChatWord_Appeal[] = _("EXHIBICIÓN");
const u8 gEasyChatWord_Events[] = _("INHIBICIÓN");
const u8 gEasyChatWord_StayAtHome[] = _("SAFARI");
const u8 gEasyChatWord_Berry[] = _("BAYA");
const u8 gEasyChatWord_Contest[] = _("CONCURSO");
const u8 gEasyChatWord_Mc[] = _("PRESENTADOR");
const u8 gEasyChatWord_Judge[] = _("JUEZ");
const u8 gEasyChatWord_Super[] = _("ALTO");
const u8 gEasyChatWord_Stage[] = _("ESCENARIO");
const u8 gEasyChatWord_HallOfFame[] = _("HALL FAMA");
const u8 gEasyChatWord_Evolution[] = _("EVOLUCIÓN");
const u8 gEasyChatWord_Hyper[] = _("AVANZADO");
const u8 gEasyChatWord_BattleTower[] = _("T. BATALLA");
const u8 gEasyChatWord_Leaders[] = _("LÍDERES");
const u8 gEasyChatWord_BattleRoom[] = _("SALA BATALLA");
const u8 gEasyChatWord_Hidden[] = _("GUARIDA");
const u8 gEasyChatWord_SecretBase[] = _("BASE SECRETA");
const u8 gEasyChatWord_Blend[] = _("LICUAR");
const u8 gEasyChatWord_POKEBLOCK[] = _("{POKEBLOCK}");
const u8 gEasyChatWord_Master[] = _("EXPERTO");
const u8 gEasyChatWord_Rank[] = _("TIPOS");
const u8 gEasyChatWord_Ribbon[] = _("CINTA");
const u8 gEasyChatWord_Crush[] = _("MACHACABAYAS");
const u8 gEasyChatWord_Direct[] = _("DIRECTA");
const u8 gEasyChatWord_Tower[] = _("TORRE");
const u8 gEasyChatWord_Union[] = _("UNIÓN");
const u8 gEasyChatWord_Room[] = _("SALA");
const u8 gEasyChatWord_Wireless[] = _("INALÁMBRICA");
const u8 gEasyChatWord_Frontier[] = _("FRENTE");

const struct EasyChatWordInfo gEasyChatGroup_Events[] = {
    [EC_INDEX(EC_WORD_APPEAL)] =
    {
        .text = gEasyChatWord_Appeal,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EVENTS)] =
    {
        .text = gEasyChatWord_Events,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STAY_AT_HOME)] =
    {
        .text = gEasyChatWord_StayAtHome,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BERRY)] =
    {
        .text = gEasyChatWord_Berry,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CONTEST)] =
    {
        .text = gEasyChatWord_Contest,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MC)] =
    {
        .text = gEasyChatWord_Mc,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_JUDGE)] =
    {
        .text = gEasyChatWord_Judge,
<<<<<<< HEAD
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SUPER)] =
    {
        .text = gEasyChatWord_Super,
=======
>>>>>>> Egg/spanish
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STAGE)] =
    {
        .text = gEasyChatWord_Super,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HALL_OF_FAME)] =
    {
        .text = gEasyChatWord_Stage,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EVOLUTION)] =
    {
        .text = gEasyChatWord_HallOfFame,
        .alphabeticalOrder = 0,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Evolution,
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HYPER)] =
    {
        .text = gEasyChatWord_Hyper,
        .alphabeticalOrder = 28,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BATTLE_TOWER)] =
    {
        .text = gEasyChatWord_BattleTower,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LEADERS)] =
    {
        .text = gEasyChatWord_Leaders,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BATTLE_ROOM)] =
    {
        .text = gEasyChatWord_BattleRoom,
        .alphabeticalOrder = 27,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HIDDEN)] =
    {
        .text = gEasyChatWord_Hidden,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SECRET_BASE)] =
    {
        .text = gEasyChatWord_SecretBase,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BLEND)] =
    {
        .text = gEasyChatWord_Blend,
        .alphabeticalOrder = 17,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_POKEBLOCK)] =
    {
        .text = gEasyChatWord_POKEBLOCK,
        .alphabeticalOrder = 13,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MASTER)] =
    {
        .text = gEasyChatWord_Master,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RANK)] =
    {
        .text = gEasyChatWord_Rank,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RIBBON)] =
    {
        .text = gEasyChatWord_Ribbon,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CRUSH)] =
    {
        .text = gEasyChatWord_Crush,
<<<<<<< HEAD
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DIRECT)] =
    {
        .text = gEasyChatWord_Direct,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOWER)] =
    {
        .text = gEasyChatWord_Tower,
=======
>>>>>>> Egg/spanish
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UNION)] =
    {
        .text = gEasyChatWord_Direct,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Tower,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Union,
        .alphabeticalOrder = 12,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ROOM)] =
    {
        .text = gEasyChatWord_Room,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WIRELESS)] =
    {
        .text = gEasyChatWord_Wireless,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FRONTIER)] =
    {
        .text = gEasyChatWord_Frontier,
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
};
