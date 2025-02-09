#ifndef GUARD_CONSTANTS_GENERATIONAL_CHANGES_H
#define GUARD_CONSTANTS_GENERATIONAL_CHANGES_H

enum GenConfigTag
{
    // Calculation settings
    GEN_CONFIG_CRIT_CHANCE,
    GEN_CONFIG_CRIT_MULTIPLIER,
    GEN_CONFIG_PARALYSIS_SPEED,
    GEN_CONFIG_CONFUSION_SELF_DMG_CHANCE,
    GEN_CONFIG_MULTI_HIT_CHANCE,
    //GEN_CONFIG_WHITEOUT_MONEY,
    //GEN_CONFIG_LIGHT_BALL_ATTACK_BOOST,
    //GEN_CONFIG_SANDSTORM_SPDEF_BOOST,

    // Experience settings
    //GEN_CONFIG_EXP_CATCH,
    //GEN_CONFIG_TRAINER_EXP_MULTIPLIER,
    //GEN_CONFIG_SPLIT_EXP,
    //GEN_CONFIG_SCALED_EXP,
    //GEN_CONFIG_UNEVOLVED_EXP_MULTIPLIER,

    // Stat settings
    //GEN_CONFIG_BADGE_BOOST,
    //GEN_CONFIG_FRIENDSHIP_BOOST,
    //GEN_CONFIG_MAX_LEVEL_EV_GAINS,
    //GEN_CONFIG_RECALCULATE_STATS,

    // Damage settings
    GEN_CONFIG_BURN_DAMAGE,
    //GEN_CONFIG_BURN_FACADE_DMG,
    //GEN_CONFIG_BINDING_DAMAGE,
    //GEN_CONFIG_PSYWAVE_DMG,
    //GEN_CONFIG_PAYBACK_SWITCH_BOOST,
    //GEN_CONFIG_HIDDEN_POWER_DMG,
    //GEN_CONFIG_ROUGH_SKIN_DMG,
    //GEN_CONFIG_KNOCK_OFF_DMG,
    //GEN_CONFIG_SPORT_DMG_REDUCTION,
    //GEN_CONFIG_EXPLOSION_DEFENSE,
    //GEN_CONFIG_PARENTAL_BOND_DMG,
    //GEN_CONFIG_MULTIPLE_TARGETS_DMG,

    // Type settings
    //GEN_CONFIG_GHOSTS_ESCAPE,
    //GEN_CONFIG_PARALYZE_ELECTRIC,
    //GEN_CONFIG_POWDER_GRASS,
    //GEN_CONFIG_UPDATED_TYPE_MATCHUPS,
    //GEN_CONFIG_PRANKSTER_DARK_TYPES,
    //GEN_CONFIG_SHEER_COLD_IMMUNITY,
    //GEN_CONFIG_ROOST_PURE_FLYING,
    //GEN_CONFIG_STATUS_TYPE_IMMUNITY,

    // Turn settings
    //GEN_CONFIG_BINDING_TURNS,
    //GEN_CONFIG_UPROAR_TURNS,
    //GEN_CONFIG_UPROAR_IGNORE_SOUNDPROOF,
    //GEN_CONFIG_DISABLE_TURNS,
    //GEN_CONFIG_TAILWIND_TURNS,
    //GEN_CONFIG_SLEEP_TURNS,
    //GEN_CONFIG_TAUNT_TURNS,
    //GEN_CONFIG_SPORT_TURNS,
    //GEN_CONFIG_MEGA_EVO_TURN_ORDER,
    //GEN_CONFIG_RECALC_TURN_AFTER_ACTIONS,
    //GEN_CONFIG_FAINT_SWITCH_IN,

    // Move data settings
    //GEN_CONFIG_UPDATED_MOVE_DATA,
    //GEN_CONFIG_UPDATED_MOVE_TYPES,
    //GEN_CONFIG_UPDATED_MOVE_FLAGS,
    //GEN_CONFIG_PHYSICAL_SPECIAL_SPLIT,
    //GEN_CONFIG_RECOIL_IF_MISS_DMG,
    //GEN_CONFIG_KLUTZ_FLING_INTERACTION,
    //GEN_CONFIG_UPDATED_CONVERSION,
    //GEN_CONFIG_UPDATED_CONVERSION_2,
    //GEN_CONFIG_PP_REDUCED_BY_SPITE,
    //GEN_CONFIG_EXTRAPOLATED_MOVE_FLAGS,

    // Ability data settings
    //GEN_CONFIG_UPDATED_ABILITY_DATA,

    // Move accuracy settings
    //GEN_CONFIG_TOXIC_NEVER_MISS,
    //GEN_CONFIG_MINIMIZE_DMG_ACC,
    //GEN_CONFIG_BLIZZARD_HAIL,
    //GEN_CONFIG_SHEER_COLD_ACC,

