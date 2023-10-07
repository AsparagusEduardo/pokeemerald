//
// This file is shared between the game src and the offline bake to assist in making 
// queries and other stuff which can be prepared offline a bit faster
//
#include "constants/battle_ai.h"
#include "constants/items.h"
#include "constants/pokemon.h"
#include "constants/songs.h"
#include "constants/species.h"
#include "constants/trainers.h"

#ifdef ROGUE_BAKING
// Manually reinclude this if regenerating
#include "BakeHelpers.h"

extern const struct BaseStats gBaseStats[];
#else
#include "global.h"
#include "data.h"
#include "graphics.h"
#include "item.h"
#include "item_use.h"
#include "string_util.h"

#include "rogue_automation.h"
#include "rogue_campaign.h"
#include "rogue_controller.h"
#include "rogue_charms.h"
#include "rogue_pokedex.h"
#include "rogue_trainers.h"
#endif

#include "rogue_baked.h"


#ifdef ROGUE_BAKING
#define ROGUE_BAKE_INVALID
#else
// Swap to force runtime resolution
//#define ROGUE_BAKE_INVALID
#define ROGUE_BAKE_VALID
#endif

extern const u8 gText_TrainerName_Brendan[];
extern const u8 gText_TrainerName_May[];
extern const u8 gText_TrainerName_Red[];
extern const u8 gText_TrainerName_Leaf[];
extern const u8 gText_TrainerName_Ethan[];
extern const u8 gText_TrainerName_Lyra[];

extern struct Evolution gEvolutionTable[][EVOS_PER_MON];
extern const struct RogueItem gRogueItems[];

#ifdef ROGUE_BAKE_VALID
extern const u16 gRogueBake_EggSpecies[NUM_SPECIES];
extern const u8 gRogueBake_EvolutionCount[NUM_SPECIES];
extern const u32 gRogueBake_EvolutionChainTypeFlags[NUM_SPECIES];
extern const u8 gRogueBake_PokedexVariantBitFlags[POKEDEX_VARIANT_COUNT][SPECIES_FLAGS_BYTE_COUNT];
#endif

void HistoryBufferPush(u16* buffer, u16 capacity, u16 value)
{
    u16 i;
    u16 j;
    for(i = 1; i < capacity; ++i)
    {
        // Reverse to avoid stomping on top of old values
        j = capacity - i - 1;
        buffer[j] = buffer[j - 1];
    }

    buffer[0] = value;
}

bool8 HistoryBufferContains(u16* buffer, u16 capacity, u16 value)
{
    u16 i;
    for(i = 0; i < capacity; ++i)
    {
        if(buffer[i] == value)
            return TRUE;
    }

    return FALSE;
}

u16 SelectIndexFromWeights(u16* weights, u16 count, u16 rngValue)
{
    u16 totalWeight;
    u16 targetWeight;
    u8 i;

    totalWeight = 0;
    for(i = 0; i < count; ++i)
    {
        totalWeight += weights[i];
    }

    targetWeight = rngValue % totalWeight;
    totalWeight = 0;

    for(i = 0; i < count; ++i)
    {
        totalWeight += weights[i];

        if(targetWeight < totalWeight)
        {
            return i;
        }
    }

    AGB_ASSERT(FALSE);
    return 0;
}

bool8 Rogue_CheckPokedexVariantFlag(u8 dexVariant, u16 species, bool8* result)
{
#ifdef ROGUE_BAKE_VALID
    if(dexVariant < POKEDEX_VARIANT_COUNT)
    {
        u16 idx = species / 8;
        u16 bit = species % 8;

        u8 bitMask = 1 << bit;

        *result = (gRogueBake_PokedexVariantBitFlags[dexVariant][idx] & bitMask) != 0;

        return TRUE;
    }
#endif
    return FALSE;
}

