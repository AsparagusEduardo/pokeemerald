#include "global.h"
#include "constants/battle.h"
#include "constants/battle_frontier.h"
#include "constants/items.h"
#include "constants/rogue.h"

#include "event_data.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "item_menu.h"
#include "overworld.h"
#include "pokedex.h"
#include "pokemon.h"
#include "pokemon_storage_system.h"
#include "random.h"
#include "string_util.h"

#include "rogue.h"
#include "rogue_adventurepaths.h"
#include "rogue_assistant.h"
#include "rogue_baked.h"
#include "rogue_campaign.h"
#include "rogue_controller.h"
#include "rogue_charms.h"
#include "rogue_followmon.h"
#include "rogue_script.h"
#include "rogue_timeofday.h"
#include "rogue_trainers.h"
#include "rogue_popup.h"
#include "rogue_query.h"
#include "rogue_quest.h"

void DoSpecialTrainerBattle(void);

bool8 Rogue_CheckPartyHasRoomForMon(void)
{
    if(Rogue_IsRunActive())
    {
        u8 partySize = Rogue_GetMaxPartySize();

        // We don't actually want to shift around the party as that can cause issue in EX
        // Where stuff like megas keep track of exact indicies which mega evolve
        //RemoveAnyFaintedMons(FALSE);

        if (CalculatePlayerPartyCount() >= partySize)
        {
            return FALSE;
        }
    }

    return TRUE;
}

void Rogue_SeedRandomGenerators(void)
{
    u32 startSeed = gRngRogueValue;

    RogueRandom();
    SeedRng(RogueRandom());
    SeedRng2(RogueRandom());

    gRngRogueValue = startSeed;
}

u16 GetStartDifficulty(void);

static u8 Calc_RandomTradeLevel(struct Pokemon* mon)
{
    if(gRogueRun.enteredRoomCounter == 0)
    {
        u16 startDifficulty = GetStartDifficulty();

        if(startDifficulty == 0)
            return 7;
        else
            return 5 + GetStartDifficulty() * 10;
    }
    else
        return GetMonData(mon, MON_DATA_LEVEL);
}

void Rogue_RandomisePartyMon(void)
{
    u16 species;
    u16 heldItem;
    u8 monIdx = gSpecialVar_0x8004;
    u8 targetlevel = Calc_RandomTradeLevel(&gPlayerParty[0]);

    RogueMonQuery_Begin();

    if(gRogueRun.currentDifficulty < 2)
        RogueMonQuery_IsLegendary(QUERY_FUNC_EXCLUDE);

    RogueMonQuery_TransformIntoEggSpecies();
    RogueMonQuery_TransformIntoEvos(targetlevel, TRUE, TRUE);

    if(monIdx == 255)
    {
        // Entire team
        u8 i;

        RogueWeightQuery_Begin();
        
        for(i = 0; i < gPlayerPartyCount; ++i)
        {
            // we can only have dupes if somehow we have used all avaliable mons
            if(!RogueWeightQuery_HasAnyWeights())
                RogueWeightQuery_FillWeights(1);

            targetlevel = Calc_RandomTradeLevel(&gPlayerParty[i]);
            heldItem = GetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM);

            species = RogueWeightQuery_SelectRandomFromWeightsWithUpdate(Random(), 0);

            ZeroMonData(&gPlayerParty[i]);
            CreateMon(&gPlayerParty[i], species, targetlevel, USE_RANDOM_IVS, 0, 0, OT_ID_PLAYER_ID, 0);

            SetMonData(&gPlayerParty[i], MON_DATA_HELD_ITEM, &heldItem);
        }

        RogueWeightQuery_End();
    }
    else
    {
        // Single mon in team
        RogueWeightQuery_Begin();
        RogueWeightQuery_FillWeights(1);

        targetlevel = Calc_RandomTradeLevel(&gPlayerParty[monIdx]);
        heldItem = GetMonData(&gPlayerParty[monIdx], MON_DATA_HELD_ITEM);

        species = RogueWeightQuery_SelectRandomFromWeightsWithUpdate(Random(), 0);

        ZeroMonData(&gPlayerParty[monIdx]);
        CreateMon(&gPlayerParty[monIdx], species, targetlevel, USE_RANDOM_IVS, 0, 0, OT_ID_PLAYER_ID, 0);

        SetMonData(&gPlayerParty[monIdx], MON_DATA_HELD_ITEM, &heldItem);

        RogueWeightQuery_End();
    }

    RogueMonQuery_End();
}

