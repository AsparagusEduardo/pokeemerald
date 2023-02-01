#ifndef GUARD_CONFIG_POKEMON_H
#define GUARD_CONFIG_POKEMON_H

// Species data settings
#define P_UPDATED_TYPES             GEN_LATEST  // Since Gen 6, several Pokémon were changed to be partially or fully Fairy type.
#define P_UPDATED_STATS             GEN_LATEST  // Since Gen 6, Pokémon stats are updated with each passing generation.
#define P_UPDATED_ABILITIES         GEN_LATEST  // Since Gen 6, certain Pokémon have their abilities changed.
#define P_UPDATED_EGG_GROUPS        GEN_LATEST  // Since Gen 8, certain Pokémon have gained new egg groups.

// Breeding settings
#define P_NIDORAN_M_DITTO_BREED     GEN_LATEST  // Since Gen 5, when Nidoran♂ breeds with Ditto it can produce Nidoran♀ offspring. Before, it would only yield male offspring. This change also applies to Volbeat.
#define P_INCENSE_BREEDING          GEN_LATEST  // Since Gen 9, cross-generation Baby Pokémon don't require Incense being held by the parents to be obtained via breeding.
#define P_EGG_HATCH_LEVEL           GEN_LATEST  // Since Gen 4, Pokémon will hatch from eggs at level 1 instead of 5.
#define P_BALL_INHERITING           GEN_LATEST  // Since Gen 6, Eggs from the Daycare will inherit the Poké Ball from their mother. From Gen7 onwards, the father can pass it down as well, as long as it's of the same species as the mother.

// Pokédex settings
#define P_DEX_SEARCH_SINGLE_LETTER  TRUE        // If TRUE, the Pokédex filter by name will be separated by letter, instead of groups of 3 letters.
#define P_DEX_EMPTY_ENTRY_SKIP      TRUE        // If TRUE, the Pokédex numerical order will skip empty entries if they don't have a seen or caught entry before or after.
#define P_DEX_EMPTY_ENTRY_AT_ENDS   FALSE       // If TRUE and P_DEX_EMPTY_ENTRY_SKIP is on, it will show trailing missing entries at the beginning and end of the scrolling list.
#define P_DEX_SEPARATE_FORMS_CAUGHT FALSE       // If TRUE, in order to see form dex data, they need to be caught separately.
#define P_DEX_FOUR_DIGITS_AMOUNT    TRUE        // If TRUE,

// Other settings
#define P_SHEDINJA_BALL             GEN_LATEST  // Since Gen 4, Shedinja requires a Poké Ball for its evolution. In Gen 3, Shedinja inherits Nincada's Ball.
#define P_LEGENDARY_PERFECT_IVS     GEN_LATEST  // Since Gen 6, Legendaries, Mythicals and Ultra Beasts found in the wild or given through gifts have at least 3 perfect IVs.
#define P_KADABRA_EVERSTONE         GEN_LATEST  // Since Gen 4, Kadabra can evolve even when holding an Everstone.
#define P_HIPPO_GENDER_DIFF_ICONS   TRUE        // If TRUE, will give Hippopotas and Hippowdon custom icons for their female forms.

// Flag settings
// To use the following features in scripting, replace the 0s with the flag ID you're assigning it to.
// Eg: Replace with FLAG_UNUSED_0x264 so you can use that flag to toggle the feature.
#define P_FLAG_FORCE_SHINY      0     // If this flag is set, all wild and gift Pokémon will forced into being Shiny.
#define P_FLAG_FORCE_NO_SHINY   0     // If this flag is set, all wild and gift Pokémon will forced into NOT being Shiny.

// Enabled species settings
// These settings will toggle evolution families that originated in the specified generation.
#define P_SPECIES_GEN_1             TRUE        // Generation 1 Pokémon (RGBY)
#define P_SPECIES_GEN_2             TRUE        // Generation 2 Pokémon (GSC)
#define P_SPECIES_GEN_3             TRUE        // Generation 3 Pokémon (RSE, FRLG)
#define P_SPECIES_GEN_4             TRUE        // Generation 4 Pokémon (DPPt, HGSS)
#define P_SPECIES_GEN_5             TRUE        // Generation 5 Pokémon (BW, B2W2)
#define P_SPECIES_GEN_6             TRUE        // Generation 6 Pokémon (XY, ORAS)
#define P_SPECIES_GEN_7             TRUE        // Generation 7 Pokémon (SM, USUM, LGPE)
#define P_SPECIES_GEN_8             TRUE        // Generation 8 Pokémon (SwSh, BDSP, LA)
#define P_SPECIES_GEN_9             TRUE        // Generation 9 Pokémon (SV)

#define P_SPECIES_NEW_EVOLUTIONS    TRUE        // Babies and Evolutions (not including Regional Evolutions)
#define P_SPECIES_MEGA_EVOLUTIONS   TRUE        // Mega Evolutions
#define P_SPECIES_GIGANTAMAX_FORMS  TRUE        // Gigantamax Forms
#define P_SPECIES_ALOLAN_FORMS      TRUE        // Alolan Forms (includes exclusive evolutions)
#define P_SPECIES_GALARIAN_FORMS    TRUE        // Galarian Forms (includes exclusive evolutions)
#define P_SPECIES_HISUIAN_FORMS     TRUE        // Hisuian Forms (includes exclusive evolutions)
#define P_SPECIES_PALDEAN_FORMS     TRUE        // Paldean Forms (includes Clodsire)

// WARNING: By default, the expansion has 512 bytes reserved in SaveBlock1 to allow introducing new species and forms without breaking existing saves.
// By disabling this feature, the amount of dex flags will be adjusted to the amount of species enabled in the previous section.
// Only disable this if you are certain that you can't get save space somewhere else and you know that you're not going to modify the amount of species you're going to register in the Pokédex.
#define P_DEX_FLAG_FUTURE_PROOFING  TRUE

#endif // GUARD_CONFIG_POKEMON_H