void Rogue_ModifyEvolution(u16 species, u8 evoIdx, struct Evolution* outEvo)
{
    memcpy(outEvo, &gEvolutionTable[species][evoIdx], sizeof(struct Evolution));

    // Any species alterations
#ifdef ROGUE_EXPANSION
    if(species == SPECIES_KOFFING && evoIdx == 1)
    {
        outEvo->targetSpecies = SPECIES_WEEZING_GALARIAN;
    }

    if(species == SPECIES_MIME_JR && evoIdx == 1)
    {
        outEvo->targetSpecies = SPECIES_MR_MIME_GALARIAN;
    }


    if(species == SPECIES_STANTLER && evoIdx == 0)
    {
        // TODO - Make know psyshield bash?
        outEvo->targetSpecies = SPECIES_WYRDEER;
        outEvo->method = EVO_LEVEL;
        outEvo->param = 30;
    }

    if(species == SPECIES_SCYTHER && evoIdx == 1)
    {
        outEvo->targetSpecies = SPECIES_KLEAVOR;
        outEvo->method = EVO_LEVEL_ITEM;
        outEvo->param = ITEM_BLACK_AUGURITE;
    }

    if(species == SPECIES_URSARING && evoIdx == 0)
    {
        outEvo->targetSpecies = SPECIES_URSALUNA;
        outEvo->method = EVO_ITEM_HOLD_NIGHT;
        outEvo->param = ITEM_PEAT_BLOCK;
    }

    if(species == SPECIES_BASCULIN_WHITE_STRIPED)
    {
        if(evoIdx == 0)
        {
            outEvo->targetSpecies = SPECIES_BASCULEGION;
            outEvo->method = EVO_LEVEL_MALE;
            outEvo->param = 30;
        }
        else if(evoIdx == 1)
        {
            outEvo->targetSpecies = SPECIES_BASCULEGION_FEMALE;
            outEvo->method = EVO_LEVEL_FEMALE;
            outEvo->param = 30;
        }
    }
    if(species == SPECIES_SNEASEL_HISUIAN && evoIdx == 0)
    {
        outEvo->targetSpecies = SPECIES_SNEASLER;
        outEvo->method = EVO_ITEM_HOLD_DAY;
        outEvo->param = ITEM_RAZOR_CLAW;
    }

    if(species == SPECIES_QWILFISH_HISUIAN && evoIdx == 0)
    {
        // TODO - Make know barb barrage?
        outEvo->targetSpecies = SPECIES_OVERQWIL;
        outEvo->method = EVO_LEVEL;
        outEvo->param = 30;
    }

    if(species == SPECIES_GROWLITHE_HISUIAN && evoIdx == 0)
    {
        outEvo->targetSpecies = SPECIES_ARCANINE_HISUIAN;
        outEvo->method = EVO_ITEM;
        outEvo->param = ITEM_FIRE_STONE;
    }
    
    if(species == SPECIES_GROWLITHE_HISUIAN && evoIdx == 0)
    {
        outEvo->targetSpecies = SPECIES_ARCANINE_HISUIAN;
        outEvo->method = EVO_ITEM;
        outEvo->param = ITEM_FIRE_STONE;
    }
    
    if(species == SPECIES_VOLTORB_HISUIAN && evoIdx == 0)
    {
        outEvo->targetSpecies = SPECIES_ELECTRODE_HISUIAN;
        outEvo->method = EVO_ITEM;
        outEvo->param = ITEM_LEAF_STONE;
    }

    if(species == SPECIES_ZORUA_HISUIAN && evoIdx == 0)
    {
        outEvo->targetSpecies = SPECIES_ZOROARK_HISUIAN;
        outEvo->method = EVO_LEVEL;
        outEvo->param = 30;
    }

    if(species == SPECIES_SLIGGOO_HISUIAN && evoIdx == 0)
    {
        outEvo->targetSpecies = SPECIES_GOODRA_HISUIAN;
        outEvo->method = EVO_LEVEL_RAIN;
        outEvo->param = 50;
    }

    // TODO - SPECIES_TYPHLOSION_HISUIAN (lvl 36)
    // TODO - SPECIES_SAMUROTT_HISUIAN (lvl 36)
    // TODO - SPECIES_LILLIGANT_HISUIAN (Sun stone)
    // TODO - SPECIES_BRAVIARY_HISUIAN (lvl 54)
    // TODO - SPECIES_SLIGGOO_HISUIAN (lvl 40)
    // TODO - SPECIES_AVALUGG_HISUIAN (lvl 37)
    // TODO - SPECIES_DECIDUEYE_HISUIAN (lvl 36)

#endif

#ifndef ROGUE_BAKING
    if(outEvo->targetSpecies != SPECIES_NONE && !RoguePokedex_IsSpeciesEnabled(outEvo->targetSpecies))
    {
        // Invalid evo
        outEvo->targetSpecies = SPECIES_NONE;
        outEvo->method = 0;
        return;
    }
#endif

#if defined(ROGUE_EXPANSION) && !defined(ROGUE_BAKING)
    if(!IsMegaEvolutionEnabled())
    {
        switch(outEvo->method)
        {
            case(EVO_MEGA_EVOLUTION):
            case(EVO_MOVE_MEGA_EVOLUTION):
            case(EVO_PRIMAL_REVERSION):
                outEvo->targetSpecies = SPECIES_NONE;
                outEvo->method = 0;
                break;
        }
    }
#endif

    if(outEvo->targetSpecies != SPECIES_NONE)
    {
#ifdef ROGUE_EXPANSION
        if(species == SPECIES_MILCERY)
        {
            switch(outEvo->targetSpecies)
            {
                case SPECIES_ALCREMIE:
                    outEvo->method = EVO_LEVEL_ITEM;
                    outEvo->param = ITEM_PECHA_BERRY;
                    break;

                case SPECIES_ALCREMIE_RUBY_CREAM:
                    outEvo->method = EVO_LEVEL_ITEM;
                    outEvo->param = ITEM_PERSIM_BERRY;
                    break;

                case SPECIES_ALCREMIE_MATCHA_CREAM:
                    outEvo->method = EVO_LEVEL_ITEM;
                    outEvo->param = ITEM_RAWST_BERRY;
                    break;

                case SPECIES_ALCREMIE_MINT_CREAM:
                    outEvo->method = EVO_LEVEL_ITEM;
                    outEvo->param = ITEM_CHERI_BERRY;
                    break;

                case SPECIES_ALCREMIE_LEMON_CREAM:
                    outEvo->method = EVO_LEVEL_ITEM;
                    outEvo->param = ITEM_ASPEAR_BERRY;
                    break;

                case SPECIES_ALCREMIE_SALTED_CREAM:
                    outEvo->method = EVO_LEVEL_ITEM;
                    outEvo->param = ITEM_CHESTO_BERRY;
                    break;

                case SPECIES_ALCREMIE_RUBY_SWIRL:
                    outEvo->method = EVO_LEVEL_ITEM;
                    outEvo->param = ITEM_LEPPA_BERRY;
                    break;

                case SPECIES_ALCREMIE_CARAMEL_SWIRL:
                    outEvo->method = EVO_LEVEL_ITEM;
                    outEvo->param = ITEM_SITRUS_BERRY;
                    break;

                case SPECIES_ALCREMIE_RAINBOW_SWIRL:
                    outEvo->method = EVO_LEVEL_ITEM;
                    outEvo->param = ITEM_SALAC_BERRY;
                    break;

                default:
                    outEvo->targetSpecies = SPECIES_NONE;
                    outEvo->method = 0;
                    break;
            }
        }

        if(species == SPECIES_YAMASK_GALARIAN && evoIdx == 0)
        {
            outEvo->method = EVO_LEVEL;
            outEvo->param = 34;
        }

        if(species == SPECIES_MELTAN && evoIdx == 0)
        {
            outEvo->method = EVO_LEVEL_ITEM;
            outEvo->param = ITEM_METAL_COAT;
        }

        if(species == SPECIES_EXEGGCUTE && evoIdx == 1)
        {
            outEvo->method = EVO_LEVEL_ITEM;
            outEvo->param = ITEM_DRAGON_SCALE;
        }

        if(species == SPECIES_MIME_JR && evoIdx == 1)
        {
            outEvo->method = EVO_ITEM;
            outEvo->param = ITEM_ICE_STONE;
        }

        if(species == SPECIES_KOFFING && evoIdx == 1)
        {
            outEvo->method = EVO_ITEM;
            outEvo->param = ITEM_GALARICA_CUFF;
        }

        if (species == SPECIES_MIME_JR && evoIdx == 1)
        {
            outEvo->method = EVO_LEVEL;
            outEvo->param = 42;
        }

        if(species == SPECIES_PIKACHU && evoIdx == 1)
        {
            outEvo->method = EVO_ITEM;
            outEvo->param = ITEM_SHINY_STONE;
        }
#endif

        switch(outEvo->method)
        {
            case(EVO_BEAUTY):
            case(EVO_FRIENDSHIP):
                outEvo->method = EVO_LEVEL;
                outEvo->param = 30;
                break;

            case(EVO_TRADE):
                outEvo->method = EVO_LEVEL_ITEM;
                outEvo->param = ITEM_LINK_CABLE;
                break;
            case(EVO_TRADE_ITEM):
                outEvo->method = EVO_LEVEL_ITEM;
                break;

            case(EVO_FRIENDSHIP_DAY):
                outEvo->method = EVO_LEVEL_DAY;
                outEvo->param = 30;
                break;
            case(EVO_FRIENDSHIP_NIGHT):
                outEvo->method = EVO_LEVEL_NIGHT;
                outEvo->param = 30;
                break;

#ifdef ROGUE_EXPANSION
            case(EVO_SPECIFIC_MON_IN_PARTY):
            case(EVO_CRITICAL_HITS):
            case(EVO_SCRIPT_TRIGGER_DMG):
                outEvo->method = EVO_LEVEL;
                outEvo->param = 30;
                break;

            case(EVO_WATER_SCROLL):
                outEvo->method = EVO_ITEM;
                outEvo->param = ITEM_WATER_STONE;
                break;
            case(EVO_DARK_SCROLL):
                outEvo->method = EVO_ITEM;
                outEvo->param = ITEM_MOON_STONE;
                break;

            case(EVO_TRADE_SPECIFIC_MON):
                outEvo->method = EVO_LEVEL_ITEM;
                outEvo->param = ITEM_LINK_CABLE;
                break;

            case(EVO_LEVEL_RAIN):
            case(EVO_LEVEL_DARK_TYPE_MON_IN_PARTY):
                outEvo->method = EVO_LEVEL;
                break;

            case(EVO_SPECIFIC_MAP):
                if(species == SPECIES_EEVEE)
                {
                    outEvo->targetSpecies = 0;
                    outEvo->method = 0;
                    outEvo->param = 0;
                }
                else
                {
                    // Crabrawler
                    outEvo->method = EVO_ITEM;
                    outEvo->param = ITEM_WATER_STONE;
                }
                break;

            case(EVO_MAPSEC):
                // All these were MAPSEC_NEW_MAUVILLE
                //outEvo->method = EVO_SPECIFIC_MAP;
                //outEvo->param = MAP_ROGUE_ROUTE_URBAN0;
                outEvo->method = EVO_ITEM;
                outEvo->param = ITEM_THUNDER_STONE;
                break;
#endif
        }
    }
}