void Rogue_AlterMonIVs(void)
{
    const u16 delta = 10;

    u16 statId;
    u16 ivAmount;
    u16 monIdx = gSpecialVar_0x8004;
    u16 statOp = gSpecialVar_0x8005;

    if(monIdx == 255)
    {
        // Entire team
        u8 i;

        for(i = 0; i < gPlayerPartyCount; ++i)
        {
            for(statId = MON_DATA_HP_IV; statId <= MON_DATA_SPDEF_IV; ++statId)
            {
                ivAmount = GetMonData(&gPlayerParty[i], statId);

                if(statOp == 0)
                {
                    ivAmount += delta;
                    ivAmount = min(31, ivAmount);
                }
                else
                {
                    if(ivAmount < delta)
                        ivAmount = 0;
                    else
                        ivAmount -= delta;
                }

                SetMonData(&gPlayerParty[i], statId, &ivAmount);
                CalculateMonStats(&gPlayerParty[i]);
            }
        }
    }
    else
    {
        // Modify just 1 mon
        for(statId = MON_DATA_HP_IV; statId <= MON_DATA_SPDEF_IV; ++statId)
        {
            ivAmount = GetMonData(&gPlayerParty[monIdx], statId);

            if(statOp == 0)
            {
                ivAmount += delta;
                ivAmount = min(31, ivAmount);
            }
            else
            {
                if(ivAmount < delta)
                    ivAmount = 0;
                else
                    ivAmount -= delta;
            }

            SetMonData(&gPlayerParty[monIdx], statId, &ivAmount);
            CalculateMonStats(&gPlayerParty[monIdx]);
        }
    }
}

void Rogue_ApplyStatusToMon(void)
{
    u32 statusAilment = 0;
    u16 monIdx = gSpecialVar_0x8004;

    switch(gSpecialVar_0x8005)
    {
        case 0:
            statusAilment = STATUS1_POISON;
            break;

        case 1:
            statusAilment = STATUS1_PARALYSIS;
            break;

        case 2:
            statusAilment = STATUS1_SLEEP;
            break;

        case 3:
            statusAilment = STATUS1_FREEZE;
            break;

        case 4:
            statusAilment = STATUS1_BURN;
            break;
    }

    if(monIdx == 255)
    {
        // Entire team
        u8 i;

        for(i = 0; i < gPlayerPartyCount; ++i)
        {
            SetMonData(&gPlayerParty[i], MON_DATA_STATUS, &statusAilment);
        }
    }
    else
    {
        SetMonData(&gPlayerParty[monIdx], MON_DATA_STATUS, &statusAilment);
    }
}

void Rogue_ReleaseMonInSlot(void)
{
    u16 monIdx = gSpecialVar_0x8004;

    if(monIdx < gPlayerPartyCount)
    {
        RemoveMonAtSlot(monIdx, TRUE, TRUE, TRUE);
    }
}

void Rogue_ReleaseMonInSlot_NoLabBuffering(void)
{
    u16 monIdx = gSpecialVar_0x8004;

    if(monIdx < gPlayerPartyCount)
    {
        RemoveMonAtSlot(monIdx, TRUE, TRUE, FALSE);
    }
}

u16 Rogue_CalcMaxPartySize(void)
{
    return Rogue_GetMaxPartySize();
}

