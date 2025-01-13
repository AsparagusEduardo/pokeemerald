const struct Item gItems[] =
{
    [ITEM_NONE] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Pokeballs

    [ITEM_MASTER_BALL] =
    {
        .name = LANGUAGE_STRING(
            "MASTER BALL",
            "MASTER BALL",
            "MASTER BALL",
            "MASTER BALL"),
        .itemId = ITEM_MASTER_BALL,
        .price = 0,
        .description = sMasterBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_MASTER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_MASTER_BALL - FIRST_BALL,
    },

    [ITEM_ULTRA_BALL] =
    {
        .name = LANGUAGE_STRING(
            "ULTRA BALL",
            "HYPER BALL",
            "ULTRA BALL",
            "ULTRABALL"),
        .itemId = ITEM_ULTRA_BALL,
        .price = 1200,
        .description = sUltraBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_ULTRA_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_ULTRA_BALL - FIRST_BALL,
    },

    [ITEM_GREAT_BALL] =
    {
        .name = LANGUAGE_STRING(
            "GREAT BALL",
            "SUPER BALL",
            "MEGA BALL",
            "SUPERBALL"),
        .itemId = ITEM_GREAT_BALL,
        .price = 600,
        .description = sGreatBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_GREAT_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_GREAT_BALL - FIRST_BALL,
    },

    [ITEM_POKE_BALL] =
    {
        .name = LANGUAGE_STRING(
            "POKé BALL",
            "POKé BALL",
            "POKé BALL",
            "POKé BALL"),
        .itemId = ITEM_POKE_BALL,
        .price = 200,
        .description = sPokeBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_POKE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_POKE_BALL - FIRST_BALL,
    },

    [ITEM_SAFARI_BALL] =
    {
        .name = LANGUAGE_STRING(
            "SAFARI BALL",
            "SAFARI BALL",
            "SAFARI BALL"),
        .itemId = ITEM_SAFARI_BALL,
        .price = 0,
        .description = sSafariBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_SAFARI_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_SAFARI_BALL - FIRST_BALL,
    },

    [ITEM_NET_BALL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "NET BALL",
            "FILET BALL",
            "RETE BALL"),
=======
        .name = _("MALLA BALL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_NET_BALL,
        .price = 1000,
        .description = sNetBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_NET_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_NET_BALL - FIRST_BALL,
    },

    [ITEM_DIVE_BALL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "DIVE BALL",
            "SCUBA BALL",
            "SUB BALL"),
=======
        .name = _("BUCEO BALL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_DIVE_BALL,
        .price = 1000,
        .description = sDiveBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_DIVE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_DIVE_BALL - FIRST_BALL,
    },

    [ITEM_NEST_BALL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "NEST BALL",
            "FAIBLO BALL",
            "MINOR BALL"),
=======
        .name = _("NIDO BALL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_NEST_BALL,
        .price = 1000,
        .description = sNestBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_NEST_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_NEST_BALL - FIRST_BALL,
    },

    [ITEM_REPEAT_BALL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "REPEAT BALL",
            "BIS BALL",
            "BIS BALL"),
=======
        .name = _("ACOPIO BALL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_REPEAT_BALL,
        .price = 1000,
        .description = sRepeatBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_REPEAT_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_REPEAT_BALL - FIRST_BALL,
    },

    [ITEM_TIMER_BALL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TIMER BALL",
            "CHRONO BALL",
            "TIMER BALL"),
=======
        .name = _("TURNO BALL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_TIMER_BALL,
        .price = 1000,
        .description = sTimerBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_TIMER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_TIMER_BALL - FIRST_BALL,
    },

    [ITEM_LUXURY_BALL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LUXURY BALL",
            "LUXE BALL",
            "CHIC BALL"),
=======
        .name = _("LUJO BALL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LUXURY_BALL,
        .price = 1000,
        .description = sLuxuryBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_LUXURY_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_LUXURY_BALL - FIRST_BALL,
    },

    [ITEM_PREMIER_BALL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PREMIER BALL",
            "HONOR BALL",
            "PREMIER BALL"),
=======
        .name = _("HONOR BALL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_PREMIER_BALL,
        .price = 200,
        .description = sPremierBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_PREMIER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_PREMIER_BALL - FIRST_BALL,
    },

// Medicine

    [ITEM_POTION] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "POTION",
            "POTION",
            "POZIONE"),
=======
        .name = _("POCIÓN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_POTION,
        .price = 300,
        .holdEffectParam = 20,
        .description = sPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ANTIDOTE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ANTIDOTE",
            "ANTIDOTE",
            "ANTIDOTO"),
=======
        .name = _("ANTÍDOTO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ANTIDOTE,
        .price = 100,
        .description = sAntidoteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_BURN_HEAL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BURN HEAL",
            "ANTI-BRULE",
            "ANTISCOTTAT."),
=======
        .name = _("ANTIQUEMAR"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BURN_HEAL,
        .price = 250,
        .description = sBurnHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ICE_HEAL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ICE HEAL",
            "ANTIGEL",
            "ANTIGELO"),
=======
        .name = _("ANTIHIELO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ICE_HEAL,
        .price = 250,
        .description = sIceHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_AWAKENING] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "AWAKENING",
            "REVEIL",
            "SVEGLIA"),
=======
        .name = _("DESPERTAR"),
>>>>>>> Egg/spanish
        .itemId = ITEM_AWAKENING,
        .price = 250,
        .description = sAwakeningDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_PARALYZE_HEAL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PARLYZ HEAL",
            "ANTI-PARA",
            "ANTIPARALISI"),
=======
        .name = _("ANTIPARALIZ"),
>>>>>>> Egg/spanish
        .itemId = ITEM_PARALYZE_HEAL,
        .price = 200,
        .description = sParalyzeHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FULL_RESTORE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "FULL RESTORE",
            "GUERISON",
            "RICARICA TOT"),
=======
        .name = _("RESTAU. TODO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_FULL_RESTORE,
        .price = 3000,
        .holdEffectParam = 255,
        .description = sFullRestoreDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_MAX_POTION] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MAX POTION",
            "POTION MAX",
            "POZIONE MAX"),
=======
        .name = _("MÁX. POCIÓN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MAX_POTION,
        .price = 2500,
        .holdEffectParam = 255,
        .description = sMaxPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_HYPER_POTION] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HYPER POTION",
            "HYPER POTION",
            "IPERPOZIONE"),
=======
        .name = _("HIPERPOCIÓN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_HYPER_POTION,
        .price = 1200,
        .holdEffectParam = 200,
        .description = sHyperPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SUPER_POTION] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SUPER POTION",
            "SUPER POTION",
            "SUPERPOZIONE"),
=======
        .name = _("SUPERPOCIÓN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SUPER_POTION,
        .price = 700,
        .holdEffectParam = 50,
        .description = sSuperPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FULL_HEAL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "FULL HEAL",
            "TOTAL SOIN",
            "CURA TOTALE"),
=======
        .name = _("CURA TOTAL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_FULL_HEAL,
        .price = 600,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_REVIVE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "REVIVE",
            "RAPPEL",
            "REVITALIZ."),
=======
        .name = _("REVIVIR"),
>>>>>>> Egg/spanish
        .itemId = ITEM_REVIVE,
        .price = 1500,
        .description = sReviveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_MAX_REVIVE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MAX REVIVE",
            "RAPPEL MAX",
            "REVITAL. MAX"),
=======
        .name = _("MÁX. REVIVIR"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MAX_REVIVE,
        .price = 4000,
        .description = sMaxReviveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FRESH_WATER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "FRESH WATER",
            "EAU FRAICHE",
            "ACQUA FRESCA"),
=======
        .name = _("AGUA FRESCA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_FRESH_WATER,
        .price = 200,
        .holdEffectParam = 50,
        .description = sFreshWaterDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SODA_POP] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SODA POP",
            "SODA COOL",
            "GASSOSA"),
=======
        .name = _("REFRESCO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SODA_POP,
        .price = 300,
        .holdEffectParam = 60,
        .description = sSodaPopDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_LEMONADE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LEMONADE",
            "LIMONADE",
            "LEMONSUCCO"),
=======
        .name = _("LIMONADA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LEMONADE,
        .price = 350,
        .holdEffectParam = 80,
        .description = sLemonadeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_MOOMOO_MILK] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MOOMOO MILK",
            "LAIT MEUMEU",
            "LATTE MUMU"),
=======
        .name = _("LECHE MU-MU"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MOOMOO_MILK,
        .price = 500,
        .holdEffectParam = 100,
        .description = sMoomooMilkDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ENERGY_POWDER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ENERGYPOWDER",
            "POUDRENERGIE",
            "POLVENERGIA"),
=======
        .name = _("POLVOENERGÍA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ENERGY_POWDER,
        .price = 500,
        .description = sEnergyPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ENERGY_ROOT] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ENERGY ROOT",
            "RACINENERGIE",
            "RADICENERGIA"),
=======
        .name = _("RAÍZ ENERGÍA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ENERGY_ROOT,
        .price = 800,
        .description = sEnergyRootDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_HEAL_POWDER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HEAL POWDER",
            "POUDRE SOIN",
            "POLVOCURA"),
=======
        .name = _("POL.CURACIÓN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_HEAL_POWDER,
        .price = 450,
        .description = sHealPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_REVIVAL_HERB] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "REVIVAL HERB",
            "HERBE RAPPEL",
            "VITALERBA"),
=======
        .name = _("HIERBA REV."),
>>>>>>> Egg/spanish
        .itemId = ITEM_REVIVAL_HERB,
        .price = 2800,
        .description = sRevivalHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ETHER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ETHER",
            "HUILE",
            "ETERE"),
=======
        .name = _("ÉTER"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ETHER,
        .price = 1200,
        .holdEffectParam = 10,
        .description = sEtherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_MAX_ETHER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MAX ETHER",
            "HUILE MAX",
            "ETERE MAX"),
=======
        .name = _("ÉTER MÁX."),
>>>>>>> Egg/spanish
        .itemId = ITEM_MAX_ETHER,
        .price = 2000,
        .holdEffectParam = 255,
        .description = sMaxEtherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_ELIXIR] =
    {
        .name = LANGUAGE_STRING(
            "ELIXIR",
            "ELIXIR",
            "ELISIR"),
        .itemId = ITEM_ELIXIR,
        .price = 3000,
        .holdEffectParam = 10,
        .description = sElixirDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_MAX_ELIXIR] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MAX ELIXIR",
            "MAX ELIXIR",
            "ELISIR MAX"),
=======
        .name = _("ELIXIR MÁX."),