void Rogue_ModifyEvolution_ApplyCurses(u16 species, u8 evoIdx, struct Evolution* outEvo)
{
#ifndef ROGUE_BAKING
    if(outEvo->targetSpecies != SPECIES_NONE)
    {
        // Apply evo curse
        if(IsCurseActive(EFFECT_EVERSTONE_EVOS))
        {
            switch (outEvo->method)
            {
            case EVO_LEVEL:
            case EVO_LEVEL_ATK_GT_DEF:
            case EVO_LEVEL_ATK_EQ_DEF:
            case EVO_LEVEL_ATK_LT_DEF:
            case EVO_LEVEL_SILCOON:
            case EVO_LEVEL_CASCOON:
            case EVO_LEVEL_NINJASK:
            //case EVO_LEVEL_SHEDINJA:
#ifdef ROGUE_EXPANSION
            case EVO_LEVEL_FEMALE:
            case EVO_LEVEL_MALE:
            case EVO_LEVEL_NIGHT:
            case EVO_LEVEL_DAY:
            case EVO_LEVEL_DUSK:
            case EVO_LEVEL_RAIN:
            case EVO_LEVEL_DARK_TYPE_MON_IN_PARTY:
            case EVO_LEVEL_NATURE_AMPED:
            case EVO_LEVEL_NATURE_LOW_KEY:
#endif
                outEvo->method = EVO_LEVEL_ITEM;
                outEvo->param = ITEM_LINK_CABLE;
                break;
            }
        }
    }
#endif
}