u16 Rogue_GetMonEvoCount(void)
{
    u16 monIdx = gSpecialVar_0x8004;
    u16 species = GetMonData(&gPlayerParty[monIdx], MON_DATA_SPECIES);

    if(species != SPECIES_NONE)
    {
        u16 e;
        struct Evolution evo;
        u16 count = 0;

        for (e = 0; e < EVOS_PER_MON; e++)
        {
            Rogue_ModifyEvolution(species, e, &evo);
            Rogue_ModifyEvolution_ApplyCurses(species, e, &evo);

            if (evo.targetSpecies != SPECIES_NONE)
            {
#ifdef ROGUE_EXPANSION
                if(evo.method != EVO_MEGA_EVOLUTION &&
                    evo.method != EVO_MOVE_MEGA_EVOLUTION &&
                    evo.method != EVO_PRIMAL_REVERSION
                )
#endif
                {
                    ++count;
                }
            }
        }

        return count;
    }

    return 0;
}

void Rogue_GetMonEvoParams(void)
{
    u16 monIdx = gSpecialVar_0x8004;
    u16 evoIdx = gSpecialVar_0x8005;
    u16 species = GetMonData(&gPlayerParty[monIdx], MON_DATA_SPECIES);

    gSpecialVar_0x8006 = 0;
    gSpecialVar_0x8007 = 0;

    if(species != SPECIES_NONE)
    {        // evoIdx doesn't mean array idx annoyingly as evos can be toggled/changed
        u16 e;
        struct Evolution evo;
        u16 count = 0;

        for (e = 0; e < EVOS_PER_MON; e++)
        {
            Rogue_ModifyEvolution(species, e, &evo);
            Rogue_ModifyEvolution_ApplyCurses(species, e, &evo);

            if (evo.targetSpecies != SPECIES_NONE)
            {
#ifdef ROGUE_EXPANSION
                if(evo.method != EVO_MEGA_EVOLUTION &&
                    evo.method != EVO_MOVE_MEGA_EVOLUTION &&
                    evo.method != EVO_PRIMAL_REVERSION
                )
#endif
                {
                    if(count++ == evoIdx)
                    {
                        gSpecialVar_0x8006 = evo.method;
                        gSpecialVar_0x8007 = evo.param;
                        return;
                    }
                }
            }
        }
    }
}

void RogueDebug_FillGenPC(void)
{
#ifdef ROGUE_DEBUG
    u8 i;
    u16 species;
    u16 writeIdx = 0;
    u16 genId = gSpecialVar_0x8004;
    struct Pokemon mon;

    for(species = SPECIES_NONE + 1; species < NUM_SPECIES; ++species)
    {
        if(SpeciesToGen(species) == genId)
        {
            struct Pokemon mon;
            u16 currIdx = writeIdx++;
            u16 targetBox = currIdx / IN_BOX_COUNT;
            u16 boxIndex = currIdx % IN_BOX_COUNT;

            GetSetPokedexSpeciesFlag(species, FLAG_SET_SEEN);
            GetSetPokedexSpeciesFlag(species, FLAG_SET_CAUGHT);

            CreateMon(&mon, species, 5, MAX_PER_STAT_IVS, FALSE, 0, OT_ID_RANDOM_NO_SHINY, 0);

            SetBoxMonAt(targetBox, boxIndex, &mon.box);
        }
    }

    // Clear a box of space
    for(i = 0; i < IN_BOX_COUNT; ++i)
    {
        u16 currIdx = writeIdx++;
        u16 targetBox = currIdx / IN_BOX_COUNT;
        u16 boxIndex = currIdx % IN_BOX_COUNT;
        ZeroBoxMonAt(targetBox, boxIndex);
    }
#endif
}

void RogueDebug_ClearQuests(void)
{
#ifdef ROGUE_DEBUG
    ResetQuestStateAfter(0);
    Rogue_ResetCampaignAfter(0);
#endif
}

