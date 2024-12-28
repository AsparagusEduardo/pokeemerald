#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Crit Chance: High crit rate increases the critical hit ratio by 1 stage")
{
    PASSES_RANDOMLY(1, 8, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gMovesInfo[MOVE_SLASH].criticalHitStage == 1);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLASH, player);
        MESSAGE("A critical hit!");
    }
}

SINGLE_BATTLE_TEST("Crit Chance: Raising critical hit rate to 3 guarantees a critical hit (Gen 7+)")
{
    PASSES_RANDOMLY(1, 1, RNG_CRITICAL_HIT);
    GIVEN {
        ASSUME(B_CRIT_CHANCE >= GEN_7);
        ASSUME(gMovesInfo[MOVE_SLASH].criticalHitStage == 1);
        ASSUME(gItemsInfo[ITEM_SCOPE_LENS].holdEffect == HOLD_EFFECT_SCOPE_LENS);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_SUPER_LUCK); Item(ITEM_SCOPE_LENS); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SLASH); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLASH, player);
        MESSAGE("A critical hit!");
    }
}