>>>>>>> Egg/spanish
        .itemId = ITEM_MAX_ELIXIR,
        .price = 4500,
        .holdEffectParam = 255,
        .description = sMaxElixirDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_LAVA_COOKIE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LAVA COOKIE",
            "LAVA COOKIE",
            "LAVOTTINO"),
=======
        .name = _("GALLETA LAVA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LAVA_COOKIE,
        .price = 200,
        .description = sLavaCookieDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_BLUE_FLUTE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BLUE FLUTE",
            "FLUTE BLEUE",
            "FLAUTO BLU"),
=======
        .name = _("FLAUTA AZUL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BLUE_FLUTE,
        .price = 100,
        .description = sBlueFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_YELLOW_FLUTE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "YELLOW FLUTE",
            "FLUTE JAUNE",
            "FLAUTO GIAL."),
=======
        .name = _("FL. AMARILLA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_YELLOW_FLUTE,
        .price = 200,
        .description = sYellowFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_RED_FLUTE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RED FLUTE",
            "FLUTE ROUGE",
            "FLAUTO ROSSO"),
=======
        .name = _("FLAUTA ROJA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_RED_FLUTE,
        .price = 300,
        .description = sRedFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_BLACK_FLUTE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BLACK FLUTE",
            "FLUTE NOIRE",
            "FLAUTO NERO"),
=======
        .name = _("FLAUTA NEGRA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BLACK_FLUTE,
        .price = 400,
        .holdEffectParam = 50,
        .description = sBlackFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
    },

    [ITEM_WHITE_FLUTE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "WHITE FLUTE",
            "FLUTEBLANCHE",
            "FLAUTO B.NCO"),
=======
        .name = _("FL. BLANCA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_WHITE_FLUTE,
        .price = 500,
        .holdEffectParam = 150,
        .description = sWhiteFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
    },

    [ITEM_BERRY_JUICE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BERRY JUICE",
            "JUS DE BAIE",
            "SUCCODIBACCA"),
=======
        .name = _("ZUMO DE BAYA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BERRY_JUICE,
        .price = 100,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 20,
        .description = sBerryJuiceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SACRED_ASH] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SACRED ASH",
            "CENDRESACREE",
            "CENEREMAGICA"),
=======
        .name = _("CEN. SAGRADA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SACRED_ASH,
        .price = 200,
        .description = sSacredAshDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_SacredAsh,
    },

// Collectibles

    [ITEM_SHOAL_SALT] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SHOAL SALT",
            "SEL TREFONDS",
            "SALE ONDOSO"),
=======
        .name = _("SAL CARDUMEN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SHOAL_SALT,
        .price = 20,
        .description = sShoalSaltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHOAL_SHELL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SHOAL SHELL",
            "CO. TREFONDS",
            "GUSCIONDOSO"),
=======
        .name = _("C. CARDUMEN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SHOAL_SHELL,
        .price = 20,
        .description = sShoalShellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RED_SHARD] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RED SHARD",
            "TESSON ROUGE",
            "COCCIO ROSSO"),
=======
        .name = _("PARTE ROJA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_RED_SHARD,
        .price = 200,
        .description = sRedShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_SHARD] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BLUE SHARD",
            "TESSON BLEU",
            "COCCIO BLU"),
=======
        .name = _("PARTE AZUL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BLUE_SHARD,
        .price = 200,
        .description = sBlueShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_YELLOW_SHARD] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "YELLOW SHARD",
            "TESSON JAUNE",
            "COCCIO GIAL."),
=======
        .name = _("P. AMARILLA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_YELLOW_SHARD,
        .price = 200,
        .description = sYellowShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GREEN_SHARD] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GREEN SHARD",
            "TESSON VERT",
            "COCCIO VERDE"),
=======
        .name = _("PARTE VERDE"),
>>>>>>> Egg/spanish
        .itemId = ITEM_GREEN_SHARD,
        .price = 200,
        .description = sGreenShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_034] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_035] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_036] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_037] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_038] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_039] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_03A] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_03B] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_03C] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_03D] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_03E] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Vitamins

    [ITEM_HP_UP] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HP UP",
            "PV PLUS",
            "PS-SU"),
=======
        .name = _("MÁS PS"),
>>>>>>> Egg/spanish
        .itemId = ITEM_HP_UP,
        .price = 9800,
        .description = sHPUpDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_PROTEIN] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PROTEIN",
            "PROTEINE",
            "PROTEINA"),
=======
        .name = _("PROTEÍNA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_PROTEIN,
        .price = 9800,
        .description = sProteinDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_IRON] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "IRON",
            "FER",
            "FERRO"),
=======
        .name = _("HIERRO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_IRON,
        .price = 9800,
        .description = sIronDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_CARBOS] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CARBOS",
            "CARBONE",
            "CARBURANTE"),
=======
        .name = _("CARBURANTE"),
>>>>>>> Egg/spanish
        .itemId = ITEM_CARBOS,
        .price = 9800,
        .description = sCarbosDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_CALCIUM] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CALCIUM",
            "CALCIUM",
            "CALCIO"),
=======
        .name = _("CALCIO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_CALCIUM,
        .price = 9800,
        .description = sCalciumDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_RARE_CANDY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RARE CANDY",
            "SUPER BONBON",
            "CARAM. RARA"),
=======
        .name = _("CARAMELORARO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_RARE_CANDY,
        .price = 4800,
        .description = sRareCandyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
    },

    [ITEM_PP_UP] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PP UP",
            "PP PLUS",
            "PP-SU"),
=======
        .name = _("MÁS PP"),
>>>>>>> Egg/spanish
        .itemId = ITEM_PP_UP,
        .price = 9800,
        .description = sPPUpDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
    },

    [ITEM_ZINC] =
    {
        .name = LANGUAGE_STRING(
            "ZINC",
            "ZINC",
            "ZINCO"),
        .itemId = ITEM_ZINC,
        .price = 9800,
        .description = sZincDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_PP_MAX] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PP MAX",
            "PP MAX",
            "PP-MAX"),
=======
        .name = _("MÁX. PP"),
>>>>>>> Egg/spanish
        .itemId = ITEM_PP_MAX,
        .price = 9800,
        .description = sPPMaxDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
    },

    [ITEM_048] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Battle items

    [ITEM_GUARD_SPEC] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GUARD SPEC.",
            "DEFENSE SPEC",
            "SUPERGUARDIA"),
=======
        .name = _("PROTEC. ESP."),
>>>>>>> Egg/spanish
        .itemId = ITEM_GUARD_SPEC,
        .price = 700,
        .description = sGuardSpecDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_DIRE_HIT] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "DIRE HIT",
            "MUSCLE +",
            "SUPERCOLPO"),
=======
        .name = _("DIRECTO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_DIRE_HIT,
        .price = 650,
        .description = sDireHitDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_ATTACK] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "X ATTACK",
            "ATTAQUE +",
            "ATTACCO X"),
=======
        .name = _("ATAQUE X"),
>>>>>>> Egg/spanish
        .itemId = ITEM_X_ATTACK,
        .price = 500,
        .description = sXAttackDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_DEFEND] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "X DEFEND",
            "DEFENSE +",
            "DIFESA X"),
=======
        .name = _("DEFENSA X"),
>>>>>>> Egg/spanish
        .itemId = ITEM_X_DEFEND,
        .price = 550,
        .description = sXDefendDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_SPEED] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "X SPEED",
            "VITESSE +",
            "VELOCITÀ X"),
=======
        .name = _("VELOCIDAD X"),
>>>>>>> Egg/spanish
        .itemId = ITEM_X_SPEED,
        .price = 350,
        .description = sXSpeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_ACCURACY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "X ACCURACY",
            "PRECISION +",
            "PRECISIONE X"),
=======
        .name = _("PRECISIÓN X"),
>>>>>>> Egg/spanish
        .itemId = ITEM_X_ACCURACY,
        .price = 950,
        .description = sXAccuracyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_SPECIAL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "X SPECIAL",
            "SPECIAL +",
            "SPECIAL X"),
=======
        .name = _("ESPECIAL X"),
>>>>>>> Egg/spanish
        .itemId = ITEM_X_SPECIAL,
        .price = 350,
        .description = sXSpecialDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_POKE_DOLL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "POKé DOLL",
            "POKéPOUPEE",
            "POKé BAMBOLA"),
=======
        .name = _("POKé MUÑECO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_POKE_DOLL,
        .price = 1000,
        .description = sPokeDollDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_Escape,
    },

    [ITEM_FLUFFY_TAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "FLUFFY TAIL",
            "QUEUE SKITTY",
            "CODA SKITTY"),
=======
        .name = _("COLA SKITTY"),
>>>>>>> Egg/spanish
        .itemId = ITEM_FLUFFY_TAIL,
        .price = 1000,
        .description = sFluffyTailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_Escape,
    },

    [ITEM_052] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Field items

    [ITEM_SUPER_REPEL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SUPER REPEL",
            "SUPEREPOUSSE",
            "SUPERREPELL."),
=======
        .name = _("SUPERREPEL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SUPER_REPEL,
        .price = 500,
        .holdEffectParam = 200,
        .description = sSuperRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
    },

    [ITEM_MAX_REPEL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MAX REPEL",
            "MAX REPOUSSE",
            "REPELL. MAX"),
=======
        .name = _("MÁX. REPEL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MAX_REPEL,
        .price = 700,
        .holdEffectParam = 250,
        .description = sMaxRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
    },

    [ITEM_ESCAPE_ROPE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ESCAPE ROPE",
            "CORDE SORTIE",
            "FUNE DI FUGA"),
=======
        .name = _("CUERDA HUIDA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ESCAPE_ROPE,
        .price = 550,
        .description = sEscapeRopeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_EscapeRope,
    },

    [ITEM_REPEL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "REPEL",
            "REPOUSSE",
            "REPELLENTE"),
=======
        .name = _("REPELENTE"),
>>>>>>> Egg/spanish
        .itemId = ITEM_REPEL,
        .price = 350,
        .holdEffectParam = 100,
        .description = sRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
    },

    [ITEM_057] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_058] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_059] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_05A] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_05B] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_05C] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Evolution stones

    [ITEM_SUN_STONE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SUN STONE",
            "PIERRESOLEIL",
            "PIETRASOLARE"),
=======
        .name = _("PIEDRA SOLAR"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SUN_STONE,
        .price = 2100,
        .description = sSunStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_MOON_STONE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MOON STONE",
            "PIERRE LUNE",
            "PIETRALUNARE"),
=======
        .name = _("PIEDRA LUNAR"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MOON_STONE,
        .price = 0,
        .description = sMoonStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_FIRE_STONE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "FIRE STONE",
            "PIERRE FEU",
            "PIETRAFOCAIA"),
