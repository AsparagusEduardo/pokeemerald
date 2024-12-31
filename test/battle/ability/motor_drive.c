#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Motor Drive absorbs status moves")
{
    GIVEN {
        ASSUME(GetMoveType(MOVE_THUNDER_WAVE) == TYPE_ELECTRIC);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_EMOLGA) { Ability(ABILITY_MOTOR_DRIVE); }
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_WAVE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_MOTOR_DRIVE);
    }
}
