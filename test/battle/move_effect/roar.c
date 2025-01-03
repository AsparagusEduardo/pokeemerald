#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_ROAR].effect == EFFECT_ROAR);
}

TO_DO_BATTLE_TEST("Roar fails in Trainer Battles (Gen 1)");

SINGLE_BATTLE_TEST("Roar switches the target with a random non-battler, non-fainted replacement - Singles (Gen 2+)")
{
    PASSES_RANDOMLY(1, 2, RNG_FORCE_RANDOM_SWITCH);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BULBASAUR);
        OPPONENT(SPECIES_CHARMANDER);
        OPPONENT(SPECIES_SQUIRTLE) { HP(0); }
    } WHEN {
        TURN { MOVE(player, MOVE_ROAR); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROAR, player);
        MESSAGE("The opposing Bulbasaur was dragged out!");
    }
}

DOUBLE_BATTLE_TEST("Roar switches the target with a random non-battler, non-fainted replacement - Doubles (Gen 2+")
{
    PASSES_RANDOMLY(1, 2, RNG_FORCE_RANDOM_SWITCH);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_BULBASAUR);
        OPPONENT(SPECIES_CHARMANDER);
        OPPONENT(SPECIES_SQUIRTLE) { HP(0); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ROAR, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROAR, playerLeft);
        MESSAGE("The opposing Bulbasaur was dragged out!");
    }
}

SINGLE_BATTLE_TEST("Roar fails if no replacements")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ROAR); }
    } SCENE {
        MESSAGE("Wobbuffet used Roar!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Roar fails if replacements fainted")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT) { HP(0); }
    } WHEN {
        TURN { MOVE(player, MOVE_ROAR); }
    } SCENE {
        MESSAGE("Wobbuffet used Roar!");
        MESSAGE("But it failed!");
    }
}

TO_DO_BATTLE_TEST("Roar ends a Single Wild battle if it doesn't fail");
TO_DO_BATTLE_TEST("Roar's chance of failing in wild battles is based on a formula based on the user's and target's level (Gen 1-2)");
TO_DO_BATTLE_TEST("Roar's chance of failing in wild battles is based on a different formula based on the user's and target's level (Gen 3-4)");
TO_DO_BATTLE_TEST("Roar's chance of failing doesn't apply in trainer battles (Gen 2-4)");
TO_DO_BATTLE_TEST("Roar always fails in Trainer battles if it's used before its opponent made a move (Gen 2+)");
TO_DO_BATTLE_TEST("Roar always fails if the user's level less the target's (Gen 5+)");
TO_DO_BATTLE_TEST("Roar always works for wild Pokémon(Gen 5+)");
TO_DO_BATTLE_TEST("Roar fails if used on a wild Pokémon in an SOS Battle");

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon are not affected Roar")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_WHIRLWIND].effect == EFFECT_ROAR);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_WHIRLWIND); MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Whirlwind!");
        MESSAGE("The move was blocked by the power of Dynamax!");
    }
}

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon are not affected by phazing moves but no block message is printed if they faint")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_DRAGON_TAIL].effect == EFFECT_HIT_SWITCH_TARGET);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); };
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DRAGON_TAIL); MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Wobbuffet used Max Strike!");
        MESSAGE("The opposing Wobbuffet used Dragon Tail!");
        HP_BAR(player);
        MESSAGE("Wobbuffet fainted!");
        NOT MESSAGE("The move was blocked by the power of Dynamax!");
    }
}