=======
        .name = _("PIEDRA FUEGO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_FIRE_STONE,
        .price = 2100,
        .description = sFireStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_THUNDER_STONE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "THUNDERSTONE",
            "PIERREFOUDRE",
            "PIETRATUONO"),
=======
        .name = _("PIEDRATRUENO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_THUNDER_STONE,
        .price = 2100,
        .description = sThunderStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_WATER_STONE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "WATER STONE",
            "PIERRE EAU",
            "PIETRAIDRICA"),
=======
        .name = _("PIEDRA AGUA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_WATER_STONE,
        .price = 2100,
        .description = sWaterStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_LEAF_STONE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LEAF STONE",
            "PIERREPLANTE",
            "PIETRAFOGLIA"),
=======
        .name = _("PIEDRA HOJA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LEAF_STONE,
        .price = 2100,
        .description = sLeafStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_063] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_064] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_065] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_066] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Valuable items

    [ITEM_TINY_MUSHROOM] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TINYMUSHROOM",
            "PETIT CHAMPI",
            "MINIFUNGO"),
=======
        .name = _("MINI SETA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_TINY_MUSHROOM,
        .price = 500,
        .description = sTinyMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIG_MUSHROOM] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BIG MUSHROOM",
            "GROS CHAMPI",
            "GRANDE FUNGO"),
=======
        .name = _("SETA GRANDE"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BIG_MUSHROOM,
        .price = 5000,
        .description = sBigMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_069] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PEARL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PEARL",
            "PERLE",
            "PERLA"),
=======
        .name = _("PERLA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_PEARL,
        .price = 1400,
        .description = sPearlDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIG_PEARL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BIG PEARL",
            "GRANDE PERLE",
            "GRANDE PERLA"),
=======
        .name = _("PERLA GRANDE"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BIG_PEARL,
        .price = 7500,
        .description = sBigPearlDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STARDUST] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "STARDUST",
            "POUSS.ETOILE",
            "POLVOSTELLA"),
=======
        .name = _("POLVOESTELAR"),
>>>>>>> Egg/spanish
        .itemId = ITEM_STARDUST,
        .price = 2000,
        .description = sStardustDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STAR_PIECE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "STAR PIECE",
            "MORC. ETOILE",
            "PEZZO STELLA"),
=======
        .name = _("TR. ESTRELLA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_STAR_PIECE,
        .price = 9800,
        .description = sStarPieceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NUGGET] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "NUGGET",
            "PEPITE",
            "PEPITA"),
=======
        .name = _("PEPITA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_NUGGET,
        .price = 10000,
        .description = sNuggetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HEART_SCALE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HEART SCALE",
            "ECAILLECOEUR",
            "SQUAMA CUORE"),
=======
        .name = _("ESC. CORAZÓN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_HEART_SCALE,
        .price = 100,
        .description = sHeartScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_070] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_071] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_072] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_073] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_074] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_075] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_076] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_077] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_078] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Mail
    [ITEM_ORANGE_MAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ORANGE MAIL",
            "LETTRE ORANJ",
            "MESS. AGRUME"),
=======
        .name = _("CAR. NARANJA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ORANGE_MAIL,
        .price = 50,
        .description = sOrangeMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_ORANGE_MAIL),
    },

    [ITEM_HARBOR_MAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HARBOR MAIL",
            "LETTRE PORT",
            "MESS. PORTO"),
=======
        .name = _("CARTA PUERTO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_HARBOR_MAIL,
        .price = 50,
        .description = sHarborMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_HARBOR_MAIL),
    },

    [ITEM_GLITTER_MAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GLITTER MAIL",
            "LETTRE BRILL",
            "MESS. LUCI"),
=======
        .name = _("CARTA BRILLO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_GLITTER_MAIL,
        .price = 50,
        .description = sGlitterMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_GLITTER_MAIL),
    },

    [ITEM_MECH_MAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MECH MAIL",
            "LETTRE MECA",
            "MESS. TECNO"),
=======
        .name = _("CARTA IMÁN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MECH_MAIL,
        .price = 50,
        .description = sMechMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_MECH_MAIL),
    },

    [ITEM_WOOD_MAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "WOOD MAIL",
            "LETTRE BOIS",
            "MESS. BOSCO"),
=======
        .name = _("CARTA MADERA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_WOOD_MAIL,
        .price = 50,
        .description = sWoodMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WOOD_MAIL),
    },

    [ITEM_WAVE_MAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "WAVE MAIL",
            "LETTRE VAGUE",
            "MESS. ONDA"),
=======
        .name = _("CARTA OLA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_WAVE_MAIL,
        .price = 50,
        .description = sWaveMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WAVE_MAIL),
    },

    [ITEM_BEAD_MAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BEAD MAIL",
            "LETTRE BULLE",
            "MESS. PERLE"),
=======
        .name = _("CARTA IMAGEN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BEAD_MAIL,
        .price = 50,
        .description = sBeadMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_BEAD_MAIL),
    },

    [ITEM_SHADOW_MAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SHADOW MAIL",
            "LETTRE OMBRE",
            "MESS. OMBRA"),
=======
        .name = _("CARTA SOMBRA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SHADOW_MAIL,
        .price = 50,
        .description = sShadowMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_SHADOW_MAIL),
    },

    [ITEM_TROPIC_MAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TROPIC MAIL",
            "LETTRE TROPI",
            "MESS. TROPIC"),
=======
        .name = _("CAR. TROPIC."),
>>>>>>> Egg/spanish
        .itemId = ITEM_TROPIC_MAIL,
        .price = 50,
        .description = sTropicMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_TROPIC_MAIL),
    },

    [ITEM_DREAM_MAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "DREAM MAIL",
            "LETTRE SONGE",
            "MESS. SOGNO"),
=======
        .name = _("CARTA SUEÑO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_DREAM_MAIL,
        .price = 50,
        .description = sDreamMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_DREAM_MAIL),
    },

    [ITEM_FAB_MAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "FAB MAIL",
            "LETTRE COOL",
            "MESS. LUSSO"),
=======
        .name = _("CARTA FAB."),
>>>>>>> Egg/spanish
        .itemId = ITEM_FAB_MAIL,
        .price = 50,
        .description = sFabMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_FAB_MAIL),
    },

    [ITEM_RETRO_MAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RETRO MAIL",
            "LETTRE RETRO",
            "MESS. RÉTRO"),
=======
        .name = _("CARTA RETRO."),
>>>>>>> Egg/spanish
        .itemId = ITEM_RETRO_MAIL,
        .price = 0,
        .description = sRetroMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_RETRO_MAIL),
    },

// Berries

    [ITEM_CHERI_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CHERI BERRY",
            "BAIE CERIZ",
            "BACCALIEGIA"),
=======
        .name = _("BAYA ZREZA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_CHERI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_PAR,
        .description = sCheriBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_CHESTO_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CHESTO BERRY",
            "BAIE MARON",
            "BACCASTAGNA"),
=======
        .name = _("BAYA ATANIA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_CHESTO_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_SLP,
        .description = sChestoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_PECHA_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PECHA BERRY",
            "BAIE PECHA",
            "BACCAPESCA"),
=======
        .name = _("BAYA MELOC"),
>>>>>>> Egg/spanish
        .itemId = ITEM_PECHA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_PSN,
        .description = sPechaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_RAWST_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RAWST BERRY",
            "BAIE FRAIVE",
            "BACCAFRAGO"),
=======
        .name = _("BAYA SAFRE"),
>>>>>>> Egg/spanish
        .itemId = ITEM_RAWST_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_BRN,
        .description = sRawstBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ASPEAR_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ASPEAR BERRY",
            "BAIE WILLIA",
            "BACCAPERINA"),
=======
        .name = _("BAYA PERASI"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ASPEAR_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_FRZ,
        .description = sAspearBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_LEPPA_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LEPPA BERRY",
            "BAIE MEPO",
            "BACCAMELA"),
=======
        .name = _("BAYA ZANAMA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LEPPA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_PP,
        .holdEffectParam = 10,
        .description = sLeppaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_ORAN_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ORAN BERRY",
            "BAIE ORAN",
            "BACCARANCIA"),
=======
        .name = _("BAYA ARANJA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ORAN_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 10,
        .description = sOranBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_PERSIM_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PERSIM BERRY",
            "BAIE KIKA",
            "BACCAKI"),
=======
        .name = _("BAYA CAQUIC"),
>>>>>>> Egg/spanish
        .itemId = ITEM_PERSIM_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_CONFUSION,
        .description = sPersimBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_LUM_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LUM BERRY",
            "BAIE PRINE",
            "BACCAPRUGNA"),
=======
        .name = _("BAYA ZIUELA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LUM_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_STATUS,
        .description = sLumBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SITRUS_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SITRUS BERRY",
            "BAIE SITRUS",
            "BACCACEDRO"),
=======
        .name = _("BAYA ZIDRA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SITRUS_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 30,
        .description = sSitrusBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FIGY_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "FIGY BERRY",
            "BAIE FIGUY",
            "BACCAFICO"),
=======
        .name = _("BAYA HIGOG"),
>>>>>>> Egg/spanish
        .itemId = ITEM_FIGY_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SPICY,
        .holdEffectParam = 8,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WIKI_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "WIKI BERRY",
            "BAIE WIKI",
            "BACCAKIWI"),
=======
        .name = _("BAYA WIKI"),
>>>>>>> Egg/spanish
        .itemId = ITEM_WIKI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_DRY,
        .holdEffectParam = 8,
        .description = sWikiBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGO_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MAGO BERRY",
            "BAIE MAGO",
            "BACCAMANGO"),
=======
        .name = _("BAYA ANGO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MAGO_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SWEET,
        .holdEffectParam = 8,
        .description = sMagoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AGUAV_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "AGUAV BERRY",
            "BAIE GOWAV",
            "BACCAGUAVA"),
=======
        .name = _("BAYA GUAYA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_AGUAV_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_BITTER,
        .holdEffectParam = 8,
        .description = sAguavBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_IAPAPA_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "IAPAPA BERRY",
            "BAIE PAPAYA",
            "BACCAPAIA"),
=======
        .name = _("BAYA PABAYA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_IAPAPA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SOUR,
        .holdEffectParam = 8,
        .description = sIapapaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RAZZ_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RAZZ BERRY",
            "BAIE FRAMBY",
            "BACCALAMPON"),
=======
        .name = _("BAYA FRAMBU"),
>>>>>>> Egg/spanish
        .itemId = ITEM_RAZZ_BERRY,
        .price = 20,
        .description = sRazzBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUK_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BLUK BERRY",
            "BAIE REMU",
            "BACCAMORA"),
=======
        .name = _("BAYA ORAM"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BLUK_BERRY,
        .price = 20,
        .description = sBlukBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NANAB_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "NANAB BERRY",
            "BAIE NANAB",
            "BACCABANA"),