const u8* Rogue_GetTrainerName(u16 trainerNum)
{
#ifndef ROGUE_BAKING
    const struct RogueTrainer* trainer = Rogue_GetTrainer(trainerNum);
    //if((trainer->trainerFlags & TRAINER_FLAG_NAME_IS_PLAYER))
    //{
    //    return gSaveBlock2Ptr->playerName;
    //}

    //if((trainer->trainerFlags & TRAINER_FLAG_NAME_IS_OPPOSITE_AVATAR))
    //{
    //    switch(gSaveBlock2Ptr->playerGender)
    //    {
    //        case(STYLE_EMR_BRENDAN):
    //            return gText_TrainerName_May;
    //        case(STYLE_EMR_MAY):
    //            return gText_TrainerName_Brendan;
//
    //        case(STYLE_RED):
    //            return gText_TrainerName_Leaf;
    //        case(STYLE_LEAF):
    //            return gText_TrainerName_Red;
//
    //        case(STYLE_ETHAN):
    //            return gText_TrainerName_Lyra;
    //        case(STYLE_LYRA):
    //            return gText_TrainerName_Ethan;
    //    };
    //}

    return trainer->trainerName;
#else
    return NULL;
#endif
}

static u16 ModifyTrainerClass(u16 trainerNum, u16 trainerClass)
{
#ifndef ROGUE_BAKING
    if(trainerClass == TRAINER_CLASS_LEADER || trainerClass == TRAINER_CLASS_TOTEM_LEADER)
    {
        if(gRogueRun.currentDifficulty >= ROGUE_CHAMP_START_DIFFICULTY)
        {
            trainerClass = TRAINER_CLASS_CHAMPION;
        }
        else if(gRogueRun.currentDifficulty >= ROGUE_ELITE_START_DIFFICULTY)
        {
            trainerClass = TRAINER_CLASS_ELITE_FOUR;
        }
    }
    else if(trainerClass == TRAINER_CLASS_RIVAL)
    {
        if(gRogueRun.currentDifficulty >= ROGUE_FINAL_CHAMP_DIFFICULTY)
        {
            trainerClass = TRAINER_CLASS_CHAMPION;
        }
    }
#endif
    return trainerClass;
}

void Rogue_ModifyTrainer(u16 trainerNum, struct Trainer* outTrainer)
{
#ifndef ROGUE_BAKING
    const struct RogueTrainer* trainer = Rogue_GetTrainer(trainerNum);

    // Early out for NULL trainer
    //if(trainerNum == 0)
    //    return;

    if(TRUE)
    {
        //struct RogueBattleMusic const* musicPlayer = Rogue_GetTrainerMusic(trainerNum);

        outTrainer->trainerClass = ModifyTrainerClass(trainerNum, trainer->trainerClass);
        outTrainer->encounterMusic_gender = trainer->teamGenerator.preferredGender == MALE ? 0 : F_TRAINER_FEMALE; // not actually used for encounter music anymore
        outTrainer->trainerPic = trainer->trainerPic;

        outTrainer->partyFlags = 0;
        outTrainer->doubleBattle = FALSE;
#ifdef ROGUE_EXPANSION
        outTrainer->aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN | AI_FLAG_WILL_SUICIDE | AI_FLAG_HELP_PARTNER | AI_FLAG_SMART_SWITCHING;
#else
        outTrainer->aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_SETUP_FIRST_TURN;
#endif
        if(Rogue_GetActiveCampaign() == ROGUE_CAMPAIGN_AUTO_BATTLER)
        {
            // AI will be dump for this campaign
            outTrainer->aiFlags = 0;
        }
#ifdef ROGUE_FEATURE_AUTOMATION
        else if(Rogue_AutomationGetFlag(AUTO_FLAG_TRAINER_RANDOM_AI))
        {
#ifdef ROGUE_EXPANSION
            // Still want AI to still do weird switching just for completeness?
            outTrainer->aiFlags = AI_FLAG_SMART_SWITCHING;
#else
            outTrainer->aiFlags = 0;
#endif
        }
#endif
    }
    else
    {
        // We shouldn't ever get here
        AGB_ASSERT(FALSE);
    }
#endif
}