void RogueDebug_CompleteAvaliableQuests(void)
{
#ifdef ROGUE_DEBUG
    u16 i;
    u16 questId;
    struct RogueQuestState* state;

    for(i = 0; i < QUEST_CAPACITY; ++i)
    {
        // Work backwards to avoid completing new collected quests (Assuming unlocks always go forward in ID)
        questId = QUEST_CAPACITY - i - 1;

        state = &gRogueSaveBlock->questStates[questId];

        if(state->isUnlocked && !state->isCompleted)
        {
            state->isValid = FALSE;
            state->isCompleted = TRUE;
            state->hasPendingRewards = TRUE;
        }
    }
#endif
}

void RogueDebug_CollectAllQuests(void)
{
#ifdef ROGUE_DEBUG
    bool8 shouldLoop;
    u16 i;
    u16 questId;
    struct RogueQuestState* state;

    shouldLoop = TRUE;

    while(shouldLoop)
    {
        shouldLoop = FALSE;

        for(i = 0; i < QUEST_CAPACITY; ++i)
        {
            // Work backwards to avoid completing new collected quests (Assuming unlocks always go forward in ID)
            questId = QUEST_CAPACITY - i - 1;

            state = &gRogueSaveBlock->questStates[questId];

            if(state->isUnlocked && (!state->isCompleted || state->hasPendingRewards))
            {
                state->isValid = FALSE;
                state->isCompleted = TRUE;
                state->hasPendingRewards = FALSE;

                UnlockFollowingQuests(questId);
                shouldLoop = TRUE;
            }
        }
    }
#endif
}

void RogueDebug_StartBattle(void)
{
#ifdef ROGUE_DEBUG
    u16 i;

    for(i = 0; i < PARTY_SIZE; ++i)
        BoxMonAtToMon(TOTAL_BOXES_COUNT- 1, i, &gEnemyParty[i]);

    CalculateEnemyPartyCount();

    gSpecialVar_0x8004 = SPECIAL_BATTLE_AUTOMATION;
    DoSpecialTrainerBattle();
#endif
}

enum BerryTreatBuff
{
    BERRY_BUFF_FRIEND,
    BERRY_BUFF_HP,
    BERRY_BUFF_ATK,
    BERRY_BUFF_DEF,
    BERRY_BUFF_SPD,
    BERRY_BUFF_SPATK,
    BERRY_BUFF_SPDEF,
    BERRY_BUFF_WEAKEN,
};

static u8 BerryItemToTreatBuff(u16 berryItem)
{
    switch(berryItem)
    {
        case ITEM_ORAN_BERRY:
        case ITEM_SITRUS_BERRY:
        case ITEM_POMEG_BERRY:
            return BERRY_BUFF_HP;

        case ITEM_KELPSY_BERRY:
            return BERRY_BUFF_ATK;

        case ITEM_QUALOT_BERRY:
            return BERRY_BUFF_DEF;

        case ITEM_HONDEW_BERRY:
            return BERRY_BUFF_SPATK;

        case ITEM_GREPA_BERRY:
            return BERRY_BUFF_SPDEF;

        case ITEM_TAMATO_BERRY:
        case ITEM_SALAC_BERRY:
            return BERRY_BUFF_SPD;

        case ITEM_LEPPA_BERRY:
            return BERRY_BUFF_WEAKEN;

#ifdef ROGUE_EXPANSION
        case ITEM_LIECHI_BERRY:
            return BERRY_BUFF_ATK;

        case ITEM_GANLON_BERRY:
            return BERRY_BUFF_DEF;

        case ITEM_PETAYA_BERRY:
            return BERRY_BUFF_SPATK;

        case ITEM_APICOT_BERRY:
            return BERRY_BUFF_SPDEF;
#endif
        default:
            return BERRY_BUFF_FRIEND;
    }
}

void Rogue_CheckBerryTreat(void)
{
    u16 itemId = gSpecialVar_ItemId;
    gSpecialVar_Result = BerryItemToTreatBuff(itemId);
}