=======
        .name = _("BAYA LATANO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_NANAB_BERRY,
        .price = 20,
        .description = sNanabBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WEPEAR_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "WEPEAR BERRY",
            "BAIE REPOI",
            "BACCAPERA"),
=======
        .name = _("BAYA PERAGU"),
>>>>>>> Egg/spanish
        .itemId = ITEM_WEPEAR_BERRY,
        .price = 20,
        .description = sWepearBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PINAP_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PINAP BERRY",
            "BAIE NANANA",
            "BACCANANAS"),
=======
        .name = _("BAYA PINIA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_PINAP_BERRY,
        .price = 20,
        .description = sPinapBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POMEG_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "POMEG BERRY",
            "BAIE GRENA",
            "BACCAGRANA"),
=======
        .name = _("BAYA GRANA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_POMEG_BERRY,
        .price = 20,
        .description = sPomegBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_KELPSY_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "KELPSY BERRY",
            "BAIE ALGA",
            "BACCALGA"),
=======
        .name = _("BAYA ALGAMA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_KELPSY_BERRY,
        .price = 20,
        .description = sKelpsyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_QUALOT_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "QUALOT BERRY",
            "BAIE QUALOT",
            "BACCALOQUAT"),
=======
        .name = _("BAYA ISPERO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_QUALOT_BERRY,
        .price = 20,
        .description = sQualotBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_HONDEW_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HONDEW BERRY",
            "BAIE LONME",
            "BACCAMELON"),
=======
        .name = _("BAYA MELUCE"),
>>>>>>> Egg/spanish
        .itemId = ITEM_HONDEW_BERRY,
        .price = 20,
        .description = sHondewBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_GREPA_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GREPA BERRY",
            "BAIE RESIN",
            "BACCAUVA"),
=======
        .name = _("BAYA UVAV"),
>>>>>>> Egg/spanish
        .itemId = ITEM_GREPA_BERRY,
        .price = 20,
        .description = sGrepaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_TAMATO_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TAMATO BERRY",
            "BAIE TAMATO",
            "BACCAMODORO"),
=======
        .name = _("BAYA TAMATE"),
>>>>>>> Egg/spanish
        .itemId = ITEM_TAMATO_BERRY,
        .price = 20,
        .description = sTamatoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_CORNN_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CORNN BERRY",
            "BAIE SIAM",
            "BACCAVENA"),
=======
        .name = _("BAYA MAIS"),
>>>>>>> Egg/spanish
        .itemId = ITEM_CORNN_BERRY,
        .price = 20,
        .description = sCornnBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGOST_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MAGOST BERRY",
            "BAIE MANGOU",
            "BACCAGOSTAN"),
=======
        .name = _("BAYA AOSTAN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MAGOST_BERRY,
        .price = 20,
        .description = sMagostBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RABUTA_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RABUTA BERRY",
            "BAIE RABUTA",
            "BACCAMBUTAN"),
=======
        .name = _("BAYA RAUTAN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_RABUTA_BERRY,
        .price = 20,
        .description = sRabutaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NOMEL_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "NOMEL BERRY",
            "BAIE TRONCI",
            "BACCALEMON"),
=======
        .name = _("BAYA MONLI"),
>>>>>>> Egg/spanish
        .itemId = ITEM_NOMEL_BERRY,
        .price = 20,
        .description = sNomelBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SPELON_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SPELON BERRY",
            "BAIE KIWAN",
            "BACCAMELOS"),
=======
        .name = _("BAYA WIKANO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SPELON_BERRY,
        .price = 20,
        .description = sSpelonBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PAMTRE_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PAMTRE BERRY",
            "BAIE PALMA",
            "BACCAPALMA"),
=======
        .name = _("BAYA PLAMA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_PAMTRE_BERRY,
        .price = 20,
        .description = sPamtreBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WATMEL_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "WATMEL BERRY",
            "BAIE STEKPA",
            "BACCACOMERO"),
=======
        .name = _("BAYA SAMBIA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_WATMEL_BERRY,
        .price = 20,
        .description = sWatmelBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DURIN_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "DURIN BERRY",
            "BAIE DURIN",
            "BACCADURIAN"),
=======
        .name = _("BAYA RUDION"),
>>>>>>> Egg/spanish
        .itemId = ITEM_DURIN_BERRY,
        .price = 20,
        .description = sDurinBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BELUE_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BELUE BERRY",
            "BAIE MYRTE",
            "BACCARTILLO"),
=======
        .name = _("BAYA ANDANO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BELUE_BERRY,
        .price = 20,
        .description = sBelueBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIECHI_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LIECHI BERRY",
            "BAIE LICHII",
            "BACCALICI"),
=======
        .name = _("BAYA LICHI"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LIECHI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_ATTACK_UP,
        .holdEffectParam = 4,
        .description = sLiechiBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GANLON_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GANLON BERRY",
            "BAIE LINGAN",
            "BACCALONGAN"),
=======
        .name = _("BAYA GONLAN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_GANLON_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = sGanlonBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SALAC_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SALAC BERRY",
            "BAIE SAILAK",
            "BACCASALAK"),
=======
        .name = _("BAYA ASLAC"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SALAC_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_SPEED_UP,
        .holdEffectParam = 4,
        .description = sSalacBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PETAYA_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PETAYA BERRY",
            "BAIE PITAYE",
            "BACCAPITAYA"),
=======
        .name = _("BAYA YAPATI"),
>>>>>>> Egg/spanish
        .itemId = ITEM_PETAYA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_SP_ATTACK_UP,
        .holdEffectParam = 4,
        .description = sPetayaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_APICOT_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "APICOT BERRY",
            "BAIE ABRIKO",
            "BACCACOCCA"),
=======
        .name = _("BAYA ARICOC"),
>>>>>>> Egg/spanish
        .itemId = ITEM_APICOT_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_SP_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = sApicotBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LANSAT_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LANSAT BERRY",
            "BAIE LANSAT",
            "BACCALANGSA"),
=======
        .name = _("BAYA ZONLAN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LANSAT_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CRITICAL_UP,
        .holdEffectParam = 4,
        .description = sLansatBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STARF_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "STARF BERRY",
            "BAIE FRISTA",
            "BACCAMBOLA"),
=======
        .name = _("BAYA ARABOL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_STARF_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RANDOM_STAT_UP,
        .holdEffectParam = 4,
        .description = sStarfBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ENIGMA_BERRY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ENIGMA BERRY",
            "BAIE ENIGMA",
            "BACCAENIGMA"),
=======
        .name = _("BAYA ENIGMA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ENIGMA_BERRY,
        .price = 20,
        .description = sEnigmaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU, // Type handled by ItemUseOutOfBattle_EnigmaBerry
        .fieldUseFunc = ItemUseOutOfBattle_EnigmaBerry,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_EnigmaBerry,
    },

    [ITEM_UNUSED_BERRY_1] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_UNUSED_BERRY_2] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_UNUSED_BERRY_3] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Hold items

    [ITEM_BRIGHT_POWDER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BRIGHTPOWDER",
            "POUDRECLAIRE",
            "LUMINPOLVERE"),
=======
        .name = _("POLVO BRILLO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BRIGHT_POWDER,
        .price = 10,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
        .description = sBrightPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WHITE_HERB] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "WHITE HERB",
            "HERBEBLANCHE",
            "ERBACHIARA"),
=======
        .name = _("HIER. BLANCA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_WHITE_HERB,
        .price = 100,
        .holdEffect = HOLD_EFFECT_RESTORE_STATS,
        .description = sWhiteHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MACHO_BRACE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MACHO BRACE",
            "BRAC. MACHO",
            "CRESCICAPPA"),
=======
        .name = _("VESTIDURA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MACHO_BRACE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_MACHO_BRACE,
        .description = sMachoBraceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EXP_SHARE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "EXP. SHARE",
            "MULTI EXP",
            "CONDIV. ESP."),
=======
        .name = _("REPARTIR EXP"),
>>>>>>> Egg/spanish
        .itemId = ITEM_EXP_SHARE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_EXP_SHARE,
        .description = sExpShareDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_QUICK_CLAW] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "QUICK CLAW",
            "VIVE GRIFFE",
            "RAPIDARTIGLI"),
=======
        .name = _("GARRA RÁPIDA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_QUICK_CLAW,
        .price = 100,
        .holdEffect = HOLD_EFFECT_QUICK_CLAW,
        .holdEffectParam = 20,
        .description = sQuickClawDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SOOTHE_BELL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SOOTHE BELL",
            "GRELOT ZEN",
            "CALMANELLA"),
=======
        .name = _("CAMP. ALIVIO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SOOTHE_BELL,
        .price = 100,
        .holdEffect = HOLD_EFFECT_FRIENDSHIP_UP,
        .description = sSootheBellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MENTAL_HERB] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MENTAL HERB",
            "HERBE MENTAL",
            "MENTALERBA"),
=======
        .name = _("HIER. MENTAL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MENTAL_HERB,
        .price = 100,
        .holdEffect = HOLD_EFFECT_CURE_ATTRACT,
        .description = sMentalHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHOICE_BAND] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CHOICE BAND",
            "BAND. CHOIX",
            "BENDASCELTA"),
=======
        .name = _("CIN. ELEGIDA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_CHOICE_BAND,
        .price = 100,
        .holdEffect = HOLD_EFFECT_CHOICE_BAND,
        .description = sChoiceBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KINGS_ROCK] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "KING'S ROCK",
            "ROCHE ROYALE",
            "ROCCIA DI RE"),
=======
        .name = _("ROCA DEL REY"),
>>>>>>> Egg/spanish
        .itemId = ITEM_KINGS_ROCK,
        .price = 100,
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
        .description = sKingsRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SILVER_POWDER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SILVERPOWDER",
            "POUDRE ARG.",
            "ARGENPOLVERE"),
=======
        .name = _("POLVO PLATA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SILVER_POWDER,
        .price = 100,
        .holdEffect = HOLD_EFFECT_BUG_POWER,
        .holdEffectParam = 10,
        .description = sSilverPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AMULET_COIN] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "AMULET COIN",
            "PIECE RUNE",
            "MONETAMULETO"),
=======
        .name = _("MON. AMULETO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_AMULET_COIN,
        .price = 100,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .holdEffectParam = 10,
        .description = sAmuletCoinDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CLEANSE_TAG] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CLEANSE TAG",
            "RUNE PURIF.",
            "VELOPURO"),
=======
        .name = _("AMULETO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_CLEANSE_TAG,
        .price = 200,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sCleanseTagDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SOUL_DEW] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SOUL DEW",
            "ROSEE AME",
            "CUORUGIADA"),
