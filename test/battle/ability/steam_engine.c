#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Steam Engine raises speed when hit by a Fire or Water move")
{
    u16 move;

    PARAMETRIZE { move = MOVE_TACKLE; }
    PARAMETRIZE { move = MOVE_EMBER; }
    PARAMETRIZE { move = MOVE_WATER_GUN; }
    
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TACKLE].type != TYPE_FIRE);
        ASSUME(gMovesInfo[MOVE_TACKLE].type != TYPE_WATER);
        ASSUME(gMovesInfo[MOVE_EMBER].type == TYPE_FIRE);
        ASSUME(gMovesInfo[MOVE_WATER_GUN].type == TYPE_WATER);
        PLAYER(SPECIES_COALOSSAL) { Ability(ABILITY_STEAM_ENGINE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        if (move != MOVE_TACKLE) {
            ABILITY_POPUP(player, ABILITY_STEAM_ENGINE);
            MESSAGE("Coalossal's Speed drastically rose!");
        } else {
            NONE_OF {
                ABILITY_POPUP(player, ABILITY_STEAM_ENGINE);
                MESSAGE("Coalossal's Speed drastically rose!");
            }
        }
    } THEN {
        if (move != MOVE_TACKLE)
            EXPECT_EQ(player->statStages[STAT_SPEED], DEFAULT_STAT_STAGE + 6);
        else
            EXPECT_EQ(player->statStages[STAT_SPEED], DEFAULT_STAT_STAGE);
    }
}
