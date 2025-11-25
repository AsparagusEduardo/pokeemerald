#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Sap Sipper negates damage from Grass-type moves")
{
    GIVEN {
        PLAYER(SPECIES_MARILL) { Ability(ABILITY_SAP_SIPPER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_VINE_WHIP); }
    } SCENE {
        NONE_OF { HP_BAR(player); }
    }
}

SINGLE_BATTLE_TEST("Sap Sipper negates effects from Grass-type moves")
{
    GIVEN {
        PLAYER(SPECIES_MARILL) { Ability(ABILITY_SAP_SIPPER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SPORE); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
            STATUS_ICON(player, sleep: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Sap Sipper increases Attack by one stage when hit by a Grass-type move")
{
    u32 config;
    PARAMETRIZE { config = GEN_4; }
    PARAMETRIZE { config = GEN_5; }
    GIVEN {
        WITH_CONFIG(CONFIG_ABSORBING_ABILITY_STRING, config);
        PLAYER(SPECIES_MARILL) { Ability(ABILITY_SAP_SIPPER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_VINE_WHIP); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_SAP_SIPPER);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        if (config >= GEN_5)
            MESSAGE("Marill's Attack rose!");
        else
            MESSAGE("Marill's Sap Sipper raised its Attack!");
    }
}

SINGLE_BATTLE_TEST("Sap Sipper does not increase Attack if already maxed")
{
    GIVEN {
        PLAYER(SPECIES_MARILL) { Ability(ABILITY_SAP_SIPPER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_BELLY_DRUM); MOVE(opponent, MOVE_VINE_WHIP); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_SAP_SIPPER);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Marill's Attack rose!");
            MESSAGE("Marill's Sap Sipper raised its Attack!");
        }
    }
}

SINGLE_BATTLE_TEST("Sap Sipper blocks multi-hit grass type moves")
{
    u32 config;
    PARAMETRIZE { config = GEN_4; }
    PARAMETRIZE { config = GEN_5; }
    GIVEN {
        WITH_CONFIG(CONFIG_ABSORBING_ABILITY_STRING, config);
        ASSUME(GetMoveEffect(MOVE_BULLET_SEED) == EFFECT_MULTI_HIT);
        PLAYER(SPECIES_MARILL) { Ability(ABILITY_SAP_SIPPER); }
        OPPONENT(SPECIES_SHELLDER) { Ability(ABILITY_SKILL_LINK); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_BULLET_SEED); }
    } SCENE {
        MESSAGE("The opposing Shellder used Bullet Seed!");
        ABILITY_POPUP(player, ABILITY_SAP_SIPPER);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        if (config >= GEN_5)
            MESSAGE("Marill's Attack rose!");
        else
            MESSAGE("Marill's Sap Sipper raised its Attack!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_BULLET_SEED, opponent);
            HP_BAR(player);
            MESSAGE("The Pokémon was hit 5 time(s)!");
        }
    }
}
