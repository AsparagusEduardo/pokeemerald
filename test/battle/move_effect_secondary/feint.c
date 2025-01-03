#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_FEINT, MOVE_EFFECT_FEINT) == TRUE);
}

TO_DO_BATTLE_TEST("Feint fails if the target hasn't used a protection move (Gen 4)");
TO_DO_BATTLE_TEST("Feint still hits if the target hasn't used a protection move (Gen 5+)");

TO_DO_BATTLE_TEST("Feint lifts the effects of protection moves for the remainder of the turn");
TO_DO_BATTLE_TEST("Feint lifts the effects of Wide Guard");
TO_DO_BATTLE_TEST("Feint lifts the effects of Quick Guard");
TO_DO_BATTLE_TEST("Feint prevents the user from suffering negative effects from Mat Block");
TO_DO_BATTLE_TEST("Feint prevents the user from suffering negative effects from Spiky Shield");
TO_DO_BATTLE_TEST("Feint prevents the user from suffering negative effects from King's Shield");
TO_DO_BATTLE_TEST("Feint prevents the user from suffering negative effects from Baneful Bunker");
TO_DO_BATTLE_TEST("Feint prevents the user from suffering negative effects from Obstruct");
TO_DO_BATTLE_TEST("Feint prevents the user from suffering negative effects from Silk Trap");
TO_DO_BATTLE_TEST("Feint prevents the user from suffering negative effects from Burning Bulwark");

DOUBLE_BATTLE_TEST("(DYNAMAX) Feint bypasses Max Guard but doesn't break it")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_PROTECT, gimmick: GIMMICK_DYNAMAX);
               MOVE(opponentLeft, MOVE_FEINT, target: playerLeft);
               MOVE(opponentRight, MOVE_TACKLE, target: playerLeft);
        }
    } SCENE {
        MESSAGE("Wobbuffet used Max Guard!");
        MESSAGE("The opposing Wobbuffet used Feint!");
        HP_BAR(playerLeft);
        MESSAGE("The opposing Wynaut used Tackle!");
        NONE_OF { HP_BAR(playerLeft); }
    }
}