=======
        .name = _("ROCÍO BONDAD"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SOUL_DEW,
        .price = 200,
        .holdEffect = HOLD_EFFECT_SOUL_DEW,
        .description = sSoulDewDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEEP_SEA_TOOTH] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "DEEPSEATOOTH",
            "DENT OCEAN",
            "DENTE ABISSI"),
=======
        .name = _("DIENTE MAR."),
>>>>>>> Egg/spanish
        .itemId = ITEM_DEEP_SEA_TOOTH,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_TOOTH,
        .description = sDeepSeaToothDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEEP_SEA_SCALE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "DEEPSEASCALE",
            "ECAILLEOCEAN",
            "SQUAMABISSI"),
=======
        .name = _("ESCAMA MAR."),
>>>>>>> Egg/spanish
        .itemId = ITEM_DEEP_SEA_SCALE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_SCALE,
        .description = sDeepSeaScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SMOKE_BALL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SMOKE BALL",
            "BOULE FUMEE",
            "PALLA FUMO"),
=======
        .name = _("BOLA HUMO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SMOKE_BALL,
        .price = 200,
        .holdEffect = HOLD_EFFECT_CAN_ALWAYS_RUN,
        .description = sSmokeBallDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EVERSTONE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "EVERSTONE",
            "PIERRE STASE",
            "PIETRASTANTE"),
=======
        .name = _("PIEDRAETERNA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_EVERSTONE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PREVENT_EVOLVE,
        .description = sEverstoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FOCUS_BAND] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "FOCUS BAND",
            "BANDEAU",
            "BANDANA"),
=======
        .name = _("CINTA FOCUS"),
>>>>>>> Egg/spanish
        .itemId = ITEM_FOCUS_BAND,
        .price = 200,
        .holdEffect = HOLD_EFFECT_FOCUS_BAND,
        .holdEffectParam = 10,
        .description = sFocusBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUCKY_EGG] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LUCKY EGG",
            "OEUF CHANCE",
            "FORTUNUOVO"),
=======
        .name = _("HUEVO SUERTE"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LUCKY_EGG,
        .price = 200,
        .holdEffect = HOLD_EFFECT_LUCKY_EGG,
        .description = sLuckyEggDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCOPE_LENS] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SCOPE LENS",
            "LENTILSCOPE",
            "MIRINO"),
=======
        .name = _("PERISCOPIO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SCOPE_LENS,
        .price = 200,
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = sScopeLensDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METAL_COAT] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "METAL COAT",
            "PEAU METAL",
            "METALCOPERTA"),
=======
        .name = _("REV.METÁLICO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_METAL_COAT,
        .price = 100,
        .holdEffect = HOLD_EFFECT_STEEL_POWER,
        .holdEffectParam = 10,
        .description = sMetalCoatDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LEFTOVERS] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LEFTOVERS",
            "RESTES",
            "AVANZI"),
=======
        .name = _("RESTOS"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LEFTOVERS,
        .price = 200,
        .holdEffect = HOLD_EFFECT_LEFTOVERS,
        .holdEffectParam = 10,
        .description = sLeftoversDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DRAGON_SCALE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "DRAGON SCALE",
            "ECAILLEDRACO",
            "SQUAMA DRAGO"),
=======
        .name = _("ESCAMADRAGÓN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_DRAGON_SCALE,
        .price = 2100,
        .holdEffect = HOLD_EFFECT_DRAGON_SCALE,
        .holdEffectParam = 10,
        .description = sDragonScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIGHT_BALL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LIGHT BALL",
            "BALLELUMIERE",
            "ELETTROPALLA"),
=======
        .name = _("BOLALUMINOSA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LIGHT_BALL,
        .price = 100,
        .holdEffect = HOLD_EFFECT_LIGHT_BALL,
        .description = sLightBallDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SOFT_SAND] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SOFT SAND",
            "SABLE DOUX",
            "SABBIA SOFF."),
=======
        .name = _("ARENA FINA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SOFT_SAND,
        .price = 100,
        .holdEffect = HOLD_EFFECT_GROUND_POWER,
        .holdEffectParam = 10,
        .description = sSoftSandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HARD_STONE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HARD STONE",
            "PIERRE DURE",
            "PIETRADURA"),
=======
        .name = _("PIEDRA DURA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_HARD_STONE,
        .price = 100,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = 10,
        .description = sHardStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MIRACLE_SEED] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MIRACLE SEED",
            "GRAIN MIRACL",
            "MIRACOLSEME"),
=======
        .name = _("SEM. MILAGRO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MIRACLE_SEED,
        .price = 100,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = 10,
        .description = sMiracleSeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLACK_GLASSES] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BLACKGLASSES",
            "LUNET.NOIRES",
            "OCCHIALINERI"),
=======
        .name = _("GAFAS DE SOL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BLACK_GLASSES,
        .price = 100,
        .holdEffect = HOLD_EFFECT_DARK_POWER,
        .holdEffectParam = 10,
        .description = sBlackGlassesDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLACK_BELT] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BLACK BELT",
            "CEINT.NOIRE",
            "CINTURANERA"),
=======
        .name = _("CINT. NEGRO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BLACK_BELT,
        .price = 100,
        .holdEffect = HOLD_EFFECT_FIGHTING_POWER,
        .holdEffectParam = 10,
        .description = sBlackBeltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGNET] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MAGNET",
            "AIMANT",
            "CALAMITA"),
=======
        .name = _("IMÁN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MAGNET,
        .price = 100,
        .holdEffect = HOLD_EFFECT_ELECTRIC_POWER,
        .holdEffectParam = 10,
        .description = sMagnetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MYSTIC_WATER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MYSTIC WATER",
            "EAU MYSTIQUE",
            "ACQUA MAGICA"),
=======
        .name = _("AGUA MÍSTICA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MYSTIC_WATER,
        .price = 100,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 10,
        .description = sMysticWaterDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHARP_BEAK] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SHARP BEAK",
            "BEC POINTU",
            "BECCAFFILATO"),
=======
        .name = _("PICO AFILADO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SHARP_BEAK,
        .price = 100,
        .holdEffect = HOLD_EFFECT_FLYING_POWER,
        .holdEffectParam = 10,
        .description = sSharpBeakDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POISON_BARB] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "POISON BARB",
            "PIC VENIN",
            "VELENACULEO"),
=======
        .name = _("FLECHA VEN."),
>>>>>>> Egg/spanish
        .itemId = ITEM_POISON_BARB,
        .price = 100,
        .holdEffect = HOLD_EFFECT_POISON_POWER,
        .holdEffectParam = 10,
        .description = sPoisonBarbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NEVER_MELT_ICE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "NEVERMELTICE",
            "GLACETERNEL",
            "GELOMAI"),
=======
        .name = _("ANTIDERRETIR"),
>>>>>>> Egg/spanish
        .itemId = ITEM_NEVER_MELT_ICE,
        .price = 100,
        .holdEffect = HOLD_EFFECT_ICE_POWER,
        .holdEffectParam = 10,
        .description = sNeverMeltIceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SPELL_TAG] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SPELL TAG",
            "RUNE SORT",
            "SPETTROTARGA"),
=======
        .name = _("HECHIZO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SPELL_TAG,
        .price = 100,
        .holdEffect = HOLD_EFFECT_GHOST_POWER,
        .holdEffectParam = 10,
        .description = sSpellTagDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TWISTED_SPOON] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TWISTEDSPOON",
            "CUILLERTORDU",
            "CUCCH. TORTO"),
=======
        .name = _("CUCHARA TOR"),
>>>>>>> Egg/spanish
        .itemId = ITEM_TWISTED_SPOON,
        .price = 100,
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = 10,
        .description = sTwistedSpoonDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHARCOAL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CHARCOAL",
            "CHARBON",
            "CARBONELLA"),
=======
        .name = _("CARBÓN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_CHARCOAL,
        .price = 9800,
        .holdEffect = HOLD_EFFECT_FIRE_POWER,
        .holdEffectParam = 10,
        .description = sCharcoalDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DRAGON_FANG] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "DRAGON FANG",
            "CROC DRAGON",
            "DENTEDIDRAGO"),
=======
        .name = _("COLMILLODRAG"),
>>>>>>> Egg/spanish
        .itemId = ITEM_DRAGON_FANG,
        .price = 100,
        .holdEffect = HOLD_EFFECT_DRAGON_POWER,
        .holdEffectParam = 10,
        .description = sDragonFangDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SILK_SCARF] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SILK SCARF",
            "MOUCH. SOIE",
            "SCIARPA SETA"),
=======
        .name = _("PAÑUELO SEDA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SILK_SCARF,
        .price = 100,
        .holdEffect = HOLD_EFFECT_NORMAL_POWER,
        .holdEffectParam = 10,
        .description = sSilkScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_UP_GRADE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "UP-GRADE",
            "AMELIORATOR",
            "UPGRADE"),
=======
        .name = _("MEJORA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_UP_GRADE,
        .price = 2100,
        .holdEffect = HOLD_EFFECT_UP_GRADE,
        .description = sUpGradeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHELL_BELL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SHELL BELL",
            "GRELOT COQUE",
            "CONCHINELLA"),
=======
        .name = _("CAMP. CONCHA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SHELL_BELL,
        .price = 200,
        .holdEffect = HOLD_EFFECT_SHELL_BELL,
        .holdEffectParam = 8,
        .description = sShellBellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SEA_INCENSE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SEA INCENSE",
            "ENCENS MER",
            "MAREAROMA"),
=======
        .name = _("INCIE. MAR."),
>>>>>>> Egg/spanish
        .itemId = ITEM_SEA_INCENSE,
        .price = 9600,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 5,
        .description = sSeaIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LAX_INCENSE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LAX INCENSE",
            "ENCENS DOUX",
            "DISTRAROMA"),
=======
        .name = _("INCIE. SUAVE"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LAX_INCENSE,
        .price = 9600,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 5,
        .description = sLaxIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUCKY_PUNCH] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LUCKY PUNCH",
            "POING CHANCE",
            "FORTUNPUGNO"),
=======
        .name = _("PUÑO SUERTE"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LUCKY_PUNCH,
        .price = 10,
        .holdEffect = HOLD_EFFECT_LUCKY_PUNCH,
        .description = sLuckyPunchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METAL_POWDER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "METAL POWDER",
            "POUDRE METAL",
            "METALPOLVERE"),
=======
        .name = _("POL.METÁLICO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_METAL_POWDER,
        .price = 10,
        .holdEffect = HOLD_EFFECT_METAL_POWDER,
        .description = sMetalPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_THICK_CLUB] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "THICK CLUB",
            "MASSE OS",
            "OSSOSPESSO"),