void Rogue_ApplyBerryTreat(void)
{
    u16 monIdx = gSpecialVar_0x8004;
    u16 itemId = gSpecialVar_ItemId;
    u16 buffAmount = gSpecialVar_0x8005;
    u16 berryBuff = BerryItemToTreatBuff(itemId);

    if(berryBuff == BERRY_BUFF_FRIEND)
    {
        u16 friendship = GetMonData(&gPlayerParty[monIdx], MON_DATA_FRIENDSHIP);

        if(friendship < MAX_FRIENDSHIP)
        {
            gSpecialVar_Result = TRUE;

            friendship += buffAmount * 10;
            if(friendship > MAX_FRIENDSHIP)
                friendship = MAX_FRIENDSHIP;

            SetMonData(&gPlayerParty[monIdx], MON_DATA_FRIENDSHIP, &friendship);
            CalculateMonStats(&gPlayerParty[monIdx]);
        }
        else
        {
            gSpecialVar_Result = FALSE;
        }
    }
    else if(berryBuff == BERRY_BUFF_WEAKEN)
    {
        u16 statOffset;
        u16 ivCount;

        gSpecialVar_Result = FALSE;

        for(statOffset = 0; statOffset < 6; ++statOffset)
        {
            u16 ivCount = GetMonData(&gPlayerParty[monIdx], MON_DATA_HP_IV + statOffset);

            if(ivCount != 0)
            {
                gSpecialVar_Result = TRUE;

                if(ivCount < buffAmount)
                    ivCount = 0;
                else
                    ivCount -= buffAmount;

                SetMonData(&gPlayerParty[monIdx], MON_DATA_HP_IV + statOffset, &ivCount);
            }
        }

        CalculateMonStats(&gPlayerParty[monIdx]);
    }
    else
    {
        u16 statOffset = berryBuff - 1;
        u16 ivCount = GetMonData(&gPlayerParty[monIdx], MON_DATA_HP_IV + statOffset);

        if(ivCount < 31)
        {
            gSpecialVar_Result = TRUE;

            ivCount += buffAmount;
            if(ivCount > 31)
                ivCount = 31;

            SetMonData(&gPlayerParty[monIdx], MON_DATA_HP_IV + statOffset, &ivCount);
            CalculateMonStats(&gPlayerParty[monIdx]);
        }
        else
        {
            gSpecialVar_Result = FALSE;
        }
    }
}

void Rogue_ChangeMonBall(void)
{
    u16 monIdx = gSpecialVar_0x8004;
    u16 itemId = gSpecialVar_ItemId;

    SetMonData(&gPlayerParty[monIdx], MON_DATA_POKEBALL, &itemId);
}

void Rogue_AnyNewQuestsPending(void)
{
    gSpecialVar_Result = AnyNewQuestsPending();
}

void Rogue_BufferLabMonName(void)
{
    u16 index = gSpecialVar_0x8002;
    Rogue_CopyLabEncounterMonNickname(index, gStringVar1);
}

void Rogue_GiveLabMon(void)
{
    u16 index = gSpecialVar_0x8002;
    gSpecialVar_Result = Rogue_GiveLabEncounterMon(index);
}

void Rogue_ChooseMiniBossRewardMons(void)
{
    Rogue_SelectMiniBossRewardMons();
}

void Rogue_ClearCharmsAndCurses(void)
{
    Rogue_RemoveCharmsFromBag();
    Rogue_RemoveCursesFromBag();
}

void Rogue_GetUnlockedCampaignCount(void)
{
    u16 i;
    u16 count = 0;

    for(i = ROGUE_CAMPAIGN_FIRST; i <= ROGUE_CAMPAIGN_LAST; ++i)
    {
        if(gRogueSaveBlock->campaignData[i - ROGUE_CAMPAIGN_FIRST].isUnlocked)
            ++count;
    }

    gSpecialVar_Result = count;
}

