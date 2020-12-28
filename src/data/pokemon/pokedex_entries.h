const struct PokedexEntry gPokedexEntries[] =
{
    [NATIONAL_DEX_NONE] =
    {
        .categoryName = _("UNKNOWN"),
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
        .categoryName = _("SEED"),
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
        .categoryName = _("SEED"),
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
        .categoryName = _("SEED"),
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
        .categoryName = _("LIZARD"),
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
        .categoryName = _("FLAME"),
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
        .categoryName = _("FLAME"),
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
        .categoryName = _("TINY TURTLE"),
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
        .categoryName = _("TURTLE"),
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
        .categoryName = _("SHELLFISH"),
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
        .categoryName = _("WORM"),
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
        .categoryName = _("COCOON"),
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
        .categoryName = _("BUTTERFLY"),
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
        .categoryName = _("HAIRY BUG"),
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
        .categoryName = _("COCOON"),
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
        .categoryName = _("POISON BEE"),
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
        .categoryName = _("TINY BIRD"),
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
        .categoryName = _("BIRD"),
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
        .categoryName = _("BIRD"),
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
        .categoryName = _("MOUSE"),
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
        .categoryName = _("MOUSE"),
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
        .categoryName = _("TINY BIRD"),
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
        .categoryName = _("BEAK"),
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
        .categoryName = _("SNAKE"),
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
        .categoryName = _("COBRA"),
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
        .categoryName = _("MOUSE"),
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
        .categoryName = _("MOUSE"),
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
        .categoryName = _("MOUSE"),
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
        .categoryName = _("MOUSE"),
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
        .categoryName = _("POISON PIN"),
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
        .categoryName = _("POISON PIN"),
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
        .categoryName = _("DRILL"),
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
        .categoryName = _("POISON PIN"),
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
        .categoryName = _("POISON PIN"),
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
        .categoryName = _("DRILL"),
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
        .categoryName = _("FAIRY"),
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
        .categoryName = _("FAIRY"),
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
        .categoryName = _("FOX"),
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
        .categoryName = _("FOX"),
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
        .categoryName = _("BALLOON"),
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
        .categoryName = _("BALLOON"),
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
        .categoryName = _("BAT"),
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
        .categoryName = _("BAT"),
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
        .categoryName = _("WEED"),
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
        .categoryName = _("WEED"),
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
        .categoryName = _("FLOWER"),
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
        .categoryName = _("MUSHROOM"),
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
        .categoryName = _("MUSHROOM"),
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
        .categoryName = _("INSECT"),
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
        .categoryName = _("POISON MOTH"),
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
        .categoryName = _("MOLE"),
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
        .categoryName = _("MOLE"),
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
        .categoryName = _("SCRATCH CAT"),
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
        .categoryName = _("CLASSY CAT"),
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
        .categoryName = _("DUCK"),
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
        .categoryName = _("DUCK"),
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
        .categoryName = _("PIG MONKEY"),
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
        .categoryName = _("PIG MONKEY"),
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
        .categoryName = _("PUPPY"),
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
        .categoryName = _("LEGENDARY"),
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
        .categoryName = _("TADPOLE"),
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
        .categoryName = _("TADPOLE"),
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
        .categoryName = _("TADPOLE"),
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
        .categoryName = _("PSI"),
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
        .categoryName = _("PSI"),
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
        .categoryName = _("PSI"),
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
        .categoryName = _("SUPERPOWER"),
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
        .categoryName = _("SUPERPOWER"),
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
        .categoryName = _("SUPERPOWER"),
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
        .categoryName = _("FLOWER"),
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
        .categoryName = _("FLYCATCHER"),
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
        .categoryName = _("FLYCATCHER"),
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
        .categoryName = _("JELLYFISH"),
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
        .categoryName = _("JELLYFISH"),
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
        .categoryName = _("ROCK"),
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
        .categoryName = _("ROCK"),
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
        .categoryName = _("MEGATON"),
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
        .categoryName = _("FIRE HORSE"),
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
        .categoryName = _("FIRE HORSE"),
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
        .categoryName = _("DOPEY"),
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
        .categoryName = _("HERMIT CRAB"),
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
        .categoryName = _("MAGNET"),
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
        .categoryName = _("MAGNET"),
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
        .categoryName = _("WILD DUCK"),
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
        .categoryName = _("TWIN BIRD"),
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
        .categoryName = _("TRIPLE BIRD"),
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
        .categoryName = _("SEA LION"),
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
        .categoryName = _("SEA LION"),
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
        .categoryName = _("SLUDGE"),
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
        .categoryName = _("SLUDGE"),
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
        .categoryName = _("BIVALVE"),
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
        .categoryName = _("BIVALVE"),
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
        .categoryName = _("GAS"),
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
        .categoryName = _("GAS"),
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
        .categoryName = _("SHADOW"),
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
        .categoryName = _("ROCK SNAKE"),
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
        .categoryName = _("HYPNOSIS"),
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
        .categoryName = _("HYPNOSIS"),
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
        .categoryName = _("RIVER CRAB"),
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
        .categoryName = _("PINCER"),
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
        .categoryName = _("BALL"),
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
        .categoryName = _("BALL"),
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
        .categoryName = _("EGG"),
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
        .categoryName = _("COCONUT"),
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
        .categoryName = _("LONELY"),
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
        .categoryName = _("BONE KEEPER"),
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
        .categoryName = _("KICKING"),
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
        .categoryName = _("PUNCHING"),
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
        .categoryName = _("LICKING"),
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
        .categoryName = _("POISON GAS"),
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
        .categoryName = _("POISON GAS"),
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
        .categoryName = _("SPIKES"),
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
        .categoryName = _("DRILL"),
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
        .categoryName = _("EGG"),
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
        .categoryName = _("VINE"),
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
        .categoryName = _("PARENT"),
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
        .categoryName = _("DRAGON"),
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
        .categoryName = _("DRAGON"),
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
        .categoryName = _("GOLDFISH"),
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
        .categoryName = _("GOLDFISH"),
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
        .categoryName = _("STAR SHAPE"),
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
        .categoryName = _("MYSTERIOUS"),
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
        .categoryName = _("BARRIER"),
        .height = 13,
        .weight = 545,
        .description = gMrmimePokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [NATIONAL_DEX_SCYTHER] =
    {
        .categoryName = _("MANTIS"),
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
        .categoryName = _("HUMAN SHAPE"),
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
        .categoryName = _("ELECTRIC"),
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
        .categoryName = _("SPITFIRE"),
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
        .categoryName = _("STAG BEETLE"),
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
        .categoryName = _("WILD BULL"),
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
        .categoryName = _("FISH"),
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
        .categoryName = _("ATROCIOUS"),
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
        .categoryName = _("TRANSPORT"),
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
        .categoryName = _("TRANSFORM"),
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
        .categoryName = _("EVOLUTION"),
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
        .categoryName = _("BUBBLE JET"),
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
        .categoryName = _("LIGHTNING"),
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
        .categoryName = _("FLAME"),
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
        .categoryName = _("VIRTUAL"),
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
        .categoryName = _("SPIRAL"),
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
        .categoryName = _("SPIRAL"),
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
        .categoryName = _("SHELLFISH"),
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
        .categoryName = _("SHELLFISH"),
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
        .categoryName = _("FOSSIL"),
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
        .categoryName = _("SLEEPING"),
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
        .categoryName = _("FREEZE"),
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
        .categoryName = _("ELECTRIC"),
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
        .categoryName = _("FLAME"),
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
        .categoryName = _("DRAGON"),
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
        .categoryName = _("DRAGON"),
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
        .categoryName = _("DRAGON"),
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
        .categoryName = _("GENETIC"),
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
        .categoryName = _("NEW SPECIES"),
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
        .categoryName = _("LEAF"),
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
        .categoryName = _("LEAF"),
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
        .categoryName = _("HERB"),
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
        .categoryName = _("FIRE MOUSE"),
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
        .categoryName = _("VOLCANO"),
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
        .categoryName = _("VOLCANO"),
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
        .categoryName = _("BIG JAW"),
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
        .categoryName = _("BIG JAW"),
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
        .categoryName = _("BIG JAW"),
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
        .categoryName = _("SCOUT"),
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
        .categoryName = _("LONG BODY"),
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
        .categoryName = _("OWL"),
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
        .categoryName = _("OWL"),
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
        .categoryName = _("FIVE STAR"),
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
        .categoryName = _("FIVE STAR"),
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
        .categoryName = _("STRING SPIT"),
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
        .categoryName = _("LONG LEG"),
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
        .categoryName = _("BAT"),
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
        .categoryName = _("ANGLER"),
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
        .categoryName = _("LIGHT"),
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
        .categoryName = _("TINY MOUSE"),
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
        .categoryName = _("STAR SHAPE"),
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
        .categoryName = _("BALLOON"),
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
        .categoryName = _("SPIKE BALL"),
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
        .categoryName = _("HAPPINESS"),
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
        .categoryName = _("TINY BIRD"),
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
        .categoryName = _("MYSTIC"),
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
        .categoryName = _("WOOL"),
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
        .categoryName = _("WOOL"),
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
        .categoryName = _("LIGHT"),
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
        .categoryName = _("FLOWER"),
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
        .categoryName = _("AQUA MOUSE"),
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
        .categoryName = _("AQUA RABBIT"),
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
        .categoryName = _("IMITATION"),
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
        .categoryName = _("FROG"),
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
        .categoryName = _("COTTONWEED"),
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
        .categoryName = _("COTTONWEED"),
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
        .categoryName = _("COTTONWEED"),
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
        .categoryName = _("LONG TAIL"),
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
        .categoryName = _("SEED"),
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
        .categoryName = _("SUN"),
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
        .categoryName = _("CLEAR WING"),
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
        .categoryName = _("WATER FISH"),
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
        .categoryName = _("WATER FISH"),
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
        .categoryName = _("SUN"),
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
        .categoryName = _("MOONLIGHT"),
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
        .categoryName = _("DARKNESS"),
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
        .categoryName = _("ROYAL"),
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
        .categoryName = _("SCREECH"),
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
        .categoryName = _("SYMBOL"),
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
        .categoryName = _("PATIENT"),
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
        .categoryName = _("LONG NECK"),
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
        .categoryName = _("BAGWORM"),
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
        .categoryName = _("BAGWORM"),
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
        .categoryName = _("LAND SNAKE"),
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
        .categoryName = _("FLYSCORPION"),
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
        .categoryName = _("IRON SNAKE"),
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
        .categoryName = _("FAIRY"),
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
        .categoryName = _("FAIRY"),
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
        .categoryName = _("BALLOON"),
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
        .categoryName = _("PINCER"),
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
        .categoryName = _("MOLD"),
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
        .categoryName = _("SINGLE HORN"),
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
        .categoryName = _("SHARP CLAW"),
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
        .categoryName = _("LITTLE BEAR"),
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
        .categoryName = _("HIBERNATOR"),
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
        .categoryName = _("LAVA"),
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
        .categoryName = _("LAVA"),
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
        .categoryName = _("PIG"),
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
        .categoryName = _("SWINE"),
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
        .categoryName = _("CORAL"),
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
        .categoryName = _("JET"),
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
        .categoryName = _("JET"),
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
        .categoryName = _("DELIVERY"),
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
        .categoryName = _("KITE"),
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
        .categoryName = _("ARMOR BIRD"),
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
        .categoryName = _("DARK"),
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
        .categoryName = _("DARK"),
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
        .categoryName = _("DRAGON"),
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
        .categoryName = _("LONG NOSE"),
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
        .categoryName = _("ARMOR"),
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
        .categoryName = _("VIRTUAL"),
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
        .categoryName = _("BIG HORN"),
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
        .categoryName = _("PAINTER"),
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
        .categoryName = _("SCUFFLE"),
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
        .categoryName = _("HANDSTAND"),
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
        .categoryName = _("KISS"),
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
        .categoryName = _("ELECTRIC"),
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
        .categoryName = _("LIVE COAL"),
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
        .categoryName = _("MILK COW"),
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
        .categoryName = _("HAPPINESS"),
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
        .categoryName = _("THUNDER"),
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
        .categoryName = _("VOLCANO"),
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
        .categoryName = _("AURORA"),
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
        .categoryName = _("ROCK SKIN"),
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
        .categoryName = _("HARD SHELL"),
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
        .categoryName = _("ARMOR"),
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
        .categoryName = _("DIVING"),
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
        .categoryName = _("RAINBOW"),
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
        .categoryName = _("TIME TRAVEL"),
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
        .categoryName = _("WOOD GECKO"),
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
        .categoryName = _("WOOD GECKO"),
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
        .categoryName = _("FOREST"),
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
        .categoryName = _("CHICK"),
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
        .categoryName = _("YOUNG FOWL"),
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
        .categoryName = _("BLAZE"),
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
        .categoryName = _("MUD FISH"),
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
        .categoryName = _("MUD FISH"),
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
        .categoryName = _("MUD FISH"),
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
        .categoryName = _("BITE"),
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
        .categoryName = _("BITE"),
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
        .categoryName = _("TINYRACCOON"),
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
        .categoryName = _("RUSHING"),
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
        .categoryName = _("WORM"),
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
        .categoryName = _("COCOON"),
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
        .categoryName = _("BUTTERFLY"),
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
        .categoryName = _("COCOON"),
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
        .categoryName = _("POISON MOTH"),
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
        .categoryName = _("WATER WEED"),
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
        .categoryName = _("JOLLY"),
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
        .categoryName = _("CAREFREE"),
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
        .categoryName = _("ACORN"),
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
        .categoryName = _("WILY"),
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
        .categoryName = _("WICKED"),
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
        .categoryName = _("TINYSWALLOW"),
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
        .categoryName = _("SWALLOW"),
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
        .categoryName = _("SEAGULL"),
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
        .categoryName = _("WATER BIRD"),
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
        .categoryName = _("FEELING"),
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
        .categoryName = _("EMOTION"),
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
        .categoryName = _("EMBRACE"),
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
        .categoryName = _("POND SKATER"),
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
        .categoryName = _("EYEBALL"),
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
        .categoryName = _("MUSHROOM"),
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
        .categoryName = _("MUSHROOM"),
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
        .categoryName = _("SLACKER"),
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
        .categoryName = _("WILD MONKEY"),
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
        .categoryName = _("LAZY"),
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
        .categoryName = _("TRAINEE"),
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
        .categoryName = _("NINJA"),
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
        .categoryName = _("SHED"),
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
        .categoryName = _("WHISPER"),
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
        .categoryName = _("BIG VOICE"),
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
        .categoryName = _("LOUD NOISE"),
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
        .categoryName = _("GUTS"),
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
        .categoryName = _("ARM THRUST"),
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
        .categoryName = _("POLKA DOT"),
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
        .categoryName = _("COMPASS"),
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
        .categoryName = _("KITTEN"),
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
        .categoryName = _("PRIM"),
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
        .categoryName = _("DARKNESS"),
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
        .categoryName = _("DECEIVER"),
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
        .categoryName = _("IRON ARMOR"),
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
        .categoryName = _("IRON ARMOR"),
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
        .categoryName = _("IRON ARMOR"),
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
        .categoryName = _("MEDITATE"),
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
        .categoryName = _("MEDITATE"),
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
        .categoryName = _("LIGHTNING"),
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
        .categoryName = _("DISCHARGE"),
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
        .categoryName = _("CHEERING"),
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
        .categoryName = _("CHEERING"),
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
        .categoryName = _("FIREFLY"),
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
        .categoryName = _("FIREFLY"),
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
        .categoryName = _("THORN"),
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
        .categoryName = _("STOMACH"),
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
        .categoryName = _("POISON BAG"),
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
        .categoryName = _("SAVAGE"),
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
        .categoryName = _("BRUTAL"),
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
        .categoryName = _("BALL WHALE"),
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
        .categoryName = _("FLOAT WHALE"),
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
        .categoryName = _("NUMB"),
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
        .categoryName = _("ERUPTION"),
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
        .categoryName = _("COAL"),
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
        .categoryName = _("BOUNCE"),
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
        .categoryName = _("MANIPULATE"),
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
        .categoryName = _("SPOT PANDA"),
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
        .categoryName = _("ANT PIT"),
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
        .categoryName = _("VIBRATION"),
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
        .categoryName = _("MYSTIC"),
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
        .categoryName = _("CACTUS"),
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
        .categoryName = _("SCARECROW"),
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
        .categoryName = _("COTTON BIRD"),
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
        .categoryName = _("HUMMING"),
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
        .categoryName = _("CAT FERRET"),
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
        .categoryName = _("FANG SNAKE"),
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
        .categoryName = _("METEORITE"),
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
        .categoryName = _("METEORITE"),
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
        .categoryName = _("WHISKERS"),
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
        .categoryName = _("WHISKERS"),
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
        .categoryName = _("RUFFIAN"),
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
        .categoryName = _("ROGUE"),
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
        .categoryName = _("CLAY DOLL"),
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
        .categoryName = _("CLAY DOLL"),
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
        .categoryName = _("SEA LILY"),
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
        .categoryName = _("BARNACLE"),
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
        .categoryName = _("OLD SHRIMP"),
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
        .categoryName = _("PLATE"),
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
        .categoryName = _("FISH"),
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
        .categoryName = _("TENDER"),
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
        .categoryName = _("WEATHER"),
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
        .categoryName = _("COLOR SWAP"),
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
        .categoryName = _("PUPPET"),
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
        .categoryName = _("MARIONETTE"),
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
        .categoryName = _("REQUIEM"),
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
        .categoryName = _("BECKON"),
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
        .categoryName = _("FRUIT"),
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
        .categoryName = _("WIND CHIME"),
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
        .categoryName = _("DISASTER"),
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
        .categoryName = _("BRIGHT"),
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
        .categoryName = _("SNOW HAT"),
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
        .categoryName = _("FACE"),
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
        .categoryName = _("CLAP"),
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
        .categoryName = _("BALL ROLL"),
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
        .categoryName = _("ICE BREAK"),
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
        .categoryName = _("BIVALVE"),
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
        .categoryName = _("DEEP SEA"),
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
        .categoryName = _("SOUTH SEA"),
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
        .categoryName = _("LONGEVITY"),
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
        .categoryName = _("RENDEZVOUS"),
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
        .categoryName = _("ROCK HEAD"),
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
        .categoryName = _("ENDURANCE"),
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
        .categoryName = _("DRAGON"),
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
        .categoryName = _("IRON BALL"),
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
        .categoryName = _("IRON CLAW"),
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
        .categoryName = _("IRON LEG"),
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
        .categoryName = _("ROCK PEAK"),
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
        .categoryName = _("ICEBERG"),
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
        .categoryName = _("IRON"),
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
        .categoryName = _("EON"),
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
        .categoryName = _("EON"),
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
        .categoryName = _("SEA BASIN"),
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
        .categoryName = _("CONTINENT"),
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
        .categoryName = _("SKY HIGH"),
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
        .categoryName = _("WISH"),
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
        .categoryName = _("DNA"),
        .height = 17,
        .weight = 608,
        .description = gDeoxysPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 2,
    },
	
	//POKESCAPE
	[NATIONAL_DEX_GUTHLING] =
	{
		.categoryName = _("Small Bird"),
		.height = 1.0,
		.weight = 10.0,
		.description = gGuthlingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GUTHBIRD] =
	{
		.categoryName = _("YoungRaptor"),
		.height = 3.6,
		.weight = 42.2,
		.description = gGuthbirdPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GUTHRAPTOR] =
	{
		.categoryName = _("Balance "),
		.height = 6.3,
		.weight = 86.2,
		.description = gGuthraptorPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZAMLING] =
	{
		.categoryName = _("Small Wing"),
		.height = 1.5,
		.weight = 12.1,
		.description = gZamlingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZAMBIRD] =
	{
		.categoryName = _("Young Hawk"),
		.height = 3.6,
		.weight = 43.5,
		.description = gZambirdPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZAMOHAWK] =
	{
		.categoryName = _("Chaos Hawk"),
		.height = 6.3,
		.weight = 72.6,
		.description = gZamohawkPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SARALING] =
	{
		.categoryName = _("Small Beak"),
		.height = 1.5,
		.weight = 11.4,
		.description = gSaralingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SARABIRD] =
	{
		.categoryName = _("Young Owl"),
		.height = 3.6,
		.weight = 39.9,
		.description = gSarabirdPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SARAOWL] =
	{
		.categoryName = _("Wisdom Owl"),
		.height = 6.3,
		.weight = 91.2,
		.description = gSaraowlPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHICK] =
	{
		.categoryName = _("Hatched"),
		.height = 1.1,
		.weight = 7.6,
		.description = gChickPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHICKEN_NORMAL_FORM] =
	{
		.categoryName = _("Chicken"),
		.height = 5.1,
		.weight = 22.4,
		.description = gChicken_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHICKEN_VARROCK_FORM] =
	{
		.categoryName = _("Chicken"),
		.height = 5.1,
		.weight = 22.4,
		.description = gChicken_Varrock_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHICKEN_KARAMJA_FORM] =
	{
		.categoryName = _("Chicken"),
		.height = 5.1,
		.weight = 22.4,
		.description = gChicken_Karamja_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHICKEN_BANDOSIAN_FORM] =
	{
		.categoryName = _("Chicken"),
		.height = 5.1,
		.weight = 22.4,
		.description = gChicken_Bandosian_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DREADFOWL] =
	{
		.categoryName = _("Dread"),
		.height = 7.6,
		.weight = 28.2,
		.description = gDreadfowlPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHICKEN_DIVING_FORM] =
	{
		.categoryName = _("Sunken"),
		.height = 7.6,
		.weight = 28.2,
		.description = gChicken_Diving_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROOSTER_NORMAL_FORM] =
	{
		.categoryName = _("Rooster"),
		.height = 5.1,
		.weight = 22.3,
		.description = gRooster_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROOSTER_VARROCK_FORM] =
	{
		.categoryName = _("Rooster"),
		.height = 5.1,
		.weight = 22.3,
		.description = gRooster_Varrock_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROOSTER_KARAMJA_FORM] =
	{
		.categoryName = _("Rooster"),
		.height = 5.1,
		.weight = 22.3,
		.description = gRooster_Karamja_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROOSTER_BANDOSIAN_FORM] =
	{
		.categoryName = _("Rooster"),
		.height = 5.1,
		.weight = 22.3,
		.description = gRooster_Bandosian_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_OOMLIE] =
	{
		.categoryName = _("Oomlie"),
		.height = 17.5,
		.weight = 113.2,
		.description = gOomliePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ERNEST] =
	{
		.categoryName = _("Rattled"),
		.height = 5.1,
		.weight = 21.0,
		.description = gErnestPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHICKEN_UNDEAD_FORM] =
	{
		.categoryName = _("Ex Chicken"),
		.height = 5.1,
		.weight = 11.2,
		.description = gChicken_Undead_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHICKEN_LIZARD_FORM] =
	{
		.categoryName = _("Lizard"),
		.height = 5.1,
		.weight = 13.5,
		.description = gChicken_Lizard_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SWORDCHICK] =
	{
		.categoryName = _("Blade"),
		.height = 5.1,
		.weight = 17.9,
		.description = gSwordchickPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_NEWTROOST] =
	{
		.categoryName = _("Roosting"),
		.height = 5.4,
		.weight = 20.8,
		.description = gNewtroostPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EVILCHICKEN] =
	{
		.categoryName = _("EvilChicken"),
		.height = 5.7,
		.weight = 20.8,
		.description = gEvilChickenPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CALF] =
	{
		.categoryName = _("Calf"),
		.height = 7.6,
		.weight = 462.1,
		.description = gCalfPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COW] =
	{
		.categoryName = _("Cow"),
		.height = 15.7,
		.weight = 7406.4,
		.description = gCowPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BULL] =
	{
		.categoryName = _("Bull"),
		.height = 18.0,
		.weight = 9865.6,
		.description = gBullPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SKELETALOX_MALE_FORM] =
	{
		.categoryName = _("SkeletalOx "),
		.height = 13.5,
		.weight = 6984.9,
		.description = gSkeletalOx_Male_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SKELETALOX_FEMALE_FORM] =
	{
		.categoryName = _("SkeletalCow"),
		.height = 13.5,
		.weight = 6984.9,
		.description = gSkeletalOx_Female_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COW_UNDEAD_FORM] =
	{
		.categoryName = _("Zmoombie"),
		.height = 15.7,
		.weight = 5157.4,
		.description = gCow_Undead_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_UNICOW] =
	{
		.categoryName = _("Unison"),
		.height = 16.5,
		.weight = 2607.6,
		.description = gUnicowPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRAYFISH] =
	{
		.categoryName = _("Clenching"),
		.height = 1.8,
		.weight = 4.5,
		.description = gCrayfishPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHRIMP] =
	{
		.categoryName = _("Shrimping"),
		.height = 0.8,
		.weight = 1.8,
		.description = gShrimpPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LOBSTER_NORMAL_FORM] =
	{
		.categoryName = _("Clamping"),
		.height = 2.3,
		.weight = 13.6,
		.description = gLobster_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RAT_NORMAL_FORM] =
	{
		.categoryName = _("Rat "),
		.height = 1.0,
		.weight = 4.1,
		.description = gRat_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_RAT_NORMAL_FORM] =
	{
		.categoryName = _("Giant Rat"),
		.height = 6.9,
		.weight = 97.5,
		.description = gGiant_Rat_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EXPERIMENT_2_FORM] =
	{
		.categoryName = _("Ogleroot"),
		.height = 13.5,
		.weight = 206.8,
		.description = gExperiment_2_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BRINE_RAT] =
	{
		.categoryName = _("Scurwy"),
		.height = 4.8,
		.weight = 27.7,
		.description = gBrine_RatPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ALBINO_RAT] =
	{
		.categoryName = _("Albino Rat"),
		.height = 6.4,
		.weight = 42.6,
		.description = gAlbino_RatPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RAT_HELL_FORM] =
	{
		.categoryName = _("Infernal"),
		.height = 2.0,
		.weight = 6.8,
		.description = gRat_Hell_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_RAT_HELL_FORM] =
	{
		.categoryName = _("Infernal"),
		.height = 7.4,
		.weight = 47.2,
		.description = gGiant_Rat_Hell_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHELL_RAT] =
	{
		.categoryName = _("Coconut"),
		.height = 2.0,
		.weight = 8.2,
		.description = gShell_RatPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_RAT_DUNGEON_FORM] =
	{
		.categoryName = _("Rat"),
		.height = 8.4,
		.weight = 109.8,
		.description = gGiant_Rat_Dungeon_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RAT_CRYPT_FORM] =
	{
		.categoryName = _("Crypt  "),
		.height = 1.0,
		.weight = 4.1,
		.description = gRat_Crypt_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_RAT_CRYPT_FORM] =
	{
		.categoryName = _("Crypt  "),
		.height = 6.9,
		.weight = 97.5,
		.description = gGiant_Rat_Crypt_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WARPED_RAT] =
	{
		.categoryName = _("Catacombed"),
		.height = 6.4,
		.weight = 93.0,
		.description = gWarped_RatPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZOMBIE_RAT] =
	{
		.categoryName = _("Dead Vermin"),
		.height = 6.9,
		.weight = 99.8,
		.description = gZombie_RatPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RAT_KING_FORM] =
	{
		.categoryName = _("Rat Master"),
		.height = 8.4,
		.weight = 6.8,
		.description = gRat_King_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_RAT_KING_FORM] =
	{
		.categoryName = _("Majestic"),
		.height = 8.4,
		.weight = 110.7,
		.description = gGiant_Rat_King_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ANGRY_RAT] =
	{
		.categoryName = _("Anger"),
		.height = 7.4,
		.weight = 104.3,
		.description = gAngry_RatPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_RAT_BLESSED_FORM] =
	{
		.categoryName = _("IbansVermin"),
		.height = 7.4,
		.weight = 102.5,
		.description = gGiant_Rat_Blessed_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LAMB] =
	{
		.categoryName = _("Cute"),
		.height = 6.6,
		.weight = 93.4,
		.description = gLambPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHEEP_WHITE_FORM] =
	{
		.categoryName = _("Wooly"),
		.height = 13.5,
		.weight = 546.6,
		.description = gSheep_White_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RAM_SHAGGY_FORM] =
	{
		.categoryName = _("Hardheaded"),
		.height = 13.5,
		.weight = 625.1,
		.description = gRam_Shaggy_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHEEP_PIRATE_FORM] =
	{
		.categoryName = _("Typo"),
		.height = 13.2,
		.weight = 590.1,
		.description = gSheep_Pirate_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SARDINE] =
	{
		.categoryName = _("Nutritious"),
		.height = 0.7,
		.weight = 0.5,
		.description = gSardinePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HERRING] =
	{
		.categoryName = _("Not Red"),
		.height = 1.8,
		.weight = 10.0,
		.description = gHerringPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TROUT_NORMAL_FORM] =
	{
		.categoryName = _("Trout"),
		.height = 2.5,
		.weight = 73.9,
		.description = gTrout_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TROUT_TROPICAL_FORM] =
	{
		.categoryName = _("Trout"),
		.height = 2.5,
		.weight = 73.9,
		.description = gTrout_Tropical_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TROUT_LEAPING_FORM] =
	{
		.categoryName = _("Trour"),
		.height = 2.5,
		.weight = 73.9,
		.description = gTrout_Leaping_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SWORDFISH] =
	{
		.categoryName = _("Bladed"),
		.height = 5.3,
		.weight = 879.5,
		.description = gSwordfishPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SALMON_NORMAL_FORM] =
	{
		.categoryName = _("Crimson"),
		.height = 2.5,
		.weight = 39.0,
		.description = gSalmon_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SALMON_LEAPING_FORM] =
	{
		.categoryName = _("Crimson"),
		.height = 2.5,
		.weight = 39.0,
		.description = gSalmon_Leaping_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STURGEON] =
	{
		.categoryName = _("Waterfall"),
		.height = 3.3,
		.weight = 67.1,
		.description = gSturgeonPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SAILFISH] =
	{
		.categoryName = _("Sailing"),
		.height = 4.7,
		.weight = 97.5,
		.description = gSailfishPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_THALLASUS] =
	{
		.categoryName = _("Aargh"),
		.height = 11.4,
		.weight = 250.4,
		.description = gThallasusPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BASS] =
	{
		.categoryName = _("Dropped"),
		.height = 3.9,
		.weight = 136.1,
		.description = gBassPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHARK_NORMAL_FORM] =
	{
		.categoryName = _("Mouthfull"),
		.height = 14.7,
		.weight = 2551.9,
		.description = gShark_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHARK_TIGER_FORM] =
	{
		.categoryName = _("Prowling"),
		.height = 13.2,
		.weight = 1746.3,
		.description = gShark_Tiger_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHARK_GREATWHITE_FORM] =
	{
		.categoryName = _("Toothed"),
		.height = 14.7,
		.weight = 2678.5,
		.description = gShark_GreatWhite_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MACKEREL] =
	{
		.categoryName = _("Tasty"),
		.height = 1.5,
		.weight = 145.2,
		.description = gMackerelPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CATFISH] =
	{
		.categoryName = _("BeardedFish"),
		.height = 2.0,
		.weight = 204.1,
		.description = gCatfishPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FURY_SHARK] =
	{
		.categoryName = _("Furious"),
		.height = 10.4,
		.weight = 3084.4,
		.description = gFury_SharkPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TARPON] =
	{
		.categoryName = _("Exotic"),
		.height = 3.0,
		.weight = 77.1,
		.description = gTarponPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SEERFISH] =
	{
		.categoryName = _("Allknowing"),
		.height = 2.3,
		.weight = 59.0,
		.description = gSeerfishPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SILLAGO] =
	{
		.categoryName = _("Thick Skin"),
		.height = 1.5,
		.weight = 36.3,
		.description = gSillagoPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WOBBEGONG] =
	{
		.categoryName = _("ReefDweller"),
		.height = 3.6,
		.weight = 118.0,
		.description = gWobbegongPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COD] =
	{
		.categoryName = _("Dutyfull"),
		.height = 2.5,
		.weight = 86.2,
		.description = gCodPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RAINBOW] =
	{
		.categoryName = _("Colourfull"),
		.height = 2.8,
		.weight = 104.3,
		.description = gRainbowPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHARK_GOLDEN_FORM] =
	{
		.categoryName = _("Golden"),
		.height = 13.5,
		.weight = 2721.6,
		.description = gShark_Golden_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHARK_BARON_FORM] =
	{
		.categoryName = _("Sparkling"),
		.height = 13.8,
		.weight = 3061.7,
		.description = gShark_Baron_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DESERTSOLE] =
	{
		.categoryName = _("Flat Fish"),
		.height = 1.9,
		.weight = 195.0,
		.description = gDesertSolePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WHITEFISH] =
	{
		.categoryName = _("Hemnsterian"),
		.height = 5.8,
		.weight = 344.7,
		.description = gWhitefishPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GOBLINFISH] =
	{
		.categoryName = _("Loach"),
		.height = 2.0,
		.weight = 154.2,
		.description = gGoblinFishPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BELTFISH] =
	{
		.categoryName = _("Belt"),
		.height = 1.3,
		.weight = 122.5,
		.description = gBeltfishPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MANTA_RAY] =
	{
		.categoryName = _("SeaTrawling"),
		.height = 5.1,
		.weight = 476.3,
		.description = gManta_RayPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KARAMBWANJ] =
	{
		.categoryName = _("Poisoneous"),
		.height = 1.0,
		.weight = 36.3,
		.description = gKarambwanjPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KARAMBWAN] =
	{
		.categoryName = _("Toxic"),
		.height = 2.5,
		.weight = 117.9,
		.description = gKarambwanPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_CARP] =
	{
		.categoryName = _("Big Carp"),
		.height = 2.5,
		.weight = 68.0,
		.description = gGiant_CarpPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PIKE] =
	{
		.categoryName = _("Pike"),
		.height = 2.5,
		.weight = 86.2,
		.description = gPikePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MONKFISH_NORMAL_FORM] =
	{
		.categoryName = _("Fresh"),
		.height = 9.1,
		.weight = 331.1,
		.description = gMonkfish_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MONKFISH_GOLDEN_FORM] =
	{
		.categoryName = _("Lumineous"),
		.height = 9.1,
		.weight = 399.2,
		.description = gMonkfish_Golden_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ANGLERFISH] =
	{
		.categoryName = _("Angler"),
		.height = 7.7,
		.weight = 435.4,
		.description = gAnglerFishPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PET_FISH] =
	{
		.categoryName = _("Fishbowled"),
		.height = 0.8,
		.weight = 2.3,
		.description = gPet_FishPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GILBERT] =
	{
		.categoryName = _("Bubbly"),
		.height = 2.5,
		.weight = 22.7,
		.description = gGilbertPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CAVEFISH] =
	{
		.categoryName = _("Blind Fish"),
		.height = 1.0,
		.weight = 33.6,
		.description = gCavefishPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCKTAIL] =
	{
		.categoryName = _("RockToothed"),
		.height = 7.7,
		.weight = 137.9,
		.description = gRocktailPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EEL_SLIMY_FORM] =
	{
		.categoryName = _("Slimy Eel"),
		.height = 1.6,
		.weight = 43.1,
		.description = gEel_Slimy_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EEL_CAVE_FORM] =
	{
		.categoryName = _("Icky Eel"),
		.height = 1.6,
		.weight = 44.9,
		.description = gEel_Cave_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EEL_SACRED_FORM] =
	{
		.categoryName = _("Sacred"),
		.height = 1.6,
		.weight = 59.9,
		.description = gEel_Sacred_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EEL_LAVA_FORM] =
	{
		.categoryName = _("Lava Eel"),
		.height = 1.6,
		.weight = 63.5,
		.description = gEel_Lava_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EEL_INFERNAL_FORM] =
	{
		.categoryName = _("Demonic"),
		.height = 1.6,
		.weight = 86.2,
		.description = gEel_Infernal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PIGLET] =
	{
		.categoryName = _("Young Pig"),
		.height = 7.6,
		.weight = 95.3,
		.description = gPigletPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PIG] =
	{
		.categoryName = _("Ham"),
		.height = 13.7,
		.weight = 816.5,
		.description = gPigPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PUPPY_PUP_FORM] =
	{
		.categoryName = _("Licking"),
		.height = 4.1,
		.weight = 158.8,
		.description = gPuppy_Pup_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PUPPY_MUTT_FORM] =
	{
		.categoryName = _("Barking"),
		.height = 4.1,
		.weight = 158.8,
		.description = gPuppy_Mutt_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TERRIER] =
	{
		.categoryName = _("Terrier"),
		.height = 7.1,
		.weight = 204.1,
		.description = gTerrierPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHEEPDOG] =
	{
		.categoryName = _("Shepherding"),
		.height = 9.1,
		.weight = 356.5,
		.description = gSheepdogPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DALMATIAN] =
	{
		.categoryName = _("Spotted Dog"),
		.height = 7.1,
		.weight = 301.6,
		.description = gDalmatianPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GREYHOUND] =
	{
		.categoryName = _("Lapdog"),
		.height = 7.4,
		.weight = 191,
		.description = gGreyhoundPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BULLDOG] =
	{
		.categoryName = _("Bully"),
		.height = 6.5,
		.weight = 324.3,
		.description = gBulldogPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LABRADOR] =
	{
		.categoryName = _("Fluffy"),
		.height = 8.6,
		.weight = 282.1,
		.description = gLabradorPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CORGI] =
	{
		.categoryName = _("Queens Pet"),
		.height = 6.2,
		.weight = 99.8,
		.description = gCorgiPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TERROR_DOG] =
	{
		.categoryName = _("Terrifying"),
		.height = 18.3,
		.weight = 771.1,
		.description = gTerror_DogPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STRAY_DOG] =
	{
		.categoryName = _("Mangy Mutt"),
		.height = 7.1,
		.weight = 181.4,
		.description = gStray_DogPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MUNCHER] =
	{
		.categoryName = _("Deaths Pet"),
		.height = 6.2,
		.weight = 136.1,
		.description = gMuncherPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HELLPUPPY] =
	{
		.categoryName = _("Barking "),
		.height = 4.1,
		.weight = 181.4,
		.description = gHellpuppyPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HELLHOUND] =
	{
		.categoryName = _("UnniceDoggy"),
		.height = 9.9,
		.weight = 492.1,
		.description = gHellhoundPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CERBERUS] =
	{
		.categoryName = _("ThreeHeaded"),
		.height = 26.2,
		.weight = 2562.8,
		.description = gCerberusPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KITTEN] =
	{
		.categoryName = _("Kitten"),
		.height = 3.3,
		.weight = 37.6,
		.description = gKittenPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CAT_NORMAL_FORM] =
	{
		.categoryName = _("Cat "),
		.height = 6.4,
		.weight = 79.8,
		.description = gCat_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CAT_OVERGROWN_FORM] =
	{
		.categoryName = _("Old Lived"),
		.height = 6.9,
		.weight = 63.5,
		.description = gCat_Overgrown_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CAT_LAZY_FORM] =
	{
		.categoryName = _("Untrained"),
		.height = 6.4,
		.weight = 115.7,
		.description = gCat_Lazy_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CAT_WILY_FORM] =
	{
		.categoryName = _("RatCatching"),
		.height = 6.9,
		.weight = 91.6,
		.description = gCat_Wily_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CAT_PURPLE_FORM] =
	{
		.categoryName = _("Goulash"),
		.height = 6.4,
		.weight = 79.8,
		.description = gCat_Purple_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CAT_HELL_FORM] =
	{
		.categoryName = _("InfernalCat"),
		.height = 6.9,
		.weight = 91.6,
		.description = gCat_Hell_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CAT_POST_FORM] =
	{
		.categoryName = _("Duty Bound"),
		.height = 6.4,
		.weight = 80.4,
		.description = gCat_Post_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CAT_SUNKEN_FORM] =
	{
		.categoryName = _("XauTakitten"),
		.height = 6.4,
		.weight = 70.8,
		.description = gCat_Sunken_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BOB] =
	{
		.categoryName = _("Bob"),
		.height = 6.9,
		.weight = 77.2,
		.description = gBobPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EVIL_BOB] =
	{
		.categoryName = _("Scaperune"),
		.height = 6.9,
		.weight = 77.2,
		.description = gEvil_BobPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PET_ROCK] =
	{
		.categoryName = _("Companion"),
		.height = 1.0,
		.weight = 15.4,
		.description = gPet_RockPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STRYKEWYRM_FREEZY_FORM] =
	{
		.categoryName = _("Youtuber"),
		.height = 15.7,
		.weight = 185.5,
		.description = gStrykewyrm_Freezy_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STRYKEWYRM_LEAFY_FORM] =
	{
		.categoryName = _("Leafy"),
		.height = 15.7,
		.weight = 185.5,
		.description = gStrykewyrm_Leafy_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STRYKEWYRM_SANDY_FORM] =
	{
		.categoryName = _("Sandy"),
		.height = 15.7,
		.weight = 185.5,
		.description = gStrykewyrm_Sandy_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STRYKEWYRM_WILDY_FORM] =
	{
		.categoryName = _("Wildy "),
		.height = 15.7,
		.weight = 185.5,
		.description = gStrykewyrm_Wildy_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCORPLING] =
	{
		.categoryName = _("Stinging"),
		.height = 3.6,
		.weight = 24.9,
		.description = gScorplingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCORPION_NORMAL_FORM] =
	{
		.categoryName = _("RoyalStinge"),
		.height = 13.5,
		.weight = 130.6,
		.description = gScorpion_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PEEPLING] =
	{
		.categoryName = _("Peeping"),
		.height = 1.8,
		.weight = 36.3,
		.description = gPeeplingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SNEAKRPEEP] =
	{
		.categoryName = _("Staring"),
		.height = 3.5,
		.weight = 114.4,
		.description = gSneakrpeepPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RUNTSTABLE] =
	{
		.categoryName = _("Runt"),
		.height = 6.1,
		.weight = 190.5,
		.description = gRuntstablePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BASILISK] =
	{
		.categoryName = _("Petrifying"),
		.height = 15.5,
		.weight = 635.0,
		.description = gBasiliskPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BABY_MOLE] =
	{
		.categoryName = _("Mole"),
		.height = 3.6,
		.weight = 95.3,
		.description = gBaby_MolePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_MOLE] =
	{
		.categoryName = _("Mole Menace"),
		.height = 20.1,
		.weight = 1810.0,
		.description = gGiant_MolePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SQUIRREL] =
	{
		.categoryName = _("Nut Eater"),
		.height = 2.4,
		.weight = 9.1,
		.description = gSquirrelPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RAVENLING] =
	{
		.categoryName = _("Nevermore"),
		.height = 2.2,
		.weight = 6.8,
		.description = gRavenlingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RAVEN_NORMAL_FORM] =
	{
		.categoryName = _("Raven"),
		.height = 5.7,
		.weight = 99.8,
		.description = gRaven_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RAVEN_NEVERMORE_FORM] =
	{
		.categoryName = _("Raven"),
		.height = 5.7,
		.weight = 99.8,
		.description = gRaven_Nevermore_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MAGPIE] =
	{
		.categoryName = _("ShinyHunter"),
		.height = 2.6,
		.weight = 22.7,
		.description = gMagpiePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHINCHOMPA_GREY_FORM] =
	{
		.categoryName = _("Exploding"),
		.height = 1.5,
		.weight = 35.4,
		.description = gChinchompa_Grey_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHINCHOMPA_RED_FORM] =
	{
		.categoryName = _("Ferocious"),
		.height = 2.5,
		.weight = 40.8,
		.description = gChinchompa_Red_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHINCHOMPA_GOLD_FORM] =
	{
		.categoryName = _("Undetonated"),
		.height = 2.5,
		.weight = 40.8,
		.description = gChinchompa_Gold_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VULTLING] =
	{
		.categoryName = _("Vulture"),
		.height = 2.4,
		.weight = 31.8,
		.description = gVultlingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VULTURE] =
	{
		.categoryName = _("Scavending"),
		.height = 6.3,
		.weight = 131.5,
		.description = gVulturePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PENGLING] =
	{
		.categoryName = _("Penguin"),
		.height = 2.9,
		.weight = 18.1,
		.description = gPenglingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PENGUIN] =
	{
		.categoryName = _("KGP"),
		.height = 4.8,
		.weight = 86.2,
		.description = gPenguinPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EXEXPARROT] =
	{
		.categoryName = _("Dead"),
		.height = 3.7,
		.weight = 68.0,
		.description = gExExParrotPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BROAV] =
	{
		.categoryName = _("Smelling"),
		.height = 10.9,
		.weight = 435.4,
		.description = gBroavPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOOTHS] =
	{
		.categoryName = _("Fang"),
		.height = 7.1,
		.weight = 340.2,
		.description = gToothsPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RUNE_GUARDIAN] =
	{
		.categoryName = _("Rune Golem"),
		.height = 8.9,
		.weight = 136.1,
		.description = gRune_GuardianPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GNOMEY] =
	{
		.categoryName = _("Unwarranted"),
		.height = 5.2,
		.weight = 272.2,
		.description = gGnomeyPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPARKLES] =
	{
		.categoryName = _("TinselSnake"),
		.height = 8.0,
		.weight = 31.8,
		.description = gSparklesPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BAT] =
	{
		.categoryName = _("Bat"),
		.height = 2.7,
		.weight = 2.3,
		.description = gBatPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_BAT] =
	{
		.categoryName = _("Giant Bat"),
		.height = 7.5,
		.weight = 13.6,
		.description = gGiant_BatPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WARPED_BAT] =
	{
		.categoryName = _("Bat"),
		.height = 7.5,
		.weight = 13.6,
		.description = gWarped_BatPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ALBINO_BAT] =
	{
		.categoryName = _("White Bat"),
		.height = 7.5,
		.weight = 13.6,
		.description = gAlbino_BatPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BAT_BOX_FORM] =
	{
		.categoryName = _("Wittness"),
		.height = 3.8,
		.weight = 4.5,
		.description = gBat_Box_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FRUIT_BAT] =
	{
		.categoryName = _("Herbivore"),
		.height = 7.5,
		.weight = 13.6,
		.description = gFruit_BatPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VAMPYREBAT] =
	{
		.categoryName = _("BloodSuckin"),
		.height = 7.5,
		.weight = 13.6,
		.description = gVampyreBatPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_IMP] =
	{
		.categoryName = _("Fire Imp"),
		.height = 3.1,
		.weight = 15.9,
		.description = gImpPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEMON_LESSER_NORMAL_FORM] =
	{
		.categoryName = _("Byzroth"),
		.height = 18.5,
		.weight = 499.0,
		.description = gDemon_Lesser_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEMON_GREATER_NORMAL_FORM] =
	{
		.categoryName = _("Alyaroth"),
		.height = 22.9,
		.weight = 879.0,
		.description = gDemon_Greater_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KALGERION] =
	{
		.categoryName = _("Kalgerion"),
		.height = 24.6,
		.weight = 2086.5,
		.description = gKalgerionPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PYREFIEND] =
	{
		.categoryName = _("Fire Fiend"),
		.height = 7.5,
		.weight = 68.0,
		.description = gPyrefiendPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PYRELORD] =
	{
		.categoryName = _("Pyre Fiend"),
		.height = 10.2,
		.weight = 136.1,
		.description = gPyrelordPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WATERFIEND] =
	{
		.categoryName = _("Water Fiend"),
		.height = 7.5,
		.weight = 68.0,
		.description = gWaterfiendPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WATERLORD] =
	{
		.categoryName = _("Sea Fiend"),
		.height = 10.2,
		.weight = 136.1,
		.description = gWaterlordPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ICEFIEND] =
	{
		.categoryName = _("Ice Fiend"),
		.height = 7.5,
		.weight = 68.0,
		.description = gIcefiendPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ICELORD] =
	{
		.categoryName = _("FrozenFiend"),
		.height = 10.2,
		.weight = 136.1,
		.description = gIcelordPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PHOENLING_REBIRTH_FORM] =
	{
		.categoryName = _("Reborn"),
		.height = 2.6,
		.weight = 13.6,
		.description = gPhoenling_Rebirth_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PHOENLING_REBORN_FORM] =
	{
		.categoryName = _("Rebirthed"),
		.height = 2.6,
		.weight = 13.6,
		.description = gPhoenling_Reborn_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PHOENIX_REBIRTH_FORM] =
	{
		.categoryName = _("Ascended"),
		.height = 6.0,
		.weight = 122.5,
		.description = gPhoenix_Rebirth_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PHOENIX_REBORN_FORM] =
	{
		.categoryName = _("Incadescent"),
		.height = 6.0,
		.weight = 122.5,
		.description = gPhoenix_Reborn_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EVILTURNIP] =
	{
		.categoryName = _("Evil Turnip"),
		.height = 3.1,
		.weight = 68.0,
		.description = gEvilTurnipPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CREATURE_CUTE_FORM] =
	{
		.categoryName = _("Innocent"),
		.height = 2.9,
		.weight = 81.6,
		.description = gCreature_Cute_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CREATURE_EVIL_FORM] =
	{
		.categoryName = _("Guilty"),
		.height = 2.9,
		.weight = 81.6,
		.description = gCreature_Evil_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BABY_YAK] =
	{
		.categoryName = _("Babyroo"),
		.height = 11.4,
		.weight = 213.2,
		.description = gBaby_YakPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_YAK_NORMAL_FORM] =
	{
		.categoryName = _("Yak"),
		.height = 17.6,
		.weight = 714.4,
		.description = gYak_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_YAK_PACK_FORM] =
	{
		.categoryName = _("Baroo"),
		.height = 17.6,
		.weight = 925.3,
		.description = gYak_Pack_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_YAK_SACRED_FORM] =
	{
		.categoryName = _("Enlightened"),
		.height = 17.6,
		.weight = 925.3,
		.description = gYak_Sacred_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_YAK_CLUESCROLL_FORM] =
	{
		.categoryName = _("Treasure"),
		.height = 17.6,
		.weight = 925.3,
		.description = gYak_ClueScroll_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MINITRICE] =
	{
		.categoryName = _("Minitrice"),
		.height = 4.2,
		.weight = 45.4,
		.description = gMinitricePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COCKATRICE] =
	{
		.categoryName = _("Egg Laying"),
		.height = 8.9,
		.weight = 127.0,
		.description = gCockatricePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GUTHATRICE] =
	{
		.categoryName = _("Balanctrice"),
		.height = 8.9,
		.weight = 127.0,
		.description = gGuthatricePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZAMATRICE] =
	{
		.categoryName = _("Chaostrice"),
		.height = 8.9,
		.weight = 127.0,
		.description = gZamatricePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SARATRICE] =
	{
		.categoryName = _("Wisdomtrice"),
		.height = 8.9,
		.weight = 127.0,
		.description = gSaratricePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CORXATRICE] =
	{
		.categoryName = _("Nevrmotrice"),
		.height = 8.9,
		.weight = 127.0,
		.description = gCorxatricePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VULATRICE] =
	{
		.categoryName = _("Scavngtrice"),
		.height = 8.9,
		.weight = 127.0,
		.description = gVulatricePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PENGATRICE] =
	{
		.categoryName = _("Kgptrice"),
		.height = 8.9,
		.weight = 127.0,
		.description = gPengatricePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHOCATRICE] =
	{
		.categoryName = _("Fudgetrice"),
		.height = 8.9,
		.weight = 127.0,
		.description = gChocatricePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPROUTLING_SUMMER_FORM] =
	{
		.categoryName = _("Summer"),
		.height = 5.7,
		.weight = 68.0,
		.description = gSproutling_Summer_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPROUTLING_SPRING_FORM] =
	{
		.categoryName = _("Spring"),
		.height = 5.7,
		.weight = 68.0,
		.description = gSproutling_Spring_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPROUTLING_WINTER_FORM] =
	{
		.categoryName = _("Winter"),
		.height = 5.7,
		.weight = 68.0,
		.description = gSproutling_Winter_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPROUTLING_AUTUMN_FORM] =
	{
		.categoryName = _("Autumn"),
		.height = 5.7,
		.weight = 68.0,
		.description = gSproutling_Autumn_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KALPHITE_WORKER_FORM] =
	{
		.categoryName = _("Working"),
		.height = 12.3,
		.weight = 113.4,
		.description = gKalphite_Worker_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KALPHITE_SOLDIER_FORM] =
	{
		.categoryName = _("Soldier"),
		.height = 14.8,
		.weight = 263.1,
		.description = gKalphite_Soldier_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KALPHITE_GUARDIAN_FORM] =
	{
		.categoryName = _("Guardian"),
		.height = 22.5,
		.weight = 784.7,
		.description = gKalphite_Guardian_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KALPHITE_QUEEN_FORM] =
	{
		.categoryName = _("Queen "),
		.height = 26.4,
		.weight = 1292.7,
		.description = gKalphite_Queen_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KALPHITE_KING_FORM] =
	{
		.categoryName = _("King"),
		.height = 26.4,
		.weight = 1360.8,
		.description = gKalphite_King_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RUE] =
	{
		.categoryName = _("Rune Dragon"),
		.height = 5.5,
		.weight = 88.5,
		.description = gRuePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MONTY] =
	{
		.categoryName = _("DArtaconda"),
		.height = 8.5,
		.weight = 106.6,
		.description = gMontyPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZYGOMITE] =
	{
		.categoryName = _("Mushroom"),
		.height = 12.7,
		.weight = 167.8,
		.description = gZygomitePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ABYSSALING] =
	{
		.categoryName = _("Unsired"),
		.height = 5.2,
		.weight = 40.8,
		.description = gAbyssalingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ABYSSAL_MINION_FORM] =
	{
		.categoryName = _("Abby Minion"),
		.height = 7.9,
		.weight = 276.7,
		.description = gAbyssal_Minion_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ABYSSAL_DEMON_FORM] =
	{
		.categoryName = _("RiftWeaving"),
		.height = 10.1,
		.weight = 489.9,
		.description = gAbyssal_Demon_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ABYSSAL_SIRE_FORM] =
	{
		.categoryName = _("Sired"),
		.height = 28.6,
		.weight = 3415.6,
		.description = gAbyssal_Sire_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ABYSSAL_PARASITE_FORM] =
	{
		.categoryName = _("Parasite"),
		.height = 3.5,
		.weight = 68.0,
		.description = gAbyssal_Parasite_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ABYSSAL_LURKER_FORM] =
	{
		.categoryName = _("Lurker"),
		.height = 3.9,
		.weight = 131.5,
		.description = gAbyssal_Lurker_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ABYSSAL_TITAN_FORM] =
	{
		.categoryName = _("Abby Giant"),
		.height = 19.0,
		.weight = 893.6,
		.description = gAbyssal_Titan_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TZ_KIH] =
	{
		.categoryName = _("Kih"),
		.height = 5.2,
		.weight = 63.5,
		.description = gTz_KihPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TZ_KEK] =
	{
		.categoryName = _("Kek"),
		.height = 10.3,
		.weight = 362.9,
		.description = gTz_KekPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOK_XIL] =
	{
		.categoryName = _("Xil "),
		.height = 22.0,
		.weight = 734.8,
		.description = gTok_XilPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KET_DILL] =
	{
		.categoryName = _("KetDill"),
		.height = 17.3,
		.weight = 839.1,
		.description = gKet_DillPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KET_ZEK] =
	{
		.categoryName = _("Zek"),
		.height = 29.9,
		.weight = 1719.1,
		.description = gKet_ZekPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_YT_HURKOT] =
	{
		.categoryName = _("Hutkot"),
		.height = 3.7,
		.weight = 72.6,
		.description = gYt_HurKotPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_YT_MEJKOT] =
	{
		.categoryName = _("Mejkot"),
		.height = 25.5,
		.weight = 1197.5,
		.description = gYt_MejKotPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TZREK_JAD] =
	{
		.categoryName = _("Mini Jad"),
		.height = 7.5,
		.weight = 394.6,
		.description = gTzRek_JadPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TZTOK_JAD] =
	{
		.categoryName = _("Jad"),
		.height = 46.7,
		.weight = 4554.1,
		.description = gTzTok_JadPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JAL_NIB] =
	{
		.categoryName = _("Nib"),
		.height = 2.1,
		.weight = 99.8,
		.description = gJal_NibPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JAL_MEJRAH] =
	{
		.categoryName = _("Merah"),
		.height = 5.3,
		.weight = 154.2,
		.description = gJal_MejRahPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JAL_AK] =
	{
		.categoryName = _("Ak"),
		.height = 10.7,
		.weight = 521.6,
		.description = gJal_AkPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JAL_IMKOT] =
	{
		.categoryName = _("Imkot"),
		.height = 25.9,
		.weight = 1796.2,
		.description = gJal_ImKotPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JAL_ZEK] =
	{
		.categoryName = _("Zek"),
		.height = 30.4,
		.weight = 3551.6,
		.description = gJal_ZekPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JALTOK_JAD] =
	{
		.categoryName = _("New Jad"),
		.height = 50.5,
		.weight = 7543.2,
		.description = gJalTok_JadPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TZKAL_ZUK] =
	{
		.categoryName = _("Zuk"),
		.height = 64.9,
		.weight = 13369.6,
		.description = gTzKal_ZukPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DUCKLING] =
	{
		.categoryName = _("Duckling"),
		.height = 0.9,
		.weight = 0.9,
		.description = gDucklingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SWAN] =
	{
		.categoryName = _("Demon Bird"),
		.height = 5.3,
		.weight = 59.0,
		.description = gSwanPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DUCK_NORMAL_FORM] =
	{
		.categoryName = _("Duck"),
		.height = 3.8,
		.weight = 13.6,
		.description = gDuck_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MEGA_DUCK] =
	{
		.categoryName = _("Mega Duck"),
		.height = 4.8,
		.weight = 31.8,
		.description = gMega_DuckPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DUCK_CART_FORM] =
	{
		.categoryName = _("SupremeDuck"),
		.height = 3.8,
		.weight = 13.6,
		.description = gDuck_Cart_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PLATYPODE] =
	{
		.categoryName = _("Pode"),
		.height = 1.9,
		.weight = 9.1,
		.description = gPlatypodePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PLATYPUS] =
	{
		.categoryName = _("Platypus"),
		.height = 3.4,
		.weight = 27.2,
		.description = gPlatypusPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FLEDGLING] =
	{
		.categoryName = _("Fledgling"),
		.height = 6.5,
		.weight = 45.4,
		.description = gFledglingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DAGANNOTH_NORMAL_FORM] =
	{
		.categoryName = _("DaggerTooth"),
		.height = 12.7,
		.weight = 154.2,
		.description = gDagannoth_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DAGANNOTH_GUARDIAN_FORM] =
	{
		.categoryName = _("DaggerGuard"),
		.height = 12.7,
		.weight = 154.2,
		.description = gDagannoth_Guardian_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DAGANNOTH_KING_RANGE_FORM] =
	{
		.categoryName = _("Supreme  "),
		.height = 32.4,
		.weight = 2685.3,
		.description = gDagannoth_King_Range_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DAGANNOTH_KING_MAGIC_FORM] =
	{
		.categoryName = _("Prime"),
		.height = 32.4,
		.weight = 2685.3,
		.description = gDagannoth_King_Magic_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DAGANNOTH_KING_MELEE_FORM] =
	{
		.categoryName = _("Rex"),
		.height = 32.4,
		.weight = 2685.3,
		.description = gDagannoth_King_Melee_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DAGANNOTH_KING_RANGE_MEGA_FORM] =
	{
		.categoryName = _("Supreme"),
		.height = 32.4,
		.weight = 2685.3,
		.description = gDagannoth_King_Range_Mega_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DAGANNOTH_KING_MAGIC_MEGA_FORM] =
	{
		.categoryName = _("Prime"),
		.height = 32.4,
		.weight = 2685.3,
		.description = gDagannoth_King_Magic_Mega_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DAGANNOTH_KING_MELEE_MEGA_FORM] =
	{
		.categoryName = _("Rex"),
		.height = 32.4,
		.weight = 2685.3,
		.description = gDagannoth_King_Melee_Mega_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHAOS_ELE] =
	{
		.categoryName = _("Chaos "),
		.height = 19.9,
		.weight = 1977.7,
		.description = gChaos_ElePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHAOS_ELE_MEGA_FORM] =
	{
		.categoryName = _("EllementL"),
		.height = 19.9,
		.weight = 1977.7,
		.description = gChaos_Ele_Mega_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BANDLING] =
	{
		.categoryName = _("Small Claw"),
		.height = 1.5,
		.weight = 12.7,
		.description = gBandlingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BANDBIRD] =
	{
		.categoryName = _("Young Eagle"),
		.height = 3.6,
		.weight = 44.0,
		.description = gBandbirdPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BANDEAGLE] =
	{
		.categoryName = _("War Eagle"),
		.height = 6.3,
		.weight = 90.7,
		.description = gBandeaglePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZAROLING] =
	{
		.categoryName = _("SmalGlimmer"),
		.height = 1.5,
		.weight = 10.4,
		.description = gZarolingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZAROBIRD] =
	{
		.categoryName = _("Young Raven"),
		.height = 3.6,
		.weight = 34.9,
		.description = gZarobirdPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ZARAVEN] =
	{
		.categoryName = _("Empty Raven"),
		.height = 6.3,
		.weight = 73.5,
		.description = gZaravenPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SERELING] =
	{
		.categoryName = _("Small Light"),
		.height = 1.5,
		.weight = 10.0,
		.description = gSerelingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SEREBIRD] =
	{
		.categoryName = _("Young Fowl"),
		.height = 3.6,
		.weight = 36.3,
		.description = gSerebirdPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SEREPEA] =
	{
		.categoryName = _("Crystal Pea"),
		.height = 6.3,
		.weight = 78.2,
		.description = gSerepeaPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FROGSPAWN] =
	{
		.categoryName = _("Frogspawn"),
		.height = 0.4,
		.weight = 1.4,
		.description = gFrogspawnPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FROG_NORMAL_FORM] =
	{
		.categoryName = _("Frog "),
		.height = 1.4,
		.weight = 11.3,
		.description = gFrog_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_FROG_NORMAL_FORM] =
	{
		.categoryName = _("Cuisine"),
		.height = 5.6,
		.weight = 47.6,
		.description = gGiant_Frog_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_FROG_ROYAL_FORM] =
	{
		.categoryName = _("Distressed"),
		.height = 5.6,
		.weight = 63.5,
		.description = gGiant_Frog_Royal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FROG_BLOATED_FORM] =
	{
		.categoryName = _("Flatulence"),
		.height = 7.2,
		.weight = 86.2,
		.description = gFrog_Bloated_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FROG_BALLOON_FORM] =
	{
		.categoryName = _("Balloon "),
		.height = 7.2,
		.weight = 86.2,
		.description = gFrog_Balloon_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOAD_BARKER_FORM] =
	{
		.categoryName = _("Loud Toad"),
		.height = 7.2,
		.weight = 86.2,
		.description = gToad_Barker_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FROGEEL] =
	{
		.categoryName = _("Frogeel"),
		.height = 6.7,
		.weight = 99.8,
		.description = gFrogeelPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPIDERLING] =
	{
		.categoryName = _("Spider"),
		.height = 0.5,
		.weight = 0.4,
		.description = gSpiderlingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPIDER_GIANT_FORM] =
	{
		.categoryName = _("GiantSpider"),
		.height = 4.3,
		.weight = 2.7,
		.description = gSpider_Giant_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPIDER_HUGE_FORM] =
	{
		.categoryName = _("HouseSpider"),
		.height = 4.3,
		.weight = 2.7,
		.description = gSpider_Huge_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPIDER_DEADLYRED_FORM] =
	{
		.categoryName = _("Deadly Red"),
		.height = 5.1,
		.weight = 3.2,
		.description = gSpider_DeadlyRed_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPIDER_NIGHT_FORM] =
	{
		.categoryName = _("NightSpider"),
		.height = 12.0,
		.weight = 68.0,
		.description = gSpider_Night_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPIDER_BLESSED_FORM] =
	{
		.categoryName = _("Iban Spider"),
		.height = 12.0,
		.weight = 68.0,
		.description = gSpider_Blessed_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPIDER_JUNGLE_FORM] =
	{
		.categoryName = _("Jungle"),
		.height = 12.0,
		.weight = 68.0,
		.description = gSpider_Jungle_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPIDER_ICE_FORM] =
	{
		.categoryName = _("Ice Spider"),
		.height = 12.0,
		.weight = 68.0,
		.description = gSpider_Ice_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EEK] =
	{
		.categoryName = _("Friendly"),
		.height = 0.5,
		.weight = 0.9,
		.description = gEekPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MINSTRLWEB] =
	{
		.categoryName = _("Bathtub"),
		.height = 12.0,
		.weight = 68.0,
		.description = gMinstrlWebPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPIDINE] =
	{
		.categoryName = _("Nutritious"),
		.height = 4.3,
		.weight = 10.4,
		.description = gSpidinePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRAWLER_CAVE_FORM] =
	{
		.categoryName = _("Crawling"),
		.height = 5.6,
		.weight = 72.6,
		.description = gCrawler_Cave_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRAWLER_CHASM_FORM] =
	{
		.categoryName = _("Crawler"),
		.height = 6.0,
		.weight = 77.1,
		.description = gCrawler_Chasm_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRAWLER_MONSTROUS_FORM] =
	{
		.categoryName = _("Crawled"),
		.height = 8.7,
		.weight = 235.9,
		.description = gCrawler_Monstrous_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WINSTON] =
	{
		.categoryName = _("Baby Turtle"),
		.height = 2.2,
		.weight = 13.6,
		.description = gWinstonPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TORTOISE_NORMAL_FORM] =
	{
		.categoryName = _("Tortoise"),
		.height = 9.8,
		.weight = 176.9,
		.description = gTortoise_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TORTOISE_WARPED_FORM] =
	{
		.categoryName = _("Aposandran"),
		.height = 10.0,
		.weight = 204.1,
		.description = gTortoise_Warped_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TORTOISE_WAR_FORM] =
	{
		.categoryName = _("Burdened"),
		.height = 10.0,
		.weight = 204.1,
		.description = gTortoise_War_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VALLUTA] =
	{
		.categoryName = _("Protector"),
		.height = 11.6,
		.weight = 235.9,
		.description = gVallutaPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SEA_TURTLE] =
	{
		.categoryName = _("Sea Turtle"),
		.height = 7.5,
		.weight = 108.9,
		.description = gSea_TurtlePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CAVE_SLIME] =
	{
		.categoryName = _("Slime "),
		.height = 6.2,
		.weight = 0.5,
		.description = gCave_SlimePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JELLY_NORMAL_FORM] =
	{
		.categoryName = _("Jelly"),
		.height = 14.5,
		.weight = 4.5,
		.description = gJelly_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JELLY_WARPED_FORM] =
	{
		.categoryName = _("Cube"),
		.height = 14.5,
		.weight = 4.5,
		.description = gJelly_Warped_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JELLY_SPIRIT_FORM] =
	{
		.categoryName = _("Box"),
		.height = 14.5,
		.weight = 4.5,
		.description = gJelly_Spirit_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SALAMANDER_GREEN_FORM] =
	{
		.categoryName = _("Guam"),
		.height = 1.2,
		.weight = 25.4,
		.description = gSalamander_Green_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SALAMANDER_ORANGE_FORM] =
	{
		.categoryName = _("Marrentil"),
		.height = 1.2,
		.weight = 25.4,
		.description = gSalamander_Orange_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SALAMANDER_RED_FORM] =
	{
		.categoryName = _("Torrentil"),
		.height = 1.2,
		.weight = 25.4,
		.description = gSalamander_Red_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SALAMANDER_BLACK_FORM] =
	{
		.categoryName = _("cupholder"),
		.height = 1.2,
		.weight = 25.4,
		.description = gSalamander_Black_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SALAMANDER_AUGMENTED_FORM] =
	{
		.categoryName = _("cupholder"),
		.height = 1.4,
		.weight = 25.4,
		.description = gSalamander_Augmented_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GECKO] =
	{
		.categoryName = _("cupholder"),
		.height = 2.5,
		.weight = 40.8,
		.description = gGeckoPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHAMELEON] =
	{
		.categoryName = _("cupholder"),
		.height = 4.9,
		.weight = 59.0,
		.description = gChameleonPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BLOODVELD] =
	{
		.categoryName = _("cupholder"),
		.height = 15.8,
		.weight = 816.5,
		.description = gBloodveldPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BLOODVELD_INSATIABLE_PHYSICAL_FORM] =
	{
		.categoryName = _("cupholder"),
		.height = 16.8,
		.weight = 916.3,
		.description = gBloodveld_Insatiable_Physical_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BLOODVELD_INSATIABLE_SPECIAL_FORM] =
	{
		.categoryName = _("cupholder"),
		.height = 16.8,
		.weight = 916.3,
		.description = gBloodveld_Insatiable_Special_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BLOODVELD_MUTATED_PHYSICAL_FORM] =
	{
		.categoryName = _("cupholder"),
		.height = 16.8,
		.weight = 916.3,
		.description = gBloodveld_Mutated_Physical_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BLOODVELD_MUTATED_SPECIAL_FORM] =
	{
		.categoryName = _("cupholder"),
		.height = 16.8,
		.weight = 916.3,
		.description = gBloodveld_Mutated_Special_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ARMALING] =
	{
		.categoryName = _("Small Gale"),
		.height = 1.5,
		.weight = 13.6,
		.description = gArmalingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ARMABIRD] =
	{
		.categoryName = _("YoungFalcon"),
		.height = 3.6,
		.weight = 37.2,
		.description = gArmabirdPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ARMAFALCON] =
	{
		.categoryName = _("Law Falcon"),
		.height = 6.3,
		.weight = 79.4,
		.description = gArmafalconPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_UNGODLING] =
	{
		.categoryName = _("Small Might"),
		.height = 1.5,
		.weight = 14.5,
		.description = gUngodlingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_UNGODBIRD] =
	{
		.categoryName = _("YoungPigeon"),
		.height = 3.6,
		.weight = 38.6,
		.description = gUngodbirdPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_UNGODGEON] =
	{
		.categoryName = _("Mortal"),
		.height = 6.3,
		.weight = 74.8,
		.description = gUngodgeonPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TUMEKLING] =
	{
		.categoryName = _("Small Feet "),
		.height = 1.5,
		.weight = 11.3,
		.description = gTumeklingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TUMEKBIRD] =
	{
		.categoryName = _("Young Ibis"),
		.height = 3.6,
		.weight = 31.8,
		.description = gTumekbirdPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TUMEKIBIS] =
	{
		.categoryName = _("Desert Ibis"),
		.height = 6.3,
		.weight = 72.6,
		.description = gTumekibisPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KERRIT] =
	{
		.categoryName = _("Kerrit"),
		.height = 1.9,
		.weight = 45.4,
		.description = gKerritPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SNUFFLE] =
	{
		.categoryName = _("Snuffle"),
		.height = 13.8,
		.weight = 176.9,
		.description = gSnufflePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_POPOCA] =
	{
		.categoryName = _("Popoca"),
		.height = 14.0,
		.weight = 294.8,
		.description = gPopocaPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHOLOA] =
	{
		.categoryName = _("Choloa"),
		.height = 11.7,
		.weight = 254.0,
		.description = gCholoaPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DURZAG] =
	{
		.categoryName = _("Durzag"),
		.height = 22.4,
		.weight = 1723.7,
		.description = gDurzagPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_YAKAMARU] =
	{
		.categoryName = _("WaterSpirit"),
		.height = 26.3,
		.weight = 18057.5,
		.description = gYakamaruPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_XINACHTO] =
	{
		.categoryName = _("Xinachto"),
		.height = 16.3,
		.weight = 1134.0,
		.description = gXinachtoPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHOMPY] =
	{
		.categoryName = _("Ogre Meal"),
		.height = 4.9,
		.weight = 104.3,
		.description = gChompyPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JUBBLY] =
	{
		.categoryName = _("Ogre Feast"),
		.height = 17.3,
		.weight = 798.3,
		.description = gJubblyPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TERRORBIRD_NORMAL_FORM] =
	{
		.categoryName = _("Gnome Bird"),
		.height = 15.2,
		.weight = 644.1,
		.description = gTerrorbird_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TERRORBIRD_WARPED_FORM] =
	{
		.categoryName = _("Aposandrian"),
		.height = 15.2,
		.weight = 644.1,
		.description = gTerrorbird_Warped_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TERRORBIRD_SPIRIT_FORM] =
	{
		.categoryName = _("PackageBird"),
		.height = 15.2,
		.weight = 644.1,
		.description = gTerrorbird_Spirit_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JUBSTER] =
	{
		.categoryName = _("True Feast"),
		.height = 17.3,
		.weight = 798.3,
		.description = gJubsterPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WOLF_JUVENILE_FORM] =
	{
		.categoryName = _("Juvenile"),
		.height = 5.8,
		.weight = 59.0,
		.description = gWolf_Juvenile_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WOLF_NORMAL_FORM] =
	{
		.categoryName = _("Wold"),
		.height = 11.6,
		.weight = 612.3,
		.description = gWolf_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WOLF_WHITE_FORM] =
	{
		.categoryName = _("White Wolf"),
		.height = 11.6,
		.weight = 612.3,
		.description = gWolf_White_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WOLF_FENRIS_FORM] =
	{
		.categoryName = _("Fenris "),
		.height = 11.6,
		.weight = 612.3,
		.description = gWolf_Fenris_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WOLF_DIRE_FORM] =
	{
		.categoryName = _("Dire Wolf"),
		.height = 12.5,
		.weight = 698.5,
		.description = gWolf_Dire_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WOLF_SKOLL_FORM] =
	{
		.categoryName = _("Sun Eating"),
		.height = 14.7,
		.weight = 1079.6,
		.description = gWolf_Skoll_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WOLF_HATI_HATI] =
	{
		.categoryName = _("WorldEnding"),
		.height = 14.7,
		.weight = 1079.6,
		.description = gWolf_Hati_HatiPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FOX] =
	{
		.categoryName = _("Sly Fox"),
		.height = 4.6,
		.weight = 77.1,
		.description = gFoxPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_INARI] =
	{
		.categoryName = _("Many Tailed"),
		.height = 5.3,
		.weight = 95.3,
		.description = gInariPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WOLF_SPIRIT_FORM] =
	{
		.categoryName = _("Howling"),
		.height = 13.0,
		.weight = 680.4,
		.description = gWolf_Spirit_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HELWYR] =
	{
		.categoryName = _("Spiritual"),
		.height = 14.8,
		.weight = 807.4,
		.description = gHelwyrPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BIRD_NEST] =
	{
		.categoryName = _("Unhatched"),
		.height = 0.6,
		.weight = 4.5,
		.description = gBird_NestPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PIGEON] =
	{
		.categoryName = _("Pigeon"),
		.height = 3.0,
		.weight = 20.4,
		.description = gPigeonPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PHEASANT] =
	{
		.categoryName = _("Pheasant"),
		.height = 4.2,
		.weight = 38.6,
		.description = gPheasantPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCLING] =
	{
		.categoryName = _("SmallBirdie"),
		.height = 3.0,
		.weight = 21.8,
		.description = gRoclingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROC] =
	{
		.categoryName = _("Big Birdie"),
		.height = 6.7,
		.weight = 122.5,
		.description = gRocPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FOAL] =
	{
		.categoryName = _("Foal"),
		.height = 12.3,
		.weight = 181.4,
		.description = gFoalPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_UNICORN_WHITE_FORM] =
	{
		.categoryName = _("Unicorn"),
		.height = 19.7,
		.weight = 1701.0,
		.description = gUnicorn_White_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_UNICORN_STALLION_FORM] =
	{
		.categoryName = _("Stallion"),
		.height = 20.3,
		.weight = 1914.2,
		.description = gUnicorn_Stallion_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PAWYA] =
	{
		.categoryName = _("Papaya"),
		.height = 4.5,
		.weight = 49.9,
		.description = gPawyaPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GRENWALL] =
	{
		.categoryName = _("Grenwall"),
		.height = 4.1,
		.weight = 45.4,
		.description = gGrenwallPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BEAR_CUB] =
	{
		.categoryName = _("Cub"),
		.height = 11.6,
		.weight = 231.3,
		.description = gBear_CubPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BEAR_NORMAL_FORM] =
	{
		.categoryName = _("Bear "),
		.height = 17.4,
		.weight = 1755.4,
		.description = gBear_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KENDALL] =
	{
		.categoryName = _("Cannibal"),
		.height = 18.4,
		.weight = 2118.3,
		.description = gKendallPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_POLAR_BEAR_NORMAL_FORM] =
	{
		.categoryName = _("Pbj"),
		.height = 17.4,
		.weight = 1755.4,
		.description = gPolar_Bear_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_POLAR_BEAR_ARCTIC_FORM] =
	{
		.categoryName = _("Arctic"),
		.height = 17.4,
		.weight = 1755.4,
		.description = gPolar_Bear_Arctic_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GRAAHK_NORMAL_FORM] =
	{
		.categoryName = _("Horned "),
		.height = 16.3,
		.weight = 1632.9,
		.description = gGraahk_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GRAAHK_SPIRIT_FORM] =
	{
		.categoryName = _("SpiritHorns"),
		.height = 16.3,
		.weight = 1632.9,
		.description = gGraahk_Spirit_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DUST_DEVIL] =
	{
		.categoryName = _("Dust "),
		.height = 16.7,
		.weight = 834.6,
		.description = gDust_DevilPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SMOKEDEVIL] =
	{
		.categoryName = _("Smoke"),
		.height = 17.3,
		.weight = 898.1,
		.description = gSmokeDevilPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SMOKEDEVIL_NUCLEAR_FORM] =
	{
		.categoryName = _("Nuclear"),
		.height = 18.0,
		.weight = 1025.1,
		.description = gSmokeDevil_Nuclear_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHOKEDEVIL] =
	{
		.categoryName = _("Choke "),
		.height = 18.0,
		.weight = 1047.8,
		.description = gChokeDevilPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SMOKEDEVIL_THERMONUCLEAR_FORM] =
	{
		.categoryName = _("Themnuclear"),
		.height = 23.5,
		.weight = 1256.5,
		.description = gSmokeDevil_Thermonuclear_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HATCHLING] =
	{
		.categoryName = _("SmallDragon"),
		.height = 4.9,
		.weight = 63.5,
		.description = gHatchlingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGONLING_GREEN_FORM] =
	{
		.categoryName = _("Green "),
		.height = 7.6,
		.weight = 158.8,
		.description = gDragonling_Green_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGON_GREEN_FORM] =
	{
		.categoryName = _("GreenDragon"),
		.height = 21.2,
		.weight = 2549.2,
		.description = gDragon_Green_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGON_BRUTAL_GREEN_FORM] =
	{
		.categoryName = _("BrutalGreen"),
		.height = 23.4,
		.weight = 2630.8,
		.description = gDragon_Brutal_Green_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGONLING_BLUE_FORM] =
	{
		.categoryName = _("Blue"),
		.height = 7.6,
		.weight = 172.4,
		.description = gDragonling_Blue_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGON_BLUE_FORM] =
	{
		.categoryName = _("Blue Dragon"),
		.height = 21.2,
		.weight = 2662.6,
		.description = gDragon_Blue_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGON_BRUTAL_BLUE_FORM] =
	{
		.categoryName = _("Brutal Blue"),
		.height = 23.4,
		.weight = 2721.6,
		.description = gDragon_Brutal_Blue_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGONLING_RED_FORM] =
	{
		.categoryName = _("Red"),
		.height = 7.6,
		.weight = 195.0,
		.description = gDragonling_Red_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGON_RED_FORM] =
	{
		.categoryName = _("Red Dragon"),
		.height = 21.2,
		.weight = 2726.09,
		.description = gDragon_Red_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGON_BRUTAL_RED_FORM] =
	{
		.categoryName = _("Brutal Red"),
		.height = 23.4,
		.weight = 2780.5,
		.description = gDragon_Brutal_Red_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGONLING_BLACK_FORM] =
	{
		.categoryName = _("Black"),
		.height = 7.6,
		.weight = 235.9,
		.description = gDragonling_Black_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGON_BLACK_FORM] =
	{
		.categoryName = _("BlackDragon"),
		.height = 21.2,
		.weight = 2794.1,
		.description = gDragon_Black_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGON_BRUTAL_BLACK_FORM] =
	{
		.categoryName = _("BrutalBlack"),
		.height = 23.4,
		.weight = 2889.4,
		.description = gDragon_Brutal_Black_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGON_THREEHEADED_FORM] =
	{
		.categoryName = _("Tutorial"),
		.height = 22.7,
		.weight = 3002.8,
		.description = gDragon_ThreeHeaded_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ELVARG] =
	{
		.categoryName = _("CrandorsEnd"),
		.height = 26.3,
		.weight = 3057.2,
		.description = gElvargPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGON_KING_BLACK_FORM] =
	{
		.categoryName = _("King Dragon"),
		.height = 54.5,
		.weight = 12188.0,
		.description = gDragon_King_Black_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGON_QUEEN_BLACK_FORM] =
	{
		.categoryName = _("First Drake"),
		.height = 102.8,
		.weight = 15648.9,
		.description = gDragon_Queen_Black_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HAND_CREEPING_FORM] =
	{
		.categoryName = _("Finger "),
		.height = 6.2,
		.weight = 127.0,
		.description = gHand_Creeping_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HAND_CRAWLING_FORM] =
	{
		.categoryName = _("Hand"),
		.height = 7.9,
		.weight = 133.8,
		.description = gHand_Crawling_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HAND_SKELETAL_FORM] =
	{
		.categoryName = _("Hunderus"),
		.height = 8.2,
		.weight = 140.6,
		.description = gHand_Skeletal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HAND_CRUSHING_FORM] =
	{
		.categoryName = _("Palm"),
		.height = 8.6,
		.weight = 149.7,
		.description = gHand_Crushing_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HAND_ZOMBIE_FORM] =
	{
		.categoryName = _("Arm"),
		.height = 8.7,
		.weight = 152.0,
		.description = gHand_Zombie_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TUROTH] =
	{
		.categoryName = _("Turoth"),
		.height = 6.1,
		.weight = 117.9,
		.description = gTurothPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TUROTH_MIGHTIEST_FORM] =
	{
		.categoryName = _("Mighty "),
		.height = 10.5,
		.weight = 222.3,
		.description = gTuroth_Mightiest_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BIG_TUROTH] =
	{
		.categoryName = _("Fanged"),
		.height = 15.7,
		.weight = 331.1,
		.description = gBig_TurothPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SOCKROTH] =
	{
		.categoryName = _("SockWearing"),
		.height = 15.7,
		.weight = 331.1,
		.description = gSockrothPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LILRASK] =
	{
		.categoryName = _("Kura"),
		.height = 6.2,
		.weight = 204.1,
		.description = gLilraskPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KURASK] =
	{
		.categoryName = _("Kuraski"),
		.height = 24.5,
		.weight = 2408.6,
		.description = gKuraskPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KURASK_KING_FORM] =
	{
		.categoryName = _("King Kurask"),
		.height = 30.8,
		.weight = 5506.6,
		.description = gKurask_King_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KURASK_OVERLORD_FORM] =
	{
		.categoryName = _("Kurask "),
		.height = 38.7,
		.weight = 9012.9,
		.description = gKurask_Overlord_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT] =
	{
		.categoryName = _("Kebbit"),
		.height = 5.7,
		.weight = 63.5,
		.description = gKebbitPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT_POLAR_FORM] =
	{
		.categoryName = _("Polar "),
		.height = 5.7,
		.weight = 63.5,
		.description = gKebbit_Polar_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT_SABRE_FORM] =
	{
		.categoryName = _("Sabred"),
		.height = 6.3,
		.weight = 81.6,
		.description = gKebbit_Sabre_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT_SPOTTED_FORM] =
	{
		.categoryName = _("Spotted"),
		.height = 5.7,
		.weight = 63.5,
		.description = gKebbit_Spotted_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT_DARK_FORM] =
	{
		.categoryName = _("Dark Flash"),
		.height = 5.7,
		.weight = 63.5,
		.description = gKebbit_Dark_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT_DASHING_FORM] =
	{
		.categoryName = _("Dashing"),
		.height = 5.7,
		.weight = 63.5,
		.description = gKebbit_Dashing_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT_WILD_FORM] =
	{
		.categoryName = _("Wild Kebbit"),
		.height = 5.7,
		.weight = 63.5,
		.description = gKebbit_Wild_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT_PRICKLY_FORM] =
	{
		.categoryName = _("Prickly"),
		.height = 5.7,
		.weight = 63.5,
		.description = gKebbit_Prickly_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT_RAZOR_FORM] =
	{
		.categoryName = _("Razorbacked"),
		.height = 6.3,
		.weight = 81.6,
		.description = gKebbit_Razor_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT_BIG_FORM] =
	{
		.categoryName = _("Enormeous"),
		.height = 8.9,
		.weight = 99.8,
		.description = gKebbit_Big_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT_DESERTDEVIL_FORM] =
	{
		.categoryName = _("Sand Devil"),
		.height = 5.7,
		.weight = 63.5,
		.description = gKebbit_DesertDevil_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT_FELDIP_WEASEL_FORM] =
	{
		.categoryName = _("Weasel"),
		.height = 5.7,
		.weight = 63.5,
		.description = gKebbit_Feldip_Weasel_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT_BARBED_FORM] =
	{
		.categoryName = _("Barbed"),
		.height = 5.7,
		.weight = 63.5,
		.description = gKebbit_Barbed_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT_DISEASED_FORM] =
	{
		.categoryName = _("Sick"),
		.height = 5.7,
		.weight = 63.5,
		.description = gKebbit_Diseased_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KEBBIT_CHOCOLATE_FORM] =
	{
		.categoryName = _("ChocoKebbit"),
		.height = 5.7,
		.weight = 63.5,
		.description = gKebbit_Chocolate_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MONKEY_NORMAL_FORM] =
	{
		.categoryName = _("Monkey"),
		.height = 4.3,
		.weight = 49.9,
		.description = gMonkey_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MONKEY_NINJA_FORM] =
	{
		.categoryName = _("Ninja "),
		.height = 5.5,
		.weight = 117.9,
		.description = gMonkey_Ninja_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MONKEY_ZOMBIE_FORM] =
	{
		.categoryName = _("Zomkey"),
		.height = 6.6,
		.weight = 158.5,
		.description = gMonkey_Zombie_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GORILLA_NORMAL_FORM] =
	{
		.categoryName = _("Gorilla"),
		.height = 20.1,
		.weight = 1714.6,
		.description = gGorilla_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GORILLA_ANCIENT_FORM] =
	{
		.categoryName = _("Ancient Ape"),
		.height = 20.1,
		.weight = 1714.6,
		.description = gGorilla_Ancient_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LARUPIA_NORMAL_FORM] =
	{
		.categoryName = _("Spined"),
		.height = 11.4,
		.weight = 630.5,
		.description = gLarupia_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LARUPIA_SPIRIT_FORM] =
	{
		.categoryName = _("Larupia "),
		.height = 11.4,
		.weight = 630.5,
		.description = gLarupia_Spirit_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KYATT_NORMAL_FORM] =
	{
		.categoryName = _("Sabre Tooth"),
		.height = 9.8,
		.weight = 657.7,
		.description = gKyatt_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KYATT_SPIRIT_FORM] =
	{
		.categoryName = _("Kyatt"),
		.height = 9.8,
		.weight = 657.7,
		.description = gKyatt_Spirit_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRABLING] =
	{
		.categoryName = _("Hiding"),
		.height = 1.5,
		.weight = 36.3,
		.description = gCrablingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCK_CRAB_NORMAL_FORM] =
	{
		.categoryName = _("Rock Crab"),
		.height = 6.2,
		.weight = 113.4,
		.description = gRock_Crab_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCK_CRAB_GIANT_NORMAL_FORM] =
	{
		.categoryName = _("Big Rock"),
		.height = 20.6,
		.weight = 839.1,
		.description = gRock_Crab_Giant_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCK_CRAB_GIANT_AMMONITE_FORM] =
	{
		.categoryName = _("Ammonite"),
		.height = 21.7,
		.weight = 889.0,
		.description = gRock_Crab_Giant_Ammonite_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LOBSTER_ROCK_FORM] =
	{
		.categoryName = _("Not A Rock"),
		.height = 13.2,
		.weight = 748.4,
		.description = gLobster_Rock_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCK_CRAB_SAND_FORM] =
	{
		.categoryName = _("Sand Crab"),
		.height = 7.0,
		.weight = 285.8,
		.description = gRock_Crab_Sand_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCK_CRAB_SWAMP_FORM] =
	{
		.categoryName = _("Swamp Crab"),
		.height = 7.2,
		.weight = 322.1,
		.description = gRock_Crab_Swamp_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRAB_GRANITE_FORM] =
	{
		.categoryName = _("Granite"),
		.height = 7.8,
		.weight = 353.8,
		.description = gCrab_Granite_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LOBSTER_GRANITE_FORM] =
	{
		.categoryName = _("Lobster"),
		.height = 15.6,
		.weight = 988.8,
		.description = gLobster_Granite_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RABBIT] =
	{
		.categoryName = _("Lucky Pawed"),
		.height = 1.9,
		.weight = 20.4,
		.description = gRabbitPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WOLPERTING] =
	{
		.categoryName = _("Wolprtinger"),
		.height = 7.7,
		.weight = 122.5,
		.description = gWolpertingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BUNYIP] =
	{
		.categoryName = _("Bunyip"),
		.height = 18.0,
		.weight = 1079.6,
		.description = gBunyipPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TALONBEAST_TALON_FORM] =
	{
		.categoryName = _("Talon"),
		.height = 20.2,
		.weight = 1179.3,
		.description = gTalonBeast_Talon_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TALONBEAST_NAIL_FORM] =
	{
		.categoryName = _("Nail"),
		.height = 20.2,
		.weight = 1179.3,
		.description = gTalonBeast_Nail_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_FERRET] =
	{
		.categoryName = _("Ferret"),
		.height = 2.9,
		.weight = 18.1,
		.description = gFerretPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOY_MOUSE] =
	{
		.categoryName = _("Toy Mouse"),
		.height = 1.0,
		.weight = 3.9,
		.description = gToy_MousePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOY_DOLL] =
	{
		.categoryName = _("Doll"),
		.height = 2.3,
		.weight = 6.4,
		.description = gToy_DollPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOY_SOLDIER] =
	{
		.categoryName = _("Armed"),
		.height = 2.8,
		.weight = 11.3,
		.description = gToy_SoldierPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PENGUIN_CLOCKWORK_FORM] =
	{
		.categoryName = _("Automation"),
		.height = 3.6,
		.weight = 27.2,
		.description = gPenguin_Clockwork_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CAT_CLOCKWORK_FORM] =
	{
		.categoryName = _("Clockwork"),
		.height = 5.3,
		.weight = 31.8,
		.description = gCat_Clockwork_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MAGICARPET] =
	{
		.categoryName = _("Carpet"),
		.height = 2.9,
		.weight = 90.7,
		.description = gMagicarpetPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ANICHAIR] =
	{
		.categoryName = _("Chair"),
		.height = 10.0,
		.weight = 63.5,
		.description = gAnichairPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EXORAXE] =
	{
		.categoryName = _("Axe"),
		.height = 3.8,
		.weight = 45.4,
		.description = gExoraxePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SPOOKAXE] =
	{
		.categoryName = _("Pickaxe"),
		.height = 4.0,
		.weight = 49.9,
		.description = gSpookaxePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DOBBIN] =
	{
		.categoryName = _("Toy Horse"),
		.height = 1.9,
		.weight = 1.8,
		.description = gDobbinPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MARIONETTE] =
	{
		.categoryName = _("Marionette"),
		.height = 2.2,
		.weight = 3.6,
		.description = gMarionettePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DRAGONKITE] =
	{
		.categoryName = _("Drake Kite"),
		.height = 15.0,
		.weight = 68.0,
		.description = gDragonKitePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ANIMOUR] =
	{
		.categoryName = _("Animated"),
		.height = 17.4,
		.weight = 204.1,
		.description = gAnimourPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEAD_TREE] =
	{
		.categoryName = _("Dead Tree"),
		.height = 21.7,
		.weight = 544.3,
		.description = gDead_TreePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JADINKO] =
	{
		.categoryName = _("Jadinko"),
		.height = 15.3,
		.weight = 707.6,
		.description = gJadinkoPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KILLERWATT] =
	{
		.categoryName = _("Watt"),
		.height = 12.6,
		.weight = 136.1,
		.description = gKillerwattPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MACKERS] =
	{
		.categoryName = _("Thanksgivin"),
		.height = 13.8,
		.weight = 127.0,
		.description = gMackersPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TURKEY_FEMALE_FORM] =
	{
		.categoryName = _("Turkey"),
		.height = 14.5,
		.weight = 131.5,
		.description = gTurkey_Female_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TURKEY_MALE_FORM] =
	{
		.categoryName = _("Gobbling"),
		.height = 14.5,
		.weight = 131.5,
		.description = gTurkey_Male_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TURKEY_PROTESTOR_FORM] =
	{
		.categoryName = _("Protesting"),
		.height = 14.5,
		.weight = 131.5,
		.description = gTurkey_Protestor_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOUCAN_TENACIOUS_MALE_FORM] =
	{
		.categoryName = _("Toucan"),
		.height = 6.1,
		.weight = 59.0,
		.description = gToucan_Tenacious_Male_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOUCAN_TENACIOUS_FEMALE_FORM] =
	{
		.categoryName = _("Toucan"),
		.height = 6.1,
		.weight = 59.0,
		.description = gToucan_Tenacious_Female_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TOUCAN_TUAI_LEIT_FORM] =
	{
		.categoryName = _("Tuai Leit"),
		.height = 6.4,
		.weight = 61.2,
		.description = gToucan_Tuai_Leit_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JELLYFISH_BLUBBER_FORM] =
	{
		.categoryName = _("Blubber"),
		.height = 9.5,
		.weight = 34.0,
		.description = gJellyfish_Blubber_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JELLYFISH] =
	{
		.categoryName = _("Jellyfish"),
		.height = 9.9,
		.weight = 86.2,
		.description = gJellyfishPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PURE] =
	{
		.categoryName = _("RuneEssence"),
		.height = 1.6,
		.weight = 2.3,
		.description = gPurePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RUNE] =
	{
		.categoryName = _("PureEssence"),
		.height = 3.2,
		.weight = 13.6,
		.description = gRunePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ESSENCE] =
	{
		.categoryName = _("Anima Mundi"),
		.height = 4.8,
		.weight = 31.8,
		.description = gEssencePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SEAGULL_NORMAL_FORM] =
	{
		.categoryName = _("Seagull"),
		.height = 4.2,
		.weight = 9.1,
		.description = gSeagull_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PELICAN] =
	{
		.categoryName = _("Pelican"),
		.height = 7.3,
		.weight = 52.2,
		.description = gPelicanPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ALBATROSS] =
	{
		.categoryName = _("Albatross"),
		.height = 8.5,
		.weight = 56.7,
		.description = gAlbatrossPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SEAGULL_HATTENKRAPPER_FORM] =
	{
		.categoryName = _("Baron"),
		.height = 8.2,
		.weight = 54.4,
		.description = gSeagull_Hattenkrapper_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SEAGULL_KOPPENPLOPPEN_FORM] =
	{
		.categoryName = _("Count"),
		.height = 6.0,
		.weight = 22.7,
		.description = gSeagull_Koppenploppen_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SEAGULL_STEVEN_FORM] =
	{
		.categoryName = _("Seafaring"),
		.height = 4.6,
		.weight = 15.9,
		.description = gSeagull_Steven_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_IBIS] =
	{
		.categoryName = _("Ibis"),
		.height = 12.3,
		.weight = 12.2,
		.description = gIbisPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DESERTWYRM] =
	{
		.categoryName = _("Desert Wyrm"),
		.height = 4.7,
		.weight = 13.6,
		.description = gDesertWyrmPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WYRM] =
	{
		.categoryName = _("Wyrm"),
		.height = 25.2,
		.weight = 1669.2,
		.description = gWyrmPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ABBYSPECTR] =
	{
		.categoryName = _("Spectre"),
		.height = 18.3,
		.weight = 780.2,
		.description = gAbbySpectrPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SNAKE_NORMAL_FORM] =
	{
		.categoryName = _("Snake"),
		.height = 4.8,
		.weight = 14.1,
		.description = gSnake_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COBRA_NORMAL_FORM] =
	{
		.categoryName = _("Cobra"),
		.height = 7.5,
		.weight = 27.2,
		.description = gCobra_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COBRA_SPIRIT_FORM] =
	{
		.categoryName = _("Serpentine"),
		.height = 8.8,
		.weight = 31.8,
		.description = gCobra_Spirit_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JUNA] =
	{
		.categoryName = _("Tear Guard"),
		.height = 12.4,
		.weight = 317.5,
		.description = gJunaPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SNAKE_SEA_FORM] =
	{
		.categoryName = _("Searpentine"),
		.height = 5.0,
		.weight = 14.5,
		.description = gSnake_Sea_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BIG_SNAKE_SEA_FORM] =
	{
		.categoryName = _("Big Snake"),
		.height = 8.3,
		.weight = 163.3,
		.description = gBig_Snake_Sea_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCK_POLISHED_FORM] =
	{
		.categoryName = _("Polished"),
		.height = 1.4,
		.weight = 40.8,
		.description = gRock_Polished_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PILLAR] =
	{
		.categoryName = _("Slug Slayer"),
		.height = 31.6,
		.weight = 41730.5,
		.description = gPillarPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCK_SOUP] =
	{
		.categoryName = _("Delicious"),
		.height = 3.5,
		.weight = 59.0,
		.description = gRock_SoupPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SLAGILITH] =
	{
		.categoryName = _("Rock Spell"),
		.height = 13.2,
		.weight = 340.2,
		.description = gSlagilithPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCK_STRANGE_FORM] =
	{
		.categoryName = _("Strange "),
		.height = 1.4,
		.weight = 40.8,
		.description = gRock_Strange_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCK_GOLDEN_FORM] =
	{
		.categoryName = _("Stranger"),
		.height = 1.4,
		.weight = 40.8,
		.description = gRock_Golden_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PARTY_ROCK] =
	{
		.categoryName = _("Rock Party"),
		.height = 1.4,
		.weight = 40.8,
		.description = gParty_RockPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_YAK_UNDEAD_FORM] =
	{
		.categoryName = _("Zombie Yak"),
		.height = 17.6,
		.weight = 925.3,
		.description = gYak_Undead_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_YAK_SNACK_FORM] =
	{
		.categoryName = _("Snacking"),
		.height = 17.6,
		.weight = 925.3,
		.description = gYak_Snack_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COW_DAIRY_FORM] =
	{
		.categoryName = _("Dairy"),
		.height = 15.7,
		.weight = 7406.4,
		.description = gCow_Dairy_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COW_STRAWBERRY_FORM] =
	{
		.categoryName = _("Strawberry"),
		.height = 15.7,
		.weight = 7406.4,
		.description = gCow_Strawberry_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COW_VANILLA_FORM] =
	{
		.categoryName = _("Normal"),
		.height = 15.7,
		.weight = 7406.4,
		.description = gCow_Vanilla_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COW_CHOCOLATE_FORM] =
	{
		.categoryName = _("Chocolate"),
		.height = 15.7,
		.weight = 7406.4,
		.description = gCow_Chocolate_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COW_HARLEQUIN_FORM] =
	{
		.categoryName = _("Harlequin"),
		.height = 15.7,
		.weight = 7406.4,
		.description = gCow_Harlequin_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SUPER_COW] =
	{
		.categoryName = _("Super Cow"),
		.height = 15.7,
		.weight = 7406.4,
		.description = gSuper_CowPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_COW_PLAGUE_FORM] =
	{
		.categoryName = _("Plagued "),
		.height = 15.7,
		.weight = 7406.4,
		.description = gCow_Plague_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BULL_ELDER_FORM] =
	{
		.categoryName = _("Grown Bull"),
		.height = 18.0,
		.weight = 9865.6,
		.description = gBull_Elder_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MINOTAUR_NORMAL_FORM] =
	{
		.categoryName = _("Minotaur"),
		.height = 13.8,
		.weight = 1202.0,
		.description = gMinotaur_Normal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MINOTAUR_RUNE_FORM] =
	{
		.categoryName = _("Barbarian"),
		.height = 18.5,
		.weight = 2413.1,
		.description = gMinotaur_Rune_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_TROJAN_COW] =
	{
		.categoryName = _("Construct"),
		.height = 72.9,
		.weight = 65535,
		.description = gTrojan_CowPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHICKEN_MYSTERY_FORM] =
	{
		.categoryName = _("Mystery"),
		.height = 5.1,
		.weight = 20.8,
		.description = gChicken_Mystery_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHICKEN_WAR_FORM] =
	{
		.categoryName = _("War"),
		.height = 6.1,
		.weight = 27.2,
		.description = gChicken_War_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHICKEN_PESTILENCE_FORM] =
	{
		.categoryName = _("Pestilence"),
		.height = 6.1,
		.weight = 27.2,
		.description = gChicken_Pestilence_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHICKEN_FAMINE_FORM] =
	{
		.categoryName = _("Famine"),
		.height = 6.1,
		.weight = 27.2,
		.description = gChicken_Famine_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CHICKEN_DEATH_FORM] =
	{
		.categoryName = _("Death"),
		.height = 6.1,
		.weight = 27.2,
		.description = gChicken_Death_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RAM_GOLDEN_FORM] =
	{
		.categoryName = _("Gold Ram"),
		.height = 10.9,
		.weight = 546.6,
		.description = gRam_Golden_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GOAT_BILLY_FORM] =
	{
		.categoryName = _("Goat"),
		.height = 10.2,
		.weight = 499.0,
		.description = gGoat_Billy_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GOAT_DESERT_FORM] =
	{
		.categoryName = _("Desert Goat"),
		.height = 10.2,
		.weight = 499.0,
		.description = gGoat_Desert_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHEEP_BLACK_FORM] =
	{
		.categoryName = _("Black Sheep"),
		.height = 9.5,
		.weight = 467.2,
		.description = gSheep_Black_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GOAT_MOUNTAIN_FORM] =
	{
		.categoryName = _("Billy"),
		.height = 10.2,
		.weight = 499.0,
		.description = gGoat_Mountain_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GORAK] =
	{
		.categoryName = _("Gorak"),
		.height = 19.4,
		.weight = 3551.6,
		.description = gGorakPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHEEP_PLAGUE_FORM] =
	{
		.categoryName = _("Coloured"),
		.height = 10.2,
		.weight = 499.0,
		.description = gSheep_Plague_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_THE_THING] =
	{
		.categoryName = _("Unspying"),
		.height = 10.2,
		.weight = 499.0,
		.description = gThe_ThingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRAB_RED_FORM] =
	{
		.categoryName = _("Crab"),
		.height = 1.9,
		.weight = 13.6,
		.description = gCrab_Red_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRAB_MOSS_FORM] =
	{
		.categoryName = _("Moss Crab"),
		.height = 1.9,
		.weight = 13.6,
		.description = gCrab_Moss_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_CRAB_RED_FORM] =
	{
		.categoryName = _("Giant Crab"),
		.height = 2.9,
		.weight = 31.8,
		.description = gGiant_Crab_Red_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HEIM_CRAB] =
	{
		.categoryName = _("Heim Crab"),
		.height = 1.9,
		.weight = 13.6,
		.description = gHeim_CrabPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_CRAB_MOSS_FORM] =
	{
		.categoryName = _("Mossy Claw"),
		.height = 2.9,
		.weight = 31.8,
		.description = gGiant_Crab_Moss_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_CRAB_RUMPUMPED_FORM] =
	{
		.categoryName = _("Rum Pumped"),
		.height = 1.9,
		.weight = 13.6,
		.description = gGiant_Crab_RumPumped_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_WEBSNIPPER] =
	{
		.categoryName = _("Web Snipp"),
		.height = 1.9,
		.weight = 13.6,
		.description = gWebSnipperPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BLUE_CRAB] =
	{
		.categoryName = _("Blue Crab"),
		.height = 1.9,
		.weight = 13.6,
		.description = gBlue_CrabPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_CRAB_DARK_FORM] =
	{
		.categoryName = _("Dark Crab"),
		.height = 1.9,
		.weight = 13.6,
		.description = gGiant_Crab_Dark_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_KNIFE_CRAB] =
	{
		.categoryName = _("Armed"),
		.height = 1.9,
		.weight = 13.6,
		.description = gKnife_CrabPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRABLET_TIER0_FORM] =
	{
		.categoryName = _("Crabling"),
		.height = 1.3,
		.weight = 9.1,
		.description = gCrablet_Tier0_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LOBSTER_GOLDEN_FORM] =
	{
		.categoryName = _("Contraction"),
		.height = 2.3,
		.weight = 27.2,
		.description = gLobster_Golden_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LOBSTER_HEIM_FORM] =
	{
		.categoryName = _("Tightening"),
		.height = 2.3,
		.weight = 27.2,
		.description = gLobster_Heim_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LOBSTER_OBSIDIAN_FORM] =
	{
		.categoryName = _("Scam"),
		.height = 2.3,
		.weight = 27.2,
		.description = gLobster_Obsidian_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EEL_MOTTLED_FORM] =
	{
		.categoryName = _("Mottled"),
		.height = 1.6,
		.weight = 9.2,
		.description = gEel_Mottled_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EEL_SHORT_FINNED_FORM] =
	{
		.categoryName = _("Unsavory"),
		.height = 1.6,
		.weight = 9.2,
		.description = gEel_Short_Finned_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EEL_SALVE_FORM] =
	{
		.categoryName = _("Salve Eel"),
		.height = 1.6,
		.weight = 9.2,
		.description = gEel_Salve_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EEL_DUSK_FORM] =
	{
		.categoryName = _("Dusk Eel"),
		.height = 1.6,
		.weight = 9.2,
		.description = gEel_Dusk_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CAVE_MORAY] =
	{
		.categoryName = _("Moray"),
		.height = 1.9,
		.weight = 10.0,
		.description = gCave_MorayPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VILE_FISH] =
	{
		.categoryName = _("Vile"),
		.height = 1.9,
		.weight = 10.0,
		.description = gVile_FishPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_LOBSTER_GIANT_FORM] =
	{
		.categoryName = _("Clinching"),
		.height = 16.6,
		.weight = 353.8,
		.description = gLobster_Giant_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BEAR_GRIZZLY_FORM] =
	{
		.categoryName = _("Grizzly"),
		.height = 19.7,
		.weight = 2948.4,
		.description = gBear_Grizzly_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BEAR_ANGRY_FORM] =
	{
		.categoryName = _("Unmanaged"),
		.height = 17.4,
		.weight = 1755.4,
		.description = gBear_Angry_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CALLISTO] =
	{
		.categoryName = _("Ursa minor"),
		.height = 29.5,
		.weight = 4513.2,
		.description = gCallistoPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BEAR_REANIMATED_FORM] =
	{
		.categoryName = _("Dead bear"),
		.height = 17.4,
		.weight = 1755.4,
		.description = gBear_Reanimated_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BEAR_CRYSTAL_FORM] =
	{
		.categoryName = _("Crystalbear"),
		.height = 17.4,
		.weight = 1755.4,
		.description = gBear_Crystal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BEAR_CORRUPTED_FORM] =
	{
		.categoryName = _("Corruptbear"),
		.height = 17.4,
		.weight = 1755.4,
		.description = gBear_Corrupted_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_POLAR_BEAR_NANUQ_FORM] =
	{
		.categoryName = _("Firemaking"),
		.height = 17.4,
		.weight = 1755.4,
		.description = gPolar_Bear_Nanuq_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_POLAR_BEAR_PBJ_AGENT_FORM] =
	{
		.categoryName = _("PBJ"),
		.height = 18.0,
		.weight = 1900.2,
		.description = gPolar_Bear_PBJ_Agent_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCORPION_PIT_FORM] =
	{
		.categoryName = _("Pit"),
		.height = 14.5,
		.weight = 160.4,
		.description = gScorpion_Pit_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCORPION_KING_FORM] =
	{
		.categoryName = _("KingStinger"),
		.height = 16.3,
		.weight = 242.9,
		.description = gScorpion_King_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DREADNIP] =
	{
		.categoryName = _("Dreadnip"),
		.height = 6.5,
		.weight = 45.5,
		.description = gDreadnipPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCORPION_KHAZARD_FORM] =
	{
		.categoryName = _("Khazard"),
		.height = 14.5,
		.weight = 160.4,
		.description = gScorpion_Khazard_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCORPION_CRYSTAL_FORM] =
	{
		.categoryName = _("Crystalline"),
		.height = 14.5,
		.weight = 160.4,
		.description = gScorpion_Crystal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCORPION_CORRUPT_CRYSTAL_FORM] =
	{
		.categoryName = _("Corrupted"),
		.height = 14.5,
		.weight = 160.4,
		.description = gScorpion_Corrupt_Crystal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCORPION_GRAVE_FORM] =
	{
		.categoryName = _("Grave"),
		.height = 14.5,
		.weight = 160.4,
		.description = gScorpion_Grave_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCORPIA] =
	{
		.categoryName = _("Vicious"),
		.height = 21.3,
		.weight = 498.9,
		.description = gScorpiaPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCORPION_CORRUPT_FORM] =
	{
		.categoryName = _("Devourer"),
		.height = 14.5,
		.weight = 160.4,
		.description = gScorpion_Corrupt_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCORPION_POISON_FORM] =
	{
		.categoryName = _("Toxic"),
		.height = 14.5,
		.weight = 160.4,
		.description = gScorpion_Poison_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCORPION_REANIMATED_FORM] =
	{
		.categoryName = _("Rewilled"),
		.height = 14.5,
		.weight = 160.4,
		.description = gScorpion_Reanimated_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SCORPION_SPIRIT_FORM] =
	{
		.categoryName = _("SpiritSting"),
		.height = 14.5,
		.weight = 160.4,
		.description = gScorpion_Spirit_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_UNICORN_BLACK_FORM] =
	{
		.categoryName = _("Unpure"),
		.height = 19.7,
		.weight = 1701.0,
		.description = gUnicorn_Black_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_UNICORN_ANGRY_FORM] =
	{
		.categoryName = _("Angered"),
		.height = 19.7,
		.weight = 1701.0,
		.description = gUnicorn_Angry_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_UNICORN_REANIMATED_FORM] =
	{
		.categoryName = _("Fallen"),
		.height = 19.7,
		.weight = 1701.0,
		.description = gUnicorn_Reanimated_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_STARLIGHT] =
	{
		.categoryName = _("Starlight"),
		.height = 21.1,
		.weight = 1973.1,
		.description = gStarlightPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_THINGUMWUT] =
	{
		.categoryName = _("Immense"),
		.height = 0,
		.weight = 0,
		.description = gThingumwutPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_EXPERIMENT_3_FORM] =
	{
		.categoryName = _("Wolfsheep"),
		.height = 16.0,
		.weight = 771.1,
		.description = gExperiment_3_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CABBAGE] =
	{
		.categoryName = _("Cabbage"),
		.height = 100,
		.weight = 100,
		.description = gCabbagePokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCK_CRAB_AMMONITE_FORM] =
	{
		.categoryName = _("Ancient"),
		.height = 0,
		.weight = 0,
		.description = gRock_Crab_Ammonite_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCK_CRAB_GIANT_SAND_FORM] =
	{
		.categoryName = _("Camouflaged"),
		.height = 0,
		.weight = 0,
		.description = gRock_Crab_Giant_Sand_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ROCK_CRAB_GIANT_SWAMP_FORM] =
	{
		.categoryName = _("Stump"),
		.height = 0,
		.weight = 0,
		.description = gRock_Crab_Giant_Swamp_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MONKEY_HARMLESS_FORM] =
	{
		.categoryName = _("Harmless"),
		.height = 0,
		.weight = 0,
		.description = gMonkey_Harmless_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MONKEY_GHOST_FORM] =
	{
		.categoryName = _("Colonized"),
		.height = 0,
		.weight = 0,
		.description = gMonkey_Ghost_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GORILLA_AYUNI_FORM] =
	{
		.categoryName = _("Eye"),
		.height = 0,
		.weight = 0,
		.description = gGorilla_Ayuni_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GORILLA_LEEUNI_FORM] =
	{
		.categoryName = _("Lips"),
		.height = 0,
		.weight = 0,
		.description = gGorilla_Leeuni_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GORILLA_ERUNI_FORM] =
	{
		.categoryName = _("Ear"),
		.height = 0,
		.weight = 0,
		.description = gGorilla_Eruni_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MONKEY_KARAMJA_BABY_FORM] =
	{
		.categoryName = _("Monkey"),
		.height = 0,
		.weight = 0,
		.description = gMonkey_Karamja_Baby_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MONKEY_KARAMJA_ADULT_FORM] =
	{
		.categoryName = _("Monkey"),
		.height = 0,
		.weight = 0,
		.description = gMonkey_Kajarma_Adult_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_BIRDS_NEST_GOD_FORM] =
	{
		.categoryName = _("Undecided"),
		.height = 0,
		.weight = 0,
		.description = gBirds_Nest_God_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_REAVER] =
	{
		.categoryName = _("Virii"),
		.height = 0,
		.weight = 0,
		.description = gReaverPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SEA_TURTLE_TREASURE_FORM] =
	{
		.categoryName = _("Treasure"),
		.height = 0,
		.weight = 0,
		.description = gSea_Turtle_Treasure_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_HERBERT] =
	{
		.categoryName = _("Herblore"),
		.height = 0,
		.weight = 0,
		.description = gHerbertPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRAB_RUMPUMPED_FORM] =
	{
		.categoryName = _("Drunk"),
		.height = 0,
		.weight = 0,
		.description = gCrab_RumPumped_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRAB_DARK_FORM] =
	{
		.categoryName = _("Dark"),
		.height = 0,
		.weight = 0,
		.description = gCrab_Dark_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CRAB_GREY_FORM] =
	{
		.categoryName = _("Gray"),
		.height = 0,
		.weight = 0,
		.description = gCrab_Grey_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GIANT_CRAB_GREY_FORM] =
	{
		.categoryName = _("Clawed"),
		.height = 0,
		.weight = 0,
		.description = gGiant_Crab_Grey_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SARACHNIS] =
	{
		.categoryName = _("Looming"),
		.height = 0,
		.weight = 0,
		.description = gSarachnisPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_VENENATIS] =
	{
		.categoryName = _("Acidic"),
		.height = 0,
		.weight = 0,
		.description = gVenenatisPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_JAL_XIL] =
	{
		.categoryName = _("Xil"),
		.height = 0,
		.weight = 0,
		.description = gJal_XilPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ABYSSAL_LEECH_FORM] =
	{
		.categoryName = _("Leech"),
		.height = 0,
		.weight = 0,
		.description = gAbyssal_Leech_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_ABYSSAL_WALKER_FORM] =
	{
		.categoryName = _("Walker"),
		.height = 0,
		.weight = 0,
		.description = gAbyssal_Walker_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PLANT_STRANGE_FORM] =
	{
		.categoryName = _("Strange"),
		.height = 0,
		.weight = 0,
		.description = gPlant_Strange_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PLANT_STRANGER_FORM] =
	{
		.categoryName = _("Stranger"),
		.height = 0,
		.weight = 0,
		.description = gPlant_Stranger_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SNOW_IMP] =
	{
		.categoryName = _("Ice Imp"),
		.height = 0,
		.weight = 0,
		.description = gSnow_ImpPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEMON_LESSER_TONGUE_FORM] =
	{
		.categoryName = _(""),
		.height = 0,
		.weight = 0,
		.description = gDemon_Lesser_Tongue_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEMON_GREATER_BLACK_FORM] =
	{
		.categoryName = _("Black"),
		.height = 0,
		.weight = 0,
		.description = gDemon_Greater_Black_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEMON_ICE_FORM] =
	{
		.categoryName = _("Frozen"),
		.height = 0,
		.weight = 0,
		.description = gDemon_Ice_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEMON_JUNGLE_FORM] =
	{
		.categoryName = _("Jungle"),
		.height = 0,
		.weight = 0,
		.description = gDemon_Jungle_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEMON_RIPPER_FORM] =
	{
		.categoryName = _("Ripper"),
		.height = 0,
		.weight = 0,
		.description = gDemon_Ripper_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DELRITH] =
	{
		.categoryName = _("Delrith"),
		.height = 0,
		.weight = 0,
		.description = gDelrithPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_IMPLING_BABY_FORM] =
	{
		.categoryName = _("Baby"),
		.height = 0,
		.weight = 0,
		.description = gImpling_Baby_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_IMPLING_MAGPIE_FORM] =
	{
		.categoryName = _("Shiny"),
		.height = 0,
		.weight = 0,
		.description = gImpling_Magpie_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_IMPLING_DRAGON_FORM] =
	{
		.categoryName = _("Dragon"),
		.height = 0,
		.weight = 0,
		.description = gImpling_Dragon_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_IMPLING_KINGLY_FORM] =
	{
		.categoryName = _("King"),
		.height = 0,
		.weight = 0,
		.description = gImpling_Kingly_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_IMPLING_LUCKY_FORM] =
	{
		.categoryName = _("Lucky"),
		.height = 0,
		.weight = 0,
		.description = gImpling_Lucky_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_SHAIKAH] =
	{
		.categoryName = _("Shaikah"),
		.height = 0,
		.weight = 0,
		.description = gShaikahPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_GROWLER] =
	{
		.categoryName = _("Growling"),
		.height = 0,
		.weight = 0,
		.description = gGrowlerPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEMON_TORMENTED_FORM] =
	{
		.categoryName = _("Tormented"),
		.height = 0,
		.weight = 0,
		.description = gDemon_Tormented_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_DEATHWING] =
	{
		.categoryName = _("Deathwing"),
		.height = 0,
		.weight = 0,
		.description = gDeathwingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PING] =
	{
		.categoryName = _("Rock star"),
		.height = 0,
		.weight = 0,
		.description = gPingPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PONG] =
	{
		.categoryName = _("Heavy metal"),
		.height = 0,
		.weight = 0,
		.description = gPongPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PENGUIN_MCGRAW_FORM] =
	{
		.categoryName = _("Hatted"),
		.height = 0,
		.weight = 0,
		.description = gPenguin_McGraw_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PENGUIN_SPY_FORM] =
	{
		.categoryName = _("Spy"),
		.height = 0,
		.weight = 0,
		.description = gPenguin_Spy_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PENGUIN_AGENT_FORM] =
	{
		.categoryName = _("K.G.P"),
		.height = 0,
		.weight = 0,
		.description = gPenguin_Agent_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PENGUIN_DISGUISE_CACTUS_FORM] =
	{
		.categoryName = _("Cacti"),
		.height = 0,
		.weight = 0,
		.description = gPenguin_Disguise_Cactus_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PENGUIN_DISGUISE_ROCK_FORM] =
	{
		.categoryName = _("Rock  "),
		.height = 0,
		.weight = 0,
		.description = gPenguin_Disguise_Rock_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PENGUIN_DISGUISE_BUSH_FORM] =
	{
		.categoryName = _("Bush"),
		.height = 0,
		.weight = 0,
		.description = gPenguin_Disguise_Bush_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PENGUIN_DISGUISE_BOX_FORM] =
	{
		.categoryName = _("Box"),
		.height = 0,
		.weight = 0,
		.description = gPenguin_Disguise_Box_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RAVEN_SPOOKY_FORM] =
	{
		.categoryName = _("Spooky"),
		.height = 0,
		.weight = 0,
		.description = gRaven_Spooky_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RAVEN_CRYSTAL_FORM] =
	{
		.categoryName = _("Crystal"),
		.height = 0,
		.weight = 0,
		.description = gRaven_Crystal_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_CROW] =
	{
		.categoryName = _("Crow"),
		.height = 0,
		.weight = 0,
		.description = gCrowPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_MONKFISH_FRESH_FORM] =
	{
		.categoryName = _("Fresh"),
		.height = 0,
		.weight = 0,
		.description = gMonkfish_Fresh_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_RAM_FLUFFY_FORM] =
	{
		.categoryName = _("Sheep"),
		.height = 0,
		.weight = 0,
		.description = gRam_Fluffy_FormPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},

	[NATIONAL_DEX_PIGZILLA] =
	{
		.categoryName = _("Pigzilla"),
		.height = 0,
		.weight = 0,
		.description = gPigzillaPokedexText,
		.pokemonScale = 256,
		.pokemonOffset = 0,
		.trainerScale = 256,
		.trainerOffset = 0,
	},


	
};