=======
        .name = _("HUESO GRUESO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_THICK_CLUB,
        .price = 500,
        .holdEffect = HOLD_EFFECT_THICK_CLUB,
        .description = sThickClubDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STICK] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "STICK",
            "BATON",
            "GAMBO"),
=======
        .name = _("PALO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_STICK,
        .price = 200,
        .holdEffect = HOLD_EFFECT_STICK,
        .description = sStickDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0E2] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0E3] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0E4] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0E5] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0E6] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0E7] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0E8] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0E9] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0EA] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0EB] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0EC] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0ED] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0EE] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0EF] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0F0] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0F1] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0F2] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0F3] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0F4] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0F5] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0F6] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0F7] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0F8] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0F9] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0FA] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0FB] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0FC] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_0FD] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RED_SCARF] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RED SCARF",
            "FOUL. ROUGE",
            "FASCIA ROSSA"),
=======
        .name = _("PAÑUELO ROJO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_RED_SCARF,
        .price = 100,
        .description = sRedScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_SCARF] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BLUE SCARF",
            "FOUL. BLEU",
            "FASCIA BLU"),
=======
        .name = _("PAÑUELO AZUL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BLUE_SCARF,
        .price = 100,
        .description = sBlueScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PINK_SCARF] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PINK SCARF",
            "FOUL. ROSE",
            "FASCIA ROSA"),
=======
        .name = _("PAÑUELO ROSA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_PINK_SCARF,
        .price = 100,
        .description = sPinkScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GREEN_SCARF] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GREEN SCARF",
            "FOUL. VERT",
            "FASCIA VERDE"),
=======
        .name = _("PAÑ. VERDE"),
>>>>>>> Egg/spanish
        .itemId = ITEM_GREEN_SCARF,
        .price = 100,
        .description = sGreenScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_YELLOW_SCARF] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "YELLOW SCARF",
            "FOUL. JAUNE",
            "FASCIA GIAL."),
=======
        .name = _("P. AMARILLO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_YELLOW_SCARF,
        .price = 100,
        .description = sYellowScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Key items

    [ITEM_MACH_BIKE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MACH BIKE",
            "VELO COURSE",
            "BICI CORSA"),
=======
        .name = _("BICI CARRERA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MACH_BIKE,
        .price = 0,
        .description = sMachBikeDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = MACH_BIKE,
    },

    [ITEM_COIN_CASE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "COIN CASE",
            "BOITE JETONS",
            "SALVADANAIO"),
=======
        .name = _("MONEDERO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_COIN_CASE,
        .price = 0,
        .description = sCoinCaseDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CoinCase,
    },

    [ITEM_ITEMFINDER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ITEMFINDER",
            "CHERCH'OBJET",
            "DETECTOR"),
=======
        .name = _("BUSCAOBJETOS"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ITEMFINDER,
        .price = 0,
        .description = sItemfinderDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Itemfinder,
    },

    [ITEM_OLD_ROD] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "OLD ROD",
            "CANNE",
            "AMO VECCHIO"),
=======
        .name = _("CAÑA VIEJA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_OLD_ROD,
        .price = 0,
        .description = sOldRodDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = OLD_ROD,
    },

    [ITEM_GOOD_ROD] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GOOD ROD",
            "SUPER CANNE",
            "AMO BUONO"),
=======
        .name = _("CAÑA BUENA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_GOOD_ROD,
        .price = 0,
        .description = sGoodRodDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = GOOD_ROD,
    },

    [ITEM_SUPER_ROD] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SUPER ROD",
            "MEGA CANNE",
            "SUPER AMO"),
=======
        .name = _("SUPERCAÑA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SUPER_ROD,
        .price = 0,
        .description = sSuperRodDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = SUPER_ROD,
    },

    [ITEM_SS_TICKET] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "S.S. TICKET",
            "PASSE BATEAU",
            "BIGL. NAVE"),
=======
        .name = _("TICKET BARCO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SS_TICKET,
        .price = 0,
        .description = sSSTicketDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CONTEST_PASS] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CONTEST PASS",
            "PASSECONCOUR",
            "TESSERA GARE"),
=======
        .name = _("PASE CONCUR."),
>>>>>>> Egg/spanish
        .itemId = ITEM_CONTEST_PASS,
        .price = 0,
        .description = sContestPassDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_10B] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WAILMER_PAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "WAILMER PAIL",
            "SEAU WAILMER",
            "VASO WAILMER"),
=======
        .name = _("CUBO WAILMER"),
>>>>>>> Egg/spanish
        .itemId = ITEM_WAILMER_PAIL,
        .price = 0,
        .description = sWailmerPailDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_WailmerPail,
    },

    [ITEM_DEVON_GOODS] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "DEVON GOODS",
            "PACK DEVON",
            "MERCE DEVON"),
=======
        .name = _("PIEZAS DEVON"),
>>>>>>> Egg/spanish
        .itemId = ITEM_DEVON_GOODS,
        .price = 0,
        .description = sDevonGoodsDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SOOT_SACK] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SOOT SACK",
            "SAC A SUIE",
            "SACCO CENERE"),
=======
        .name = _("SACO HOLLÍN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SOOT_SACK,
        .price = 0,
        .description = sSootSackDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BASEMENT_KEY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BASEMENT KEY",
            "CLE SOUS-SOL",
            "CHIAVE SOTT."),
=======
        .name = _("LL. SÓTANO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BASEMENT_KEY,
        .price = 0,
        .description = sBasementKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ACRO_BIKE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ACRO BIKE",
            "VELO CROSS",
            "BICI CROSS"),
=======
        .name = _("BICI ACROB."),
>>>>>>> Egg/spanish
        .itemId = ITEM_ACRO_BIKE,
        .price = 0,
        .description = sAcroBikeDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = ACRO_BIKE,
    },

    [ITEM_POKEBLOCK_CASE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "{POKEBLOCK} CASE",
            "BOITE {POKEBLOCK}S",
            "PORTA{POKEMELLE}"),
=======
        .name = _("TUBO {POKEBLOCK}S"),
>>>>>>> Egg/spanish
        .itemId = ITEM_POKEBLOCK_CASE,
        .price = 0,
        .description = sPokeblockCaseDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PBLOCK_CASE,
        .fieldUseFunc = ItemUseOutOfBattle_PokeblockCase,
    },

    [ITEM_LETTER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LETTER",
            "LETTRE",
            "LETTERA"),
=======
        .name = _("CARTA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LETTER,
        .price = 0,
        .description = sLetterDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EON_TICKET] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "EON TICKET",
            "PASSE EON",
            "BIGL. EONE"),
=======
        .name = _("TICKET EÓN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_EON_TICKET,
        .price = 0,
        .description = sEonTicketDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 1,
    },

    [ITEM_RED_ORB] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RED ORB",
            "ORBE ROUGE",
            "SFERA ROSSA"),
=======
        .name = _("ESFERA ROJA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_RED_ORB,
        .price = 0,
        .description = sRedOrbDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_ORB] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BLUE ORB",
            "ORBE BLEU",
            "SFERA BLU"),
=======
        .name = _("ESFERA AZUL"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BLUE_ORB,
        .price = 0,
        .description = sBlueOrbDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCANNER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SCANNER",
            "SCANNER",
            "SCANNER"),
=======
        .name = _("ESCÁNER"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SCANNER,
        .price = 0,
        .description = sScannerDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GO_GOGGLES] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GO-GOGGLES",
            "LUNET. SABLE",
            "OCCHIALONI"),
=======
        .name = _("GAF. AISLAN."),
>>>>>>> Egg/spanish
        .itemId = ITEM_GO_GOGGLES,
        .price = 0,
        .description = sGoGogglesDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METEORITE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "METEORITE",
            "METEORITE",
            "METEORITE"),
=======
        .name = _("METEORITO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_METEORITE,
        .price = 0,
        .description = sMeteoriteDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROOM_1_KEY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RM. 1 KEY",
            "CLE SALLE 1",
            "CHIAVE CAB.1"),
=======
        .name = _("LL. CABINA 1"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ROOM_1_KEY,
        .price = 0,
        .description = sRoom1KeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROOM_2_KEY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RM. 2 KEY",
            "CLE SALLE 2",
            "CHIAVE CAB.2"),
=======
        .name = _("LL. CABINA 2"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ROOM_2_KEY,
        .price = 0,
        .description = sRoom2KeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROOM_4_KEY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RM. 4 KEY",
            "CLE SALLE 4",
            "CHIAVE CAB.4"),
=======
        .name = _("LL. CABINA 4"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ROOM_4_KEY,
        .price = 0,
        .description = sRoom4KeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROOM_6_KEY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RM. 6 KEY",
            "CLE SALLE 6",
            "CHIAVE CAB.6"),
=======
        .name = _("LL. CABINA 6"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ROOM_6_KEY,
        .price = 0,
        .description = sRoom6KeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STORAGE_KEY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "STORAGE KEY",
            "CLE STOCKAGE",
            "CHIAVE STIVA"),
=======
        .name = _("LL. ALMACÉN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_STORAGE_KEY,
        .price = 0,
        .description = sStorageKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROOT_FOSSIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ROOT FOSSIL",
            "FOSS. RACINE",
            "RADIFOSSILE"),
=======
        .name = _("FÓSIL RAÍZ"),
>>>>>>> Egg/spanish
        .itemId = ITEM_ROOT_FOSSIL,
        .price = 0,
        .description = sRootFossilDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CLAW_FOSSIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CLAW FOSSIL",
            "FOSS. GRIFFE",
            "FOSSILUNGHIA"),
=======
        .name = _("FÓSIL GARRA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_CLAW_FOSSIL,
        .price = 0,
        .description = sClawFossilDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEVON_SCOPE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "DEVON SCOPE",
            "DEVON SCOPE",
            "DEVONSCOPIO"),
=======
        .name = _("DETEC. DEVON"),
>>>>>>> Egg/spanish
        .itemId = ITEM_DEVON_SCOPE,
        .price = 0,
        .description = sDevonScopeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// TMs/HMs

    [ITEM_TM_FOCUS_PUNCH] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM01",
            "CT01",
            "MT01"),
        .itemId = ITEM_TM01,
=======
        .name = _("MT01"),
        .itemId = ITEM_TM01_FOCUS_PUNCH,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM01Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_DRAGON_CLAW] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM02",
            "CT02",
            "MT02"),
        .itemId = ITEM_TM02,
=======
        .name = _("MT02"),
        .itemId = ITEM_TM02_DRAGON_CLAW,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM02Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_WATER_PULSE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM03",
            "CT03",
            "MT03"),
        .itemId = ITEM_TM03,