void Rogue_ModifyBattleMusic(u16 musicType, u16 trainerSpecies, struct RogueBattleMusic* outMusic)
{
#ifndef ROGUE_BAKING
    u8 i;
    bool8 shouldRedirect;
    u16 trainerClass = 0;
    u16 baseSpecies;
    struct RogueBattleMusic const* currMusic = NULL;
    const struct RogueTrainer* trainer = NULL;

    switch (musicType)
    {
    case BATTLE_MUSIC_TYPE_TRAINER:
        trainer = Rogue_GetTrainer(trainerSpecies);
        trainerClass = ModifyTrainerClass(trainerSpecies, trainer->trainerClass);
        currMusic = &gRogueTrainerMusic[trainer->musicPlayer];
        break;
    
    case BATTLE_MUSIC_TYPE_WILD:
        if(RoguePokedex_IsSpeciesLegendary(trainerSpecies))
            currMusic = &gRogueTrainerMusic[BATTLE_MUSIC_LEGENDARY_BATTLE];
        else
            currMusic = &gRogueTrainerMusic[BATTLE_MUSIC_WILD_BATTLE];

        baseSpecies = trainerSpecies;
#ifdef ROGUE_EXPANSION
        baseSpecies = GET_BASE_SPECIES_ID(baseSpecies);
#endif
        break;
    }


    // Execute through redirection chain
    for(i = 0; i < currMusic->redirectCount; ++i)
    {
        shouldRedirect = FALSE;

        switch (currMusic->redirects[i].redirectType)
        {
        case REDIRECT_PARAM_NONE:
            shouldRedirect = TRUE;
            break;
        
        case REDIRECT_PARAM_SPECIES:
            if(currMusic->redirects[i].redirectParam == baseSpecies)
                shouldRedirect = TRUE;
            break;
        
        case REDIRECT_PARAM_TRAINER_CLASS:
            if(currMusic->redirects[i].redirectParam == trainerClass)
                shouldRedirect = TRUE;
            break;

        default:
            AGB_ASSERT(FALSE);
            break;
        }

        if(shouldRedirect)
        {
            currMusic = &gRogueTrainerMusic[currMusic->redirects[i].musicPlayer];
            i = 0;
        }
    }

    // Copy to output so we can modify it
    memcpy(outMusic, currMusic, sizeof(struct RogueBattleMusic));

    // Check the preferred team gender and then swap out to female (It's just a lazy/easy mechanism that prevents a lot of duplicated data)
    if(outMusic->encounterMusic == MUS_ENCOUNTER_MALE && trainer->teamGenerator.preferredGender != MALE)
    {
        outMusic->encounterMusic = MUS_ENCOUNTER_FEMALE;
    }
    else if(outMusic->encounterMusic == MUS_HG_ENCOUNTER_BOY_1 && trainer->teamGenerator.preferredGender != MALE)
    {
        outMusic->encounterMusic = MUS_HG_ENCOUNTER_BOY_2; // ?
    }
#endif
}

static u16 SanitizeItemId(u16 itemId)
{
    if (itemId >= ITEMS_COUNT)
        return ITEM_NONE;
    else
        return itemId;
}

#ifdef ROGUE_BAKING
// DUDs
const u8* Rogue_GetItemName(u16 itemId)
{
    return NULL;
}

const u8* Rogue_GetItemDesc(u16 itemIdx)
{
    return NULL;
}

void Rogue_ModifyItem(u16 itemId, struct Item* outItem)
{
}

bool8 Rogue_IsEvolutionItem(u16 itemIdx)
{
    return FALSE;
}

#else

extern const u8 gText_EscapeRopeDesc[];

extern const u32 *const gItemIconTable[][2];

const u8* Rogue_GetItemName(u16 itemId)
{
    itemId = SanitizeItemId(itemId);

    if(itemId >= ITEM_ROGUE_ITEM_FIRST && itemId <= ITEM_ROGUE_ITEM_LAST)
    {
        return gRogueItems[itemId - ITEM_ROGUE_ITEM_FIRST].name;
    }

    return gItems[itemId].name;
}

const u8* Rogue_GetItemDesc(u16 itemId)
{
    itemId = SanitizeItemId(itemId);

    if(itemId >= ITEM_ROGUE_ITEM_FIRST && itemId <= ITEM_ROGUE_ITEM_LAST)
    {
        return gRogueItems[itemId - ITEM_ROGUE_ITEM_FIRST].description;
    }
    
    switch(itemId)
    {
        case ITEM_ESCAPE_ROPE:
            return gText_EscapeRopeDesc;
    }

    return gItems[itemId].description;
}

const void* Rogue_GetItemIconPicOrPalette(u16 itemId, u8 which)
{
    itemId = SanitizeItemId(itemId);

    if(itemId >= ITEM_ROGUE_ITEM_FIRST && itemId <= ITEM_ROGUE_ITEM_LAST)
    {
        return which == 0 ? gRogueItems[itemId - ITEM_ROGUE_ITEM_FIRST].iconImage : gRogueItems[itemId - ITEM_ROGUE_ITEM_FIRST].iconPalette;
    }

    return gItemIconTable[itemId][which];
}

