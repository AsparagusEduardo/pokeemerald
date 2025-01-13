const struct PokedexEntry gPokedexEntries[] =
{
    [NATIONAL_DEX_NONE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("INCONNU"),
    #elif ITALIAN
        .categoryName = _("SCONOSC"),
    #else //ENGLISH
        .categoryName = _("UNKNOWN"),
    #endif
=======
        .categoryName = _("DESCON."),
>>>>>>> Egg/spanish
        .height = 0,
        .weight = 0,
        .description = gDummyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BULBASAUR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GRAINE"),
    #elif ITALIAN
        .categoryName = _("SEME"),
    #else //ENGLISH
        .categoryName = _("SEED"),
    #endif
=======
        .categoryName = _("SEMILLA"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 69,
        .description = gBulbasaurPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IVYSAUR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GRAINE"),
    #elif ITALIAN
        .categoryName = _("SEME"),
    #else //ENGLISH
        .categoryName = _("SEED"),
    #endif
=======
        .categoryName = _("SEMILLA"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 130,
        .description = gIvysaurPokedexText,
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENUSAUR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GRAINE"),
    #elif ITALIAN
        .categoryName = _("SEME"),
    #else //ENGLISH
        .categoryName = _("SEED"),
    #endif
=======
        .categoryName = _("SEMILLA"),
>>>>>>> Egg/spanish
        .height = 20,
        .weight = 1000,
        .description = gVenusaurPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_CHARMANDER] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LEZARD"),
    #elif ITALIAN
        .categoryName = _("LUCERTOLA"),
    #else //ENGLISH
        .categoryName = _("LIZARD"),
    #endif
=======
        .categoryName = _("LAGARTIJA"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 85,
        .description = gCharmanderPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARMELEON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FLAMME"),
    #elif ITALIAN
        .categoryName = _("FIAMMA"),
    #else //ENGLISH
        .categoryName = _("FLAME"),
    #endif
=======
        .categoryName = _("LLAMA"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 190,
        .description = gCharmeleonPokedexText,
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHARIZARD] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FLAMME"),
    #elif ITALIAN
        .categoryName = _("FIAMMA"),
    #else //ENGLISH
        .categoryName = _("FLAME"),
    #endif
=======
        .categoryName = _("LLAMA"),
>>>>>>> Egg/spanish
        .height = 17,
        .weight = 905,
        .description = gCharizardPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 302,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SQUIRTLE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MINITORTUE"),
    #elif ITALIAN
        .categoryName = _("TARTAGHINA"),
    #else //ENGLISH
        .categoryName = _("TINY TURTLE"),
    #endif
=======
        .categoryName = _("TORTUGUITA"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 90,
        .description = gSquirtlePokedexText,
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WARTORTLE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TORTUE"),
    #elif ITALIAN
        .categoryName = _("TARTARUGA"),
    #else //ENGLISH
        .categoryName = _("TURTLE"),
    #endif
=======
        .categoryName = _("TORTUGA"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 225,
        .description = gWartortlePokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLASTOISE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CARAPACE"),
    #elif ITALIAN
        .categoryName = _("CROSTACEO"),
    #else //ENGLISH
        .categoryName = _("SHELLFISH"),
    #endif
=======
        .categoryName = _("MARISCO"),
>>>>>>> Egg/spanish
        .height = 16,
        .weight = 855,
        .description = gBlastoisePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CATERPIE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VER"),
    #elif ITALIAN
        .categoryName = _("BACO"),
    #else //ENGLISH
        .categoryName = _("WORM"),
    #endif
=======
        .categoryName = _("GUSANO"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 29,
        .description = gCaterpiePokedexText,
        .pokemonScale = 549,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METAPOD] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("COCON"),
    #elif ITALIAN
        .categoryName = _("BOZZOLO"),
    #else //ENGLISH
        .categoryName = _("COCOON"),
    #endif
=======
        .categoryName = _("CAPULLO"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 99,
        .description = gMetapodPokedexText,
        .pokemonScale = 350,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BUTTERFREE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PAPILLON"),
    #elif ITALIAN
        .categoryName = _("FARFALLA"),
    #else //ENGLISH
        .categoryName = _("BUTTERFLY"),
    #endif
=======
        .categoryName = _("MARIPOSA"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 320,
        .description = gButterfreePokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEEDLE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("INSECTOPIC"),
    #elif ITALIAN
        .categoryName = _("MILLEPIEDI"),
    #else //ENGLISH
        .categoryName = _("HAIRY BUG"),
    #endif
=======
        .categoryName = _("ORUGA"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 32,
        .description = gWeedlePokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KAKUNA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("COCON"),
    #elif ITALIAN
        .categoryName = _("BOZZOLO"),
    #else //ENGLISH
        .categoryName = _("COCOON"),
    #endif
=======
        .categoryName = _("CAPULLO"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 100,
        .description = gKakunaPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEEDRILL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GUEPOISON"),
    #elif ITALIAN
        .categoryName = _("VELENAPE"),
    #else //ENGLISH
        .categoryName = _("POISON BEE"),
    #endif
=======
        .categoryName = _("ABEJA VEN."),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 295,
        .description = gBeedrillPokedexText,
        .pokemonScale = 366,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MINOISEAU"),
    #elif ITALIAN
        .categoryName = _("UCCELLINO"),
    #else //ENGLISH
        .categoryName = _("TINY BIRD"),
    #endif
=======
        .categoryName = _("PAJARITO"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 18,
        .description = gPidgeyPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEOTTO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("OISEAU"),
    #elif ITALIAN
        .categoryName = _("UCCELLO"),
    #else //ENGLISH
        .categoryName = _("BIRD"),
    #endif
=======
        .categoryName = _("PÁJARO"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 300,
        .description = gPidgeottoPokedexText,
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PIDGEOT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("OISEAU"),
    #elif ITALIAN
        .categoryName = _("UCCELLO"),
    #else //ENGLISH
        .categoryName = _("BIRD"),
    #endif
=======
        .categoryName = _("PÁJARO"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 395,
        .description = gPidgeotPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RATTATA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SOURIS"),
    #elif ITALIAN
        .categoryName = _("TOPO"),
    #else //ENGLISH
        .categoryName = _("MOUSE"),
    #endif
=======
        .categoryName = _("RATÓN"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 35,
        .description = gRattataPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RATICATE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SOURIS"),
    #elif ITALIAN
        .categoryName = _("TOPO"),
    #else //ENGLISH
        .categoryName = _("MOUSE"),
    #endif
=======
        .categoryName = _("RATÓN"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 185,
        .description = gRaticatePokedexText,
        .pokemonScale = 459,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPEAROW] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MINOISEAU"),
    #elif ITALIAN
        .categoryName = _("UCCELLINO"),
    #else //ENGLISH
        .categoryName = _("TINY BIRD"),
    #endif
=======
        .categoryName = _("PAJARITO"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 20,
        .description = gSpearowPokedexText,
        .pokemonScale = 571,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FEAROW] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BEC-OISEAU"),
    #elif ITALIAN
        .categoryName = _("BECCO"),
    #else //ENGLISH
        .categoryName = _("BEAK"),
    #endif
=======
        .categoryName = _("PICO"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 380,
        .description = gFearowPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EKANS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SERPENT"),
    #elif ITALIAN
        .categoryName = _("SERPENTE"),
    #else //ENGLISH
        .categoryName = _("SNAKE"),
    #endif
=======
        .categoryName = _("SERPIENTE"),
>>>>>>> Egg/spanish
        .height = 20,
        .weight = 69,
        .description = gEkansPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARBOK] =
    {
    #if FRENCH
        .categoryName = _("COBRA"),
    #elif ITALIAN
        .categoryName = _("COBRA"),
    #else //ENGLISH
        .categoryName = _("COBRA"),
    #endif
        .height = 35,
        .weight = 650,
        .description = gArbokPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PIKACHU] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SOURIS"),
    #elif ITALIAN
        .categoryName = _("TOPO"),
    #else //ENGLISH
        .categoryName = _("MOUSE"),
    #endif
=======
        .categoryName = _("RATÓN"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAICHU] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SOURIS"),
    #elif ITALIAN
        .categoryName = _("TOPO"),
    #else //ENGLISH
        .categoryName = _("MOUSE"),
    #endif
=======
        .categoryName = _("RATÓN"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 300,
        .description = gRaichuPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDSHREW] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SOURIS"),
    #elif ITALIAN
        .categoryName = _("TOPO"),
    #else //ENGLISH
        .categoryName = _("MOUSE"),
    #endif
=======
        .categoryName = _("RATÓN"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 120,
        .description = gSandshrewPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SANDSLASH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SOURIS"),
    #elif ITALIAN
        .categoryName = _("TOPO"),
    #else //ENGLISH
        .categoryName = _("MOUSE"),
    #endif
=======
        .categoryName = _("RATÓN"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 295,
        .description = gSandslashPokedexText,
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORAN_F] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VENEPIC"),
    #elif ITALIAN
        .categoryName = _("VELENAGO"),
    #else //ENGLISH
        .categoryName = _("POISON PIN"),
    #endif
=======
        .categoryName = _("PIN VENENO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 70,
        .description = gNidoranFPokedexText,
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORINA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VENEPIC"),
    #elif ITALIAN
        .categoryName = _("VELENAGO"),
    #else //ENGLISH
        .categoryName = _("POISON PIN"),
    #endif
=======
        .categoryName = _("PIN VENENO"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 200,
        .description = gNidorinaPokedexText,
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDOQUEEN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PERCEUR"),
    #elif ITALIAN
        .categoryName = _("TRAPANO"),
    #else //ENGLISH
        .categoryName = _("DRILL"),
    #endif
=======
        .categoryName = _("TALADRO"),
>>>>>>> Egg/spanish
        .height = 13,
        .weight = 600,
        .description = gNidoqueenPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORAN_M] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VENEPIC"),
    #elif ITALIAN
        .categoryName = _("VELENAGO"),
    #else //ENGLISH
        .categoryName = _("POISON PIN"),
    #endif
=======
        .categoryName = _("PIN VENENO"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 90,
        .description = gNidoranMPokedexText,
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDORINO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VENEPIC"),
    #elif ITALIAN
        .categoryName = _("VELENAGO"),
    #else //ENGLISH
        .categoryName = _("POISON PIN"),
    #endif
=======
        .categoryName = _("PIN VENENO"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 195,
        .description = gNidorinoPokedexText,
        .pokemonScale = 408,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NIDOKING] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PERCEUR"),
    #elif ITALIAN
        .categoryName = _("TRAPANO"),
    #else //ENGLISH
        .categoryName = _("DRILL"),
    #endif
=======
        .categoryName = _("TALADRO"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 620,
        .description = gNidokingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLEFAIRY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FEE"),
    #elif ITALIAN
        .categoryName = _("FATA"),
    #else //ENGLISH
        .categoryName = _("FAIRY"),
    #endif
=======
        .categoryName = _("HADA"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 75,
        .description = gClefairyPokedexText,
        .pokemonScale = 441,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLEFABLE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FEE"),
    #elif ITALIAN
        .categoryName = _("FATA"),
    #else //ENGLISH
        .categoryName = _("FAIRY"),
    #endif
=======
        .categoryName = _("HADA"),
>>>>>>> Egg/spanish
        .height = 13,
        .weight = 400,
        .description = gClefablePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VULPIX] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("RENARD"),
    #elif ITALIAN
        .categoryName = _("VOLPE"),
    #else //ENGLISH
        .categoryName = _("FOX"),
    #endif
=======
        .categoryName = _("ZORRO"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 99,
        .description = gVulpixPokedexText,
        .pokemonScale = 542,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NINETALES] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("RENARD"),
    #elif ITALIAN
        .categoryName = _("VOLPE"),
    #else //ENGLISH
        .categoryName = _("FOX"),
    #endif
=======
        .categoryName = _("ZORRO"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 199,
        .description = gNinetalesPokedexText,
        .pokemonScale = 339,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JIGGLYPUFF] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BOUBOULE"),
    #elif ITALIAN
        .categoryName = _("PALLONE"),
    #else //ENGLISH
        .categoryName = _("BALLOON"),
    #endif
=======
        .categoryName = _("GLOBO"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 55,
        .description = gJigglypuffPokedexText,
        .pokemonScale = 433,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WIGGLYTUFF] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BOUBOULE"),
    #elif ITALIAN
        .categoryName = _("PALLONE"),
    #else //ENGLISH
        .categoryName = _("BALLOON"),
    #endif
=======
        .categoryName = _("GLOBO"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 120,
        .description = gWigglytuffPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZUBAT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHOVSOURIS"),
    #elif ITALIAN
        .categoryName = _("PIPISTREL."),
    #else //ENGLISH
        .categoryName = _("BAT"),
    #endif
=======
        .categoryName = _("MURCIÉLAGO"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 75,
        .description = gZubatPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLBAT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHOVSOURIS"),
    #elif ITALIAN
        .categoryName = _("PIPISTREL."),
    #else //ENGLISH
        .categoryName = _("BAT"),
    #endif
=======
        .categoryName = _("MURCIÉLAGO"),
>>>>>>> Egg/spanish
        .height = 16,
        .weight = 550,
        .description = gGolbatPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ODDISH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("RACINE"),
    #elif ITALIAN
        .categoryName = _("MALERBA"),
    #else //ENGLISH
        .categoryName = _("WEED"),
    #endif
=======
        .categoryName = _("HIERBAJO"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 54,
        .description = gOddishPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLOOM] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("RACINE"),
    #elif ITALIAN
        .categoryName = _("MALERBA"),
    #else //ENGLISH
        .categoryName = _("WEED"),
    #endif
=======
        .categoryName = _("HIERBAJO"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 86,
        .description = gGloomPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VILEPLUME] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FLEUR"),
    #elif ITALIAN
        .categoryName = _("FIORE"),
    #else //ENGLISH
        .categoryName = _("FLOWER"),
    #endif
=======
        .categoryName = _("FLOR"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 186,
        .description = gVileplumePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PARAS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHAMPIGNON"),
    #elif ITALIAN
        .categoryName = _("FUNGO"),
    #else //ENGLISH
        .categoryName = _("MUSHROOM"),
    #endif
=======
        .categoryName = _("HONGO"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 54,
        .description = gParasPokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PARASECT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHAMPIGNON"),
    #elif ITALIAN
        .categoryName = _("FUNGO"),
    #else //ENGLISH
        .categoryName = _("MUSHROOM"),
    #endif
=======
        .categoryName = _("HONGO"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 295,
        .description = gParasectPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VENONAT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VERMINE"),
    #elif ITALIAN
        .categoryName = _("INSETTO"),
    #else //ENGLISH
        .categoryName = _("INSECT"),
    #endif
=======
        .categoryName = _("INSECTO"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 300,
        .description = gVenonatPokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_VENOMOTH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PAPIPOISON"),
    #elif ITALIAN
        .categoryName = _("VELENTARMA"),
    #else //ENGLISH
        .categoryName = _("POISON MOTH"),
    #endif
=======
        .categoryName = _("POLILLA V."),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 125,
        .description = gVenomothPokedexText,
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_DIGLETT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TAUPE"),
    #elif ITALIAN
        .categoryName = _("TALPA"),
    #else //ENGLISH
        .categoryName = _("MOLE"),
    #endif
=======
        .categoryName = _("TOPO"),
>>>>>>> Egg/spanish
        .height = 2,
        .weight = 8,
        .description = gDiglettPokedexText,
        .pokemonScale = 833,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUGTRIO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TAUPE"),
    #elif ITALIAN
        .categoryName = _("TALPA"),
    #else //ENGLISH
        .categoryName = _("MOLE"),
    #endif
=======
        .categoryName = _("TOPO"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 333,
        .description = gDugtrioPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEOWTH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHADEGOUT"),
    #elif ITALIAN
        .categoryName = _("GRAFFIMIAO"),
    #else //ENGLISH
        .categoryName = _("SCRATCH CAT"),
    #endif
=======
        .categoryName = _("GATO ARAÑA"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 42,
        .description = gMeowthPokedexText,
        .pokemonScale = 480,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PERSIAN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHADEVILLE"),
    #elif ITALIAN
        .categoryName = _("NOBILGATTO"),
    #else //ENGLISH
        .categoryName = _("CLASSY CAT"),
    #endif
=======
        .categoryName = _("GATO FINO"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 320,
        .description = gPersianPokedexText,
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PSYDUCK] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CANARD"),
    #elif ITALIAN
        .categoryName = _("PAPERO"),
    #else //ENGLISH
        .categoryName = _("DUCK"),
    #endif
=======
        .categoryName = _("PATO"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 196,
        .description = gPsyduckPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLDUCK] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CANARD"),
    #elif ITALIAN
        .categoryName = _("PAPERO"),
    #else //ENGLISH
        .categoryName = _("DUCK"),
    #endif
=======
        .categoryName = _("PATO"),
>>>>>>> Egg/spanish
        .height = 17,
        .weight = 766,
        .description = gGolduckPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_MANKEY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PORSINGE"),
    #elif ITALIAN
        .categoryName = _("SUINPANZÉ"),
    #else //ENGLISH
        .categoryName = _("PIG MONKEY"),
    #endif
=======
        .categoryName = _("MONO CERDO"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 280,
        .description = gMankeyPokedexText,
        .pokemonScale = 404,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PRIMEAPE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PORSINGE"),
    #elif ITALIAN
        .categoryName = _("SUINPANZÉ"),
    #else //ENGLISH
        .categoryName = _("PIG MONKEY"),
    #endif
=======
        .categoryName = _("MONO CERDO"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 320,
        .description = gPrimeapePokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROWLITHE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHIOT"),
    #elif ITALIAN
        .categoryName = _("CAGNOLINO"),
    #else //ENGLISH
        .categoryName = _("PUPPY"),
    #endif
=======
        .categoryName = _("PERRITO"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 190,
        .description = gGrowlithePokedexText,
        .pokemonScale = 346,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARCANINE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LEGENDAIRE"),
    #elif ITALIAN
        .categoryName = _("LEGGENDA"),
    #else //ENGLISH
        .categoryName = _("LEGENDARY"),
    #endif
=======
        .categoryName = _("LEGENDARIO"),
>>>>>>> Egg/spanish
        .height = 19,
        .weight = 1550,
        .description = gArcaninePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_POLIWAG] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TETARD"),
    #elif ITALIAN
        .categoryName = _("GIRINO"),
    #else //ENGLISH
        .categoryName = _("TADPOLE"),
    #endif
=======
        .categoryName = _("RENACUAJO"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 124,
        .description = gPoliwagPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLIWHIRL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TETARD"),
    #elif ITALIAN
        .categoryName = _("GIRINO"),
    #else //ENGLISH
        .categoryName = _("TADPOLE"),
    #endif
=======
        .categoryName = _("RENACUAJO"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 200,
        .description = gPoliwhirlPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLIWRATH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TETARD"),
    #elif ITALIAN
        .categoryName = _("GIRINO"),
    #else //ENGLISH
        .categoryName = _("TADPOLE"),
    #endif
=======
        .categoryName = _("RENACUAJO"),
>>>>>>> Egg/spanish
        .height = 13,
        .weight = 540,
        .description = gPoliwrathPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABRA] =
    {
    #if FRENCH
        .categoryName = _("PSY"),
    #elif ITALIAN
        .categoryName = _("PSICO"),
    #else //ENGLISH
        .categoryName = _("PSI"),
    #endif
        .height = 9,
        .weight = 195,
        .description = gAbraPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KADABRA] =
    {
    #if FRENCH
        .categoryName = _("PSY"),
    #elif ITALIAN
        .categoryName = _("PSICO"),
    #else //ENGLISH
        .categoryName = _("PSI"),
    #endif
        .height = 13,
        .weight = 565,
        .description = gKadabraPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALAKAZAM] =
    {
    #if FRENCH
        .categoryName = _("PSY"),
    #elif ITALIAN
        .categoryName = _("PSICO"),
    #else //ENGLISH
        .categoryName = _("PSI"),
    #endif
        .height = 15,
        .weight = 480,
        .description = gAlakazamPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MACHOP] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("COLOSSE"),
    #elif ITALIAN
        .categoryName = _("MEGAFORZA"),
    #else //ENGLISH
        .categoryName = _("SUPERPOWER"),
    #endif
=======
        .categoryName = _("SUPERPODER"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 195,
        .description = gMachopPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MACHOKE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("COLOSSE"),
    #elif ITALIAN
        .categoryName = _("MEGAFORZA"),
    #else //ENGLISH
        .categoryName = _("SUPERPOWER"),
    #endif
=======
        .categoryName = _("SUPERPODER"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 705,
        .description = gMachokePokedexText,
        .pokemonScale = 323,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MACHAMP] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("COLOSSE"),
    #elif ITALIAN
        .categoryName = _("MEGAFORZA"),
    #else //ENGLISH
        .categoryName = _("SUPERPOWER"),
    #endif
=======
        .categoryName = _("SUPERPODER"),
>>>>>>> Egg/spanish
        .height = 16,
        .weight = 1300,
        .description = gMachampPokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_BELLSPROUT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FLEUR"),
    #elif ITALIAN
        .categoryName = _("FIORE"),
    #else //ENGLISH
        .categoryName = _("FLOWER"),
    #endif
=======
        .categoryName = _("FLOR"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 40,
        .description = gBellsproutPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEEPINBELL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CARNIVORE"),
    #elif ITALIAN
        .categoryName = _("MOSCHIVORO"),
    #else //ENGLISH
        .categoryName = _("FLYCATCHER"),
    #endif
=======
        .categoryName = _("MATAMOSCAS"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 64,
        .description = gWeepinbellPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VICTREEBEL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CARNIVORE"),
    #elif ITALIAN
        .categoryName = _("MOSCHIVORO"),
    #else //ENGLISH
        .categoryName = _("FLYCATCHER"),
    #endif
=======
        .categoryName = _("MATAMOSCAS"),
>>>>>>> Egg/spanish
        .height = 17,
        .weight = 155,
        .description = gVictreebelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_TENTACOOL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MOLLUSQUE"),
    #elif ITALIAN
        .categoryName = _("MEDUSA"),
    #else //ENGLISH
        .categoryName = _("JELLYFISH"),
    #endif
=======
        .categoryName = _("MEDUSA"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 455,
        .description = gTentacoolPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TENTACRUEL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MOLLUSQUE"),
    #elif ITALIAN
        .categoryName = _("MEDUSA"),
    #else //ENGLISH
        .categoryName = _("JELLYFISH"),
    #endif
=======
        .categoryName = _("MEDUSA"),
>>>>>>> Egg/spanish
        .height = 16,
        .weight = 550,
        .description = gTentacruelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GEODUDE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ROCHE"),
    #elif ITALIAN
        .categoryName = _("ROCCIA"),
    #else //ENGLISH
        .categoryName = _("ROCK"),
    #endif
=======
        .categoryName = _("ROCA"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 200,
        .description = gGeodudePokedexText,
        .pokemonScale = 347,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRAVELER] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ROCHE"),
    #elif ITALIAN
        .categoryName = _("ROCCIA"),
    #else //ENGLISH
        .categoryName = _("ROCK"),
    #endif
=======
        .categoryName = _("ROCA"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 1050,
        .description = gGravelerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLEM] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TITANESQUE"),
    #elif ITALIAN
        .categoryName = _("MEGATONE"),
    #else //ENGLISH
        .categoryName = _("MEGATON"),
    #endif
=======
        .categoryName = _("MEGATÓN"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 3000,
        .description = gGolemPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PONYTA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHEVAL FEU"),
    #elif ITALIAN
        .categoryName = _("CAVALFUOCO"),
    #else //ENGLISH
        .categoryName = _("FIRE HORSE"),
    #endif
=======
        .categoryName = _("CABALLO F."),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 300,
        .description = gPonytaPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RAPIDASH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHEVAL FEU"),
    #elif ITALIAN
        .categoryName = _("CAVALFUOCO"),
    #else //ENGLISH
        .categoryName = _("FIRE HORSE"),
    #endif
=======
        .categoryName = _("CABALLO F."),
>>>>>>> Egg/spanish
        .height = 17,
        .weight = 950,
        .description = gRapidashPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_SLOWPOKE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CRETIN"),
    #elif ITALIAN
        .categoryName = _("RONFONE"),
    #else //ENGLISH
        .categoryName = _("DOPEY"),
    #endif
=======
        .categoryName = _("ATONTADO"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 360,
        .description = gSlowpokePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLOWBRO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SYMBIOSE"),
    #elif ITALIAN
        .categoryName = _("PAGURO"),
    #else //ENGLISH
        .categoryName = _("HERMIT CRAB"),
    #endif
=======
        .categoryName = _("ERMITAÑO"),
>>>>>>> Egg/spanish
        .height = 16,
        .weight = 785,
        .description = gSlowbroPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAGNEMITE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MAGNETIQUE"),
    #elif ITALIAN
        .categoryName = _("CALAMITA"),
    #else //ENGLISH
        .categoryName = _("MAGNET"),
    #endif
=======
        .categoryName = _("IMÁN"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 60,
        .description = gMagnemitePokedexText,
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGNETON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MAGNETIQUE"),
    #elif ITALIAN
        .categoryName = _("CALAMITA"),
    #else //ENGLISH
        .categoryName = _("MAGNET"),
    #endif
=======
        .categoryName = _("IMÁN"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 600,
        .description = gMagnetonPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FARFETCHD] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CANARD FOU"),
    #elif ITALIAN
        .categoryName = _("SELVANATRA"),
    #else //ENGLISH
        .categoryName = _("WILD DUCK"),
    #endif
=======
        .categoryName = _("PATO SALV."),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 150,
        .description = gFarfetchdPokedexText,
        .pokemonScale = 330,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DODUO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("DUOISEAU"),
    #elif ITALIAN
        .categoryName = _("BIUCCELLO"),
    #else //ENGLISH
        .categoryName = _("TWIN BIRD"),
    #endif
=======
        .categoryName = _("AVE GEMELA"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 392,
        .description = gDoduoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_DODRIO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TRIOISEAU"),
    #elif ITALIAN
        .categoryName = _("TRIUCCELLO"),
    #else //ENGLISH
        .categoryName = _("TRIPLE BIRD"),
    #endif
=======
        .categoryName = _("AVE TRIPLE"),
>>>>>>> Egg/spanish
        .height = 18,
        .weight = 852,
        .description = gDodrioPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEEL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("OTARIE"),
    #elif ITALIAN
        .categoryName = _("OTARIA"),
    #else //ENGLISH
        .categoryName = _("SEA LION"),
    #endif
=======
        .categoryName = _("LEÓN MAR."),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 900,
        .description = gSeelPokedexText,
        .pokemonScale = 297,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEWGONG] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("OTARIE"),
    #elif ITALIAN
        .categoryName = _("OTARIA"),
    #else //ENGLISH
        .categoryName = _("SEA LION"),
    #endif
=======
        .categoryName = _("LEÓN MAR."),
>>>>>>> Egg/spanish
        .height = 17,
        .weight = 1200,
        .description = gDewgongPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 275,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRIMER] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("DEGUEU"),
    #elif ITALIAN
        .categoryName = _("MELMA"),
    #else //ENGLISH
        .categoryName = _("SLUDGE"),
    #endif
=======
        .categoryName = _("LODO"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 300,
        .description = gGrimerPokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MUK] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("DEGUEU"),
    #elif ITALIAN
        .categoryName = _("MELMA"),
    #else //ENGLISH
        .categoryName = _("SLUDGE"),
    #endif
=======
        .categoryName = _("LODO"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 300,
        .description = gMukPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELLDER] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BIVALVE"),
    #elif ITALIAN
        .categoryName = _("BIVALVE"),
    #else //ENGLISH
        .categoryName = _("BIVALVE"),
    #endif
=======
        .categoryName = _("BIVALVO"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 40,
        .description = gShellderPokedexText,
        .pokemonScale = 675,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLOYSTER] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BIVALVE"),
    #elif ITALIAN
        .categoryName = _("BIVALVE"),
    #else //ENGLISH
        .categoryName = _("BIVALVE"),
    #endif
=======
        .categoryName = _("BIVALVO"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 1325,
        .description = gCloysterPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 269,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_GASTLY] =
    {
    #if FRENCH
        .categoryName = _("GAZ"),
    #elif ITALIAN
        .categoryName = _("GAS"),
    #else //ENGLISH
        .categoryName = _("GAS"),
    #endif
        .height = 13,
        .weight = 1,
        .description = gGastlyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HAUNTER] =
    {
    #if FRENCH
        .categoryName = _("GAZ"),
    #elif ITALIAN
        .categoryName = _("GAS"),
    #else //ENGLISH
        .categoryName = _("GAS"),
    #endif
        .height = 16,
        .weight = 1,
        .description = gHaunterPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GENGAR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("OMBRE"),
    #elif ITALIAN
        .categoryName = _("OMBRA"),
    #else //ENGLISH
        .categoryName = _("SHADOW"),
    #endif
=======
        .categoryName = _("SOMBRA"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 405,
        .description = gGengarPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 302,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ONIX] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SERPENROC"),
    #elif ITALIAN
        .categoryName = _("SERPESASSO"),
    #else //ENGLISH
        .categoryName = _("ROCK SNAKE"),
    #endif
=======
        .categoryName = _("SERP. ROCA"),
>>>>>>> Egg/spanish
        .height = 88,
        .weight = 2100,
        .description = gOnixPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_DROWZEE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("HYPNOSE"),
    #elif ITALIAN
        .categoryName = _("IPNOSI"),
    #else //ENGLISH
        .categoryName = _("HYPNOSIS"),
    #endif
=======
        .categoryName = _("HIPNOSIS"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 324,
        .description = gDrowzeePokedexText,
        .pokemonScale = 274,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HYPNO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("HYPNOSE"),
    #elif ITALIAN
        .categoryName = _("IPNOSI"),
    #else //ENGLISH
        .categoryName = _("HYPNOSIS"),
    #endif
=======
        .categoryName = _("HIPNOSIS"),
>>>>>>> Egg/spanish
        .height = 16,
        .weight = 756,
        .description = gHypnoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KRABBY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("DOUX CRABE"),
    #elif ITALIAN
        .categoryName = _("GRANCHIO"),
    #else //ENGLISH
        .categoryName = _("RIVER CRAB"),
    #endif
=======
        .categoryName = _("CANGREJO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 65,
        .description = gKrabbyPokedexText,
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KINGLER] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PINCE"),
    #elif ITALIAN
        .categoryName = _("CHELA"),
    #else //ENGLISH
        .categoryName = _("PINCER"),
    #endif
=======
        .categoryName = _("TENAZA"),
>>>>>>> Egg/spanish
        .height = 13,
        .weight = 600,
        .description = gKinglerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VOLTORB] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BALLE"),
    #elif ITALIAN
        .categoryName = _("BALL"),
    #else //ENGLISH
        .categoryName = _("BALL"),
    #endif
=======
        .categoryName = _("BOLA"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 104,
        .description = gVoltorbPokedexText,
        .pokemonScale = 364,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECTRODE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BALLE"),
    #elif ITALIAN
        .categoryName = _("BALL"),
    #else //ENGLISH
        .categoryName = _("BALL"),
    #endif
=======
        .categoryName = _("BOLA"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 666,
        .description = gElectrodePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXEGGCUTE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("OEUF"),
    #elif ITALIAN
        .categoryName = _("UOVO"),
    #else //ENGLISH
        .categoryName = _("EGG"),
    #endif
=======
        .categoryName = _("HUEVO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 25,
        .description = gExeggcutePokedexText,
        .pokemonScale = 489,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXEGGUTOR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FRUITPALME"),
    #elif ITALIAN
        .categoryName = _("NOCECOCCO"),
    #else //ENGLISH
        .categoryName = _("COCONUT"),
    #endif
=======
        .categoryName = _("COCO"),
>>>>>>> Egg/spanish
        .height = 20,
        .weight = 1200,
        .description = gExeggutorPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_CUBONE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SOLITAIRE"),
    #elif ITALIAN
        .categoryName = _("SOLITARIO"),
    #else //ENGLISH
        .categoryName = _("LONELY"),
    #endif
=======
        .categoryName = _("SOLITARIO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 65,
        .description = gCubonePokedexText,
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAROWAK] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GARD'OS"),
    #elif ITALIAN
        .categoryName = _("GUARDAOSSI"),
    #else //ENGLISH
        .categoryName = _("BONE KEEPER"),
    #endif
=======
        .categoryName = _("APILAHUESO"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 450,
        .description = gMarowakPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HITMONLEE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LATTEUR"),
    #elif ITALIAN
        .categoryName = _("TIRACALCI"),
    #else //ENGLISH
        .categoryName = _("KICKING"),
    #endif
=======
        .categoryName = _("PATADA"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 498,
        .description = gHitmonleePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_HITMONCHAN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PUNCHEUR"),
    #elif ITALIAN
        .categoryName = _("TIRAPUGNI"),
    #else //ENGLISH
        .categoryName = _("PUNCHING"),
    #endif
=======
        .categoryName = _("PUÑETAZO"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 502,
        .description = gHitmonchanPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LICKITUNG] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LECHEUR"),
    #elif ITALIAN
        .categoryName = _("LINGUACCIA"),
    #else //ENGLISH
        .categoryName = _("LICKING"),
    #endif
=======
        .categoryName = _("LAMETAZO"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 655,
        .description = gLickitungPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KOFFING] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GAZ MORTEL"),
    #elif ITALIAN
        .categoryName = _("VELENUVOLA"),
    #else //ENGLISH
        .categoryName = _("POISON GAS"),
    #endif
=======
        .categoryName = _("GAS VENENO"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 10,
        .description = gKoffingPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WEEZING] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GAZ MORTEL"),
    #elif ITALIAN
        .categoryName = _("VELENUVOLA"),
    #else //ENGLISH
        .categoryName = _("POISON GAS"),
    #endif
=======
        .categoryName = _("GAS VENENO"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 95,
        .description = gWeezingPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RHYHORN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PIQUANT"),
    #elif ITALIAN
        .categoryName = _("PUNZONI"),
    #else //ENGLISH
        .categoryName = _("SPIKES"),
    #endif
=======
        .categoryName = _("CLAVOS"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 1150,
        .description = gRhyhornPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RHYDON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PERCEUR"),
    #elif ITALIAN
        .categoryName = _("TRAPANO"),
    #else //ENGLISH
        .categoryName = _("DRILL"),
    #endif
=======
        .categoryName = _("TALADRO"),
>>>>>>> Egg/spanish
        .height = 19,
        .weight = 1200,
        .description = gRhydonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CHANSEY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("OEUF"),
    #elif ITALIAN
        .categoryName = _("UOVO"),
    #else //ENGLISH
        .categoryName = _("EGG"),
    #endif
=======
        .categoryName = _("HUEVO"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 346,
        .description = gChanseyPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TANGELA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VIGNE"),
    #elif ITALIAN
        .categoryName = _("LIANA"),
    #else //ENGLISH
        .categoryName = _("VINE"),
    #endif
=======
        .categoryName = _("ENREDADERA"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 350,
        .description = gTangelaPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KANGASKHAN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MATERNEL"),
    #elif ITALIAN
        .categoryName = _("GENITORE"),
    #else //ENGLISH
        .categoryName = _("PARENT"),
    #endif
=======
        .categoryName = _("PADRES"),
>>>>>>> Egg/spanish
        .height = 22,
        .weight = 800,
        .description = gKangaskhanPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_HORSEA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("DRAGON"),
    #elif ITALIAN
        .categoryName = _("DRAGO"),
    #else //ENGLISH
        .categoryName = _("DRAGON"),
    #endif
=======
        .categoryName = _("DRAGÓN"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 80,
        .description = gHorseaPokedexText,
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEADRA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("DRAGON"),
    #elif ITALIAN
        .categoryName = _("DRAGO"),
    #else //ENGLISH
        .categoryName = _("DRAGON"),
    #endif
=======
        .categoryName = _("DRAGÓN"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 250,
        .description = gSeadraPokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOLDEEN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POISSON"),
    #elif ITALIAN
        .categoryName = _("PESCEROSSO"),
    #else //ENGLISH
        .categoryName = _("GOLDFISH"),
    #endif
=======
        .categoryName = _("PEZ COLOR"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 150,
        .description = gGoldeenPokedexText,
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEAKING] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POISSON"),
    #elif ITALIAN
        .categoryName = _("PESCEROSSO"),
    #else //ENGLISH
        .categoryName = _("GOLDFISH"),
    #endif
=======
        .categoryName = _("PEZ COLOR"),
>>>>>>> Egg/spanish
        .height = 13,
        .weight = 390,
        .description = gSeakingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARYU] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ETOILE"),
    #elif ITALIAN
        .categoryName = _("STELLA"),
    #else //ENGLISH
        .categoryName = _("STAR SHAPE"),
    #endif
=======
        .categoryName = _("ESTRELLADA"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 345,
        .description = gStaryuPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STARMIE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MYSTERIEUX"),
    #elif ITALIAN
        .categoryName = _("MISTERIOSO"),
    #else //ENGLISH
        .categoryName = _("MYSTERIOUS"),
    #endif
=======
        .categoryName = _("MISTERIOSO"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 800,
        .description = gStarmiePokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MR_MIME] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BLOQUEUR"),
    #elif ITALIAN
        .categoryName = _("BARRIERA"),
    #else //ENGLISH
        .categoryName = _("BARRIER"),
    #endif
=======
        .categoryName = _("BARRERA"),
>>>>>>> Egg/spanish
        .height = 13,
        .weight = 545,
        .description = gMrMimePokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCYTHER] =
    {
    #if FRENCH
        .categoryName = _("MANTE"),
    #elif ITALIAN
        .categoryName = _("MANTIDE"),
    #else //ENGLISH
        .categoryName = _("MANTIS"),
    #endif
        .height = 15,
        .weight = 560,
        .description = gScytherPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_JYNX] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("HUMANOIDE"),
    #elif ITALIAN
        .categoryName = _("UMANOIDE"),
    #else //ENGLISH
        .categoryName = _("HUMAN SHAPE"),
    #endif
=======
        .categoryName = _("F. HUMANA"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 406,
        .description = gJynxPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_ELECTABUZZ] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ELECTRIQUE"),
    #elif ITALIAN
        .categoryName = _("ELETTRICO"),
    #else //ENGLISH
        .categoryName = _("ELECTRIC"),
    #endif
=======
        .categoryName = _("ELÉCTRICO"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 300,
        .description = gElectabuzzPokedexText,
        .pokemonScale = 351,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGMAR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CRACHE-FEU"),
    #elif ITALIAN
        .categoryName = _("SPUTAFUOCO"),
    #else //ENGLISH
        .categoryName = _("SPITFIRE"),
    #endif
=======
        .categoryName = _("ESCUPFUEGO"),
>>>>>>> Egg/spanish
        .height = 13,
        .weight = 445,
        .description = gMagmarPokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINSIR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SCARABEE"),
    #elif ITALIAN
        .categoryName = _("CERVOLANTE"),
    #else //ENGLISH
        .categoryName = _("STAG BEETLE"),
    #endif
=======
        .categoryName = _("ESCARABAJO"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 550,
        .description = gPinsirPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAUROS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BUFFLE"),
    #elif ITALIAN
        .categoryName = _("TOROBRADO"),
    #else //ENGLISH
        .categoryName = _("WILD BULL"),
    #endif
=======
        .categoryName = _("TORO BRAVO"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 884,
        .description = gTaurosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGIKARP] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POISSON"),
    #elif ITALIAN
        .categoryName = _("PESCE"),
    #else //ENGLISH
        .categoryName = _("FISH"),
    #endif
=======
        .categoryName = _("PEZ"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 100,
        .description = gMagikarpPokedexText,
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GYARADOS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TERRIFIANT"),
    #elif ITALIAN
        .categoryName = _("ATROCE"),
    #else //ENGLISH
        .categoryName = _("ATROCIOUS"),
    #endif
=======
        .categoryName = _("ATROCIDAD"),
>>>>>>> Egg/spanish
        .height = 65,
        .weight = 2350,
        .description = gGyaradosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 481,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_LAPRAS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TRANSPORT"),
    #elif ITALIAN
        .categoryName = _("TRASPORTO"),
    #else //ENGLISH
        .categoryName = _("TRANSPORT"),
    #endif
=======
        .categoryName = _("TRANSPORTE"),
>>>>>>> Egg/spanish
        .height = 25,
        .weight = 2200,
        .description = gLaprasPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_DITTO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MORPHING"),
    #elif ITALIAN
        .categoryName = _("MUTANTE"),
    #else //ENGLISH
        .categoryName = _("TRANSFORM"),
    #endif
=======
        .categoryName = _("TRANSFORM."),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 40,
        .description = gDittoPokedexText,
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EEVEE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("EVOLUTIF"),
    #elif ITALIAN
        .categoryName = _("EVOLUZIONE"),
    #else //ENGLISH
        .categoryName = _("EVOLUTION"),
    #endif
=======
        .categoryName = _("EVOLUCIÓN"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 65,
        .description = gEeveePokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VAPOREON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BULLEUR"),
    #elif ITALIAN
        .categoryName = _("BOLLAJET"),
    #else //ENGLISH
        .categoryName = _("BUBBLE JET"),
    #endif
=======
        .categoryName = _("BURBUJA"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 290,
        .description = gVaporeonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JOLTEON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ORAGE"),
    #elif ITALIAN
        .categoryName = _("LUMINOSO"),
    #else //ENGLISH
        .categoryName = _("LIGHTNING"),
    #endif
=======
        .categoryName = _("RELÁMPAGO"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 245,
        .description = gJolteonPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAREON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FLAMME"),
    #elif ITALIAN
        .categoryName = _("FIAMMA"),
    #else //ENGLISH
        .categoryName = _("FLAME"),
    #endif
=======
        .categoryName = _("LLAMA"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 250,
        .description = gFlareonPokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORYGON] =
    {
    #if FRENCH
        .categoryName = _("VIRTUEL"),
    #elif ITALIAN
        .categoryName = _("VIRTUALE"),
    #else //ENGLISH
        .categoryName = _("VIRTUAL"),
    #endif
        .height = 8,
        .weight = 365,
        .description = gPorygonPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OMANYTE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SPIRALE"),
    #elif ITALIAN
        .categoryName = _("SPIRALE"),
    #else //ENGLISH
        .categoryName = _("SPIRAL"),
    #endif
=======
        .categoryName = _("ESPIRAL"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 75,
        .description = gOmanytePokedexText,
        .pokemonScale = 521,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OMASTAR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SPIRALE"),
    #elif ITALIAN
        .categoryName = _("SPIRALE"),
    #else //ENGLISH
        .categoryName = _("SPIRAL"),
    #endif
=======
        .categoryName = _("ESPIRAL"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 350,
        .description = gOmastarPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KABUTO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CARAPACE"),
    #elif ITALIAN
        .categoryName = _("CROSTACEO"),
    #else //ENGLISH
        .categoryName = _("SHELLFISH"),
    #endif
=======
        .categoryName = _("MARISCO"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 115,
        .description = gKabutoPokedexText,
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KABUTOPS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CARAPACE"),
    #elif ITALIAN
        .categoryName = _("CROSTACEO"),
    #else //ENGLISH
        .categoryName = _("SHELLFISH"),
    #endif
=======
        .categoryName = _("MARISCO"),
>>>>>>> Egg/spanish
        .height = 13,
        .weight = 405,
        .description = gKabutopsPokedexText,
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AERODACTYL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FOSSILE"),
    #elif ITALIAN
        .categoryName = _("FOSSILE"),
    #else //ENGLISH
        .categoryName = _("FOSSIL"),
    #endif
=======
        .categoryName = _("FÓSIL"),
>>>>>>> Egg/spanish
        .height = 18,
        .weight = 590,
        .description = gAerodactylPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 302,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_SNORLAX] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PIONCEUR"),
    #elif ITALIAN
        .categoryName = _("SONNO"),
    #else //ENGLISH
        .categoryName = _("SLEEPING"),
    #endif
=======
        .categoryName = _("DORMIR"),
>>>>>>> Egg/spanish
        .height = 21,
        .weight = 4600,
        .description = gSnorlaxPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
    },

    [NATIONAL_DEX_ARTICUNO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GLACIAIRE"),
    #elif ITALIAN
        .categoryName = _("GELO"),
    #else //ENGLISH
        .categoryName = _("FREEZE"),
    #endif
=======
        .categoryName = _("CONGELAR"),
>>>>>>> Egg/spanish
        .height = 17,
        .weight = 554,
        .description = gArticunoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ZAPDOS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ELECTRIQUE"),
    #elif ITALIAN
        .categoryName = _("ELETTRICO"),
    #else //ENGLISH
        .categoryName = _("ELECTRIC"),
    #endif
=======
        .categoryName = _("ELÉCTRICO"),
>>>>>>> Egg/spanish
        .height = 16,
        .weight = 526,
        .description = gZapdosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 318,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_MOLTRES] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FLAMME"),
    #elif ITALIAN
        .categoryName = _("FIAMMA"),
    #else //ENGLISH
        .categoryName = _("FLAME"),
    #endif
=======
        .categoryName = _("LLAMA"),
>>>>>>> Egg/spanish
        .height = 20,
        .weight = 600,
        .description = gMoltresPokedexText,
        .pokemonScale = 270,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
    },

    [NATIONAL_DEX_DRATINI] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("DRAGON"),
    #elif ITALIAN
        .categoryName = _("DRAGO"),
    #else //ENGLISH
        .categoryName = _("DRAGON"),
    #endif
=======
        .categoryName = _("DRAGÓN"),
>>>>>>> Egg/spanish
        .height = 18,
        .weight = 33,
        .description = gDratiniPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_DRAGONAIR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("DRAGON"),
    #elif ITALIAN
        .categoryName = _("DRAGO"),
    #else //ENGLISH
        .categoryName = _("DRAGON"),
    #endif
=======
        .categoryName = _("DRAGÓN"),
>>>>>>> Egg/spanish
        .height = 40,
        .weight = 165,
        .description = gDragonairPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_DRAGONITE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("DRAGON"),
    #elif ITALIAN
        .categoryName = _("DRAGO"),
    #else //ENGLISH
        .categoryName = _("DRAGON"),
    #endif
=======
        .categoryName = _("DRAGÓN"),
>>>>>>> Egg/spanish
        .height = 22,
        .weight = 2100,
        .description = gDragonitePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MEWTWO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GENETIQUE"),
    #elif ITALIAN
        .categoryName = _("GENETICO"),
    #else //ENGLISH
        .categoryName = _("GENETIC"),
    #endif
=======
        .categoryName = _("GENÉTICO"),
>>>>>>> Egg/spanish
        .height = 20,
        .weight = 1220,
        .description = gMewtwoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MEW] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("NOUVEAU"),
    #elif ITALIAN
        .categoryName = _("NOVASPECIE"),
    #else //ENGLISH
        .categoryName = _("NEW SPECIES"),
    #endif
=======
        .categoryName = _("N. ESPECIE"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 40,
        .description = gMewPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CHIKORITA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FEUILLE"),
    #elif ITALIAN
        .categoryName = _("FOGLIA"),
    #else //ENGLISH
        .categoryName = _("LEAF"),
    #endif
=======
        .categoryName = _("HOJA"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 64,
        .description = gChikoritaPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAYLEEF] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FEUILLE"),
    #elif ITALIAN
        .categoryName = _("FOGLIA"),
    #else //ENGLISH
        .categoryName = _("LEAF"),
    #endif
=======
        .categoryName = _("HOJA"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 158,
        .description = gBayleefPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEGANIUM] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("HERBE"),
    #elif ITALIAN
        .categoryName = _("ERBE"),
    #else //ENGLISH
        .categoryName = _("HERB"),
    #endif
=======
        .categoryName = _("HIERBA"),
>>>>>>> Egg/spanish
        .height = 18,
        .weight = 1005,
        .description = gMeganiumPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 277,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CYNDAQUIL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SOURIS FEU"),
    #elif ITALIAN
        .categoryName = _("FUOCOTOPO"),
    #else //ENGLISH
        .categoryName = _("FIRE MOUSE"),
    #endif
=======
        .categoryName = _("RATÓNFUEGO"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 79,
        .description = gCyndaquilPokedexText,
        .pokemonScale = 539,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUILAVA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VOLCAN"),
    #elif ITALIAN
        .categoryName = _("VULCANO"),
    #else //ENGLISH
        .categoryName = _("VOLCANO"),
    #endif
=======
        .categoryName = _("VOLCÁN"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 190,
        .description = gQuilavaPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYPHLOSION] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VOLCAN"),
    #elif ITALIAN
        .categoryName = _("VULCANO"),
    #else //ENGLISH
        .categoryName = _("VOLCANO"),
    #endif
=======
        .categoryName = _("VOLCÁN"),
>>>>>>> Egg/spanish
        .height = 17,
        .weight = 795,
        .description = gTyphlosionPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_TOTODILE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MACHOIRE"),
    #elif ITALIAN
        .categoryName = _("MASCELLONE"),
    #else //ENGLISH
        .categoryName = _("BIG JAW"),
    #endif
=======
        .categoryName = _("FAUCES"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 95,
        .description = gTotodilePokedexText,
        .pokemonScale = 487,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CROCONAW] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MACHOIRE"),
    #elif ITALIAN
        .categoryName = _("MASCELLONE"),
    #else //ENGLISH
        .categoryName = _("BIG JAW"),
    #endif
=======
        .categoryName = _("FAUCES"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 250,
        .description = gCroconawPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FERALIGATR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MACHOIRE"),
    #elif ITALIAN
        .categoryName = _("MASCELLONE"),
    #else //ENGLISH
        .categoryName = _("BIG JAW"),
    #endif
=======
        .categoryName = _("FAUCES"),
>>>>>>> Egg/spanish
        .height = 23,
        .weight = 888,
        .description = gFeraligatrPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SENTRET] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ESPION"),
    #elif ITALIAN
        .categoryName = _("ESPLORANTE"),
    #else //ENGLISH
        .categoryName = _("SCOUT"),
    #endif
=======
        .categoryName = _("EXPLORADOR"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 60,
        .description = gSentretPokedexText,
        .pokemonScale = 439,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FURRET] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ALLONGE"),
    #elif ITALIAN
        .categoryName = _("LUNGOCORPO"),
    #else //ENGLISH
        .categoryName = _("LONG BODY"),
    #endif
=======
        .categoryName = _("ALARGADO"),
>>>>>>> Egg/spanish
        .height = 18,
        .weight = 325,
        .description = gFurretPokedexText,
        .pokemonScale = 346,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOOTHOOT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("HIBOU"),
    #elif ITALIAN
        .categoryName = _("GUFO"),
    #else //ENGLISH
        .categoryName = _("OWL"),
    #endif
=======
        .categoryName = _("BÚHO"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 212,
        .description = gHoothootPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOCTOWL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("HIBOU"),
    #elif ITALIAN
        .categoryName = _("GUFO"),
    #else //ENGLISH
        .categoryName = _("OWL"),
    #endif
=======
        .categoryName = _("BÚHO"),
>>>>>>> Egg/spanish
        .height = 16,
        .weight = 408,
        .description = gNoctowlPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEDYBA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("5 ETOILES"),
    #elif ITALIAN
        .categoryName = _("PENTASTRA"),
    #else //ENGLISH
        .categoryName = _("FIVE STAR"),
    #endif
=======
        .categoryName = _("5ESTRELLAS"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 108,
        .description = gLedybaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LEDIAN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("5 ETOILES"),
    #elif ITALIAN
        .categoryName = _("PENTASTRA"),
    #else //ENGLISH
        .categoryName = _("FIVE STAR"),
    #endif
=======
        .categoryName = _("5ESTRELLAS"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 356,
        .description = gLedianPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPINARAK] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CRACHE FIL"),
    #elif ITALIAN
        .categoryName = _("TELA"),
    #else //ENGLISH
        .categoryName = _("STRING SPIT"),
    #endif
=======
        .categoryName = _("ESCUPESOGA"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 85,
        .description = gSpinarakPokedexText,
        .pokemonScale = 414,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARIADOS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LONG-PATTE"),
    #elif ITALIAN
        .categoryName = _("LUNGAZAMPA"),
    #else //ENGLISH
        .categoryName = _("LONG LEG"),
    #endif
=======
        .categoryName = _("PATA LARGA"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 335,
        .description = gAriadosPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CROBAT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHOVSOURIS"),
    #elif ITALIAN
        .categoryName = _("PIPISTREL."),
    #else //ENGLISH
        .categoryName = _("BAT"),
    #endif
=======
        .categoryName = _("MURCIÉLAGO"),
>>>>>>> Egg/spanish
        .height = 18,
        .weight = 750,
        .description = gCrobatPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CHINCHOU] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POISSON"),
    #elif ITALIAN
        .categoryName = _("PESCATORE"),
    #else //ENGLISH
        .categoryName = _("ANGLER"),
    #endif
=======
        .categoryName = _("RAPE"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 120,
        .description = gChinchouPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LANTURN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LUMIERE"),
    #elif ITALIAN
        .categoryName = _("LUCE"),
    #else //ENGLISH
        .categoryName = _("LIGHT"),
    #endif
=======
        .categoryName = _("LUZ"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 225,
        .description = gLanturnPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PICHU] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MINISOURIS"),
    #elif ITALIAN
        .categoryName = _("TOPINO"),
    #else //ENGLISH
        .categoryName = _("TINY MOUSE"),
    #endif
=======
        .categoryName = _("RATONCITO"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 20,
        .description = gPichuPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLEFFA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ETOILE"),
    #elif ITALIAN
        .categoryName = _("STELLA"),
    #else //ENGLISH
        .categoryName = _("STAR SHAPE"),
    #endif
=======
        .categoryName = _("ESTRELLADA"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 30,
        .description = gCleffaPokedexText,
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_IGGLYBUFF] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BOUBOULE"),
    #elif ITALIAN
        .categoryName = _("PALLONE"),
    #else //ENGLISH
        .categoryName = _("BALLOON"),
    #endif
=======
        .categoryName = _("GLOBO"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 10,
        .description = gIgglybuffPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGEPI] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BALLE PIC"),
    #elif ITALIAN
        .categoryName = _("PALLAPUNTE"),
    #else //ENGLISH
        .categoryName = _("SPIKE BALL"),
    #endif
=======
        .categoryName = _("BOLACLAVOS"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 15,
        .description = gTogepiPokedexText,
        .pokemonScale = 507,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TOGETIC] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BONHEUR"),
    #elif ITALIAN
        .categoryName = _("FELICITÀ"),
    #else //ENGLISH
        .categoryName = _("HAPPINESS"),
    #endif
=======
        .categoryName = _("FELICIDAD"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 32,
        .description = gTogeticPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NATU] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MINOISEAU"),
    #elif ITALIAN
        .categoryName = _("UCCELLINO"),
    #else //ENGLISH
        .categoryName = _("TINY BIRD"),
    #endif
=======
        .categoryName = _("PAJARITO"),
>>>>>>> Egg/spanish
        .height = 2,
        .weight = 20,
        .description = gNatuPokedexText,
        .pokemonScale = 610,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_XATU] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MYSTIQUE"),
    #elif ITALIAN
        .categoryName = _("MAGICO"),
    #else //ENGLISH
        .categoryName = _("MYSTIC"),
    #endif
=======
        .categoryName = _("MÍSTICO"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 150,
        .description = gXatuPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 318,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MAREEP] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LAINE"),
    #elif ITALIAN
        .categoryName = _("LANA"),
    #else //ENGLISH
        .categoryName = _("WOOL"),
    #endif
=======
        .categoryName = _("LANA"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 78,
        .description = gMareepPokedexText,
        .pokemonScale = 379,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLAAFFY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LAINE"),
    #elif ITALIAN
        .categoryName = _("LANA"),
    #else //ENGLISH
        .categoryName = _("WOOL"),
    #endif
=======
        .categoryName = _("LANA"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 133,
        .description = gFlaaffyPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AMPHAROS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LUMIERE"),
    #elif ITALIAN
        .categoryName = _("LUCE"),
    #else //ENGLISH
        .categoryName = _("LIGHT"),
    #endif
=======
        .categoryName = _("LUZ"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 615,
        .description = gAmpharosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BELLOSSOM] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FLEUR"),
    #elif ITALIAN
        .categoryName = _("FIORE"),
    #else //ENGLISH
        .categoryName = _("FLOWER"),
    #endif
=======
        .categoryName = _("FLOR"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 58,
        .description = gBellossomPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARILL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("AQUASOURIS"),
    #elif ITALIAN
        .categoryName = _("ACQUATOPO"),
    #else //ENGLISH
        .categoryName = _("AQUA MOUSE"),
    #endif
=======
        .categoryName = _("RATÓN AGUA"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 85,
        .description = gMarillPokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AZUMARILL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("AQUALAPIN"),
    #elif ITALIAN
        .categoryName = _("ACQUNIGLIO"),
    #else //ENGLISH
        .categoryName = _("AQUA RABBIT"),
    #endif
=======
        .categoryName = _("CONEJOAGUA"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 285,
        .description = gAzumarillPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUDOWOODO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("IMITATION"),
    #elif ITALIAN
        .categoryName = _("IMITAZIONE"),
    #else //ENGLISH
        .categoryName = _("IMITATION"),
    #endif
=======
        .categoryName = _("IMITACIÓN"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 380,
        .description = gSudowoodoPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POLITOED] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GRENOUILLE"),
    #elif ITALIAN
        .categoryName = _("RANA"),
    #else //ENGLISH
        .categoryName = _("FROG"),
    #endif
=======
        .categoryName = _("RANA"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 339,
        .description = gPolitoedPokedexText,
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOPPIP] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PISSENLIT"),
    #elif ITALIAN
        .categoryName = _("GRAMIGNA"),
    #else //ENGLISH
        .categoryName = _("COTTONWEED"),
    #endif
=======
        .categoryName = _("ALGADÓN"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 5,
        .description = gHoppipPokedexText,
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SKIPLOOM] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PISSENLIT"),
    #elif ITALIAN
        .categoryName = _("GRAMIGNA"),
    #else //ENGLISH
        .categoryName = _("COTTONWEED"),
    #endif
=======
        .categoryName = _("ALGADÓN"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 10,
        .description = gSkiploomPokedexText,
        .pokemonScale = 387,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_JUMPLUFF] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PISSENLIT"),
    #elif ITALIAN
        .categoryName = _("GRAMIGNA"),
    #else //ENGLISH
        .categoryName = _("COTTONWEED"),
    #endif
=======
        .categoryName = _("ALGADÓN"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 30,
        .description = gJumpluffPokedexText,
        .pokemonScale = 418,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AIPOM] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LONGQUEUE"),
    #elif ITALIAN
        .categoryName = _("LUNGACODA"),
    #else //ENGLISH
        .categoryName = _("LONG TAIL"),
    #endif
=======
        .categoryName = _("COLA LARGA"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 115,
        .description = gAipomPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUNKERN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GRAINE"),
    #elif ITALIAN
        .categoryName = _("SEME"),
    #else //ENGLISH
        .categoryName = _("SEED"),
    #endif
=======
        .categoryName = _("SEMILLA"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 18,
        .description = gSunkernPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SUNFLORA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SOLEIL"),
    #elif ITALIAN
        .categoryName = _("SOLE"),
    #else //ENGLISH
        .categoryName = _("SUN"),
    #endif
=======
        .categoryName = _("SOL"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 85,
        .description = gSunfloraPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_YANMA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TRANSLAILE"),
    #elif ITALIAN
        .categoryName = _("ALACHIARA"),
    #else //ENGLISH
        .categoryName = _("CLEAR WING"),
    #endif
=======
        .categoryName = _("ALA CLARA"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 380,
        .description = gYanmaPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOOPER] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POISSON"),
    #elif ITALIAN
        .categoryName = _("ACQUAPESCE"),
    #else //ENGLISH
        .categoryName = _("WATER FISH"),
    #endif
=======
        .categoryName = _("PEZ AGUA"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 85,
        .description = gWooperPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QUAGSIRE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POISSON"),
    #elif ITALIAN
        .categoryName = _("ACQUAPESCE"),
    #else //ENGLISH
        .categoryName = _("WATER FISH"),
    #endif
=======
        .categoryName = _("PEZ AGUA"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 750,
        .description = gQuagsirePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ESPEON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SOLEIL"),
    #elif ITALIAN
        .categoryName = _("SOLE"),
    #else //ENGLISH
        .categoryName = _("SUN"),
    #endif
=======
        .categoryName = _("SOL"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 265,
        .description = gEspeonPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UMBREON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LUNE"),
    #elif ITALIAN
        .categoryName = _("LUCELUNARE"),
    #else //ENGLISH
        .categoryName = _("MOONLIGHT"),
    #endif
=======
        .categoryName = _("LUZ LUNAR"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 270,
        .description = gUmbreonPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MURKROW] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("OBSCURITE"),
    #elif ITALIAN
        .categoryName = _("OSCURITÀ"),
    #else //ENGLISH
        .categoryName = _("DARKNESS"),
    #endif
=======
        .categoryName = _("OSCURIDAD"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 21,
        .description = gMurkrowPokedexText,
        .pokemonScale = 401,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_SLOWKING] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ROYAL"),
    #elif ITALIAN
        .categoryName = _("REALE"),
    #else //ENGLISH
        .categoryName = _("ROYAL"),
    #endif
=======
        .categoryName = _("REGIO"),
>>>>>>> Egg/spanish
        .height = 20,
        .weight = 795,
        .description = gSlowkingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
    },

    [NATIONAL_DEX_MISDREAVUS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("STRIDENT"),
    #elif ITALIAN
        .categoryName = _("STRIDO"),
    #else //ENGLISH
        .categoryName = _("SCREECH"),
    #endif
=======
        .categoryName = _("CHIRRIDO"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 10,
        .description = gMisdreavusPokedexText,
        .pokemonScale = 407,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_UNOWN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SYMBOLIQUE"),
    #elif ITALIAN
        .categoryName = _("SIMBOLO"),
    #else //ENGLISH
        .categoryName = _("SYMBOL"),
    #endif
=======
        .categoryName = _("SÍMBOLO"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 50,
        .description = gUnownPokedexText,
        .pokemonScale = 411,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WOBBUFFET] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PATIENT"),
    #elif ITALIAN
        .categoryName = _("PAZIENZA"),
    #else //ENGLISH
        .categoryName = _("PATIENT"),
    #endif
=======
        .categoryName = _("PACIENTE"),
>>>>>>> Egg/spanish
        .height = 13,
        .weight = 285,
        .description = gWobbuffetPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GIRAFARIG] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LONG-COU"),
    #elif ITALIAN
        .categoryName = _("LUNGOCOLLO"),
    #else //ENGLISH
        .categoryName = _("LONG NECK"),
    #endif
=======
        .categoryName = _("GRANCUELLO"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 415,
        .description = gGirafarigPokedexText,
        .pokemonScale = 281,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PINECO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VER CACHE"),
    #elif ITALIAN
        .categoryName = _("LARVA"),
    #else //ENGLISH
        .categoryName = _("BAGWORM"),
    #endif
=======
        .categoryName = _("LARVA"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 72,
        .description = gPinecoPokedexText,
        .pokemonScale = 445,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FORRETRESS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VER CACHE"),
    #elif ITALIAN
        .categoryName = _("LARVA"),
    #else //ENGLISH
        .categoryName = _("BAGWORM"),
    #endif
=======
        .categoryName = _("LARVA"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 1258,
        .description = gForretressPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUNSPARCE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SERPENT"),
    #elif ITALIAN
        .categoryName = _("TERRASERPE"),
    #else //ENGLISH
        .categoryName = _("LAND SNAKE"),
    #endif
=======
        .categoryName = _("SERPTIERRA"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 140,
        .description = gDunsparcePokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLIGAR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SCORPIVOL"),
    #elif ITALIAN
        .categoryName = _("ALISCORPIO"),
    #else //ENGLISH
        .categoryName = _("FLYSCORPION"),
    #endif
=======
        .categoryName = _("ESCORPIALA"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 648,
        .description = gGligarPokedexText,
        .pokemonScale = 350,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STEELIX] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SERPENFER"),
    #elif ITALIAN
        .categoryName = _("FERROSERPE"),
    #else //ENGLISH
        .categoryName = _("IRON SNAKE"),
    #endif
=======
        .categoryName = _("SERPFÉRREA"),
>>>>>>> Egg/spanish
        .height = 92,
        .weight = 4000,
        .description = gSteelixPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 516,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_SNUBBULL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FEE"),
    #elif ITALIAN
        .categoryName = _("FATA"),
    #else //ENGLISH
        .categoryName = _("FAIRY"),
    #endif
=======
        .categoryName = _("HADA"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 78,
        .description = gSnubbullPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRANBULL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FEE"),
    #elif ITALIAN
        .categoryName = _("FATA"),
    #else //ENGLISH
        .categoryName = _("FAIRY"),
    #endif
=======
        .categoryName = _("HADA"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 487,
        .description = gGranbullPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_QWILFISH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BOUBOULE"),
    #elif ITALIAN
        .categoryName = _("PALLONE"),
    #else //ENGLISH
        .categoryName = _("BALLOON"),
    #endif
=======
        .categoryName = _("GLOBO"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 39,
        .description = gQwilfishPokedexText,
        .pokemonScale = 430,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCIZOR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PINCE"),
    #elif ITALIAN
        .categoryName = _("CHELA"),
    #else //ENGLISH
        .categoryName = _("PINCER"),
    #endif
=======
        .categoryName = _("TENAZA"),
>>>>>>> Egg/spanish
        .height = 18,
        .weight = 1180,
        .description = gScizorPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHUCKLE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POURRI"),
    #elif ITALIAN
        .categoryName = _("MUFFA"),
    #else //ENGLISH
        .categoryName = _("MOLD"),
    #endif
=======
        .categoryName = _("MOHO"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 205,
        .description = gShucklePokedexText,
        .pokemonScale = 485,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HERACROSS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("UNICORNE"),
    #elif ITALIAN
        .categoryName = _("MONOCORNO"),
    #else //ENGLISH
        .categoryName = _("SINGLE HORN"),
    #endif
=======
        .categoryName = _("UNICORNIO"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 540,
        .description = gHeracrossPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNEASEL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GRIFACEREE"),
    #elif ITALIAN
        .categoryName = _("LAMARTIGLI"),
    #else //ENGLISH
        .categoryName = _("SHARP CLAW"),
    #endif
=======
        .categoryName = _("GARRA FILO"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 280,
        .description = gSneaselPokedexText,
        .pokemonScale = 413,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TEDDIURSA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MINI OURS"),
    #elif ITALIAN
        .categoryName = _("ORSETTO"),
    #else //ENGLISH
        .categoryName = _("LITTLE BEAR"),
    #endif
=======
        .categoryName = _("OSITO"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 88,
        .description = gTeddiursaPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_URSARING] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("HIBERNANT"),
    #elif ITALIAN
        .categoryName = _("LETARGO"),
    #else //ENGLISH
        .categoryName = _("HIBERNATOR"),
    #endif
=======
        .categoryName = _("HIBERNANTE"),
>>>>>>> Egg/spanish
        .height = 18,
        .weight = 1258,
        .description = gUrsaringPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLUGMA] =
    {
    #if FRENCH
        .categoryName = _("LAVE"),
    #elif ITALIAN
        .categoryName = _("LAVA"),
    #else //ENGLISH
        .categoryName = _("LAVA"),
    #endif
        .height = 7,
        .weight = 350,
        .description = gSlugmaPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGCARGO] =
    {
    #if FRENCH
        .categoryName = _("LAVE"),
    #elif ITALIAN
        .categoryName = _("LAVA"),
    #else //ENGLISH
        .categoryName = _("LAVA"),
    #endif
        .height = 8,
        .weight = 550,
        .description = gMagcargoPokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWINUB] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("COCHON"),
    #elif ITALIAN
        .categoryName = _("MAIALE"),
    #else //ENGLISH
        .categoryName = _("PIG"),
    #endif
=======
        .categoryName = _("CERDO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 65,
        .description = gSwinubPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PILOSWINE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PORC"),
    #elif ITALIAN
        .categoryName = _("SUINO"),
    #else //ENGLISH
        .categoryName = _("SWINE"),
    #endif
=======
        .categoryName = _("PUERCO"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 558,
        .description = gPiloswinePokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORSOLA] =
    {
    #if FRENCH
        .categoryName = _("CORAIL"),
    #elif ITALIAN
        .categoryName = _("CORALLO"),
    #else //ENGLISH
        .categoryName = _("CORAL"),
    #endif
        .height = 6,
        .weight = 50,
        .description = gCorsolaPokedexText,
        .pokemonScale = 410,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_REMORAID] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("JET"),
    #elif ITALIAN
        .categoryName = _("JET"),
    #else //ENGLISH
        .categoryName = _("JET"),
    #endif
=======
        .categoryName = _("REACTOR"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 120,
        .description = gRemoraidPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_OCTILLERY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("JET"),
    #elif ITALIAN
        .categoryName = _("JET"),
    #else //ENGLISH
        .categoryName = _("JET"),
    #endif
=======
        .categoryName = _("REACTOR"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 285,
        .description = gOctilleryPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DELIBIRD] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LIVRAISON"),
    #elif ITALIAN
        .categoryName = _("CONSEGNA"),
    #else //ENGLISH
        .categoryName = _("DELIVERY"),
    #endif
=======
        .categoryName = _("REPARTO"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 160,
        .description = gDelibirdPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANTINE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CERVOLANT"),
    #elif ITALIAN
        .categoryName = _("AQUILONE"),
    #else //ENGLISH
        .categoryName = _("KITE"),
    #endif
=======
        .categoryName = _("MILANO"),
>>>>>>> Egg/spanish
        .height = 21,
        .weight = 2200,
        .description = gMantinePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SKARMORY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ARMOISEAU"),
    #elif ITALIAN
        .categoryName = _("ARMUCCELLO"),
    #else //ENGLISH
        .categoryName = _("ARMOR BIRD"),
    #endif
=======
        .categoryName = _("CORAZA AVE"),
>>>>>>> Egg/spanish
        .height = 17,
        .weight = 505,
        .description = gSkarmoryPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_HOUNDOUR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SOMBRE"),
    #elif ITALIAN
        .categoryName = _("BUIO"),
    #else //ENGLISH
        .categoryName = _("DARK"),
    #endif
=======
        .categoryName = _("SINIESTRO"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 108,
        .description = gHoundourPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HOUNDOOM] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SOMBRE"),
    #elif ITALIAN
        .categoryName = _("BUIO"),
    #else //ENGLISH
        .categoryName = _("DARK"),
    #endif
=======
        .categoryName = _("SINIESTRO"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 350,
        .description = gHoundoomPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KINGDRA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("DRAGON"),
    #elif ITALIAN
        .categoryName = _("DRAGO"),
    #else //ENGLISH
        .categoryName = _("DRAGON"),
    #endif
=======
        .categoryName = _("DRAGÓN"),
>>>>>>> Egg/spanish
        .height = 18,
        .weight = 1520,
        .description = gKingdraPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PHANPY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LONG-NEZ"),
    #elif ITALIAN
        .categoryName = _("NASONE"),
    #else //ENGLISH
        .categoryName = _("LONG NOSE"),
    #endif
=======
        .categoryName = _("NARIZOTAS"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 335,
        .description = gPhanpyPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DONPHAN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ARMURE"),
    #elif ITALIAN
        .categoryName = _("ARMATURA"),
    #else //ENGLISH
        .categoryName = _("ARMOR"),
    #endif
=======
        .categoryName = _("CORAZA"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 1200,
        .description = gDonphanPokedexText,
        .pokemonScale = 313,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PORYGON2] =
    {
    #if FRENCH
        .categoryName = _("VIRTUEL"),
    #elif ITALIAN
        .categoryName = _("VIRTUALE"),
    #else //ENGLISH
        .categoryName = _("VIRTUAL"),
    #endif
        .height = 6,
        .weight = 325,
        .description = gPorygon2PokedexText,
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_STANTLER] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MAXI CORNE"),
    #elif ITALIAN
        .categoryName = _("GRANCORNO"),
    #else //ENGLISH
        .categoryName = _("BIG HORN"),
    #endif
=======
        .categoryName = _("GRANCUERNO"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 712,
        .description = gStantlerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMEARGLE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PEINTRE"),
    #elif ITALIAN
        .categoryName = _("PITTORE"),
    #else //ENGLISH
        .categoryName = _("PAINTER"),
    #endif
=======
        .categoryName = _("PINTOR"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 580,
        .description = gSmearglePokedexText,
        .pokemonScale = 287,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYROGUE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BAGARREUR"),
    #elif ITALIAN
        .categoryName = _("BARUFFA"),
    #else //ENGLISH
        .categoryName = _("SCUFFLE"),
    #endif
=======
        .categoryName = _("PELEÓN"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 210,
        .description = gTyroguePokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HITMONTOP] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POIRIER"),
    #elif ITALIAN
        .categoryName = _("VERTICALE"),
    #else //ENGLISH
        .categoryName = _("HANDSTAND"),
    #endif
=======
        .categoryName = _("BOCA ABAJO"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 480,
        .description = gHitmontopPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SMOOCHUM] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BISOU"),
    #elif ITALIAN
        .categoryName = _("BACIO"),
    #else //ENGLISH
        .categoryName = _("KISS"),
    #endif
=======
        .categoryName = _("BESO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 60,
        .description = gSmoochumPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELEKID] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ELECTRIQUE"),
    #elif ITALIAN
        .categoryName = _("ELETTRICO"),
    #else //ENGLISH
        .categoryName = _("ELECTRIC"),
    #endif
=======
        .categoryName = _("ELÉCTRICO"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 235,
        .description = gElekidPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAGBY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHARBON"),
    #elif ITALIAN
        .categoryName = _("CARBONVIVO"),
    #else //ENGLISH
        .categoryName = _("LIVE COAL"),
    #endif
=======
        .categoryName = _("ASCUAS"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 214,
        .description = gMagbyPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MILTANK] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VACHALAIT"),
    #elif ITALIAN
        .categoryName = _("BOVINO"),
    #else //ENGLISH
        .categoryName = _("MILK COW"),
    #endif
=======
        .categoryName = _("LECHERA"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 755,
        .description = gMiltankPokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLISSEY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BONHEUR"),
    #elif ITALIAN
        .categoryName = _("FELICITÀ"),
    #else //ENGLISH
        .categoryName = _("HAPPINESS"),
    #endif
=======
        .categoryName = _("FELICIDAD"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 468,
        .description = gBlisseyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_RAIKOU] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FOUDRE"),
    #elif ITALIAN
        .categoryName = _("TUONO"),
    #else //ENGLISH
        .categoryName = _("THUNDER"),
    #endif
=======
        .categoryName = _("TRUENO"),
>>>>>>> Egg/spanish
        .height = 19,
        .weight = 1780,
        .description = gRaikouPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_ENTEI] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VOLCAN"),
    #elif ITALIAN
        .categoryName = _("VULCANO"),
    #else //ENGLISH
        .categoryName = _("VOLCANO"),
    #endif
=======
        .categoryName = _("VOLCÁN"),
>>>>>>> Egg/spanish
        .height = 21,
        .weight = 1980,
        .description = gEnteiPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_SUICUNE] =
    {
    #if FRENCH
        .categoryName = _("AURORE"),
    #elif ITALIAN
        .categoryName = _("AURORA"),
    #else //ENGLISH
        .categoryName = _("AURORA"),
    #endif
        .height = 20,
        .weight = 1870,
        .description = gSuicunePokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LARVITAR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PEAUPIERRE"),
    #elif ITALIAN
        .categoryName = _("PELDISASSO"),
    #else //ENGLISH
        .categoryName = _("ROCK SKIN"),
    #endif
=======
        .categoryName = _("PIEL ROCA"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 720,
        .description = gLarvitarPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PUPITAR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CARAPADURE"),
    #elif ITALIAN
        .categoryName = _("GUSCIODURO"),
    #else //ENGLISH
        .categoryName = _("HARD SHELL"),
    #endif
=======
        .categoryName = _("CAPARAZÓN"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 1520,
        .description = gPupitarPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TYRANITAR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ARMURE"),
    #elif ITALIAN
        .categoryName = _("ARMATURA"),
    #else //ENGLISH
        .categoryName = _("ARMOR"),
    #endif
=======
        .categoryName = _("CORAZA"),
>>>>>>> Egg/spanish
        .height = 20,
        .weight = 2020,
        .description = gTyranitarPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_LUGIA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PLONGEON"),
    #elif ITALIAN
        .categoryName = _("IMMERSIONE"),
    #else //ENGLISH
        .categoryName = _("DIVING"),
    #endif
=======
        .categoryName = _("BUCEO"),
>>>>>>> Egg/spanish
        .height = 52,
        .weight = 2160,
        .description = gLugiaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
    },

    [NATIONAL_DEX_HO_OH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ARCENCIEL"),
    #elif ITALIAN
        .categoryName = _("ARCOBALENO"),
    #else //ENGLISH
        .categoryName = _("RAINBOW"),
    #endif
=======
        .categoryName = _("ARCO IRIS"),
>>>>>>> Egg/spanish
        .height = 38,
        .weight = 1990,
        .description = gHoOhPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
    },

    [NATIONAL_DEX_CELEBI] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TEMPOREL"),
    #elif ITALIAN
        .categoryName = _("TEMPOVIA"),
    #else //ENGLISH
        .categoryName = _("TIME TRAVEL"),
    #endif
=======
        .categoryName = _("VIAJETIEMPO"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 50,
        .description = gCelebiPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = -10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TREECKO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BOIS GECKO"),
    #elif ITALIAN
        .categoryName = _("LEGNOGECO"),
    #else //ENGLISH
        .categoryName = _("WOOD GECKO"),
    #endif
=======
        .categoryName = _("GECO BOSQUE"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 50,
        .description = gTreeckoPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GROVYLE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BOIS GECKO"),
    #elif ITALIAN
        .categoryName = _("LEGNOGECO"),
    #else //ENGLISH
        .categoryName = _("WOOD GECKO"),
    #endif
=======
        .categoryName = _("GECO BOSQUE"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 216,
        .description = gGrovylePokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCEPTILE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FORET"),
    #elif ITALIAN
        .categoryName = _("FORESTA"),
    #else //ENGLISH
        .categoryName = _("FOREST"),
    #endif
=======
        .categoryName = _("MONTE"),
>>>>>>> Egg/spanish
        .height = 17,
        .weight = 522,
        .description = gSceptilePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 275,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TORCHIC] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POUSSIN"),
    #elif ITALIAN
        .categoryName = _("PULCINO"),
    #else //ENGLISH
        .categoryName = _("CHICK"),
    #endif
=======
        .categoryName = _("POLLUELO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 25,
        .description = gTorchicPokedexText,
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_COMBUSKEN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POULET"),
    #elif ITALIAN
        .categoryName = _("RAMPOLLO"),
    #else //ENGLISH
        .categoryName = _("YOUNG FOWL"),
    #endif
=======
        .categoryName = _("AVE CORRAL"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 195,
        .description = gCombuskenPokedexText,
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BLAZIKEN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ARDENT"),
    #elif ITALIAN
        .categoryName = _("VAMPE"),
    #else //ENGLISH
        .categoryName = _("BLAZE"),
    #endif
=======
        .categoryName = _("LLAMEANTE"),
>>>>>>> Egg/spanish
        .height = 19,
        .weight = 520,
        .description = gBlazikenPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 4,
    },

    [NATIONAL_DEX_MUDKIP] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POISSONBOUE"),
    #elif ITALIAN
        .categoryName = _("FANGO PESCE"),
    #else //ENGLISH
        .categoryName = _("MUD FISH"),
    #endif
=======
        .categoryName = _("PEZ LODO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 76,
        .description = gMudkipPokedexText,
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MARSHTOMP] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POISSONBOUE"),
    #elif ITALIAN
        .categoryName = _("FANGO PESCE"),
    #else //ENGLISH
        .categoryName = _("MUD FISH"),
    #endif
=======
        .categoryName = _("PEZ LODO"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 280,
        .description = gMarshtompPokedexText,
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWAMPERT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POISSONBOUE"),
    #elif ITALIAN
        .categoryName = _("FANGO PESCE"),
    #else //ENGLISH
        .categoryName = _("MUD FISH"),
    #endif
=======
        .categoryName = _("PEZ LODO"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 819,
        .description = gSwampertPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_POOCHYENA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MORSURE"),
    #elif ITALIAN
        .categoryName = _("MORSO"),
    #else //ENGLISH
        .categoryName = _("BITE"),
    #endif
=======
        .categoryName = _("MORDISCO"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 136,
        .description = gPoochyenaPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MIGHTYENA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MORSURE"),
    #elif ITALIAN
        .categoryName = _("MORSO"),
    #else //ENGLISH
        .categoryName = _("BITE"),
    #endif
=======
        .categoryName = _("MORDISCO"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 370,
        .description = gMightyenaPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZIGZAGOON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PETIT RATON"),
    #elif ITALIAN
        .categoryName = _("PROCIONE"),
    #else //ENGLISH
        .categoryName = _("TINYRACCOON"),
    #endif
=======
        .categoryName = _("MAPACHITO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 175,
        .description = gZigzagoonPokedexText,
        .pokemonScale = 560,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LINOONE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FONCEUR"),
    #elif ITALIAN
        .categoryName = _("SFRECCIANTE"),
    #else //ENGLISH
        .categoryName = _("RUSHING"),
    #endif
=======
        .categoryName = _("LANZADO"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 325,
        .description = gLinoonePokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WURMPLE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VER"),
    #elif ITALIAN
        .categoryName = _("BACO"),
    #else //ENGLISH
        .categoryName = _("WORM"),
    #endif
=======
        .categoryName = _("GUSANO"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 36,
        .description = gWurmplePokedexText,
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SILCOON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("COCON"),
    #elif ITALIAN
        .categoryName = _("BOZZOLO"),
    #else //ENGLISH
        .categoryName = _("COCOON"),
    #endif
=======
        .categoryName = _("CAPULLO"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 100,
        .description = gSilcoonPokedexText,
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BEAUTIFLY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PAPILLON"),
    #elif ITALIAN
        .categoryName = _("FARFALLA"),
    #else //ENGLISH
        .categoryName = _("BUTTERFLY"),
    #endif
=======
        .categoryName = _("MARIPOSA"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 284,
        .description = gBeautiflyPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CASCOON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("COCON"),
    #elif ITALIAN
        .categoryName = _("BOZZOLO"),
    #else //ENGLISH
        .categoryName = _("COCOON"),
    #endif
=======
        .categoryName = _("CAPULLO"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 115,
        .description = gCascoonPokedexText,
        .pokemonScale = 391,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSTOX] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PAPIPOISON"),
    #elif ITALIAN
        .categoryName = _("VELENTARMA"),
    #else //ENGLISH
        .categoryName = _("POISON MOTH"),
    #endif
=======
        .categoryName = _("POLILLA V."),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 316,
        .description = gDustoxPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOTAD] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("AQUAPLANTE"),
    #elif ITALIAN
        .categoryName = _("ALGA"),
    #else //ENGLISH
        .categoryName = _("WATER WEED"),
    #endif
=======
        .categoryName = _("ALGA"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 26,
        .description = gLotadPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOMBRE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("JOVIAL"),
    #elif ITALIAN
        .categoryName = _("GIOCOSO"),
    #else //ENGLISH
        .categoryName = _("JOLLY"),
    #endif
=======
        .categoryName = _("ALEGRE"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 325,
        .description = gLombrePokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUDICOLO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("INSOUCIANT"),
    #elif ITALIAN
        .categoryName = _("SPENSIERATO"),
    #else //ENGLISH
        .categoryName = _("CAREFREE"),
    #endif
=======
        .categoryName = _("OPTIMISTA"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 550,
        .description = gLudicoloPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = -1,
    },

    [NATIONAL_DEX_SEEDOT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GLAND"),
    #elif ITALIAN
        .categoryName = _("GHIANDA"),
    #else //ENGLISH
        .categoryName = _("ACORN"),
    #endif
=======
        .categoryName = _("BELLOTA"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 40,
        .description = gSeedotPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NUZLEAF] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MALIN"),
    #elif ITALIAN
        .categoryName = _("SCALTRO"),
    #else //ENGLISH
        .categoryName = _("WILY"),
    #endif
=======
        .categoryName = _("ASTUTO"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 280,
        .description = gNuzleafPokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHIFTRY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MALVEILLANT"),
    #elif ITALIAN
        .categoryName = _("BURBERO"),
    #else //ENGLISH
        .categoryName = _("WICKED"),
    #endif
=======
        .categoryName = _("MALVADO"),
>>>>>>> Egg/spanish
        .height = 13,
        .weight = 596,
        .description = gShiftryPokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TAILLOW] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MINIRONDEL"),
    #elif ITALIAN
        .categoryName = _("RONDINELLA"),
    #else //ENGLISH
        .categoryName = _("TINYSWALLOW"),
    #endif
=======
        .categoryName = _("PEQUEBUCHE"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 23,
        .description = gTaillowPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWELLOW] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("HIRONDELLE"),
    #elif ITALIAN
        .categoryName = _("RONDINE"),
    #else //ENGLISH
        .categoryName = _("SWALLOW"),
    #endif
=======
        .categoryName = _("BUCHE"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 198,
        .description = gSwellowPokedexText,
        .pokemonScale = 428,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WINGULL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MOUETTE"),
    #elif ITALIAN
        .categoryName = _("GABBIANO"),
    #else //ENGLISH
        .categoryName = _("SEAGULL"),
    #endif
=======
        .categoryName = _("GAVIOTA"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 95,
        .description = gWingullPokedexText,
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PELIPPER] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("OISEAUDO"),
    #elif ITALIAN
        .categoryName = _("ALACQUATICO"),
    #else //ENGLISH
        .categoryName = _("WATER BIRD"),
    #endif
=======
        .categoryName = _("AVE AGUA"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 280,
        .description = gPelipperPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RALTS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SENTIMENT"),
    #elif ITALIAN
        .categoryName = _("SENSAZIONE"),
    #else //ENGLISH
        .categoryName = _("FEELING"),
    #endif
=======
        .categoryName = _("SENSIBLE"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 66,
        .description = gRaltsPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KIRLIA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("EMOTION"),
    #elif ITALIAN
        .categoryName = _("EMOZIONE"),
    #else //ENGLISH
        .categoryName = _("EMOTION"),
    #endif
=======
        .categoryName = _("SENSORIO"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 202,
        .description = gKirliaPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GARDEVOIR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ETREINTE"),
    #elif ITALIAN
        .categoryName = _("ABBRACCIO"),
    #else //ENGLISH
        .categoryName = _("EMBRACE"),
    #endif
=======
        .categoryName = _("ENVOLVENTE"),
>>>>>>> Egg/spanish
        .height = 16,
        .weight = 484,
        .description = gGardevoirPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SURSKIT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MARESURFEUR"),
    #elif ITALIAN
        .categoryName = _("SFIORAPOZZE"),
    #else //ENGLISH
        .categoryName = _("POND SKATER"),
    #endif
=======
        .categoryName = _("ZAPATERO"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 17,
        .description = gSurskitPokedexText,
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MASQUERAIN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BOULE OEIL"),
    #elif ITALIAN
        .categoryName = _("OCCHI"),
    #else //ENGLISH
        .categoryName = _("EYEBALL"),
    #endif
=======
        .categoryName = _("GLOBOCULAR"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 36,
        .description = gMasquerainPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHROOMISH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHAMPIGNON"),
    #elif ITALIAN
        .categoryName = _("FUNGO"),
    #else //ENGLISH
        .categoryName = _("MUSHROOM"),
    #endif
=======
        .categoryName = _("HONGO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 45,
        .description = gShroomishPokedexText,
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BRELOOM] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHAMPIGNON"),
    #elif ITALIAN
        .categoryName = _("FUNGO"),
    #else //ENGLISH
        .categoryName = _("MUSHROOM"),
    #endif
=======
        .categoryName = _("HONGO"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 392,
        .description = gBreloomPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLAKOTH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FLANEUR"),
    #elif ITALIAN
        .categoryName = _("OZIOSO"),
    #else //ENGLISH
        .categoryName = _("SLACKER"),
    #endif
=======
        .categoryName = _("GANDUL"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 240,
        .description = gSlakothPokedexText,
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIGOROTH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TURBUSINGE"),
    #elif ITALIAN
        .categoryName = _("INDOCILE"),
    #else //ENGLISH
        .categoryName = _("WILD MONKEY"),
    #endif
=======
        .categoryName = _("MONO FEROZ"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 465,
        .description = gVigorothPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SLAKING] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FAINEANT"),
    #elif ITALIAN
        .categoryName = _("PIGRIZIA"),
    #else //ENGLISH
        .categoryName = _("LAZY"),
    #endif
=======
        .categoryName = _("HOLGAZÁN"),
>>>>>>> Egg/spanish
        .height = 20,
        .weight = 1305,
        .description = gSlakingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_NINCADA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("APPRENTI"),
    #elif ITALIAN
        .categoryName = _("NOVIZIO"),
    #else //ENGLISH
        .categoryName = _("TRAINEE"),
    #endif
=======
        .categoryName = _("APRENDIZ"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 55,
        .description = gNincadaPokedexText,
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NINJASK] =
    {
    #if FRENCH
        .categoryName = _("NINJA"),
    #elif ITALIAN
        .categoryName = _("NINJA"),
    #else //ENGLISH
        .categoryName = _("NINJA"),
    #endif
        .height = 8,
        .weight = 120,
        .description = gNinjaskPokedexText,
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHEDINJA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("EXUVIE"),
    #elif ITALIAN
        .categoryName = _("CAMBIAPELLE"),
    #else //ENGLISH
        .categoryName = _("SHED"),
    #endif
=======
        .categoryName = _("MUDA"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 12,
        .description = gShedinjaPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHISMUR] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHUCHOTEUR"),
    #elif ITALIAN
        .categoryName = _("SUSSURRO"),
    #else //ENGLISH
        .categoryName = _("WHISPER"),
    #endif
=======
        .categoryName = _("SUSURRO"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 163,
        .description = gWhismurPokedexText,
        .pokemonScale = 373,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LOUDRED] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GROSSE VOIX"),
    #elif ITALIAN
        .categoryName = _("VOCIONE"),
    #else //ENGLISH
        .categoryName = _("BIG VOICE"),
    #endif
=======
        .categoryName = _("CHILLÓN"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 405,
        .description = gLoudredPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_EXPLOUD] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BRUIT SOURD"),
    #elif ITALIAN
        .categoryName = _("FRAGORE"),
    #else //ENGLISH
        .categoryName = _("LOUD NOISE"),
    #endif
=======
        .categoryName = _("ESCANDALOSO"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 840,
        .description = gExploudPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAKUHITA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TENACE"),
    #elif ITALIAN
        .categoryName = _("CORAGGIO"),
    #else //ENGLISH
        .categoryName = _("GUTS"),
    #endif
=======
        .categoryName = _("VALIENTE"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 864,
        .description = gMakuhitaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HARIYAMA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("COGNEUR"),
    #elif ITALIAN
        .categoryName = _("SBERLETESE"),
    #else //ENGLISH
        .categoryName = _("ARM THRUST"),
    #endif
=======
        .categoryName = _("EMPUJE"),
>>>>>>> Egg/spanish
        .height = 23,
        .weight = 2538,
        .description = gHariyamaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 343,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_AZURILL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POINT POLKA"),
    #elif ITALIAN
        .categoryName = _("POIS"),
    #else //ENGLISH
        .categoryName = _("POLKA DOT"),
    #endif
=======
        .categoryName = _("A TOPOS"),
>>>>>>> Egg/spanish
        .height = 2,
        .weight = 20,
        .description = gAzurillPokedexText,
        .pokemonScale = 603,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_NOSEPASS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BOUSSOLE"),
    #elif ITALIAN
        .categoryName = _("BUSSOLA"),
    #else //ENGLISH
        .categoryName = _("COMPASS"),
    #endif
=======
        .categoryName = _("BRÚJULA"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 970,
        .description = gNosepassPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_SKITTY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHATON"),
    #elif ITALIAN
        .categoryName = _("MICIO"),
    #else //ENGLISH
        .categoryName = _("KITTEN"),
    #endif
=======
        .categoryName = _("GATITO"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 110,
        .description = gSkittyPokedexText,
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DELCATTY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("GUINDE"),
    #elif ITALIAN
        .categoryName = _("FINEZZA"),
    #else //ENGLISH
        .categoryName = _("PRIM"),
    #endif
=======
        .categoryName = _("CURSI"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 326,
        .description = gDelcattyPokedexText,
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SABLEYE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("OBSCURITE"),
    #elif ITALIAN
        .categoryName = _("OSCURITÀ"),
    #else //ENGLISH
        .categoryName = _("DARKNESS"),
    #endif
=======
        .categoryName = _("OSCURIDAD"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 110,
        .description = gSableyePokedexText,
        .pokemonScale = 451,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MAWILE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TROMPEUR"),
    #elif ITALIAN
        .categoryName = _("INGANNO"),
    #else //ENGLISH
        .categoryName = _("DECEIVER"),
    #endif
=======
        .categoryName = _("TRAMPOSO"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 115,
        .description = gMawilePokedexText,
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ARMURFER"),
    #elif ITALIAN
        .categoryName = _("CORAZZA"),
    #else //ENGLISH
        .categoryName = _("IRON ARMOR"),
    #endif
=======
        .categoryName = _("COR. FÉRREA"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 600,
        .description = gAronPokedexText,
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LAIRON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ARMURFER"),
    #elif ITALIAN
        .categoryName = _("CORAZZA"),
    #else //ENGLISH
        .categoryName = _("IRON ARMOR"),
    #endif
=======
        .categoryName = _("COR. FÉRREA"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 1200,
        .description = gLaironPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_AGGRON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ARMURFER"),
    #elif ITALIAN
        .categoryName = _("CORAZZA"),
    #else //ENGLISH
        .categoryName = _("IRON ARMOR"),
    #endif
=======
        .categoryName = _("COR. FÉRREA"),
>>>>>>> Egg/spanish
        .height = 21,
        .weight = 3600,
        .description = gAggronPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_MEDITITE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MEDITATION"),
    #elif ITALIAN
        .categoryName = _("MEDITAZIONE"),
    #else //ENGLISH
        .categoryName = _("MEDITATE"),
    #endif
=======
        .categoryName = _("MEDITADOR"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 112,
        .description = gMedititePokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MEDICHAM] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MEDITATION"),
    #elif ITALIAN
        .categoryName = _("MEDITAZIONE"),
    #else //ENGLISH
        .categoryName = _("MEDITATE"),
    #endif
=======
        .categoryName = _("MEDITADOR"),
>>>>>>> Egg/spanish
        .height = 13,
        .weight = 315,
        .description = gMedichamPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ELECTRIKE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ORAGE"),
    #elif ITALIAN
        .categoryName = _("LAMPO"),
    #else //ENGLISH
        .categoryName = _("LIGHTNING"),
    #endif
=======
        .categoryName = _("CALAMBRE"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 152,
        .description = gElectrikePokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MANECTRIC] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("DECHARGE"),
    #elif ITALIAN
        .categoryName = _("SCOSSA"),
    #else //ENGLISH
        .categoryName = _("DISCHARGE"),
    #endif
=======
        .categoryName = _("DESCARGA"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 402,
        .description = gManectricPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_PLUSLE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ACCLAMEUR"),
    #elif ITALIAN
        .categoryName = _("INCITAMENTO"),
    #else //ENGLISH
        .categoryName = _("CHEERING"),
    #endif
=======
        .categoryName = _("ÁNIMO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 42,
        .description = gPluslePokedexText,
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MINUN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ACCLAMEUR"),
    #elif ITALIAN
        .categoryName = _("INCITAMENTO"),
    #else //ENGLISH
        .categoryName = _("CHEERING"),
    #endif
=======
        .categoryName = _("ÁNIMO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 42,
        .description = gMinunPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VOLBEAT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LUCIOLE"),
    #elif ITALIAN
        .categoryName = _("LUCCIOLA"),
    #else //ENGLISH
        .categoryName = _("FIREFLY"),
    #endif
=======
        .categoryName = _("LUCIÉRNAGA"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 177,
        .description = gVolbeatPokedexText,
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ILLUMISE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LUCIOLE"),
    #elif ITALIAN
        .categoryName = _("LUCCIOLA"),
    #else //ENGLISH
        .categoryName = _("FIREFLY"),
    #endif
=======
        .categoryName = _("LUCIÉRNAGA"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 177,
        .description = gIllumisePokedexText,
        .pokemonScale = 572,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ROSELIA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("EPINE"),
    #elif ITALIAN
        .categoryName = _("SPINA"),
    #else //ENGLISH
        .categoryName = _("THORN"),
    #endif
=======
        .categoryName = _("ESPINA"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 20,
        .description = gRoseliaPokedexText,
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GULPIN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ESTOMAC"),
    #elif ITALIAN
        .categoryName = _("STOMACO"),
    #else //ENGLISH
        .categoryName = _("STOMACH"),
    #endif
=======
        .categoryName = _("ESTÓMAGO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 103,
        .description = gGulpinPokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWALOT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SAC POISON"),
    #elif ITALIAN
        .categoryName = _("VELENOSACCO"),
    #else //ENGLISH
        .categoryName = _("POISON BAG"),
    #endif
=======
        .categoryName = _("BOLSA VEN."),
>>>>>>> Egg/spanish
        .height = 17,
        .weight = 800,
        .description = gSwalotPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_CARVANHA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FEROCE"),
    #elif ITALIAN
        .categoryName = _("FEROCE"),
    #else //ENGLISH
        .categoryName = _("SAVAGE"),
    #endif
=======
        .categoryName = _("FEROZ"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 208,
        .description = gCarvanhaPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHARPEDO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BRUTAL"),
    #elif ITALIAN
        .categoryName = _("BRUTALE"),
    #else //ENGLISH
        .categoryName = _("BRUTAL"),
    #endif
=======
        .categoryName = _("VORAZ"),
>>>>>>> Egg/spanish
        .height = 18,
        .weight = 888,
        .description = gSharpedoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_WAILMER] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BALEINBOULE"),
    #elif ITALIAN
        .categoryName = _("BALENOTTERO"),
    #else //ENGLISH
        .categoryName = _("BALL WHALE"),
    #endif
=======
        .categoryName = _("BALLENABOLA"),
>>>>>>> Egg/spanish
        .height = 20,
        .weight = 1300,
        .description = gWailmerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WAILORD] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CACHABOUEE"),
    #elif ITALIAN
        .categoryName = _("MEGABALENA"),
    #else //ENGLISH
        .categoryName = _("FLOAT WHALE"),
    #endif
=======
        .categoryName = _("BALLENAFLOT"),
>>>>>>> Egg/spanish
        .height = 145,
        .weight = 3980,
        .description = gWailordPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
    },

    [NATIONAL_DEX_NUMEL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ENGOURDI"),
    #elif ITALIAN
        .categoryName = _("TORPORE"),
    #else //ENGLISH
        .categoryName = _("NUMB"),
    #endif
=======
        .categoryName = _("TORPE"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 240,
        .description = gNumelPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CAMERUPT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ERUPTION"),
    #elif ITALIAN
        .categoryName = _("ERUZIONE"),
    #else //ENGLISH
        .categoryName = _("ERUPTION"),
    #endif
=======
        .categoryName = _("ERUPCIÓN"),
>>>>>>> Egg/spanish
        .height = 19,
        .weight = 2200,
        .description = gCameruptPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 7,
        .trainerScale = 345,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_TORKOAL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHARBON"),
    #elif ITALIAN
        .categoryName = _("CARBONE"),
    #else //ENGLISH
        .categoryName = _("COAL"),
    #endif
=======
        .categoryName = _("CARBÓN"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 804,
        .description = gTorkoalPokedexText,
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPOINK] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("REBOND"),
    #elif ITALIAN
        .categoryName = _("MOLLA"),
    #else //ENGLISH
        .categoryName = _("BOUNCE"),
    #endif
=======
        .categoryName = _("SALTARÍN"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 306,
        .description = gSpoinkPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GRUMPIG] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MAGOUILLEUR"),
    #elif ITALIAN
        .categoryName = _("RAGGIRO"),
    #else //ENGLISH
        .categoryName = _("MANIPULATE"),
    #endif
=======
        .categoryName = _("MANIPULADOR"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 715,
        .description = gGrumpigPokedexText,
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPINDA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PANDA TACHE"),
    #elif ITALIAN
        .categoryName = _("MACCHIPANDA"),
    #else //ENGLISH
        .categoryName = _("SPOT PANDA"),
    #endif
=======
        .categoryName = _("PANDA TOPOS"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 50,
        .description = gSpindaPokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_TRAPINCH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PIEGEUR"),
    #elif ITALIAN
        .categoryName = _("TRAPPOLA"),
    #else //ENGLISH
        .categoryName = _("ANT PIT"),
    #endif
=======
        .categoryName = _("HORMIGALEÓN"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 150,
        .description = gTrapinchPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_VIBRAVA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VIBRATION"),
    #elif ITALIAN
        .categoryName = _("VIBRAZIONE"),
    #else //ENGLISH
        .categoryName = _("VIBRATION"),
    #endif
=======
        .categoryName = _("VIBRANTE"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 153,
        .description = gVibravaPokedexText,
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FLYGON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MYSTIQUE"),
    #elif ITALIAN
        .categoryName = _("MAGICO"),
    #else //ENGLISH
        .categoryName = _("MYSTIC"),
    #endif
=======
        .categoryName = _("MÍSTICO"),
>>>>>>> Egg/spanish
        .height = 20,
        .weight = 820,
        .description = gFlygonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_CACNEA] =
    {
    #if FRENCH
        .categoryName = _("CACTUS"),
    #elif ITALIAN
        .categoryName = _("CACTUS"),
    #else //ENGLISH
        .categoryName = _("CACTUS"),
    #endif
        .height = 4,
        .weight = 513,
        .description = gCacneaPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CACTURNE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("EPOUVANTAIL"),
    #elif ITALIAN
        .categoryName = _("SPAVENTO"),
    #else //ENGLISH
        .categoryName = _("SCARECROW"),
    #endif
=======
        .categoryName = _("ESPANTAJO"),
>>>>>>> Egg/spanish
        .height = 13,
        .weight = 774,
        .description = gCacturnePokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SWABLU] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("OISEAUCOTON"),
    #elif ITALIAN
        .categoryName = _("ALIDICOTONE"),
    #else //ENGLISH
        .categoryName = _("COTTON BIRD"),
    #endif
=======
        .categoryName = _("AVE ALGODÓN"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 12,
        .description = gSwabluPokedexText,
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ALTARIA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("VIREVOLTEUR"),
    #elif ITALIAN
        .categoryName = _("CANTERINO"),
    #else //ENGLISH
        .categoryName = _("HUMMING"),
    #endif
=======
        .categoryName = _("CANTOR"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 206,
        .description = gAltariaPokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ZANGOOSE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CHAT FURET"),
    #elif ITALIAN
        .categoryName = _("FUROGATTO"),
    #else //ENGLISH
        .categoryName = _("CAT FERRET"),
    #endif
=======
        .categoryName = _("GATO HURÓN"),
>>>>>>> Egg/spanish
        .height = 13,
        .weight = 403,
        .description = gZangoosePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEVIPER] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SERPACROC"),
    #elif ITALIAN
        .categoryName = _("ZANNASERPE"),
    #else //ENGLISH
        .categoryName = _("FANG SNAKE"),
    #endif
=======
        .categoryName = _("COLMILLOS"),
>>>>>>> Egg/spanish
        .height = 27,
        .weight = 525,
        .description = gSeviperPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUNATONE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("METEORITE"),
    #elif ITALIAN
        .categoryName = _("METEORITE"),
    #else //ENGLISH
        .categoryName = _("METEORITE"),
    #endif
=======
        .categoryName = _("METEORITO"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 1680,
        .description = gLunatonePokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SOLROCK] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("METEORITE"),
    #elif ITALIAN
        .categoryName = _("METEORITE"),
    #else //ENGLISH
        .categoryName = _("METEORITE"),
    #endif
=======
        .categoryName = _("METEORITO"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 1540,
        .description = gSolrockPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BARBOACH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BARBILLON"),
    #elif ITALIAN
        .categoryName = _("BAFFETTI"),
    #else //ENGLISH
        .categoryName = _("WHISKERS"),
    #endif
=======
        .categoryName = _("BIGOTUDO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 19,
        .description = gBarboachPokedexText,
        .pokemonScale = 581,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WHISCASH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BARBILLON"),
    #elif ITALIAN
        .categoryName = _("BAFFETTI"),
    #else //ENGLISH
        .categoryName = _("WHISKERS"),
    #endif
=======
        .categoryName = _("BIGOTUDO"),
>>>>>>> Egg/spanish
        .height = 9,
        .weight = 236,
        .description = gWhiscashPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CORPHISH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BRUTE"),
    #elif ITALIAN
        .categoryName = _("BIRBONE"),
    #else //ENGLISH
        .categoryName = _("RUFFIAN"),
    #endif
=======
        .categoryName = _("RUFIÁN"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 115,
        .description = gCorphishPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRAWDAUNT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CRAPULE"),
    #elif ITALIAN
        .categoryName = _("CANAGLIA"),
    #else //ENGLISH
        .categoryName = _("ROGUE"),
    #endif
=======
        .categoryName = _("GRANUJA"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 328,
        .description = gCrawdauntPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BALTOY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POUPARGILE"),
    #elif ITALIAN
        .categoryName = _("ARGILLA"),
    #else //ENGLISH
        .categoryName = _("CLAY DOLL"),
    #endif
=======
        .categoryName = _("MUÑ. BARRO"),
>>>>>>> Egg/spanish
        .height = 5,
        .weight = 215,
        .description = gBaltoyPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAYDOL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POUPARGILE"),
    #elif ITALIAN
        .categoryName = _("ARGILLA"),
    #else //ENGLISH
        .categoryName = _("CLAY DOLL"),
    #endif
=======
        .categoryName = _("MUÑ. BARRO"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 1080,
        .description = gClaydolPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_LILEEP] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LIS D'EAU"),
    #elif ITALIAN
        .categoryName = _("FIORDIMARE"),
    #else //ENGLISH
        .categoryName = _("SEA LILY"),
    #endif
=======
        .categoryName = _("LILA MAR"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 238,
        .description = gLileepPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CRADILY] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BERNACLE"),
    #elif ITALIAN
        .categoryName = _("LEPADE"),
    #else //ENGLISH
        .categoryName = _("BARNACLE"),
    #endif
=======
        .categoryName = _("PERCEBE"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 604,
        .description = gCradilyPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ANORITH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CRUSTAGE"),
    #elif ITALIAN
        .categoryName = _("PRIMACEO"),
    #else //ENGLISH
        .categoryName = _("OLD SHRIMP"),
    #endif
=======
        .categoryName = _("CAMARÓN"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 125,
        .description = gAnorithPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ARMALDO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BLINDAGE"),
    #elif ITALIAN
        .categoryName = _("PIASTRE"),
    #else //ENGLISH
        .categoryName = _("PLATE"),
    #endif
=======
        .categoryName = _("ARMADURA"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 682,
        .description = gArmaldoPokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_FEEBAS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POISSON"),
    #elif ITALIAN
        .categoryName = _("PESCE"),
    #else //ENGLISH
        .categoryName = _("FISH"),
    #endif
=======
        .categoryName = _("PEZ"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 74,
        .description = gFeebasPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_MILOTIC] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TENDRE"),
    #elif ITALIAN
        .categoryName = _("TENEREZZA"),
    #else //ENGLISH
        .categoryName = _("TENDER"),
    #endif
=======
        .categoryName = _("TIERNO"),
>>>>>>> Egg/spanish
        .height = 62,
        .weight = 1620,
        .description = gMiloticPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_CASTFORM] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CLIMAT"),
    #elif ITALIAN
        .categoryName = _("METEO"),
    #else //ENGLISH
        .categoryName = _("WEATHER"),
    #endif
=======
        .categoryName = _("CLIMA"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 8,
        .description = gCastformPokedexText,
        .pokemonScale = 435,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_KECLEON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MULTICOLOR"),
    #elif ITALIAN
        .categoryName = _("MUTACOLORE"),
    #else //ENGLISH
        .categoryName = _("COLOR SWAP"),
    #endif
=======
        .categoryName = _("CAMALEÓNICO"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 220,
        .description = gKecleonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHUPPET] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("POUPEE"),
    #elif ITALIAN
        .categoryName = _("PUPAZZO"),
    #else //ENGLISH
        .categoryName = _("PUPPET"),
    #endif
=======
        .categoryName = _("TÍTERE"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 23,
        .description = gShuppetPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BANETTE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MARIONETTE"),
    #elif ITALIAN
        .categoryName = _("MARIONETTA"),
    #else //ENGLISH
        .categoryName = _("MARIONETTE"),
    #endif
=======
        .categoryName = _("MARIONETA"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 125,
        .description = gBanettePokedexText,
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSKULL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("REQUIEM"),
    #elif ITALIAN
        .categoryName = _("REQUIEM"),
    #else //ENGLISH
        .categoryName = _("REQUIEM"),
    #endif
=======
        .categoryName = _("RÉQUIEM"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 150,
        .description = gDuskullPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DUSCLOPS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("APPEL"),
    #elif ITALIAN
        .categoryName = _("IPNOSGUARDO"),
    #else //ENGLISH
        .categoryName = _("BECKON"),
    #endif
=======
        .categoryName = _("ATRAYENTE"),
>>>>>>> Egg/spanish
        .height = 16,
        .weight = 306,
        .description = gDusclopsPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 299,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_TROPIUS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FRUIT"),
    #elif ITALIAN
        .categoryName = _("FRUTTO"),
    #else //ENGLISH
        .categoryName = _("FRUIT"),
    #endif
=======
        .categoryName = _("FRUTO"),
>>>>>>> Egg/spanish
        .height = 20,
        .weight = 1000,
        .description = gTropiusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 344,
        .trainerOffset = 7,
    },

    [NATIONAL_DEX_CHIMECHO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CARILLON"),
    #elif ITALIAN
        .categoryName = _("VENCAMPANA"),
    #else //ENGLISH
        .categoryName = _("WIND CHIME"),
    #endif
=======
        .categoryName = _("SONIDO AIRE"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 10,
        .description = gChimechoPokedexText,
        .pokemonScale = 505,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_ABSOL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("DESASTRE"),
    #elif ITALIAN
        .categoryName = _("CATASTROFE"),
    #else //ENGLISH
        .categoryName = _("DISASTER"),
    #endif
=======
        .categoryName = _("CATÁSTROFE"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 470,
        .description = gAbsolPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WYNAUT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("RAVI"),
    #elif ITALIAN
        .categoryName = _("BRILLANTE"),
    #else //ENGLISH
        .categoryName = _("BRIGHT"),
    #endif
=======
        .categoryName = _("RADIANTE"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 140,
        .description = gWynautPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SNORUNT] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CAPUCHE"),
    #elif ITALIAN
        .categoryName = _("CAPPELNEVE"),
    #else //ENGLISH
        .categoryName = _("SNOW HAT"),
    #endif
=======
        .categoryName = _("GORRO NIEVE"),
>>>>>>> Egg/spanish
        .height = 7,
        .weight = 168,
        .description = gSnoruntPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GLALIE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FACE"),
    #elif ITALIAN
        .categoryName = _("TUTTOMUSO"),
    #else //ENGLISH
        .categoryName = _("FACE"),
    #endif
=======
        .categoryName = _("CARA"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 2565,
        .description = gGlaliePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SPHEAL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CLAP CLAP"),
    #elif ITALIAN
        .categoryName = _("ROTOLANTE"),
    #else //ENGLISH
        .categoryName = _("CLAP"),
    #endif
=======
        .categoryName = _("APLAUSO"),
>>>>>>> Egg/spanish
        .height = 8,
        .weight = 395,
        .description = gSphealPokedexText,
        .pokemonScale = 315,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SEALEO] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ROULE BOULE"),
    #elif ITALIAN
        .categoryName = _("ROTAPALLA"),
    #else //ENGLISH
        .categoryName = _("BALL ROLL"),
    #endif
=======
        .categoryName = _("RODABOLA"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 876,
        .description = gSealeoPokedexText,
        .pokemonScale = 338,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_WALREIN] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BRISE GLACE"),
    #elif ITALIAN
        .categoryName = _("SPACCAGELO"),
    #else //ENGLISH
        .categoryName = _("ICE BREAK"),
    #endif
=======
        .categoryName = _("ROMPEHIELO"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 1506,
        .description = gWalreinPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_CLAMPERL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BIVALVE"),
    #elif ITALIAN
        .categoryName = _("BIVALVE"),
    #else //ENGLISH
        .categoryName = _("BIVALVE"),
    #endif
=======
        .categoryName = _("BIVALVO"),
>>>>>>> Egg/spanish
        .height = 4,
        .weight = 525,
        .description = gClamperlPokedexText,
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_HUNTAIL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ABYSSE"),
    #elif ITALIAN
        .categoryName = _("ABISSI"),
    #else //ENGLISH
        .categoryName = _("DEEP SEA"),
    #endif
=======
        .categoryName = _("ABISAL"),
>>>>>>> Egg/spanish
        .height = 17,
        .weight = 270,
        .description = gHuntailPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_GOREBYSS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("MER DU SUD"),
    #elif ITALIAN
        .categoryName = _("SUDMARINO"),
    #else //ENGLISH
        .categoryName = _("SOUTH SEA"),
    #endif
=======
        .categoryName = _("MAR DEL SUR"),
>>>>>>> Egg/spanish
        .height = 18,
        .weight = 226,
        .description = gGorebyssPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_RELICANTH] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("LONGEVITE"),
    #elif ITALIAN
        .categoryName = _("LONGEVITÀ"),
    #else //ENGLISH
        .categoryName = _("LONGEVITY"),
    #endif
=======
        .categoryName = _("LONGEVO"),
>>>>>>> Egg/spanish
        .height = 10,
        .weight = 234,
        .description = gRelicanthPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LUVDISC] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("RENDEZVOUS"),
    #elif ITALIAN
        .categoryName = _("RENDEZVOUS"),
    #else //ENGLISH
        .categoryName = _("RENDEZVOUS"),
    #endif
=======
        .categoryName = _("CITA"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 87,
        .description = gLuvdiscPokedexText,
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BAGON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("TETE DE ROC"),
    #elif ITALIAN
        .categoryName = _("ROCCIOTESTA"),
    #else //ENGLISH
        .categoryName = _("ROCK HEAD"),
    #endif
=======
        .categoryName = _("CABEZA ROCA"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 421,
        .description = gBagonPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SHELGON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ENDURANT"),
    #elif ITALIAN
        .categoryName = _("RESISTENZA"),
    #else //ENGLISH
        .categoryName = _("ENDURANCE"),
    #endif
=======
        .categoryName = _("RESISTENCIA"),
>>>>>>> Egg/spanish
        .height = 11,
        .weight = 1105,
        .description = gShelgonPokedexText,
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SALAMENCE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("DRAGON"),
    #elif ITALIAN
        .categoryName = _("DRAGO"),
    #else //ENGLISH
        .categoryName = _("DRAGON"),
    #endif
=======
        .categoryName = _("DRAGÓN"),
>>>>>>> Egg/spanish
        .height = 15,
        .weight = 1026,
        .description = gSalamencePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_BELDUM] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BOULEFER"),
    #elif ITALIAN
        .categoryName = _("FERROSFERA"),
    #else //ENGLISH
        .categoryName = _("IRON BALL"),
    #endif
=======
        .categoryName = _("BOLA HIERRO"),
>>>>>>> Egg/spanish
        .height = 6,
        .weight = 952,
        .description = gBeldumPokedexText,
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METANG] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PINCEFER"),
    #elif ITALIAN
        .categoryName = _("FERRUNGHIA"),
    #else //ENGLISH
        .categoryName = _("IRON CLAW"),
    #endif
=======
        .categoryName = _("GARRAHIERRO"),
>>>>>>> Egg/spanish
        .height = 12,
        .weight = 2025,
        .description = gMetangPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_METAGROSS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PATTEFER"),
    #elif ITALIAN
        .categoryName = _("FERRARTO"),
    #else //ENGLISH
        .categoryName = _("IRON LEG"),
    #endif
=======
        .categoryName = _("PATA HIERRO"),
>>>>>>> Egg/spanish
        .height = 16,
        .weight = 5500,
        .description = gMetagrossPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
    },

    [NATIONAL_DEX_REGIROCK] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("PIC ROCHEUX"),
    #elif ITALIAN
        .categoryName = _("PICCO"),
    #else //ENGLISH
        .categoryName = _("ROCK PEAK"),
    #endif
=======
        .categoryName = _("PICO ROCA"),
>>>>>>> Egg/spanish
        .height = 17,
        .weight = 2300,
        .description = gRegirockPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
    },

    [NATIONAL_DEX_REGICE] =
    {
    #if FRENCH
        .categoryName = _("ICEBERG"),
    #elif ITALIAN
        .categoryName = _("ICEBERG"),
    #else //ENGLISH
        .categoryName = _("ICEBERG"),
    #endif
        .height = 18,
        .weight = 1750,
        .description = gRegicePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_REGISTEEL] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("FER"),
    #elif ITALIAN
        .categoryName = _("FERRO"),
    #else //ENGLISH
        .categoryName = _("IRON"),
    #endif
=======
        .categoryName = _("HIERRO"),
>>>>>>> Egg/spanish
        .height = 19,
        .weight = 2050,
        .description = gRegisteelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
    },

    [NATIONAL_DEX_LATIAS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("EON"),
    #elif ITALIAN
        .categoryName = _("EONE"),
    #else //ENGLISH
        .categoryName = _("EON"),
    #endif
=======
        .categoryName = _("EÓN"),
>>>>>>> Egg/spanish
        .height = 14,
        .weight = 400,
        .description = gLatiasPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_LATIOS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("EON"),
    #elif ITALIAN
        .categoryName = _("EONE"),
    #else //ENGLISH
        .categoryName = _("EON"),
    #endif
=======
        .categoryName = _("EÓN"),
>>>>>>> Egg/spanish
        .height = 20,
        .weight = 600,
        .description = gLatiosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
    },

    [NATIONAL_DEX_KYOGRE] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("BASSINMARIN"),
    #elif ITALIAN
        .categoryName = _("OCEANO"),
    #else //ENGLISH
        .categoryName = _("SEA BASIN"),
    #endif
=======
        .categoryName = _("CUENCA MAR"),
>>>>>>> Egg/spanish
        .height = 45,
        .weight = 3520,
        .description = gKyogrePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 614,
        .trainerOffset = 13,
    },

    [NATIONAL_DEX_GROUDON] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CONTINENT"),
    #elif ITALIAN
        .categoryName = _("CONTINENTE"),
    #else //ENGLISH
        .categoryName = _("CONTINENT"),
    #endif
=======
        .categoryName = _("CONTINENTE"),
>>>>>>> Egg/spanish
        .height = 35,
        .weight = 9500,
        .description = gGroudonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 515,
        .trainerOffset = 14,
    },

    [NATIONAL_DEX_RAYQUAZA] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("CIEUX"),
    #elif ITALIAN
        .categoryName = _("STRATOSFERA"),
    #else //ENGLISH
        .categoryName = _("SKY HIGH"),
    #endif
=======
        .categoryName = _("CIELO"),
>>>>>>> Egg/spanish
        .height = 70,
        .weight = 2065,
        .description = gRayquazaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 448,
        .trainerOffset = 12,
    },

    [NATIONAL_DEX_JIRACHI] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("SOUHAIT"),
    #elif ITALIAN
        .categoryName = _("DESIDERIO"),
    #else //ENGLISH
        .categoryName = _("WISH"),
    #endif
=======
        .categoryName = _("DESEO"),
>>>>>>> Egg/spanish
        .height = 3,
        .weight = 11,
        .description = gJirachiPokedexText,
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_DEOXYS] =
    {
<<<<<<< HEAD
    #if FRENCH
        .categoryName = _("ADN"),
    #elif ITALIAN
        .categoryName = _("DNA"),
    #else //ENGLISH
        .categoryName = _("DNA"),
    #endif
=======
        .categoryName = _("ADN"),
>>>>>>> Egg/spanish
        .height = 17,
        .weight = 608,
        .description = gDeoxysPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },
};