=======
        .name = _("MT03"),
        .itemId = ITEM_TM03_WATER_PULSE,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM03Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_CALM_MIND] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM04",
            "CT04",
            "MT04"),
        .itemId = ITEM_TM04,
=======
        .name = _("MT04"),
        .itemId = ITEM_TM04_CALM_MIND,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM04Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_ROAR] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM05",
            "CT05",
            "MT05"),
        .itemId = ITEM_TM05,
=======
        .name = _("MT05"),
        .itemId = ITEM_TM05_ROAR,
>>>>>>> Egg/spanish
        .price = 1000,
        .description = sTM05Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_TOXIC] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM06",
            "CT06",
            "MT06"),
        .itemId = ITEM_TM06,
=======
        .name = _("MT06"),
        .itemId = ITEM_TM06_TOXIC,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM06Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_HAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM07",
            "CT07",
            "MT07"),
        .itemId = ITEM_TM07,
=======
        .name = _("MT07"),
        .itemId = ITEM_TM07_HAIL,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM07Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_BULK_UP] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM08",
            "CT08",
            "MT08"),
        .itemId = ITEM_TM08,
=======
        .name = _("MT08"),
        .itemId = ITEM_TM08_BULK_UP,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM08Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_BULLET_SEED] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM09",
            "CT09",
            "MT09"),
        .itemId = ITEM_TM09,
=======
        .name = _("MT09"),
        .itemId = ITEM_TM09_BULLET_SEED,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM09Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_HIDDEN_POWER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM10",
            "CT10",
            "MT10"),
        .itemId = ITEM_TM10,
=======
        .name = _("MT10"),
        .itemId = ITEM_TM10_HIDDEN_POWER,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM10Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SUNNY_DAY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM11",
            "CT11",
            "MT11"),
        .itemId = ITEM_TM11,
=======
        .name = _("MT11"),
        .itemId = ITEM_TM11_SUNNY_DAY,
>>>>>>> Egg/spanish
        .price = 2000,
        .description = sTM11Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_TAUNT] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM12",
            "CT12",
            "MT12"),
        .itemId = ITEM_TM12,
=======
        .name = _("MT12"),
        .itemId = ITEM_TM12_TAUNT,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM12Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_ICE_BEAM] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM13",
            "CT13",
            "MT13"),
        .itemId = ITEM_TM13,
=======
        .name = _("MT13"),
        .itemId = ITEM_TM13_ICE_BEAM,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM13Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_BLIZZARD] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM14",
            "CT14",
            "MT14"),
        .itemId = ITEM_TM14,
=======
        .name = _("MT14"),
        .itemId = ITEM_TM14_BLIZZARD,
>>>>>>> Egg/spanish
        .price = 5500,
        .description = sTM14Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_HYPER_BEAM] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM15",
            "CT15",
            "MT15"),
        .itemId = ITEM_TM15,
=======
        .name = _("MT15"),
        .itemId = ITEM_TM15_HYPER_BEAM,
>>>>>>> Egg/spanish
        .price = 7500,
        .description = sTM15Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_LIGHT_SCREEN] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM16",
            "CT16",
            "MT16"),
        .itemId = ITEM_TM16,
=======
        .name = _("MT16"),
        .itemId = ITEM_TM16_LIGHT_SCREEN,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM16Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_PROTECT] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM17",
            "CT17",
            "MT17"),
        .itemId = ITEM_TM17,
=======
        .name = _("MT17"),
        .itemId = ITEM_TM17_PROTECT,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM17Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_RAIN_DANCE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM18",
            "CT18",
            "MT18"),
        .itemId = ITEM_TM18,
=======
        .name = _("MT18"),
        .itemId = ITEM_TM18_RAIN_DANCE,
>>>>>>> Egg/spanish
        .price = 2000,
        .description = sTM18Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_GIGA_DRAIN] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM19",
            "CT19",
            "MT19"),
        .itemId = ITEM_TM19,
=======
        .name = _("MT19"),
        .itemId = ITEM_TM19_GIGA_DRAIN,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM19Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SAFEGUARD] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM20",
            "CT20",
            "MT20"),
        .itemId = ITEM_TM20,
=======
        .name = _("MT20"),
        .itemId = ITEM_TM20_SAFEGUARD,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM20Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_FRUSTRATION] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM21",
            "CT21",
            "MT21"),
        .itemId = ITEM_TM21,
=======
        .name = _("MT21"),
        .itemId = ITEM_TM21_FRUSTRATION,
>>>>>>> Egg/spanish
        .price = 1000,
        .description = sTM21Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SOLAR_BEAM] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM22",
            "CT22",
            "MT22"),
        .itemId = ITEM_TM22,
=======
        .name = _("MT22"),
        .itemId = ITEM_TM22_SOLAR_BEAM,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM22Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_IRON_TAIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM23",
            "CT23",
            "MT23"),
        .itemId = ITEM_TM23,
=======
        .name = _("MT23"),
        .itemId = ITEM_TM23_IRON_TAIL,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM23Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_THUNDERBOLT] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM24",
            "CT24",
            "MT24"),
        .itemId = ITEM_TM24,
=======
        .name = _("MT24"),
        .itemId = ITEM_TM24_THUNDERBOLT,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM24Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_THUNDER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM25",
            "CT25",
            "MT25"),
        .itemId = ITEM_TM25,
=======
        .name = _("MT25"),
        .itemId = ITEM_TM25_THUNDER,
>>>>>>> Egg/spanish
        .price = 5500,
        .description = sTM25Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_EARTHQUAKE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM26",
            "CT26",
            "MT26"),
        .itemId = ITEM_TM26,
=======
        .name = _("MT26"),
        .itemId = ITEM_TM26_EARTHQUAKE,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM26Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_RETURN] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM27",
            "CT27",
            "MT27"),
        .itemId = ITEM_TM27,
=======
        .name = _("MT27"),
        .itemId = ITEM_TM27_RETURN,
>>>>>>> Egg/spanish
        .price = 1000,
        .description = sTM27Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_DIG] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM28",
            "CT28",
            "MT28"),
        .itemId = ITEM_TM28,
=======
        .name = _("MT28"),
        .itemId = ITEM_TM28_DIG,
>>>>>>> Egg/spanish
        .price = 2000,
        .description = sTM28Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_PSYCHIC] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM29",
            "CT29",
            "MT29"),
        .itemId = ITEM_TM29,
=======
        .name = _("MT29"),
        .itemId = ITEM_TM29_PSYCHIC,
>>>>>>> Egg/spanish
        .price = 2000,
        .description = sTM29Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SHADOW_BALL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM30",
            "CT30",
            "MT30"),
        .itemId = ITEM_TM30,
=======
        .name = _("MT30"),
        .itemId = ITEM_TM30_SHADOW_BALL,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM30Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_BRICK_BREAK] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM31",
            "CT31",
            "MT31"),
        .itemId = ITEM_TM31,
=======
        .name = _("MT31"),
        .itemId = ITEM_TM31_BRICK_BREAK,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM31Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_DOUBLE_TEAM] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM32",
            "CT32",
            "MT32"),
        .itemId = ITEM_TM32,
=======
        .name = _("MT32"),
        .itemId = ITEM_TM32_DOUBLE_TEAM,
>>>>>>> Egg/spanish
        .price = 2000,
        .description = sTM32Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_REFLECT] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM33",
            "CT33",
            "MT33"),
        .itemId = ITEM_TM33,
=======
        .name = _("MT33"),
        .itemId = ITEM_TM33_REFLECT,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM33Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SHOCK_WAVE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM34",
            "CT34",
            "MT34"),
        .itemId = ITEM_TM34,
=======
        .name = _("MT34"),
        .itemId = ITEM_TM34_SHOCK_WAVE,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM34Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_FLAMETHROWER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM35",
            "CT35",
            "MT35"),
        .itemId = ITEM_TM35,
=======
        .name = _("MT35"),
        .itemId = ITEM_TM35_FLAMETHROWER,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM35Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SLUDGE_BOMB] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM36",
            "CT36",
            "MT36"),
        .itemId = ITEM_TM36,
=======
        .name = _("MT36"),
        .itemId = ITEM_TM36_SLUDGE_BOMB,
>>>>>>> Egg/spanish
        .price = 1000,
        .description = sTM36Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SANDSTORM] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM37",
            "CT37",
            "MT37"),
        .itemId = ITEM_TM37,
=======
        .name = _("MT37"),
        .itemId = ITEM_TM37_SANDSTORM,
>>>>>>> Egg/spanish
        .price = 2000,
        .description = sTM37Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_FIRE_BLAST] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM38",
            "CT38",
            "MT38"),
        .itemId = ITEM_TM38,
=======
        .name = _("MT38"),
        .itemId = ITEM_TM38_FIRE_BLAST,
>>>>>>> Egg/spanish
        .price = 5500,
        .description = sTM38Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_ROCK_TOMB] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM39",
            "CT39",
            "MT39"),
        .itemId = ITEM_TM39,
=======
        .name = _("MT39"),
        .itemId = ITEM_TM39_ROCK_TOMB,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM39Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_AERIAL_ACE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM40",
            "CT40",
            "MT40"),
        .itemId = ITEM_TM40,
=======
        .name = _("MT40"),
        .itemId = ITEM_TM40_AERIAL_ACE,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM40Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_TORMENT] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM41",
            "CT41",
            "MT41"),
        .itemId = ITEM_TM41,
=======
        .name = _("MT41"),
        .itemId = ITEM_TM41_TORMENT,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM41Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_FACADE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM42",
            "CT42",
            "MT42"),
        .itemId = ITEM_TM42,
=======
        .name = _("MT42"),
        .itemId = ITEM_TM42_FACADE,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM42Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SECRET_POWER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM43",
            "CT43",
            "MT43"),
        .itemId = ITEM_TM43,
=======
        .name = _("MT43"),
        .itemId = ITEM_TM43_SECRET_POWER,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM43Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_REST] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM44",
            "CT44",
            "MT44"),
        .itemId = ITEM_TM44,
=======
        .name = _("MT44"),
        .itemId = ITEM_TM44_REST,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM44Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_ATTRACT] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM45",
            "CT45",
            "MT45"),
        .itemId = ITEM_TM45,
=======
        .name = _("MT45"),
        .itemId = ITEM_TM45_ATTRACT,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM45Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_THIEF] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM46",
            "CT46",
            "MT46"),
        .itemId = ITEM_TM46,
=======
        .name = _("MT46"),
        .itemId = ITEM_TM46_THIEF,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM46Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_STEEL_WING] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM47",
            "CT47",
            "MT47"),
        .itemId = ITEM_TM47,
=======
        .name = _("MT47"),
        .itemId = ITEM_TM47_STEEL_WING,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM47Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SKILL_SWAP] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM48",
            "CT48",
            "MT48"),
        .itemId = ITEM_TM48,
