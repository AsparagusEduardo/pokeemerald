#include "global.h"
#include "test/battle.h"
 
SINGLE_BATTLE_TEST("Psyblade deals 1.5x damage in Electric Terrain", s16 damage)
{
    u16 setupMove;
    PARAMETRIZE { setupMove = MOVE_CELEBRATE; }
    PARAMETRIZE { setupMove = MOVE_ELECTRIC_TERRAIN; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_PSYBLADE].attributes[0].type == MOVE_ATTRIBUTE_TERRAIN_BASE_POWER_MULT);
        ASSUME(gBattleMoves[MOVE_PSYBLADE].attributes[0].effect.basePowerMultiplier == UQ_4_12(1.5));
        ASSUME(gBattleMoves[MOVE_PSYBLADE].attributes[0].condition.terrain == STATUS_FIELD_ELECTRIC_TERRAIN);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, setupMove); }
        TURN { MOVE(player, MOVE_PSYBLADE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PSYBLADE, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

#if B_TERRAIN_TYPE_BOOST >= GEN_8
    #define TERRAIN_BOOST 1.3
#else
    #define TERRAIN_BOOST 1.5
#endif

SINGLE_BATTLE_TEST("Rising Voltage deals 2.0x damage in Electric Terrain", s16 damage)
{
    u16 setupMove;
    PARAMETRIZE { setupMove = MOVE_CELEBRATE; }
    PARAMETRIZE { setupMove = MOVE_ELECTRIC_TERRAIN; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_RISING_VOLTAGE].type == TYPE_ELECTRIC);
        ASSUME(gBattleMoves[MOVE_RISING_VOLTAGE].attributes[0].type == MOVE_ATTRIBUTE_TERRAIN_BASE_POWER_MULT);
        ASSUME(gBattleMoves[MOVE_RISING_VOLTAGE].attributes[0].effect.basePowerMultiplier == UQ_4_12(2.0));
        ASSUME(gBattleMoves[MOVE_RISING_VOLTAGE].attributes[0].condition.terrain == STATUS_FIELD_ELECTRIC_TERRAIN);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, setupMove); }
        TURN { MOVE(player, MOVE_RISING_VOLTAGE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RISING_VOLTAGE, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, UQ_4_12(2.0 * TERRAIN_BOOST), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Terrain Pulse deals 2.0x damage in Terrains", s16 damage)
{
    u16 setupMove;
    PARAMETRIZE { setupMove = MOVE_CELEBRATE; }
    PARAMETRIZE { setupMove = MOVE_GRASSY_TERRAIN; }
    PARAMETRIZE { setupMove = MOVE_MISTY_TERRAIN; }
    PARAMETRIZE { setupMove = MOVE_ELECTRIC_TERRAIN; }
    PARAMETRIZE { setupMove = MOVE_PSYCHIC_TERRAIN; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[0].effect.basePowerMultiplier == UQ_4_12(2.0));
        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[0].type == MOVE_ATTRIBUTE_TERRAIN_BASE_POWER_MULT);
        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[0].condition.terrain == STATUS_FIELD_TERRAIN_ANY);

        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[1].condition.terrain == STATUS_FIELD_GRASSY_TERRAIN);
        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[2].condition.terrain == STATUS_FIELD_MISTY_TERRAIN);
        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[3].condition.terrain == STATUS_FIELD_ELECTRIC_TERRAIN);
        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[4].condition.terrain == STATUS_FIELD_PSYCHIC_TERRAIN);

        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[1].type == MOVE_ATTRIBUTE_TERRAIN_MOVE_TYPE);
        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[2].type == MOVE_ATTRIBUTE_TERRAIN_MOVE_TYPE);
        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[3].type == MOVE_ATTRIBUTE_TERRAIN_MOVE_TYPE);
        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[4].type == MOVE_ATTRIBUTE_TERRAIN_MOVE_TYPE);

        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[1].effect.moveType == TYPE_GRASS);
        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[2].effect.moveType == TYPE_FAIRY);
        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[3].effect.moveType == TYPE_ELECTRIC);
        ASSUME(gBattleMoves[MOVE_TERRAIN_PULSE].attributes[4].effect.moveType == TYPE_PSYCHIC);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, setupMove); }
        TURN { MOVE(player, MOVE_TERRAIN_PULSE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TERRAIN_PULSE, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, UQ_4_12(2.0 * TERRAIN_BOOST), results[1].damage);
    }
}