void Rogue_ModifyItem(u16 itemId, struct Item* outItem)
{
    itemId = SanitizeItemId(itemId);

    // Rogue items copy in parts
    //
    if(itemId >= ITEM_ROGUE_ITEM_FIRST && itemId <= ITEM_ROGUE_ITEM_LAST)
    {
        const struct RogueItem* rogueItem = &gRogueItems[itemId - ITEM_ROGUE_ITEM_FIRST];

        if(rogueItem->itemId == itemId)
        {
            outItem->itemId = rogueItem->itemId;
            outItem->price = rogueItem->price;
            outItem->holdEffect = rogueItem->holdEffect;
            outItem->holdEffectParam = rogueItem->holdEffectParam;
            outItem->registrability = rogueItem->registrability;
            outItem->pocket = rogueItem->pocket;
            outItem->type = rogueItem->type;
            outItem->fieldUseFunc = rogueItem->fieldUseFunc;
            outItem->battleUsage = rogueItem->battleUsage;
            outItem->secondaryId = rogueItem->secondaryId;

            if(outItem->pocket == POCKET_CHARMS)
            {
                // Early out here for charms (We can end up in an infinite loop below)
                outItem->importance = 1;
                return;
            }

            if(outItem->pocket == POCKET_KEY_ITEMS)
            {
                outItem->importance = 1;
            }
        }
        else
            memcpy(outItem, &gItems[ITEM_NONE], sizeof(struct Item));
    }
    else
    {
        memcpy(outItem, &gItems[itemId], sizeof(struct Item));
    }

    if(itemId == ITEM_NONE)
        return;

    // Price Edits
    //
    // Range edits
    if(itemId >= ITEM_HP_UP && itemId <= ITEM_PP_MAX)
    {
        outItem->price = 4000;
        outItem->pocket = POCKET_MEDICINE;
    }

#ifdef ROGUE_EXPANSION
    if(itemId >= ITEM_X_ATTACK && itemId <= ITEM_GUARD_SPEC)
#else
    if(itemId >= ITEM_GUARD_SPEC && itemId <= ITEM_X_SPECIAL)
#endif
    {
        outItem->price = 1500;
        outItem->pocket = POCKET_MEDICINE;
    }

    if(outItem->pocket == POCKET_ITEMS && 
        (
            outItem->fieldUseFunc == ItemUseOutOfBattle_Medicine ||
            outItem->fieldUseFunc == ItemUseOutOfBattle_ReduceEV ||
            outItem->fieldUseFunc == ItemUseOutOfBattle_SacredAsh ||
            outItem->fieldUseFunc == ItemUseOutOfBattle_PPRecovery ||
            outItem->fieldUseFunc == ItemUseOutOfBattle_PPUp ||
            outItem->fieldUseFunc == ItemUseOutOfBattle_RareCandy
        ))
    {
        outItem->pocket = POCKET_MEDICINE;
    }

    if(outItem->holdEffect != 0)
    {
        // Hold items set price (Ignore berries)
        if((itemId >= FIRST_BERRY_INDEX && itemId <= LAST_BERRY_INDEX))
        {
            outItem->price = 500;
        }

        if(outItem->pocket == POCKET_ITEMS)
        {
            outItem->pocket = POCKET_HELD_ITEMS;
        }
    }

#ifdef ROGUE_EXPANSION
    if(itemId >= ITEM_LEVEL_BALL && itemId <= ITEM_CHERISH_BALL)
    {
        outItem->price = 2500;
    }

    if(itemId >= ITEM_FIRE_STONE && itemId <= ITEM_RIBBON_SWEET)
    {
        outItem->price = 2100;
    }

    if(itemId >= ITEM_RED_NECTAR && itemId <= ITEM_PURPLE_NECTAR)
    {
        outItem->price = 2100;
    }

    if(itemId >= ITEM_RED_ORB && itemId <= ITEM_DIANCITE)
    {
        outItem->price = 5000;
    }

    if(itemId >= ITEM_VENUSAURITE && itemId <= ITEM_DIANCITE)
    {
        outItem->pocket = POCKET_STONES;
    }

    if(itemId >= ITEM_NORMALIUM_Z && itemId <= ITEM_ULTRANECROZIUM_Z)
    {
        outItem->price = 5000;
        outItem->pocket = POCKET_STONES;
    }

    if(itemId >= ITEM_ROTOM_CATALOG && itemId <= ITEM_REINS_OF_UNITY)
    {
        outItem->price = 5000;
    }

    if(itemId >= ITEM_LONELY_MINT && itemId <= ITEM_SERIOUS_MINT)
    {
        outItem->price = 1500;
    }

    // Plates
    if(itemId >= ITEM_FLAME_PLATE && itemId <= ITEM_PIXIE_PLATE)
    {
        outItem->price = 4000;
    }

    if(itemId >= ITEM_DOUSE_DRIVE && itemId <= ITEM_CHILL_DRIVE)
    {
        outItem->price = 1000;
    }

    if(itemId >= ITEM_FIRE_MEMORY && itemId <= ITEM_FAIRY_MEMORY)
    {
        outItem->price = 1000;
    }

#endif

    // Individual items
    switch(itemId)
    {
        case ITEM_ESCAPE_ROPE:
            outItem->price = 8000;
            break;

        case ITEM_NUGGET:
            outItem->price = 1000;
            outItem->holdEffect = 0;
            break;

        case ITEM_PEARL:
            outItem->price = 1500;
            outItem->holdEffect = 0;
            break;

        case ITEM_BIG_PEARL:
            outItem->price = 2000;
            outItem->holdEffect = 0;
            break;

        case ITEM_STARDUST:
            outItem->price = 3000;
            outItem->holdEffect = 0;
            break;

        case ITEM_STAR_PIECE:
            outItem->price = 4000;
            outItem->holdEffect = 0;
            break;
    
        case ITEM_SOUL_DEW:
            outItem->price = 5000;
            break;

#ifdef ROGUE_EXPANSION
        case ITEM_ABILITY_CAPSULE:
            outItem->price = 3000;
            break;

        case ITEM_ABILITY_PATCH:
            outItem->price = 6000;
            break;

        case ITEM_ADAMANT_ORB:
        case ITEM_LUSTROUS_ORB:
        case ITEM_GRISEOUS_ORB:
        case ITEM_RUSTED_SWORD:
        case ITEM_RUSTED_SHIELD:
            outItem->price = 5000;
            break;
#endif

        case ITEM_KINGS_ROCK:
        case ITEM_DEEP_SEA_TOOTH:
        case ITEM_DEEP_SEA_SCALE:
        case ITEM_METAL_COAT:
        case ITEM_DRAGON_SCALE:
#ifdef ROGUE_EXPANSION
        case ITEM_UPGRADE:
#else
        case ITEM_UP_GRADE:
#endif
            outItem->price = 2100;
            break;

        case ITEM_RARE_CANDY:
            outItem->price = 1000;
            break;

#ifdef ROGUE_EXPANSION
        case ITEM_SPORT_BALL:
        case ITEM_PARK_BALL:
#endif
        case ITEM_SAFARI_BALL:
            outItem->price = 0;
            break;

        case ITEM_MASTER_BALL:
            outItem->price = 50000;
            break;


        // TM Items
        // 
        case ITEM_TM01_FOCUS_PUNCH:
        case ITEM_TM28_DIG:
        case ITEM_TM39_ROCK_TOMB:
            outItem->price = 1500;
            break;

        case ITEM_TM07_HAIL:
        case ITEM_TM09_BULLET_SEED:
        case ITEM_TM11_SUNNY_DAY:
        case ITEM_TM18_RAIN_DANCE:
        case ITEM_TM20_SAFEGUARD:
        case ITEM_TM37_SANDSTORM:
            outItem->price = 2000;
            break;

        case ITEM_TM14_BLIZZARD:
        case ITEM_TM15_HYPER_BEAM:
        case ITEM_TM25_THUNDER:
        case ITEM_TM26_EARTHQUAKE:
        case ITEM_TM38_FIRE_BLAST:
            outItem->price = 6000;
            break;

        case ITEM_TM06_TOXIC:
            outItem->price = 8000;
            break;

        // Common Battle Items
        //
        case ITEM_METAL_POWDER:
            outItem->price = 500;
            break;

        case ITEM_WHITE_HERB:
        case ITEM_LEFTOVERS:
            outItem->price = 8000;
            break;

#ifdef ROGUE_EXPANSION
        case ITEM_QUICK_POWDER:
            outItem->price = 500;
            break;

        case ITEM_RING_TARGET:
        case ITEM_BINDING_BAND:
            outItem->price = 1000;
            break;

        case ITEM_RED_CARD:
        case ITEM_AIR_BALLOON:
        case ITEM_EJECT_BUTTON:
            outItem->price = 2000;
            break;

        case ITEM_ASSAULT_VEST:
            outItem->price = 4000;
            break;

        case ITEM_LIFE_ORB:
            outItem->price = 8000;
            break;
#endif
    }

    // Check we're not a charm/curse otherwise we can get infinite loops here
    {
        if(outItem->pocket != POCKET_POKE_BALLS && IsCurseActive(EFFECT_BATTLE_ITEM_BAN))
        {
            outItem->battleUsage = 0;
            outItem->battleUseFunc = 0;
        }
    }
}