=======
        .name = _("MT48"),
        .itemId = ITEM_TM48_SKILL_SWAP,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM48Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_SNATCH] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM49",
            "CT49",
            "MT49"),
        .itemId = ITEM_TM49,
=======
        .name = _("MT49"),
        .itemId = ITEM_TM49_SNATCH,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM49Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM_OVERHEAT] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM50",
            "CT50",
            "MT50"),
        .itemId = ITEM_TM50,
=======
        .name = _("MT50"),
        .itemId = ITEM_TM50_OVERHEAT,
>>>>>>> Egg/spanish
        .price = 3000,
        .description = sTM50Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM_CUT] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HM01",
            "CS01",
            "MN01"),
        .itemId = ITEM_HM01,
=======
        .name = _("MO01"),
        .itemId = ITEM_HM01_CUT,
>>>>>>> Egg/spanish
        .price = 0,
        .description = sHM01Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM_FLY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HM02",
            "CS02",
            "MN02"),
        .itemId = ITEM_HM02,
=======
        .name = _("MO02"),
        .itemId = ITEM_HM02_FLY,
>>>>>>> Egg/spanish
        .price = 0,
        .description = sHM02Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM_SURF] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HM03",
            "CS03",
            "MN03"),
        .itemId = ITEM_HM03,
=======
        .name = _("MO03"),
        .itemId = ITEM_HM03_SURF,
>>>>>>> Egg/spanish
        .price = 0,
        .description = sHM03Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM_STRENGTH] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HM04",
            "CS04",
            "MN04"),
        .itemId = ITEM_HM04,
=======
        .name = _("MO04"),
        .itemId = ITEM_HM04_STRENGTH,
>>>>>>> Egg/spanish
        .price = 0,
        .description = sHM04Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM_FLASH] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HM05",
            "CS05",
            "MN05"),
        .itemId = ITEM_HM05,
=======
        .name = _("MO05"),
        .itemId = ITEM_HM05_FLASH,
>>>>>>> Egg/spanish
        .price = 0,
        .description = sHM05Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM_ROCK_SMASH] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HM06",
            "CS06",
            "MN06"),
        .itemId = ITEM_HM06,
=======
        .name = _("MO06"),
        .itemId = ITEM_HM06_ROCK_SMASH,
>>>>>>> Egg/spanish
        .price = 0,
        .description = sHM06Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM_WATERFALL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HM07",
            "CS07",
            "MN07"),
        .itemId = ITEM_HM07,
=======
        .name = _("MO07"),
        .itemId = ITEM_HM07_WATERFALL,
>>>>>>> Egg/spanish
        .price = 0,
        .description = sHM07Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM_DIVE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HM08",
            "CS08",
            "MN08"),
        .itemId = ITEM_HM08,
=======
        .name = _("MO08"),
        .itemId = ITEM_HM08_DIVE,
>>>>>>> Egg/spanish
        .price = 0,
        .description = sHM08Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_15B] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_15C] =
    {
        .name = LANGUAGE_STRING(
            "????????",
            "????????",
            "????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// FireRed/LeafGreen key items

    [ITEM_OAKS_PARCEL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "OAK'S PARCEL",
            "COLIS CHEN",
            "PACCO DI OAK"),
=======
        .name = _("CORREO-OAK"),
>>>>>>> Egg/spanish
        .itemId = ITEM_OAKS_PARCEL,
        .price = 0,
        .description = sOaksParcelDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POKE_FLUTE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "POKé FLUTE",
            "POKéFLUTE",
            "POKé FLAUTO"),
=======
        .name = _("POKé FLAUTA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_POKE_FLUTE,
        .price = 0,
        .description = sPokeFluteDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SECRET_KEY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SECRET KEY",
            "CLE SECRETE",
            "CHIAVE SEGR."),
=======
        .name = _("LL. SECRETA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SECRET_KEY,
        .price = 0,
        .description = sSecretKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIKE_VOUCHER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BIKE VOUCHER",
            "BON COMMANDE",
            "BUONO BICI"),
=======
        .name = _("BONO BICI"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BIKE_VOUCHER,
        .price = 0,
        .description = sBikeVoucherDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GOLD_TEETH] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GOLD TEETH",
            "DENT D'OR",
            "DENTI D’ORO"),
=======
        .name = _("DIENTES ORO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_GOLD_TEETH,
        .price = 0,
        .description = sGoldTeethDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OLD_AMBER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "OLD AMBER",
            "VIEIL AMBRE",
            "AMBRA ANTICA"),
=======
        .name = _("ÁMBAR VIEJO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_OLD_AMBER,
        .price = 0,
        .description = sOldAmberDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CARD_KEY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CARD KEY",
            "CARTE MAGN.",
            "APRIPORTA"),
=======
        .name = _("LL.MAGNÉTICA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_CARD_KEY,
        .price = 0,
        .description = sCardKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIFT_KEY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LIFT KEY",
            "CLE ASC.",
            "CHIAVE ASC."),
=======
        .name = _("LL. ASCENSOR"),
>>>>>>> Egg/spanish
        .itemId = ITEM_LIFT_KEY,
        .price = 0,
        .description = sLiftKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HELIX_FOSSIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HELIX FOSSIL",
            "NAUTILE",
            "HELIXFOSSILE"),
=======
        .name = _("FÓSIL HELIX"),
>>>>>>> Egg/spanish
        .itemId = ITEM_HELIX_FOSSIL,
        .price = 0,
        .description = sHelixFossilDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DOME_FOSSIL] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "DOME FOSSIL",
            "FOSSILE DOME",
            "DOMOFOSSILE"),
=======
        .name = _("FÓSIL DOMO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_DOME_FOSSIL,
        .price = 0,
        .description = sDomeFossilDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SILPH_SCOPE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SILPH SCOPE",
            "SCOPE SYLPHE",
            "SPETTROSONDA"),
=======
        .name = _("SCOPE SILPH"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SILPH_SCOPE,
        .price = 0,
        .description = sSilphScopeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BICYCLE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BICYCLE",
            "BICYCLETTE",
            "BICICLETTA"),
=======
        .name = _("BICICLETA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BICYCLE,
        .price = 0,
        .description = sBicycleDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TOWN_MAP] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TOWN MAP",
            "CARTE",
            "MAPPA CITTÀ"),
=======
        .name = _("MAPA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_TOWN_MAP,
        .price = 0,
        .description = sTownMapDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_VS_SEEKER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "VS SEEKER",
            "CHERCHE VS",
            "CERCASFIDE"),
=======
        .name = _("BUSCAPELEA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_VS_SEEKER,
        .price = 0,
        .description = sVSSeekerDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FAME_CHECKER] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "FAME CHECKER",
            "MEMORYDEX",
            "POKéVIP"),
=======
        .name = _("MEMORÍN"),
>>>>>>> Egg/spanish
        .itemId = ITEM_FAME_CHECKER,
        .price = 0,
        .description = sFameCheckerDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TM_CASE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TM CASE",
            "BOITE CT",
            "PORTA-MT"),
=======
        .name = _("TUBO MT-MO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_TM_CASE,
        .price = 0,
        .description = sTMCaseDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BERRY_POUCH] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BERRY POUCH",
            "SAC A BAIES",
            "PORTABACCHE"),
=======
        .name = _("SACO BAYAS"),
>>>>>>> Egg/spanish
        .itemId = ITEM_BERRY_POUCH,
        .price = 0,
        .description = sBerryPouchDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TEACHY_TV] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TEACHY TV",
            "TV ABC",
            "POKéTIVÙ"),
=======
        .name = _("POKé TELE"),
>>>>>>> Egg/spanish
        .itemId = ITEM_TEACHY_TV,
        .price = 0,
        .description = sTeachyTVDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TRI_PASS] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TRI-PASS",
            "TRI-PASSE",
            "TRIS PASS"),
=======
        .name = _("TRI-TICKET"),
>>>>>>> Egg/spanish
        .itemId = ITEM_TRI_PASS,
        .price = 0,
        .description = sTriPassDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RAINBOW_PASS] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RAINBOW PASS",
            "PASSE PRISME",
            "SETTE PASS"),
=======
        .name = _("IRIS-TICKET"),
>>>>>>> Egg/spanish
        .itemId = ITEM_RAINBOW_PASS,
        .price = 0,
        .description = sRainbowPassDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TEA] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TEA",
            "THE",
            "TÈ"),
=======
        .name = _("TÉ"),
>>>>>>> Egg/spanish
        .itemId = ITEM_TEA,
        .price = 0,
        .description = sTeaDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MYSTIC_TICKET] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MYSTICTICKET",
            "TICKETMYSTIK",
            "BIGL. MAGICO"),
=======
        .name = _("MISTI-TICKET"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MYSTIC_TICKET,
        .price = 0,
        .description = sMysticTicketDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AURORA_TICKET] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "AURORATICKET",
            "TICKETAURORA",
            "BIGL. AURORA"),
=======
        .name = _("ORI-TICKET"),
>>>>>>> Egg/spanish
        .itemId = ITEM_AURORA_TICKET,
        .price = 0,
        .description = sAuroraTicketDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POWDER_JAR] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "POWDER JAR",
            "POT POUDRE",
            "PORTAFARINA"),
=======
        .name = _("BOTE POLVOS"),
>>>>>>> Egg/spanish
        .itemId = ITEM_POWDER_JAR,
        .price = 0,
        .description = sPowderJarDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PowderJar,
    },

    [ITEM_RUBY] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RUBY",
            "RUBIS",
            "RUBINO"),
=======
        .name = _("RUBÍ"),
>>>>>>> Egg/spanish
        .itemId = ITEM_RUBY,
        .price = 0,
        .description = sRubyDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SAPPHIRE] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SAPPHIRE",
            "SAPHIR",
            "ZAFFIRO"),
=======
        .name = _("ZAFIRO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_SAPPHIRE,
        .price = 0,
        .description = sSapphireDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Emerald-specific key items

    [ITEM_MAGMA_EMBLEM] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MAGMA EMBLEM",
            "SCEAU MAGMA",
            "STEMMA MAGMA"),
=======
        .name = _("SIGNO MAGMA"),
>>>>>>> Egg/spanish
        .itemId = ITEM_MAGMA_EMBLEM,
        .price = 0,
        .description = sMagmaEmblemDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OLD_SEA_MAP] =
    {
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "OLD SEA MAP",
            "VIEILLECARTE",
            "MAPPA STINTA"),
=======
        .name = _("MAPA VIEJO"),
>>>>>>> Egg/spanish
        .itemId = ITEM_OLD_SEA_MAP,
        .price = 0,
        .description = sOldSeaMapDesc,
        .importance = 1,
        .registrability = TRUE,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
};
