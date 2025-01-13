const struct Decoration gDecorations[] =
{
    [DECOR_NONE] =
    {
        .id = DECOR_NONE,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SMALL DESK",
            "PETIT BUREAU",
            "TAVOLO PICCOLO"),
=======
        .name = _("MESA PEQUEÑA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DESK,
        .price = 0,
        .description = DecorDesc_SMALL_DESK,
        .tiles = DecorGfx_SMALL_DESK,
    },

    [DECOR_SMALL_DESK] =
    {
        .id = DECOR_SMALL_DESK,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SMALL DESK",
            "PETIT BUREAU",
            "TAVOLO PICCOLO"),
=======
        .name = _("MESA PEQUEÑA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DESK,
        .price = 3000,
        .description = DecorDesc_SMALL_DESK,
        .tiles = DecorGfx_SMALL_DESK,
    },

    [DECOR_POKEMON_DESK] =
    {
        .id = DECOR_POKEMON_DESK,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "POKéMON DESK",
            "BUREAU POKéMON",
            "TAVOLO POKéMON"),
=======
        .name = _("MESA POKéMON"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DESK,
        .price = 3000,
        .description = DecorDesc_POKEMON_DESK,
        .tiles = DecorGfx_POKEMON_DESK,
    },

    [DECOR_HEAVY_DESK] =
    {
        .id = DECOR_HEAVY_DESK,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HEAVY DESK",
            "GRAND BUREAU",
            "TAVOLO PESANTE"),
=======
        .name = _("MESA PESADA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_3x2,
        .category = DECORCAT_DESK,
        .price = 6000,
        .description = DecorDesc_HEAVY_DESK,
        .tiles = DecorGfx_HEAVY_DESK,
    },

    [DECOR_RAGGED_DESK] =
    {
        .id = DECOR_RAGGED_DESK,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RAGGED DESK",
            "BUREAU BRUT",
            "TAVOLO GREZZO"),
=======
        .name = _("MESA RÚSTICA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_3x2,
        .category = DECORCAT_DESK,
        .price = 6000,
        .description = DecorDesc_RAGGED_DESK,
        .tiles = DecorGfx_RAGGED_DESK,
    },

    [DECOR_COMFORT_DESK] =
    {
        .id = DECOR_COMFORT_DESK,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "COMFORT DESK",
            "BUREAU COQUET",
            "TAVOLO COMODO"),
=======
        .name = _("MESA CÓMODA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_3x2,
        .category = DECORCAT_DESK,
        .price = 6000,
        .description = DecorDesc_COMFORT_DESK,
        .tiles = DecorGfx_COMFORT_DESK,
    },

    [DECOR_PRETTY_DESK] =
    {
        .id = DECOR_PRETTY_DESK,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PRETTY DESK",
            "JOLI BUREAU",
            "BEL TAVOLO"),
=======
        .name = _("MESA BONITA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_DESK,
        .price = 9000,
        .description = DecorDesc_PRETTY_DESK,
        .tiles = DecorGfx_PRETTY_DESK,
    },

    [DECOR_BRICK_DESK] =
    {
        .id = DECOR_BRICK_DESK,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BRICK DESK",
            "BUREAU BRIQUES",
            "TAVOLO MATTONI"),
=======
        .name = _("MESA LADRILLO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_DESK,
        .price = 9000,
        .description = DecorDesc_BRICK_DESK,
        .tiles = DecorGfx_BRICK_DESK,
    },

    [DECOR_CAMP_DESK] =
    {
        .id = DECOR_CAMP_DESK,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CAMP DESK",
            "BUREAU CAMPEUR",
            "TAVOLO DA CAMPO"),
=======
        .name = _("MESA DE CAMPO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_DESK,
        .price = 9000,
        .description = DecorDesc_CAMP_DESK,
        .tiles = DecorGfx_CAMP_DESK,
    },

    [DECOR_HARD_DESK] =
    {
        .id = DECOR_HARD_DESK,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HARD DESK",
            "BUREAU PIERRES",
            "TAVOLO DURO"),
=======
        .name = _("MESA FUERTE"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_DESK,
        .price = 9000,
        .description = DecorDesc_HARD_DESK,
        .tiles = DecorGfx_HARD_DESK,
    },

    [DECOR_SMALL_CHAIR] =
    {
        .id = DECOR_SMALL_CHAIR,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SMALL CHAIR",
            "PETITE CHAISE",
            "SEDIA PICCOLA"),
=======
        .name = _("SILLA PEQUEÑA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = DecorDesc_SMALL_CHAIR,
        .tiles = DecorGfx_SMALL_CHAIR,
    },

    [DECOR_POKEMON_CHAIR] =
    {
        .id = DECOR_POKEMON_CHAIR,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "POKéMON CHAIR",
            "CHAISE POKéMON",
            "SEDIA POKéMON"),
=======
        .name = _("SILLA POKéMON"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = DecorDesc_POKEMON_CHAIR,
        .tiles = DecorGfx_POKEMON_CHAIR,
    },

    [DECOR_HEAVY_CHAIR] =
    {
        .id = DECOR_HEAVY_CHAIR,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HEAVY CHAIR",
            "GRANDE CHAISE",
            "SEDIA PESANTE"),
=======
        .name = _("SILLA PESADA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = DecorDesc_HEAVY_CHAIR,
        .tiles = DecorGfx_HEAVY_CHAIR,
    },

    [DECOR_PRETTY_CHAIR] =
    {
        .id = DECOR_PRETTY_CHAIR,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PRETTY CHAIR",
            "JOLIE CHAISE",
            "BELLA SEDIA"),
=======
        .name = _("SILLA BONITA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = DecorDesc_PRETTY_CHAIR,
        .tiles = DecorGfx_PRETTY_CHAIR,
    },

    [DECOR_COMFORT_CHAIR] =
    {
        .id = DECOR_COMFORT_CHAIR,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "COMFORT CHAIR",
            "CHAISE COQUETTE",
            "SEDIA COMODA"),
=======
        .name = _("SILLA CÓMODA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = DecorDesc_COMFORT_CHAIR,
        .tiles = DecorGfx_COMFORT_CHAIR,
    },

    [DECOR_RAGGED_CHAIR] =
    {
        .id = DECOR_RAGGED_CHAIR,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RAGGED CHAIR",
            "CHAISE BRUTE",
            "SEDIA GREZZA"),
=======
        .name = _("SILLA RÚSTICA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = DecorDesc_RAGGED_CHAIR,
        .tiles = DecorGfx_RAGGED_CHAIR,
    },

    [DECOR_BRICK_CHAIR] =
    {
        .id = DECOR_BRICK_CHAIR,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BRICK CHAIR",
            "CHAISE BRIQUES",
            "SEDIA MATTONI"),
=======
        .name = _("SILLA LADRILLO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = DecorDesc_BRICK_CHAIR,
        .tiles = DecorGfx_BRICK_CHAIR,
    },

    [DECOR_CAMP_CHAIR] =
    {
        .id = DECOR_CAMP_CHAIR,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CAMP CHAIR",
            "CHAISE CAMPEUR",
            "SEDIA DA CAMPO"),
=======
        .name = _("SILLA DE CAMPO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = DecorDesc_CAMP_CHAIR,
        .tiles = DecorGfx_CAMP_CHAIR,
    },

    [DECOR_HARD_CHAIR] =
    {
        .id = DECOR_HARD_CHAIR,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "HARD CHAIR",
            "CHAISE PIERRES",
            "SEDIA DURA"),
=======
        .name = _("SILLA FUERTE"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CHAIR,
        .price = 2000,
        .description = DecorDesc_HARD_CHAIR,
        .tiles = DecorGfx_HARD_CHAIR,
    },

    [DECOR_RED_PLANT] =
    {
        .id = DECOR_RED_PLANT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RED PLANT",
            "PLANTE ROUGE",
            "PIANTA ROSSA"),
=======
        .name = _("PLANTA ROJA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_PLANT,
        .price = 3000,
        .description = DecorDesc_RED_PLANT,
        .tiles = DecorGfx_RED_PLANT,
    },

    [DECOR_TROPICAL_PLANT] =
    {
        .id = DECOR_TROPICAL_PLANT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TROPICAL PLANT",
            "PLANTE TROPIC",
            "TROPICPIANTA"),
=======
        .name = _("PL. TROPICAL"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_PLANT,
        .price = 3000,
        .description = DecorDesc_TROPICAL_PLANT,
        .tiles = DecorGfx_TROPICAL_PLANT,
    },

    [DECOR_PRETTY_FLOWERS] =
    {
        .id = DECOR_PRETTY_FLOWERS,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PRETTY FLOWERS",
            "JOLIES FLEURS",
            "BEI FIORI"),
=======
        .name = _("FLORES BONITAS"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_PLANT,
        .price = 3000,
        .description = DecorDesc_PRETTY_FLOWERS,
        .tiles = DecorGfx_PRETTY_FLOWERS,
    },

    [DECOR_COLORFUL_PLANT] =
    {
        .id = DECOR_COLORFUL_PLANT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "COLORFUL PLANT",
            "PLANTE COLOREE",
            "PIANTA COLORATA"),
=======
        .name = _("PL. COLORIDA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_2x2,
        .category = DECORCAT_PLANT,
        .price = 5000,
        .description = DecorDesc_COLORFUL_PLANT,
        .tiles = DecorGfx_COLORFUL_PLANT,
    },

    [DECOR_BIG_PLANT] =
    {
        .id = DECOR_BIG_PLANT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BIG PLANT",
            "GROSSE PLANTE",
            "PIANTA GRANDE"),
=======
        .name = _("PLANTA GRANDE"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_2x2,
        .category = DECORCAT_PLANT,
        .price = 5000,
        .description = DecorDesc_BIG_PLANT,
        .tiles = DecorGfx_BIG_PLANT,
    },

    [DECOR_GORGEOUS_PLANT] =
    {
        .id = DECOR_GORGEOUS_PLANT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GORGEOUS PLANT",
            "BELLE PLANTE",
            "PIANTA CHIC"),
=======
        .name = _("PLANTA ENORME"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_2x2,
        .category = DECORCAT_PLANT,
        .price = 5000,
        .description = DecorDesc_GORGEOUS_PLANT,
        .tiles = DecorGfx_GORGEOUS_PLANT,
    },

    [DECOR_RED_BRICK] =
    {
        .id = DECOR_RED_BRICK,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RED BRICK",
            "BRIQUE ROUGE",
            "MATTONE ROSSO"),
=======
        .name = _("LADRILLO ROJO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = DecorDesc_RED_BRICK,
        .tiles = DecorGfx_RED_BRICK,
    },

    [DECOR_YELLOW_BRICK] =
    {
        .id = DECOR_YELLOW_BRICK,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "YELLOW BRICK",
            "BRIQUE JAUNE",
            "MATTONE GIALLO"),
=======
        .name = _("LADR. AMARILLO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = DecorDesc_YELLOW_BRICK,
        .tiles = DecorGfx_YELLOW_BRICK,
    },

    [DECOR_BLUE_BRICK] =
    {
        .id = DECOR_BLUE_BRICK,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BLUE BRICK",
            "BRIQUE BLEUE",
            "MATTONE BLU"),
=======
        .name = _("LADRILLO AZUL"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = DecorDesc_BLUE_BRICK,
        .tiles = DecorGfx_BLUE_BRICK,
    },

    [DECOR_RED_BALLOON] =
    {
        .id = DECOR_RED_BALLOON,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RED BALLOON",
            "BALLON ROUGE",
            "PALLONE ROSSO"),
=======
        .name = _("GLOBO ROJO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = DecorDesc_RED_BALLOON,
        .tiles = DecorGfx_RED_BALLOON,
    },

    [DECOR_BLUE_BALLOON] =
    {
        .id = DECOR_BLUE_BALLOON,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BLUE BALLOON",
            "BALLON BLEU",
            "PALLONE BLU"),
=======
        .name = _("GLOBO AZUL"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = DecorDesc_BLUE_BALLOON,
        .tiles = DecorGfx_BLUE_BALLOON,
    },

    [DECOR_YELLOW_BALLOON] =
    {
        .id = DECOR_YELLOW_BALLOON,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "YELLOW BALLOON",
            "BALLON JAUNE",
            "PALLONE GIALLO"),
=======
        .name = _("GLOBO AMARILLO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = DecorDesc_YELLOW_BALLOON,
        .tiles = DecorGfx_YELLOW_BALLOON,
    },

    [DECOR_RED_TENT] =
    {
        .id = DECOR_RED_TENT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RED TENT",
            "TENTE ROUGE",
            "TENDA ROSSA"),
=======
        .name = _("TIENDA ROJA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_ORNAMENT,
        .price = 10000,
        .description = DecorDesc_RED_TENT,
        .tiles = DecorGfx_RED_TENT,
    },

    [DECOR_BLUE_TENT] =
    {
        .id = DECOR_BLUE_TENT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BLUE TENT",
            "TENTE BLEUE",
            "TENDA BLU"),
=======
        .name = _("TIENDA AZUL"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_ORNAMENT,
        .price = 10000,
        .description = DecorDesc_BLUE_TENT,
        .tiles = DecorGfx_BLUE_TENT,
    },

    [DECOR_SOLID_BOARD] =
    {
        .id = DECOR_SOLID_BOARD,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SOLID BOARD",
            "PLANCHE SOLIDE",
            "ASSE SOLIDA"),
=======
        .name = _("TABLA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 3000,
        .description = DecorDesc_SOLID_BOARD,
        .tiles = DecorGfx_SOLID_BOARD,
    },

    [DECOR_SLIDE] =
    {
        .id = DECOR_SLIDE,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SLIDE",
            "TOBOGGAN",
            "SCIVOLO"),
=======
        .name = _("TOBOGÁN"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_2x4,
        .category = DECORCAT_ORNAMENT,
        .price = 8000,
        .description = DecorDesc_SLIDE,
        .tiles = DecorGfx_SLIDE,
    },

    [DECOR_FENCE_LENGTH] =
    {
        .id = DECOR_FENCE_LENGTH,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "FENCE LENGTH",
            "BARRIERE HAUTE",
            "BARRIERA LUNGA"),
=======
        .name = _("VALLA LARGA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = DecorDesc_FENCE_LENGTH,
        .tiles = DecorGfx_FENCE_LENGTH,
    },

    [DECOR_FENCE_WIDTH] =
    {
        .id = DECOR_FENCE_WIDTH,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "FENCE WIDTH",
            "BARRIERE LARGE",
            "BARRIERA LARGA"),
=======
        .name = _("VALLA ANCHA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 500,
        .description = DecorDesc_FENCE_WIDTH,
        .tiles = DecorGfx_FENCE_WIDTH,
    },

    [DECOR_TIRE] =
    {
        .id = DECOR_TIRE,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TIRE",
            "PNEU",
            "CERCHIONE"),
=======
        .name = _("NEUMÁTICO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_2x2,
        .category = DECORCAT_ORNAMENT,
        .price = 800,
        .description = DecorDesc_TIRE,
        .tiles = DecorGfx_TIRE,
    },

    [DECOR_STAND] =
    {
        .id = DECOR_STAND,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "STAND",
            "ESTRADE",
            "PALCHETTO"),
=======
        .name = _("PODIO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_4x2,
        .category = DECORCAT_ORNAMENT,
        .price = 7000,
        .description = DecorDesc_STAND,
        .tiles = DecorGfx_STAND,
    },

    [DECOR_MUD_BALL] =
    {
        .id = DECOR_MUD_BALL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MUD BALL",
            "BOULE DE BOUE",
            "PALLA FANGO"),
=======
        .name = _("BOLA DE LODO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 200,
        .description = DecorDesc_MUD_BALL,
        .tiles = DecorGfx_MUD_BALL,
    },

    [DECOR_BREAKABLE_DOOR] =
    {
        .id = DECOR_BREAKABLE_DOOR,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BREAKABLE DOOR",
            "PORTE CASSABLE",
            "PORTA FRAGILE"),
=======
        .name = _("PUERTA RARA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 3000,
        .description = DecorDesc_BREAKABLE_DOOR,
        .tiles = DecorGfx_BREAKABLE_DOOR,
    },

    [DECOR_SAND_ORNAMENT] =
    {
        .id = DECOR_SAND_ORNAMENT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SAND ORNAMENT",
            "DECO DE SABLE",
            "STATUA FRAGILE"),
=======
        .name = _("ADORNO ARENA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 3000,
        .description = DecorDesc_SAND_ORNAMENT,
        .tiles = DecorGfx_SAND_ORNAMENT,
    },

    [DECOR_SILVER_SHIELD] =
    {
        .id = DECOR_SILVER_SHIELD,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SILVER SHIELD",
            "BOUCLIER ARGENT",
            "SCUDO ARGENTEO"),
=======
        .name = _("ESCUDO PLATA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 0,
        .description = DecorDesc_SILVER_SHIELD,
        .tiles = DecorGfx_SILVER_SHIELD,
    },

    [DECOR_GOLD_SHIELD] =
    {
        .id = DECOR_GOLD_SHIELD,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GOLD SHIELD",
            "BOUCLIER OR",
            "SCUDO AUREO"),
=======
        .name = _("ESCUDO DE ORO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 0,
        .description = DecorDesc_GOLD_SHIELD,
        .tiles = DecorGfx_GOLD_SHIELD,
    },

    [DECOR_GLASS_ORNAMENT] =
    {
        .id = DECOR_GLASS_ORNAMENT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GLASS ORNAMENT",
            "ORNEMENT VERRE",
            "STATUA VITREA"),
=======
        .name = _("ADORNO CRISTAL"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_BEHIND_FLOOR,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_ORNAMENT,
        .price = 0,
        .description = DecorDesc_GLASS_ORNAMENT,
        .tiles = DecorGfx_GLASS_ORNAMENT,
    },

    [DECOR_TV] =
    {
        .id = DECOR_TV,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TV",
            "TV",
            "TV"),
=======
        .name = _("TELEVISIÓN"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 3000,
        .description = DecorDesc_TV,
        .tiles = DecorGfx_TV,
    },

    [DECOR_ROUND_TV] =
    {
        .id = DECOR_ROUND_TV,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ROUND TV",
            "TV RONDE",
            "TV ROTONDA"),
=======
        .name = _("TELE REDONDA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 4000,
        .description = DecorDesc_ROUND_TV,
        .tiles = DecorGfx_ROUND_TV,
    },

    [DECOR_CUTE_TV] =
    {
        .id = DECOR_CUTE_TV,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CUTE TV",
            "JOLIE TV",
            "TV CARINA"),
=======
        .name = _("TELE BONITA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SOLID_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_ORNAMENT,
        .price = 4000,
        .description = DecorDesc_CUTE_TV,
        .tiles = DecorGfx_CUTE_TV,
    },

    [DECOR_GLITTER_MAT] =
    {
        .id = DECOR_GLITTER_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GLITTER MAT",
            "TAPIS BRILLANT",
            "TAPP. BRILLANTE"),
=======
        .name = _("TAPETE BRILLO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 2000,
        .description = DecorDesc_GLITTER_MAT,
        .tiles = DecorGfx_GLITTER_MAT,
    },

    [DECOR_JUMP_MAT] =
    {
        .id = DECOR_JUMP_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "JUMP MAT",
            "TAPIS SAUTEUR",
            "TAPPETO SALTO"),
=======
        .name = _("TAPETE MUELLE"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 2000,
        .description = DecorDesc_JUMP_MAT,
        .tiles = DecorGfx_JUMP_MAT,
    },

    [DECOR_SPIN_MAT] =
    {
        .id = DECOR_SPIN_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SPIN MAT",
            "TAPIS TOURNANT",
            "TAPPETO GIRO"),
=======
        .name = _("TAPETE GIRO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 2000,
        .description = DecorDesc_SPIN_MAT,
        .tiles = DecorGfx_SPIN_MAT,
    },

    [DECOR_C_LOW_NOTE_MAT] =
    {
        .id = DECOR_C_LOW_NOTE_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "C Low NOTE MAT",
            "TAPIS DO GRAVE",
            "TAPP. DO BASSO"),
=======
        .name = _("TAP. DO MENOR"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = DecorDesc_C_LOW_NOTE_MAT,
        .tiles = DecorGfx_C_LOW_NOTE_MAT,
    },

    [DECOR_D_NOTE_MAT] =
    {
        .id = DECOR_D_NOTE_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "D NOTE MAT",
            "TAPIS RE",
            "TAPPETO RE"),
=======
        .name = _("TAPETE NOTA RE"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = DecorDesc_D_NOTE_MAT,
        .tiles = DecorGfx_D_NOTE_MAT,
    },

    [DECOR_E_NOTE_MAT] =
    {
        .id = DECOR_E_NOTE_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "E NOTE MAT",
            "TAPIS MI",
            "TAPPETO MI"),
=======
        .name = _("TAPETE NOTA MI"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = DecorDesc_E_NOTE_MAT,
        .tiles = DecorGfx_E_NOTE_MAT,
    },

    [DECOR_F_NOTE_MAT] =
    {
        .id = DECOR_F_NOTE_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "F NOTE MAT",
            "TAPIS FA",
            "TAPPETO FA"),
=======
        .name = _("TAPETE NOTA FA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = DecorDesc_F_NOTE_MAT,
        .tiles = DecorGfx_F_NOTE_MAT,
    },

    [DECOR_G_NOTE_MAT] =
    {
        .id = DECOR_G_NOTE_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "G NOTE MAT",
            "TAPIS SOL",
            "TAPPETO SOL"),
=======
        .name = _("TAP. NOTA SOL"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = DecorDesc_G_NOTE_MAT,
        .tiles = DecorGfx_G_NOTE_MAT,
    },

    [DECOR_A_NOTE_MAT] =
    {
        .id = DECOR_A_NOTE_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "A NOTE MAT",
            "TAPIS LA",
            "TAPPETO LA"),
=======
        .name = _("TAPETE NOTA LA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = DecorDesc_A_NOTE_MAT,
        .tiles = DecorGfx_A_NOTE_MAT,
    },

    [DECOR_B_NOTE_MAT] =
    {
        .id = DECOR_B_NOTE_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "B NOTE MAT",
            "TAPIS SI",
            "TAPPETO SI"),
=======
        .name = _("TAPETE NOTA SI"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = DecorDesc_B_NOTE_MAT,
        .tiles = DecorGfx_B_NOTE_MAT,
    },

    [DECOR_C_HIGH_NOTE_MAT] =
    {
        .id = DECOR_C_HIGH_NOTE_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "C High NOTE MAT",
            "TAPIS DO AIGU",
            "TAPPETO DO ALTO"),
=======
        .name = _("TAP. DO MAYOR"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_MAT,
        .price = 500,
        .description = DecorDesc_C_HIGH_NOTE_MAT,
        .tiles = DecorGfx_C_HIGH_NOTE_MAT,
    },

    [DECOR_SURF_MAT] =
    {
        .id = DECOR_SURF_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SURF MAT",
            "TAPIS SURF",
            "TAPPETO SURF"),
=======
        .name = _("TAPETE SURF"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_MAT,
        .price = 4000,
        .description = DecorDesc_SURF_MAT,
        .tiles = DecorGfx_SURF_MAT,
    },

    [DECOR_THUNDER_MAT] =
    {
        .id = DECOR_THUNDER_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "THUNDER MAT",
            "TA.FATAL-FOUDRE",
            "TAPPETO TUONO"),
=======
        .name = _("TAPETE TRUENO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_MAT,
        .price = 4000,
        .description = DecorDesc_THUNDER_MAT,
        .tiles = DecorGfx_THUNDER_MAT,
    },

    [DECOR_FIRE_BLAST_MAT] =
    {
        .id = DECOR_FIRE_BLAST_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "FIRE BLAST MAT",
            "TA.DEFLAGRATION",
            "TAPP.FUOCOBOMBA"),
=======
        .name = _("TAP. LLAMARADA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_MAT,
        .price = 4000,
        .description = DecorDesc_FIRE_BLAST_MAT,
        .tiles = DecorGfx_FIRE_BLAST_MAT,
    },

    [DECOR_POWDER_SNOW_MAT] =
    {
        .id = DECOR_POWDER_SNOW_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "POWDER SNOW MAT",
            "TAPIS POUDREUSE",
            "TAPP. POLNEVE"),
=======
        .name = _("T. NIEVE POLVO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_MAT,
        .price = 4000,
        .description = DecorDesc_POWDER_SNOW_MAT,
        .tiles = DecorGfx_POWDER_SNOW_MAT,
    },

    [DECOR_ATTRACT_MAT] =
    {
        .id = DECOR_ATTRACT_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ATTRACT MAT",
            "TAP. ATTRACTION",
            "TAPP.ATTRAZIONE"),
=======
        .name = _("TAP. ATRACCIÓN"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_MAT,
        .price = 4000,
        .description = DecorDesc_ATTRACT_MAT,
        .tiles = DecorGfx_ATTRACT_MAT,
    },

    [DECOR_FISSURE_MAT] =
    {
        .id = DECOR_FISSURE_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "FISSURE MAT",
            "TAPIS ABIME",
            "TAPP. ABISSO"),
=======
        .name = _("TAPETE FISURA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_MAT,
        .price = 4000,
        .description = DecorDesc_FISSURE_MAT,
        .tiles = DecorGfx_FISSURE_MAT,
    },

    [DECOR_SPIKES_MAT] =
    {
        .id = DECOR_SPIKES_MAT,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SPIKES MAT",
            "TAPIS PICOTS",
            "TAPP. PUNTE"),
=======
        .name = _("TAPETE PÚAS"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_PASS_FLOOR,
        .shape = DECORSHAPE_3x3,
        .category = DECORCAT_MAT,
        .price = 4000,
        .description = DecorDesc_SPIKES_MAT,
        .tiles = DecorGfx_SPIKES_MAT,
    },

    [DECOR_BALL_POSTER] =
    {
        .id = DECOR_BALL_POSTER,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BALL POSTER",
            "POSTER BALL",
            "POSTER BALL"),
=======
        .name = _("P. POKé BALL"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_POSTER,
        .price = 1000,
        .description = DecorDesc_BALL_POSTER,
        .tiles = DecorGfx_BALL_POSTER,
    },

    [DECOR_GREEN_POSTER] =
    {
        .id = DECOR_GREEN_POSTER,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GREEN POSTER",
            "POSTER VERT",
            "POSTER VERDE"),
=======
        .name = _("PÓSTER VERDE"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_POSTER,
        .price = 1000,
        .description = DecorDesc_GREEN_POSTER,
        .tiles = DecorGfx_GREEN_POSTER,
    },

    [DECOR_RED_POSTER] =
    {
        .id = DECOR_RED_POSTER,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RED POSTER",
            "POSTER ROUGE",
            "POSTER ROSSO"),
=======
        .name = _("PÓSTER ROJO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_POSTER,
        .price = 1000,
        .description = DecorDesc_RED_POSTER,
        .tiles = DecorGfx_RED_POSTER,
    },

    [DECOR_BLUE_POSTER] =
    {
        .id = DECOR_BLUE_POSTER,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BLUE POSTER",
            "POSTER BLEU",
            "POSTER BLU"),
=======
        .name = _("PÓSTER AZUL"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_POSTER,
        .price = 1000,
        .description = DecorDesc_BLUE_POSTER,
        .tiles = DecorGfx_BLUE_POSTER,
    },

    [DECOR_CUTE_POSTER] =
    {
        .id = DECOR_CUTE_POSTER,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CUTE POSTER",
            "JOLI POSTER",
            "POSTER CARINO"),
=======
        .name = _("PÓSTER BONITO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_POSTER,
        .price = 1000,
        .description = DecorDesc_CUTE_POSTER,
        .tiles = DecorGfx_CUTE_POSTER,
    },

    [DECOR_PIKA_POSTER] =
    {
        .id = DECOR_PIKA_POSTER,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PIKA POSTER",
            "POSTER PIKA",
            "POSTER PIKA"),
=======
        .name = _("PÓSTER PIKA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_2x1,
        .category = DECORCAT_POSTER,
        .price = 1500,
        .description = DecorDesc_PIKA_POSTER,
        .tiles = DecorGfx_PIKA_POSTER,
    },

    [DECOR_LONG_POSTER] =
    {
        .id = DECOR_LONG_POSTER,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LONG POSTER",
            "GRAND POSTER",
            "POSTER LUNGO"),
=======
        .name = _("PÓSTER GRANDE"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_2x1,
        .category = DECORCAT_POSTER,
        .price = 1500,
        .description = DecorDesc_LONG_POSTER,
        .tiles = DecorGfx_LONG_POSTER,
    },

    [DECOR_SEA_POSTER] =
    {
        .id = DECOR_SEA_POSTER,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SEA POSTER",
            "POSTER OCEAN",
            "POSTER MARE"),
=======
        .name = _("PÓSTER MAR"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_2x1,
        .category = DECORCAT_POSTER,
        .price = 1500,
        .description = DecorDesc_SEA_POSTER,
        .tiles = DecorGfx_SEA_POSTER,
    },

    [DECOR_SKY_POSTER] =
    {
        .id = DECOR_SKY_POSTER,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SKY POSTER",
            "POSTER CIEL",
            "POSTER CIELO"),
=======
        .name = _("PÓSTER CIELO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_2x1,
        .category = DECORCAT_POSTER,
        .price = 1500,
        .description = DecorDesc_SKY_POSTER,
        .tiles = DecorGfx_SKY_POSTER,
    },

    [DECOR_KISS_POSTER] =
    {
        .id = DECOR_KISS_POSTER,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "KISS POSTER",
            "POSTER BAISER",
            "POSTER SMACK"),
=======
        .name = _("PÓSTER BESO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_NA_WALL,
        .shape = DECORSHAPE_2x1,
        .category = DECORCAT_POSTER,
        .price = 1500,
        .description = DecorDesc_KISS_POSTER,
        .tiles = DecorGfx_KISS_POSTER,
    },

    [DECOR_PICHU_DOLL] =
    {
        .id = DECOR_PICHU_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PICHU DOLL",
            "POUPEE PICHU",
            "BAMBOLA PICHU"),
=======
        .name = _("MUÑECO PICHU"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_PICHU_DOLL,
        .tiles = DecorGfx_PICHU_DOLL,
    },

    [DECOR_PIKACHU_DOLL] =
    {
        .id = DECOR_PIKACHU_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PIKACHU DOLL",
            "POUPEE PIKACHU",
            "BAMBOLA PIKACHU"),
=======
        .name = _("MUÑECO PIKACHU"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_PIKACHU_DOLL,
        .tiles = DecorGfx_PIKACHU_DOLL,
    },

    [DECOR_MARILL_DOLL] =
    {
        .id = DECOR_MARILL_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MARILL DOLL",
            "POUPEE MARILL",
            "BAMBOLA MARILL"),
=======
        .name = _("MUÑECO MARILL"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_MARILL_DOLL,
        .tiles = DecorGfx_MARILL_DOLL,
    },

    [DECOR_TOGEPI_DOLL] =
    {
        .id = DECOR_TOGEPI_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TOGEPI DOLL",
            "POUPEE TOGEPI",
            "BAMBOLA TOGEPI"),
=======
        .name = _("MUÑECO TOGEPI"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_TOGEPI_DOLL,
        .tiles = DecorGfx_TOGEPI_DOLL,
    },

    [DECOR_CYNDAQUIL_DOLL] =
    {
        .id = DECOR_CYNDAQUIL_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CYNDAQUIL DOLL",
            "POUP.HERICENDRE",
            "BAMB. CYNDAQUIL"),
=======
        .name = _("MUÑ. CYNDAQUIL"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_CYNDAQUIL_DOLL,
        .tiles = DecorGfx_CYNDAQUIL_DOLL,
    },

    [DECOR_CHIKORITA_DOLL] =
    {
        .id = DECOR_CHIKORITA_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CHIKORITA DOLL",
            "POUP. GERMIGNON",
            "BAMB. CHIKORITA"),
=======
        .name = _("MUÑ. CHIKORITA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_CHIKORITA_DOLL,
        .tiles = DecorGfx_CHIKORITA_DOLL,
    },

    [DECOR_TOTODILE_DOLL] =
    {
        .id = DECOR_TOTODILE_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TOTODILE DOLL",
            "POUPEE KAIMINUS",
            "BAMB. TOTODILE"),
=======
        .name = _("MUÑ. TOTODILE"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_TOTODILE_DOLL,
        .tiles = DecorGfx_TOTODILE_DOLL,
    },

    [DECOR_JIGGLYPUFF_DOLL] =
    {
        .id = DECOR_JIGGLYPUFF_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "JIGGLYPUFF DOLL",
            "POUP. RONDOUDOU",
            "BAMB.JIGGLYPUFF"),
=======
        .name = _("MUÑ. JIGGLYPUFF"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_JIGGLYPUFF_DOLL,
        .tiles = DecorGfx_JIGGLYPUFF_DOLL,
    },

    [DECOR_MEOWTH_DOLL] =
    {
        .id = DECOR_MEOWTH_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MEOWTH DOLL",
            "POUPEE MIAOUSS",
            "BAMB. MEOWTH"),
=======
        .name = _("MUÑECO MEOWTH"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_MEOWTH_DOLL,
        .tiles = DecorGfx_MEOWTH_DOLL,
    },

    [DECOR_CLEFAIRY_DOLL] =
    {
        .id = DECOR_CLEFAIRY_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CLEFAIRY DOLL",
            "POUPEE MELOFEE",
            "BAMB. CLEFAIRY"),
=======
        .name = _("MUÑECO CLEFAIRY"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_CLEFAIRY_DOLL,
        .tiles = DecorGfx_CLEFAIRY_DOLL,
    },

    [DECOR_DITTO_DOLL] =
    {
        .id = DECOR_DITTO_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "DITTO DOLL",
            "POUP. METAMORPH",
            "BAMBOLA DITTO"),
=======
        .name = _("MUÑECO DITTO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_DITTO_DOLL,
        .tiles = DecorGfx_DITTO_DOLL,
    },

    [DECOR_SMOOCHUM_DOLL] =
    {
        .id = DECOR_SMOOCHUM_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SMOOCHUM DOLL",
            "POUPEE LIPPOUTI",
            "BAMB. SMOOCHUM"),
=======
        .name = _("MUÑECO SMOOCHUM"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_SMOOCHUM_DOLL,
        .tiles = DecorGfx_SMOOCHUM_DOLL,
    },

    [DECOR_TREECKO_DOLL] =
    {
        .id = DECOR_TREECKO_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TREECKO DOLL",
            "POUPEE ARCKO",
            "BAMBOLA TREECKO"),
=======
        .name = _("MUÑECO TREECKO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_TREECKO_DOLL,
        .tiles = DecorGfx_TREECKO_DOLL,
    },

    [DECOR_TORCHIC_DOLL] =
    {
        .id = DECOR_TORCHIC_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "TORCHIC DOLL",
            "POUP.POUSSIFEU",
            "BAMBOLA TORCHIC"),
=======
        .name = _("MUÑECO TORCHIC"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_TORCHIC_DOLL,
        .tiles = DecorGfx_TORCHIC_DOLL,
    },

    [DECOR_MUDKIP_DOLL] =
    {
        .id = DECOR_MUDKIP_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "MUDKIP DOLL",
            "POUPEE GOBOU",
            "BAMBOLA MUDKIP"),
=======
        .name = _("MUÑECO MUDKIP"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_MUDKIP_DOLL,
        .tiles = DecorGfx_MUDKIP_DOLL,
    },

    [DECOR_DUSKULL_DOLL] =
    {
        .id = DECOR_DUSKULL_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "DUSKULL DOLL",
            "POUPEE SKELENOX",
            "BAMBOLA DUSKULL"),
=======
        .name = _("MUÑECO DUSKULL"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_DUSKULL_DOLL,
        .tiles = DecorGfx_DUSKULL_DOLL,
    },

    [DECOR_WYNAUT_DOLL] =
    {
        .id = DECOR_WYNAUT_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "WYNAUT DOLL",
            "POUPEE OKEOKE",
            "BAMBOLA WYNAUT"),
=======
        .name = _("MUÑECO WYNAUT"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_WYNAUT_DOLL,
        .tiles = DecorGfx_WYNAUT_DOLL,
    },

    [DECOR_BALTOY_DOLL] =
    {
        .id = DECOR_BALTOY_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BALTOY DOLL",
            "POUPEE BALBUTO",
            "BAMBOLA BALTOY"),
=======
        .name = _("MUÑECO BALTOY"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_BALTOY_DOLL,
        .tiles = DecorGfx_BALTOY_DOLL,
    },

    [DECOR_KECLEON_DOLL] =
    {
        .id = DECOR_KECLEON_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "KECLEON DOLL",
            "POUPEE KECLEON",
            "BAMBOLA KECLEON"),
=======
        .name = _("MUÑECO KECLEON"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_KECLEON_DOLL,
        .tiles = DecorGfx_KECLEON_DOLL,
    },

    [DECOR_AZURILL_DOLL] =
    {
        .id = DECOR_AZURILL_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "AZURILL DOLL",
            "POUPEE AZURILL",
            "BAMBOLA AZURILL"),
=======
        .name = _("MUÑECO AZURILL"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_AZURILL_DOLL,
        .tiles = DecorGfx_AZURILL_DOLL,
    },

    [DECOR_SKITTY_DOLL] =
    {
        .id = DECOR_SKITTY_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SKITTY DOLL",
            "POUPEE SKITTY",
            "BAMBOLA SKITTY"),
=======
        .name = _("MUÑECO SKITTY"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_SKITTY_DOLL,
        .tiles = DecorGfx_SKITTY_DOLL,
    },

    [DECOR_SWABLU_DOLL] =
    {
        .id = DECOR_SWABLU_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SWABLU DOLL",
            "POUPEE TYLTON",
            "BAMBOLA SWABLU"),
=======
        .name = _("MUÑECO SWABLU"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_SWABLU_DOLL,
        .tiles = DecorGfx_SWABLU_DOLL,
    },

    [DECOR_GULPIN_DOLL] =
    {
        .id = DECOR_GULPIN_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GULPIN DOLL",
            "POUPEE GLOUPTI",
            "BAMBOLA GULPIN"),
=======
        .name = _("MUÑECO GULPIN"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_GULPIN_DOLL,
        .tiles = DecorGfx_GULPIN_DOLL,
    },

    [DECOR_LOTAD_DOLL] =
    {
        .id = DECOR_LOTAD_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LOTAD DOLL",
            "POUPEE NENUPIOT",
            "BAMBOLA LOTAD"),
=======
        .name = _("MUÑECO LOTAD"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_LOTAD_DOLL,
        .tiles = DecorGfx_LOTAD_DOLL,
    },

    [DECOR_SEEDOT_DOLL] =
    {
        .id = DECOR_SEEDOT_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SEEDOT DOLL",
            "POUP.GRAINIPIOT",
            "BAMBOLA SEEDOT"),
=======
        .name = _("MUÑECO SEEDOT"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_DOLL,
        .price = 3000,
        .description = DecorDesc_SEEDOT_DOLL,
        .tiles = DecorGfx_SEEDOT_DOLL,
    },

    [DECOR_PIKA_CUSHION] =
    {
        .id = DECOR_PIKA_CUSHION,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "PIKA CUSHION",
            "COUSSIN PIKACHU",
            "CUSCINO PIKA"),
=======
        .name = _("COJÍN PIKA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = DecorDesc_PIKA_CUSHION,
        .tiles = DecorGfx_PIKA_CUSHION,
    },

    [DECOR_ROUND_CUSHION] =
    {
        .id = DECOR_ROUND_CUSHION,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ROUND CUSHION",
            "COUSSIN ROND",
            "CUSCINO ROTONDO"),
=======
        .name = _("COJÍN REDONDO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = DecorDesc_ROUND_CUSHION,
        .tiles = DecorGfx_ROUND_CUSHION,
    },

    [DECOR_KISS_CUSHION] =
    {
        .id = DECOR_KISS_CUSHION,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "KISS CUSHION",
            "COUSSIN BAISER",
            "CUSCINO SMACK"),
=======
        .name = _("COJÍN BESO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = DecorDesc_KISS_CUSHION,
        .tiles = DecorGfx_KISS_CUSHION,
    },

    [DECOR_ZIGZAG_CUSHION] =
    {
        .id = DECOR_ZIGZAG_CUSHION,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "ZIGZAG CUSHION",
            "COUSSIN ZIGZAG",
            "CUSCINO ZIGZAG"),
=======
        .name = _("COJÍN ZIGZAGOON"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = DecorDesc_ZIGZAG_CUSHION,
        .tiles = DecorGfx_ZIGZAG_CUSHION,
    },

    [DECOR_SPIN_CUSHION] =
    {
        .id = DECOR_SPIN_CUSHION,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SPIN CUSHION",
            "COUSSIN SPIRALE",
            "CUSCINO GIRO"),
=======
        .name = _("COJÍN SPINDA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = DecorDesc_SPIN_CUSHION,
        .tiles = DecorGfx_SPIN_CUSHION,
    },

    [DECOR_DIAMOND_CUSHION] =
    {
        .id = DECOR_DIAMOND_CUSHION,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "DIAMOND CUSHION",
            "COUSSIN DIAMANT",
            "CUSC. DIAMANTE"),
=======
        .name = _("COJÍN DIAMANTE"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = DecorDesc_DIAMOND_CUSHION,
        .tiles = DecorGfx_DIAMOND_CUSHION,
    },

    [DECOR_BALL_CUSHION] =
    {
        .id = DECOR_BALL_CUSHION,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BALL CUSHION",
            "COUSSIN BALL",
            "CUSCINO BALL"),
=======
        .name = _("COJÍN BALL"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = DecorDesc_BALL_CUSHION,
        .tiles = DecorGfx_BALL_CUSHION,
    },

    [DECOR_GRASS_CUSHION] =
    {
        .id = DECOR_GRASS_CUSHION,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "GRASS CUSHION",
            "COUSSIN PLANTE",
            "CUSCINO ERBA"),
=======
        .name = _("COJÍN PLANTA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = DecorDesc_GRASS_CUSHION,
        .tiles = DecorGfx_GRASS_CUSHION,
    },

    [DECOR_FIRE_CUSHION] =
    {
        .id = DECOR_FIRE_CUSHION,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "FIRE CUSHION",
            "COUSSIN FEU",
            "CUSCINO FUOCO"),
=======
        .name = _("COJÍN FUEGO"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = DecorDesc_FIRE_CUSHION,
        .tiles = DecorGfx_FIRE_CUSHION,
    },

    [DECOR_WATER_CUSHION] =
    {
        .id = DECOR_WATER_CUSHION,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "WATER CUSHION",
            "COUSSIN EAU",
            "CUSCINO ACQUA"),
=======
        .name = _("COJÍN AGUA"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x1,
        .category = DECORCAT_CUSHION,
        .price = 2000,
        .description = DecorDesc_WATER_CUSHION,
        .tiles = DecorGfx_WATER_CUSHION,
    },

    [DECOR_SNORLAX_DOLL] =
    {
        .id = DECOR_SNORLAX_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "SNORLAX DOLL",
            "POUPEE RONFLEX",
            "BAMBOLA SNORLAX"),
=======
        .name = _("MUÑECO SNORLAX"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = DecorDesc_SNORLAX_DOLL,
        .tiles = DecorGfx_SNORLAX_DOLL,
    },

    [DECOR_RHYDON_DOLL] =
    {
        .id = DECOR_RHYDON_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "RHYDON DOLL",
            "POUP.RHINOFEROS",
            "BAMBOLA RHYDON"),
=======
        .name = _("MUÑECO RHYDON"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = DecorDesc_RHYDON_DOLL,
        .tiles = DecorGfx_RHYDON_DOLL,
    },

    [DECOR_LAPRAS_DOLL] =
    {
        .id = DECOR_LAPRAS_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "LAPRAS DOLL",
            "POUPEE LOKHLASS",
            "BAMBOLA LAPRAS"),
=======
        .name = _("MUÑECO LAPRAS"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = DecorDesc_LAPRAS_DOLL,
        .tiles = DecorGfx_LAPRAS_DOLL,
    },

    [DECOR_VENUSAUR_DOLL] =
    {
        .id = DECOR_VENUSAUR_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "VENUSAUR DOLL",
            "POUP.FLORIZARRE",
            "BAMB. VENUSAUR"),
=======
        .name = _("MUÑECO VENUSAUR"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = DecorDesc_VENUSAUR_DOLL,
        .tiles = DecorGfx_VENUSAUR_DOLL,
    },

    [DECOR_CHARIZARD_DOLL] =
    {
        .id = DECOR_CHARIZARD_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "CHARIZARD DOLL",
            "POUP. DRACAUFEU",
            "BAMB. CHARIZARD"),
=======
        .name = _("MUÑECO CHARIZAR"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = DecorDesc_CHARIZARD_DOLL,
        .tiles = DecorGfx_CHARIZARD_DOLL,
    },

    [DECOR_BLASTOISE_DOLL] =
    {
        .id = DECOR_BLASTOISE_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "BLASTOISE DOLL",
            "POUPEE TORTANK",
            "BAMB. BLASTOISE"),
=======
        .name = _("MUÑ. BLASTOISE"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = DecorDesc_BLASTOISE_DOLL,
        .tiles = DecorGfx_BLASTOISE_DOLL,
    },

    [DECOR_WAILMER_DOLL] =
    {
        .id = DECOR_WAILMER_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "WAILMER DOLL",
            "POUPEE WAILMER",
            "BAMB. WAILMER"),
=======
        .name = _("MUÑECO WAILMER"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = DecorDesc_WAILMER_DOLL,
        .tiles = DecorGfx_WAILMER_DOLL,
    },

    [DECOR_REGIROCK_DOLL] =
    {
        .id = DECOR_REGIROCK_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "REGIROCK DOLL",
            "POUPEE REGIROCK",
            "BAMB. REGIROCK"),
=======
        .name = _("MUÑECO REGIROCK"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = DecorDesc_REGIROCK_DOLL,
        .tiles = DecorGfx_REGIROCK_DOLL,
    },

    [DECOR_REGICE_DOLL] =
    {
        .id = DECOR_REGICE_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "REGICE DOLL",
            "POUPEE REGICE",
            "BAMBOLA REGICE"),
=======
        .name = _("MUÑECO REGICE"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = DecorDesc_REGICE_DOLL,
        .tiles = DecorGfx_REGICE_DOLL,
    },

    [DECOR_REGISTEEL_DOLL] =
    {
        .id = DECOR_REGISTEEL_DOLL,
<<<<<<< HEAD
        .name = LANGUAGE_STRING(
            "REGISTEEL DOLL",
            "POUP. REGISTEEL",
            "BAMB. REGISTEEL"),
=======
        .name = _("MUÑ. REGISTEEL"),
>>>>>>> Egg/spanish
        .permission = DECORPERM_SPRITE,
        .shape = DECORSHAPE_1x2,
        .category = DECORCAT_DOLL,
        .price = 10000,
        .description = DecorDesc_REGISTEEL_DOLL,
        .tiles = DecorGfx_REGISTEEL_DOLL,
    }
};
