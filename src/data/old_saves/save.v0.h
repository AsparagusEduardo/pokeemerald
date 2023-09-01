#include "global.h"
#include "save.h"

// This file contains the backups for the save file of v0.
// Editing this file may cause unwanted behaviour.
// Please use make release in case problems arise.

struct SaveBlock2_v0
{
    u8 playerName[8];
    u8 playerGender;
    u8 specialSaveWarpFlags;
    u8 playerTrainerId[4];
    u16 playTimeHours;
    u8 playTimeMinutes;
    u8 playTimeSeconds;
    u8 playTimeVBlanks;
    u8 optionsButtonMode;
    u16 optionsTextSpeed:3;
    u16 optionsWindowFrameType:5;
    u16 optionsSound:1;
    u16 optionsBattleStyle:1;
    u16 optionsBattleSceneOff:1;
    u16 regionMapZoom:1;
    struct Pokedex pokedex;
    u8 filler_90[8];
    struct Time localTimeOffset;
    struct Time lastBerryTreeUpdate;
    u32 gcnLinkFlags;
    u32 encryptionKey;
    struct PlayersApprentice playerApprentice;
    struct Apprentice apprentices[4];
    struct BerryCrush berryCrush;
    struct PokemonJumpRecords pokeJump;
    struct BerryPickingResults berryPick;
    struct RankingHall1P hallRecords1P[9][2][3];
    struct RankingHall2P hallRecords2P[2][3];
    u16 contestLinkResults[5][4];
    struct BattleFrontier frontier;
};


bool8 UpdateSave_v0_v1(const struct SaveSectorLocation *locations)
{
    const struct SaveBlock2_v0* sOldSaveBlock2Ptr = (struct SaveBlock2_v0*)(locations[0].data); // SECTOR_ID_SAVEBLOCK2
    const struct SaveBlock1* sOldSaveBlock1Ptr = (struct SaveBlock1*)(locations[1].data); // SECTOR_ID_SAVEBLOCK1_START
    const struct PokemonStorage* sOldPokemonStoragePtr = (struct PokemonStorage*)(locations[5].data); // SECTOR_ID_PKMN_STORAGE_START
    u32 i;

    // SaveBlock2 
    gSaveBlock2Ptr->_saveSentinel = 0xFF;
    gSaveBlock2Ptr->saveVersion = 1;
    for(i = 0; i < min(ARRAY_COUNT(gSaveBlock2Ptr->playerName), ARRAY_COUNT(sOldSaveBlock2Ptr->playerName)); i++) gSaveBlock2Ptr->playerName[i] = sOldSaveBlock2Ptr->playerName[i];
    gSaveBlock2Ptr->playerGender = sOldSaveBlock2Ptr->playerGender;
    gSaveBlock2Ptr->specialSaveWarpFlags = sOldSaveBlock2Ptr->specialSaveWarpFlags;
    for(i = 0; i < min(ARRAY_COUNT(gSaveBlock2Ptr->playerTrainerId), ARRAY_COUNT(sOldSaveBlock2Ptr->playerTrainerId)); i++) gSaveBlock2Ptr->playerTrainerId[i] = sOldSaveBlock2Ptr->playerTrainerId[i];
    gSaveBlock2Ptr->playTimeHours = sOldSaveBlock2Ptr->playTimeHours;
    gSaveBlock2Ptr->playTimeMinutes = sOldSaveBlock2Ptr->playTimeMinutes;
    gSaveBlock2Ptr->playTimeSeconds = sOldSaveBlock2Ptr->playTimeSeconds;
    gSaveBlock2Ptr->playTimeVBlanks = sOldSaveBlock2Ptr->playTimeVBlanks;
    gSaveBlock2Ptr->optionsButtonMode = sOldSaveBlock2Ptr->optionsButtonMode;
    gSaveBlock2Ptr->optionsTextSpeed = sOldSaveBlock2Ptr->optionsTextSpeed;
    gSaveBlock2Ptr->optionsWindowFrameType = sOldSaveBlock2Ptr->optionsWindowFrameType;
    gSaveBlock2Ptr->optionsSound = sOldSaveBlock2Ptr->optionsSound;
    gSaveBlock2Ptr->optionsBattleStyle = sOldSaveBlock2Ptr->optionsBattleStyle;
    gSaveBlock2Ptr->optionsBattleSceneOff = sOldSaveBlock2Ptr->optionsBattleSceneOff;
    gSaveBlock2Ptr->regionMapZoom = sOldSaveBlock2Ptr->regionMapZoom;
    gSaveBlock2Ptr->pokedex = sOldSaveBlock2Ptr->pokedex;
    for(i = 0; i < min(ARRAY_COUNT(gSaveBlock2Ptr->filler_90), ARRAY_COUNT(sOldSaveBlock2Ptr->filler_90)); i++) gSaveBlock2Ptr->filler_90[i] = sOldSaveBlock2Ptr->filler_90[i];
    gSaveBlock2Ptr->localTimeOffset = sOldSaveBlock2Ptr->localTimeOffset;
    gSaveBlock2Ptr->lastBerryTreeUpdate = sOldSaveBlock2Ptr->lastBerryTreeUpdate;
    gSaveBlock2Ptr->gcnLinkFlags = sOldSaveBlock2Ptr->gcnLinkFlags;
    gSaveBlock2Ptr->encryptionKey = sOldSaveBlock2Ptr->encryptionKey;
    gSaveBlock2Ptr->playerApprentice = sOldSaveBlock2Ptr->playerApprentice;
    CpuCopy16(&sOldSaveBlock2Ptr->apprentices, &gSaveBlock2Ptr->apprentices, min(sizeof(gSaveBlock2Ptr->apprentices), sizeof(sOldSaveBlock2Ptr->apprentices)));
    gSaveBlock2Ptr->berryCrush = sOldSaveBlock2Ptr->berryCrush;
    gSaveBlock2Ptr->pokeJump = sOldSaveBlock2Ptr->pokeJump;
    gSaveBlock2Ptr->berryPick = sOldSaveBlock2Ptr->berryPick;
    CpuCopy16(&sOldSaveBlock2Ptr->hallRecords1P, &gSaveBlock2Ptr->hallRecords1P, min(sizeof(gSaveBlock2Ptr->hallRecords1P), sizeof(sOldSaveBlock2Ptr->hallRecords1P)));
    CpuCopy16(&sOldSaveBlock2Ptr->hallRecords2P, &gSaveBlock2Ptr->hallRecords2P, min(sizeof(gSaveBlock2Ptr->hallRecords2P), sizeof(sOldSaveBlock2Ptr->hallRecords2P)));
    CpuCopy16(&sOldSaveBlock2Ptr->contestLinkResults, &gSaveBlock2Ptr->contestLinkResults, min(sizeof(gSaveBlock2Ptr->contestLinkResults), sizeof(sOldSaveBlock2Ptr->contestLinkResults)));
    gSaveBlock2Ptr->frontier = sOldSaveBlock2Ptr->frontier;

    // SaveBlock1 
    *gSaveBlock1Ptr = *sOldSaveBlock1Ptr;

    // PokemonStorage 
    *gPokemonStoragePtr = *sOldPokemonStoragePtr;

    SetContinueGameWarpStatus();
    gSaveBlock1Ptr->continueGameWarp = gSaveBlock1Ptr->lastHealLocation;

    return TRUE;
}
