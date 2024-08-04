#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_DARK_VOID].effect == EFFECT_DARK_VOID);
}

// Gen 7+
TO_DO_BATTLE_TEST("Dark Void can only be used by Darkrai");
TO_DO_BATTLE_TEST("Dark Void can be used by a Pokémon transformed into Darkrai");
TO_DO_BATTLE_TEST("Dark Void doesn't fail if it's bounced back by non-Darkrai Magic Bounce");