void Rogue_GetNextUnlockedCampaign(void)
{
    u16 i = gSpecialVar_0x8004;

    if(i == ROGUE_CAMPAIGN_NONE)
        i = ROGUE_CAMPAIGN_FIRST;
    else
        ++i;

    for(; i <= ROGUE_CAMPAIGN_LAST; ++i)
    {
        if(gRogueSaveBlock->campaignData[i - ROGUE_CAMPAIGN_FIRST].isUnlocked)
        {
            gSpecialVar_0x8004 = i;
            return;
        }
    }

    gSpecialVar_0x8004 = ROGUE_CAMPAIGN_NONE;
}

void Rogue_GetCampaignHighScore(void)
{
    u16 i = VarGet(VAR_ROGUE_DESIRED_CAMPAIGN);

    if(i != ROGUE_CAMPAIGN_NONE)
    {
        if(gRogueSaveBlock->campaignData[i - ROGUE_CAMPAIGN_FIRST].isCompleted)
        {
            gSpecialVar_Result = gRogueSaveBlock->campaignData[i - ROGUE_CAMPAIGN_FIRST].bestScore;
            return;
        }
    }

    gSpecialVar_Result = 0;
    return;
}

void Rogue_BufferCampaignName(void)
{
    StringCopy(&gStringVar1[0], GetCampaignTitle(VarGet(VAR_ROGUE_DESIRED_CAMPAIGN)));
}

static bool8 CheckSpeciesCombo(u16 speciesCheckA, u16 speciesCheckB, u16 speciesTargetA, u16 speciesTargetB)
{
    return (speciesCheckA == speciesTargetA && speciesCheckB == speciesTargetB)
        || (speciesCheckB == speciesTargetA && speciesCheckA == speciesTargetB);
}

static u16 GetSpeciesComboOutput(u16 speciesA, u16 speciesB, bool8 getItem)
{
    //if(CheckSpeciesCombo(speciesA, speciesB, SPECIES_EEVEE, SPECIES_CHARMANDER))
    //    return getItem ? ITEM_PECHA_BERRY : SPECIES_ABSOL;

#ifdef ROGUE_EXPANSION
    if(CheckSpeciesCombo(speciesA, speciesB, SPECIES_KYUREM, SPECIES_RESHIRAM))
        return getItem ? ITEM_DNA_SPLICERS : SPECIES_KYUREM_WHITE;

    if(CheckSpeciesCombo(speciesA, speciesB, SPECIES_KYUREM, SPECIES_ZEKROM))
        return getItem ? ITEM_DNA_SPLICERS : SPECIES_KYUREM_BLACK;

    if(CheckSpeciesCombo(speciesA, speciesB, SPECIES_ZYGARDE_COMPLETE, SPECIES_ZYGARDE_COMPLETE))
        return getItem ? ITEM_ZYGARDE_CUBE : SPECIES_ZYGARDE_10;

    if(CheckSpeciesCombo(speciesA, speciesB, SPECIES_ZYGARDE_10, SPECIES_ZYGARDE_10))
        return getItem ? ITEM_ZYGARDE_CUBE : SPECIES_ZYGARDE;

    if(CheckSpeciesCombo(speciesA, speciesB, SPECIES_ZYGARDE, SPECIES_ZYGARDE))
        return getItem ? ITEM_ZYGARDE_CUBE : SPECIES_ZYGARDE_COMPLETE;

    if(CheckSpeciesCombo(speciesA, speciesB, SPECIES_NECROZMA, SPECIES_SOLGALEO))
        return getItem ? ITEM_N_SOLARIZER : SPECIES_NECROZMA_DUSK_MANE;

    if(CheckSpeciesCombo(speciesA, speciesB, SPECIES_NECROZMA, SPECIES_LUNALA))
        return getItem ? ITEM_N_LUNARIZER : SPECIES_NECROZMA_DAWN_WINGS;

    if(CheckSpeciesCombo(speciesA, speciesB, SPECIES_CALYREX, SPECIES_GLASTRIER))
        return getItem ? ITEM_REINS_OF_UNITY : SPECIES_CALYREX_ICE_RIDER;

    if(CheckSpeciesCombo(speciesA, speciesB, SPECIES_CALYREX, SPECIES_SPECTRIER))
        return getItem ? ITEM_REINS_OF_UNITY : SPECIES_CALYREX_SHADOW_RIDER;
#endif

    return 0;
}

