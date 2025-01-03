#include "global.h"
#include "test/battle.h"

TO_DO_BATTLE_TEST("Grudge removes the opposing mon's PP for the move that fainted the user");
TO_DO_BATTLE_TEST("Grudge's effect disappears if the user takes a new turn - Move");
TO_DO_BATTLE_TEST("Grudge's effect disappears if the user takes a new turn - Sleep");
TO_DO_BATTLE_TEST("Grudge's effect disappears if the user takes a new turn - Paralysis");
TO_DO_BATTLE_TEST("Grudge's effect disappears if the user takes a new turn - Flinching");
TO_DO_BATTLE_TEST("Grudge's effect doesn't trigger on indirect damage - Sandstorm");
TO_DO_BATTLE_TEST("Grudge's effect doesn't trigger on indirect damage - Leech Seed");
TO_DO_BATTLE_TEST("Grudge's effect doesn't trigger on indirect damage - Future Sight");
TO_DO_BATTLE_TEST("Grudge's effect can trigger on the next turn if the user hasn't moved yet");
TO_DO_BATTLE_TEST("Grudge can be used multiple times in a row");

SINGLE_BATTLE_TEST("(DYNAMAX) Dynamaxed Pokemon are affected by Grudge")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(50); };
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); Speed(100); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_GRUDGE); MOVE(player, MOVE_TACKLE, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet used Grudge!");
        MESSAGE("Wobbuffet used Max Strike!");
        MESSAGE("Wobbuffet's Tackle lost all its PP due to the grudge!");
        MESSAGE("The opposing Wobbuffet fainted!");
    }
}
