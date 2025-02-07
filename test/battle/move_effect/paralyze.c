#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Thunder Wave ")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_WAVE); }
    } SCENE {
        MESSAGE("Wobbuffet used Thunder Wave!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, opponent);
        MESSAGE("The opposing Wobbuffet is paralyzed, so it may be unable to move!");
        STATUS_ICON(opponent, paralysis: TRUE);
    }
}

SINGLE_BATTLE_TEST("Thunder Wave Limber prevents paralysis")
{
    GIVEN {
        PLAYER(SPECIES_PERSIAN) { Ability(ABILITY_LIMBER); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_THUNDER_WAVE); }
    } SCENE {
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, player);
            STATUS_ICON(player, paralysis: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("aaaaHyper Cutter prevents Attack stage reduction from moves")
{
    GIVEN {
        ASSUME(GetMoveEffect(MOVE_GROWL) == EFFECT_ATTACK_DOWN);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_KRABBY) { Ability(ABILITY_HYPER_CUTTER); }
    } WHEN {
        TURN { MOVE(player, MOVE_TICKLE); }
    } SCENE {
        //ABILITY_POPUP(opponent, ABILITY_HYPER_CUTTER);
        //MESSAGE("The opposing Krabby's Hyper Cutter prevents Attack loss!");
    }
}