void Rogue_CheckMonCombo(void)
{
    u16 speciesA = GetMonData(&gPlayerParty[gSpecialVar_0x8003], MON_DATA_SPECIES);
    u16 speciesB = GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPECIES);

    gSpecialVar_0x8005 = GetSpeciesComboOutput(speciesA, speciesB, TRUE);
    gSpecialVar_0x8006 = GetSpeciesComboOutput(speciesA, speciesB, FALSE);
}

void Rogue_ApplyMonCombo(void)
{
    u16 speciesA = GetMonData(&gPlayerParty[gSpecialVar_0x8003], MON_DATA_SPECIES);
    u16 speciesB = GetMonData(&gPlayerParty[gSpecialVar_0x8004], MON_DATA_SPECIES);
    u16 outputSpecies = GetSpeciesComboOutput(speciesA, speciesB, FALSE);

    if(outputSpecies)
    {
        u8 speciesName[POKEMON_NAME_LENGTH + 1];
        GetSpeciesName(speciesName, outputSpecies);

        SetMonData(&gPlayerParty[gSpecialVar_0x8003], MON_DATA_SPECIES, &outputSpecies);
        SetMonData(&gPlayerParty[gSpecialVar_0x8003], MON_DATA_NICKNAME, speciesName);
        RemoveMonAtSlot(gSpecialVar_0x8004, TRUE, TRUE, FALSE);

        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
    }
}

void Rogue_GetFollowMonSpecies(void)
{
    u16 species;
    bool8 isShiny;
    FollowMon_GetSpeciesFromLastInteracted(&species, &isShiny);

    gSpecialVar_0x800A = species;
    gSpecialVar_0x800B = isShiny;
}

void Rogue_GetTrainerNum(void)
{
    u16 trainerNum = Rogue_GetTrainerNumFromLastInteracted();
    if(trainerNum != TRAINER_NONE)
    {
        gSpecialVar_0x8004 = trainerNum;
        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
    }
}

void Rogue_IsMultiplayerActive(void)
{
    gSpecialVar_Result = Rogue_IsNetMultiplayerActive();
}

void Rogue_IsMultiplayerHost(void)
{
    gSpecialVar_Result = Rogue_IsNetMultiplayerHost();
}

void Rogue_HostMultiplayer()
{
    Rogue_CreateMultiplayerConnectTask(TRUE);
}

void Rogue_JoinMultiplayer()
{
    Rogue_CreateMultiplayerConnectTask(FALSE);
}

void Rogue_SetupFollowParterMonObjectEvent()
{
    SetupFollowParterMonObjectEvent();
}

void Rogue_RunRewardLvls()
{
    gSpecialVar_Result = Rogue_PostRunRewardLvls();
}

void Rogue_RunRewardMoney()
{
    gSpecialVar_Result = Rogue_PostRunRewardMoney();
}

void ReloadWarpSilent()
{
    u8 mapGroup = gSaveBlock1Ptr->location.mapGroup;
    u8 mapNum = gSaveBlock1Ptr->location.mapNum;
    u8 warpId = (u8)-1;
    u16 x = gSaveBlock1Ptr->pos.x;
    u16 y = gSaveBlock1Ptr->pos.y;

    StoreInitialPlayerAvatarStateForReloadWarp();
    SetWarpDestination(mapGroup, mapNum, warpId, x, y);
    DoDiveWarp();
}

void Rogue_SetTimeAndSeason()
{
    u8 tod = min(gSpecialVar_0x8004, TIME_PRESET_COUNT);
    u8 season = min(gSpecialVar_0x8005, SEASON_COUNT);

    if(tod != TIME_PRESET_COUNT || season != SEASON_COUNT)
    {
        RogueToD_SetTimePreset(tod, season);
        gSpecialVar_Result = TRUE;
    }
    else
    {
        gSpecialVar_Result = FALSE;
    }
}