bool8 Rogue_IsEvolutionItem(u16 itemIdx)
{
    switch (itemIdx)
    {
    case ITEM_LINK_CABLE:
    case ITEM_FIRE_STONE:
    case ITEM_WATER_STONE:
    case ITEM_THUNDER_STONE:
    case ITEM_LEAF_STONE:
    case ITEM_SUN_STONE:
    case ITEM_MOON_STONE:
    case ITEM_DEEP_SEA_TOOTH:
    case ITEM_DEEP_SEA_SCALE:
    case ITEM_DRAGON_SCALE:
    case ITEM_KINGS_ROCK:
    case ITEM_METAL_COAT:
    
#ifdef ROGUE_EXPANSION
    case ITEM_UPGRADE:
#else
    case ITEM_UP_GRADE:
#endif

#ifdef ROGUE_EXPANSION
    case ITEM_RAZOR_FANG:
    case ITEM_RAZOR_CLAW:
    case ITEM_ICE_STONE:
    case ITEM_SHINY_STONE:
    case ITEM_DUSK_STONE:
    case ITEM_DAWN_STONE:
    case ITEM_SWEET_APPLE:
    case ITEM_TART_APPLE:
    case ITEM_CRACKED_POT:
    case ITEM_CHIPPED_POT:
    case ITEM_GALARICA_CUFF:
    case ITEM_GALARICA_WREATH:
    case ITEM_PROTECTOR:
    case ITEM_ELECTIRIZER:
    case ITEM_MAGMARIZER:
    case ITEM_DUBIOUS_DISC:
    case ITEM_REAPER_CLOTH:
    case ITEM_PRISM_SCALE:
    case ITEM_WHIPPED_DREAM:
    case ITEM_SACHET:
    case ITEM_OVAL_STONE:
    case ITEM_STRAWBERRY_SWEET:
    case ITEM_LOVE_SWEET:
    case ITEM_BERRY_SWEET:
    case ITEM_CLOVER_SWEET:
    case ITEM_FLOWER_SWEET:
    case ITEM_STAR_SWEET:
    case ITEM_RIBBON_SWEET:
    case ITEM_BLACK_AUGURITE:
    case ITEM_LINKING_CORD:
    case ITEM_PEAT_BLOCK:
#endif
        return TRUE;
    }

    return FALSE;
}
#endif


