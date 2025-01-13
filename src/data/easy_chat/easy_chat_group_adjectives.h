const u8 gEasyChatWord_Wandering[] = _("RIDÍCULO");
const u8 gEasyChatWord_Rickety[] = _("¡EXCELENTE!");
const u8 gEasyChatWord_RockSolid[] = _("RUINA");
const u8 gEasyChatWord_Hungry[] = _("PRECIOSO");
const u8 gEasyChatWord_Tight[] = _("PRECIOSA");
const u8 gEasyChatWord_Ticklish[] = _("ODIOSO");
const u8 gEasyChatWord_Twirling[] = _("POTENTES");
const u8 gEasyChatWord_Spiraling[] = _("MEJOR");
const u8 gEasyChatWord_Thirsty[] = _("MEJORES");
const u8 gEasyChatWord_Lolling[] = _("GRAN");
const u8 gEasyChatWord_Silky[] = _("BONITO");
const u8 gEasyChatWord_Sadly[] = _("BONITA");
const u8 gEasyChatWord_Hopeless[] = _("HORRIBLE");
const u8 gEasyChatWord_Useless[] = _("ASUSTADA");
const u8 gEasyChatWord_Drooling[] = _("ASUSTADO");
const u8 gEasyChatWord_Exciting[] = _("DEMASIADO");
const u8 gEasyChatWord_Thick[] = _("ATROZ");
const u8 gEasyChatWord_Smooth[] = _("ATROCES");
const u8 gEasyChatWord_Slimy[] = _("BRUTAL");
const u8 gEasyChatWord_Thin[] = _("FEROCES");
const u8 gEasyChatWord_Break[] = _("REFRESCANTE");
const u8 gEasyChatWord_Voracious[] = _("VORAZ");
const u8 gEasyChatWord_Scatter[] = _("FEROZ");
const u8 gEasyChatWord_Awesome[] = _("FORMIDABLE");
const u8 gEasyChatWord_Wimpy[] = _("TERRORÍFICO");
const u8 gEasyChatWord_Wobbly[] = _("TERRORÍFICA");
const u8 gEasyChatWord_Shaky[] = _("BRUTALES");
const u8 gEasyChatWord_Ripped[] = _("ESPANTOSO");
const u8 gEasyChatWord_Shredded[] = _("ESPANTOSA");
const u8 gEasyChatWord_Increasing[] = _("RENCOROSO");
const u8 gEasyChatWord_Yet[] = _("RENCOROSA");
const u8 gEasyChatWord_Destroyed[] = _("AUTÉNTICA");
const u8 gEasyChatWord_Fiery[] = _("AUTÉNTICO");
const u8 gEasyChatWord_LoveyDovey[] = _("LLENO");
const u8 gEasyChatWord_Happily[] = _("BUENA");
const u8 gEasyChatWord_Anticipation[] = _("BUENO");

const struct EasyChatWordInfo gEasyChatGroup_Adjectives[] = {
    [EC_INDEX(EC_WORD_WANDERING)] =
    {
        .text = gEasyChatWord_Wandering,
        .alphabeticalOrder = 1,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RICKETY)] =
    {
        .text = gEasyChatWord_Rickety,
        .alphabeticalOrder = 13,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ROCK_SOLID)] =
    {
        .text = gEasyChatWord_RockSolid,
        .alphabeticalOrder = 14,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TICKLISH)] =
    {
        .text = gEasyChatWord_Hungry,
        .alphabeticalOrder = 17,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Tight,
        .alphabeticalOrder = 16,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Ticklish,
        .alphabeticalOrder = 31,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TWIRLING)] =
    {
        .text = gEasyChatWord_Twirling,
        .alphabeticalOrder = 32,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SPIRALING)] =
    {
        .text = gEasyChatWord_Spiraling,
        .alphabeticalOrder = 11,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THIRSTY)] =
    {
        .text = gEasyChatWord_Thirsty,
        .alphabeticalOrder = 10,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOLLING)] =
    {
        .text = gEasyChatWord_Lolling,
        .alphabeticalOrder = 18,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SILKY)] =
    {
        .text = gEasyChatWord_Silky,
        .alphabeticalOrder = 26,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SADLY)] =
    {
        .text = gEasyChatWord_Sadly,
        .alphabeticalOrder = 34,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOPELESS)] =
    {
        .text = gEasyChatWord_Hopeless,
        .alphabeticalOrder = 35,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_USELESS)] =
    {
        .text = gEasyChatWord_Useless,
        .alphabeticalOrder = 15,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DROOLING)] =
    {
        .text = gEasyChatWord_Drooling,
        .alphabeticalOrder = 28,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXCITING)] =
    {
        .text = gEasyChatWord_Exciting,
        .alphabeticalOrder = 27,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THICK)] =
    {
        .text = gEasyChatWord_Thick,
        .alphabeticalOrder = 19,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SMOOTH)] =
    {
        .text = gEasyChatWord_Smooth,
        .alphabeticalOrder = 22,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SLIMY)] =
    {
        .text = gEasyChatWord_Slimy,
        .alphabeticalOrder = 23,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THIN)] =
    {
        .text = gEasyChatWord_Thin,
        .alphabeticalOrder = 9,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BREAK)] =
    {
        .text = gEasyChatWord_Break,
        .alphabeticalOrder = 12,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_VORACIOUS)] =
    {
        .text = gEasyChatWord_Voracious,
        .alphabeticalOrder = 33,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SCATTER)] =
    {
        .text = gEasyChatWord_Scatter,
        .alphabeticalOrder = 7,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WIMPY)] =
    {
        .text = gEasyChatWord_Awesome,
        .alphabeticalOrder = 8,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RIPPED)] =
    {
        .text = gEasyChatWord_Wimpy,
        .alphabeticalOrder = 5,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHREDDED)] =
    {
        .text = gEasyChatWord_Wobbly,
        .alphabeticalOrder = 6,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YET)] =
    {
        .text = gEasyChatWord_Shaky,
        .alphabeticalOrder = 4,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Ripped,
        .alphabeticalOrder = 3,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Shredded,
        .alphabeticalOrder = 20,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Increasing,
        .alphabeticalOrder = 30,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Yet,
        .alphabeticalOrder = 29,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DESTROYED)] =
    {
        .text = gEasyChatWord_Destroyed,
        .alphabeticalOrder = 0,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOVEY_DOVEY)] =
    {
        .text = gEasyChatWord_Fiery,
        .alphabeticalOrder = 2,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HAPPILY)] =
    {
        .text = gEasyChatWord_LoveyDovey,
        .alphabeticalOrder = 25,
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ANTICIPATION)] =
    {
        .text = gEasyChatWord_Happily,
        .alphabeticalOrder = 24,
        .enabled = TRUE,
    },
    {
        .text = gEasyChatWord_Anticipation,
        .alphabeticalOrder = 21,
        .enabled = TRUE,
    },
};
