#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_FACADE].effect == EFFECT_FACADE);
}

SINGLE_BATTLE_TEST("Facade's power doubles if the user has a status condition", s16 damage)
{
    u32 status1, genConfig;
    PARAMETRIZE { status1 = STATUS1_NONE; }
    PARAMETRIZE { status1 = STATUS1_POISON; }
    PARAMETRIZE { status1 = STATUS1_BURN; genConfig = GEN_5; }
    PARAMETRIZE { status1 = STATUS1_BURN; genConfig = GEN_6; }
    PARAMETRIZE { status1 = STATUS1_PARALYSIS; }
    PARAMETRIZE { status1 = STATUS1_TOXIC_POISON; }
    PARAMETRIZE { status1 = STATUS1_FROSTBITE; }
    // Can't use move if Asleep or Frozen
    //PARAMETRIZE { status1 = STATUS1_SLEEP; }
    //PARAMETRIZE { status1 = STATUS1_FREEZE; }
    GIVEN {
        WITH_CONFIG(GEN_CONFIG_BURN_FACADE_DMG, genConfig);
        PLAYER(SPECIES_WOBBUFFET) { Status1(status1); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FACADE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FACADE, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage); //STATUS1_POISON
        EXPECT_EQ(results[0].damage, results[2].damage);                  //STATUS1_BURN, Gen 1-5
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[3].damage); //STATUS1_BURN, Gen 6+
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[4].damage); //STATUS1_PARALYSIS
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[5].damage); //STATUS1_TOXIC_POISON
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[6].damage); //STATUS1_FROSTBITE
    }
}