u32 Rogue_ModifyExperienceTables(u8 growthRate, u8 level)
{
    // Originallu from const u32 gExperienceTables[][MAX_LEVEL + 1]
    // But want to ideally fit all EXP within u16 since we earn it differently in Rogue anyway
    return level * 300;//MAX_LEVEL;
}


// Taken straight from daycare
u16 Rogue_GetEggSpecies(u16 species)
{
#ifdef ROGUE_BAKE_VALID
    return gRogueBake_EggSpecies[species];

#else
    u16 e, s, evo, spe;
    bool8 found;
    struct Evolution evolution;

    // Working backwards up to 5 times seems arbitrary, since the maximum number
    // of times would only be 3 for 3-stage evolutions.
    for (e = 0; e < 2; ++e)//EVOS_PER_MON; i++)
    {
        found = FALSE;
        for (s = 1; s < NUM_SPECIES; s++)
        {
            if (s < species)
                // Work downwards, as the evolution is most likely just before this
                spe = species - s;
            else
                // Start counting upwards now, as we've exhausted all of the before species
                spe = s;

            for (evo = 0; evo < EVOS_PER_MON; evo++)
            {
                Rogue_ModifyEvolution(spe, evo, &evolution);

#ifdef ROGUE_EXPANSION
                if(evolution.method != EVO_MEGA_EVOLUTION &&
                    evolution.method != EVO_MOVE_MEGA_EVOLUTION &&
                    evolution.method != EVO_PRIMAL_REVERSION
                )
#endif
                {
                    if (evolution.targetSpecies == species)
                    {
                        species = spe;
                        found = TRUE;
                        break;
                    }
                }
            }

            if (found)
                break;
        }

        if (s == NUM_SPECIES)
            break;
    }

    return species;
#endif
}

u8 Rogue_GetEvolutionCount(u16 species)
{
#ifdef ROGUE_BAKE_VALID
    return gRogueBake_EvolutionCount[species];
    
#else
    u16 s, e;
    struct Evolution evo;

    for (e = 0; e < EVOS_PER_MON; e++)
    {
        Rogue_ModifyEvolution(species, e, &evo);

        s = evo.targetSpecies;

#ifdef ROGUE_EXPANSION
        if(evo.method != EVO_MEGA_EVOLUTION &&
            evo.method != EVO_MOVE_MEGA_EVOLUTION &&
            evo.method != EVO_PRIMAL_REVERSION
        )
#endif
        {
            if (s != SPECIES_NONE)
            {
                return 1 + Rogue_GetEvolutionCount(s);
            }
        }
    }

    return 0;
#endif
}

bool8 Rogue_DoesEvolveInto(u16 fromSpecies, u16 toSpecies)
{
    u8 i;
    struct Evolution currentEvo;
    for (i = 0; i < EVOS_PER_MON; i++)
    {
        Rogue_ModifyEvolution(fromSpecies, i, &currentEvo);

        if(currentEvo.method != 0)
        {
            if(currentEvo.targetSpecies == toSpecies)
                return TRUE;
            else if(currentEvo.targetSpecies != SPECIES_NONE)
            {
                if(Rogue_DoesEvolveInto(currentEvo.targetSpecies, toSpecies))
                    return TRUE;
            }
        }
    }

    return FALSE;
}

void Rogue_AppendSpeciesTypeFlags(u16 species, u32* outFlags)
{
    *outFlags |= MON_TYPE_VAL_TO_FLAGS(gBaseStats[species].type1);
    *outFlags |= MON_TYPE_VAL_TO_FLAGS(gBaseStats[species].type2);
}

u32 Rogue_GetSpeciesEvolutionChainTypeFlags(u16 species)
{
#ifdef ROGUE_BAKE_VALID
    return gRogueBake_EvolutionChainTypeFlags[species];
#elif defined(ROGUE_BAKING)
    return 0;
#else
    AGB_ASSERT(FALSE);
    return FALSE;
#endif
}

u32 Rogue_GetTypeFlagsFromArray(const u8* types, u8 count)
{
    u8 i;
    u32 flags = 0;

    for(i = 0; i < count; ++i)
    {
        if(types[i] == TYPE_NONE)
            break;

        flags |= MON_TYPE_VAL_TO_FLAGS(types[i]);
    }

    return flags;
}