#ifndef ROGUE_QUERY_H
#define ROGUE_QUERY_H

typedef bool8 (*QueryCallback)(u16 elem, u16 usrData);
typedef bool8 (*QueryFilterCallback)(u16 elem, void* usrData);
typedef u8 (*WeightCallback)(u16 index, u16 elem, void* usrData);

enum
{
    QUERY_FUNC_INCLUDE,
    QUERY_FUNC_EXCLUDE,
};

struct RogueQueryDebug
{
    u16 uncollapsedBufferCapacity;
    u8* uncollapsedBufferPtr;
    u16* collapseBufferPtr;
    u16* collapseSizePtr;
};

// RogueQuery 2.0 API
// Misc./Global
void RogueQuery_Init();
void RogueMiscQuery_EditElement(u8 func, u16 elem);
void RogueMiscQuery_EditRange(u8 func, u16 fromId, u16 toId);

// Mon Query
void RogueMonQuery_Begin();
void RogueMonQuery_End();
void RogueMonQuery_Reset(u8 func);
void RogueMonQuery_IsSpeciesActive();
void RogueMonQuery_TransformIntoEggSpecies();
void RogueMonQuery_TransformIntoEvos(u8 levelLimit, bool8 includeItemEvos, bool8 keepSourceSpecies);
void RogueMonQuery_IsOfType(u8 func, u32 typeFlags);
void RogueMonQuery_EvosContainType(u8 func, u32 typeFlags);
void RogueMonQuery_ContainsPresetFlags(u8 func, u32 flags);
void RogueMonQuery_IsLegendary(u8 func);
void RogueMonQuery_IsLegendaryWithPresetFlags(u8 func, u32 flags);
void RogueMonQuery_AnyActiveEvos(u8 func, bool8 includeMegas);
void RogueMonQuery_CustomFilter(QueryFilterCallback filterFunc, void* usrData);

// Item Query
void RogueItemQuery_Begin();
void RogueItemQuery_End();

// Traine Query
void RogueTrainerQuery_Begin();
void RogueTrainerQuery_End();
void RogueTrainerQuery_Reset(u8 func);
void RogueTrainerQuery_ContainsTrainerFlag(u8 func, u32 trainerFlags);
void RogueTrainerQuery_IsOfTypeGroup(u8 func, u16 typeGroup);

// Weight selection
void RogueWeightQuery_Begin();
void RogueWeightQuery_End();
bool8 RogueWeightQuery_HasAnyWeights();
void RogueWeightQuery_CalculateWeights(WeightCallback callback, void* data);
void RogueWeightQuery_FillWeights(u8 weight);
void RogueWeightQuery_UpdateIndividualWeight(u16 elem, u8 weight);
u16 RogueWeightQuery_SelectRandomFromWeights(u16 randValue);
u16 RogueWeightQuery_SelectRandomFromWeightsWithUpdate(u16 randValue, u8 updatedWeight);
//u16 RogueWeightQuery_SelectFromWeights();


// RogueQuery old API
void RogueQuery_Clear(void);
void RogueQuery_CollapseSpeciesBuffer(void);
void RogueQuery_CollapseItemBuffer(void);
u16* RogueQuery_BufferPtr(void);
u16 RogueQuery_BufferSize(void);
bool8 RogueQuery_CheckIncluded(u16 id);

struct RogueQueryDebug RogueQuery_GetDebugData(void);

// Uncollapsed queries are slow but can be used to query the entire range
u16 RogueQuery_UncollapsedSpeciesSize(void);
u16 RogueQuery_UncollapsedItemSize(void);
u16 RogueQuery_AtUncollapsedIndex(u16 idx);

u16 RogueQuery_PopCollapsedIndex(u16 idx);
u16 RogueQuery_PopUncollapsedIndex(u16 idx);

void RogueQuery_Include(u16 idx);
void RogueQuery_IncludeRange(u16 fromId, u16 toId);
void RogueQuery_Exclude(u16 idx);
void RogueQuery_ExcludeAll(void);
void RogueQuery_CustomSpecies(QueryCallback query, u16 usrData);
void RogueQuery_CustomItems(QueryCallback query, u16 usrData);

// Species
void RogueQuery_SpeciesIsValid(u8 earlyCullType1, u8 earlyCullType2, u8 earlyCullType3);
void RogueQuery_SpeciesAlternateForms(bool8 includeItemForms);
void RogueQuery_SpeciesExcludeCommon(void);
void RogueQuery_SpeciesFilterRelevantTypes(u8 earlyCullType1, u8 earlyCullType2, u8 earlyCullType3);
void RogueQuery_SpeciesExcludeRange(u16 fromId, u16 toId);
void RogueQuery_SpeciesInPokedex(void);
void RogueQuery_SpeciesInGeneration(u8 gen);
void RogueQuery_SpeciesOfType(u8 type);
void RogueQuery_SpeciesNotOfType(u8 type);
void RogueQuery_SpeciesOfTypes(const u8* types, u8 count);
void RogueQuery_SpeciesNotOfTypes(const u8* types, u8 count);
void RogueQuery_SpeciesIsFinalEvolution(void);
void RogueQuery_TransformToEggSpecies(void);
void RogueQuery_SpeciesWithAtLeastEvolutionStages(u8 count);
void RogueQuery_EvolveSpecies(u8 level, bool8 itemEvos);
void RogueQuery_EvolveSpeciesAndKeepPreEvo(u8 level, bool8 itemEvos);
void RogueQuery_SpeciesIsLegendary(void);
void RogueQuery_SpeciesIsNotLegendary(void);
void RogueQuery_SpeciesIsNotWeakLegendary(void);
void RogueQuery_SpeciesIsNotStrongLegendary(void);
void RogueQuery_SpeciesIncludeMonFlags(u16 flags);
void RogueQuery_SpeciesExcludeMonFlags(u16 flags);

// Items
void RogueQuery_ItemsIsValid(void);
void RogueQuery_ItemsExcludeCommon(void);
void RogueQuery_ItemsInPocket(u8 pocket);
void RogueQuery_ItemsNotInPocket(u8 pocket);
void RogueQuery_ItemsHeldItem(void);
void RogueQuery_ItemsNotHeldItem(void);
void RogueQuery_ItemsRareHeldItem(void);
void RogueQuery_ItemsNotRareHeldItem(void);
void RogueQuery_ItemsMedicine(void);
void RogueQuery_ItemsNotMedicine(void);
void RogueQuery_ItemsBattleEnchancer(void);
void RogueQuery_ItemsNotBattleEnchancer(void);
void RogueQuery_ItemsExcludeRange(u16 fromId, u16 toId);
void RogueQuery_ItemsInPriceRange(u16 minPrice, u16 maxPrice);

#endif