    // Move stat change settings
    //GEN_CONFIG_FELL_STINGER_STAT_RAISE,
    //GEN_CONFIG_KINGS_SHIELD_LOWER_ATK,
    //GEN_CONFIG_SPEED_BUFFING_RAPID_SPIN,
    //GEN_CONFIG_CHARGE_SPDEF_RAISE,
    //GEN_CONFIG_MINIMIZE_EVASION,
    //GEN_CONFIG_GROWTH_STAT_RAISE,
    GEN_CONFIG_FOCUS_ENERGY_CRIT_RATIO,

    // Other move settings
    //GEN_CONFIG_INCINERATE_GEMS,
    //GEN_CONFIG_CAN_SPITE_FAIL,
    //GEN_CONFIG_CRASH_IF_TARGET_IMMUNE,
    //GEN_CONFIG_MEMENTO_FAIL,
    //GEN_CONFIG_GLARE_GHOST,
    //GEN_CONFIG_SKILL_SWAP,
    //GEN_CONFIG_BRICK_BREAK,
    //GEN_CONFIG_WISH_HP_SOURCE,
    //GEN_CONFIG_RAMPAGE_CANCELLING,
    //GEN_CONFIG_HEAL_BLOCKING,
    //GEN_CONFIG_ROOTED_GROUNDING,
    //GEN_CONFIG_METRONOME_MOVES,
    //GEN_CONFIG_TELEPORT_BEHAVIOR,
    //GEN_CONFIG_BEAT_UP,
    //GEN_CONFIG_DARK_VOID_FAIL,
    //GEN_CONFIG_BURN_HIT_THAW,
    //GEN_CONFIG_HEALING_WISH_SWITCH,
    //GEN_CONFIG_DEFOG_EFFECT_CLEARING,
    //GEN_CONFIG_STOCKPILE_RAISES_DEFS,
    //GEN_CONFIG_TRANSFORM_SHINY,
    //GEN_CONFIG_TRANSFORM_FORM_CHANGES,
    //GEN_CONFIG_WIDE_GUARD,
    //GEN_CONFIG_QUICK_GUARD,
    //GEN_CONFIG_IMPRISON,
    //GEN_CONFIG_ALLY_SWITCH_FAIL_CHANCE,
    //GEN_CONFIG_SKETCH_BANS,
    //GEN_CONFIG_KNOCK_OFF_REMOVAL,
    //GEN_CONFIG_HEAL_BELL_SOUNDPROOF,
    //GEN_CONFIG_CHARGE,
    //GEN_CONFIG_POWDER_RAIN,
    //GEN_CONFIG_AFTER_YOU_TURN_ORDER,
    //GEN_CONFIG_QUASH_TURN_ORDER,

    // Ability settings
    //GEN_CONFIG_ABILITY_WEATHER,
    GEN_CONFIG_GALE_WINGS,
    //GEN_CONFIG_STANCE_CHANGE_FAIL,
    //GEN_CONFIG_SHADOW_TAG_ESCAPE,
    //GEN_CONFIG_MOODY_ACC_EVASION,
    //GEN_CONFIG_FLASH_FIRE_FROZEN,
    //GEN_CONFIG_SYNCHRONIZE_TOXIC,
    //GEN_CONFIG_UPDATED_INTIMIDATE,
    //GEN_CONFIG_OBLIVIOUS_TAUNT,
    //GEN_CONFIG_STURDY,
    //GEN_CONFIG_PLUS_MINUS_INTERACTION,
    //GEN_CONFIG_WEATHER_FORMS,
    //GEN_CONFIG_SYMBIOSIS_GEMS,
    //GEN_CONFIG_ABSORBING_ABILITY_STRING,
    //GEN_CONFIG_REDIRECT_ABILITY_IMMUNITY,
    //GEN_CONFIG_REDIRECT_ABILITY_ALLIES,
    //GEN_CONFIG_LEAF_GUARD_PREVENTS_REST,
    //GEN_CONFIG_SNOW_WARNING,
    //GEN_CONFIG_TRANSISTOR_BOOST,
    //GEN_CONFIG_ILLUMINATE_EFFECT,
    //GEN_CONFIG_WEAK_ARMOR_SPEED,
    //GEN_CONFIG_PROTEAN_LIBERO,
    //GEN_CONFIG_INTREPID_SWORD,
    //GEN_CONFIG_DAUNTLESS_SHIELD,
    //GEN_CONFIG_DISGUISE_HP_LOSS,
    //GEN_CONFIG_ABILITY_TRIGGER_CHANCE,
    //GEN_CONFIG_PICKUP_WILD,
    //GEN_CONFIG_MAGIC_GUARD,

    GEN_CONFIG_COUNT
};

#endif // GUARD_CONSTANTS_GENERATIONAL_CHANGES_H
