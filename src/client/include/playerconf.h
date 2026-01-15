#pragma once

#include "animations.h"

//* +-----------------------------+
//* |          Graphics           |
//* +-----------------------------+

// Enum that indicates the sprite to render on screen
typedef enum {
    CHARACTER_MARIO, CHARACTER_SUPER_MARIO, CHARACTER_FIERY_MARIO,
    CHARACTER_LUIGI, CHARACTER_SUPER_LUIGI, CHARACTER_FIERY_LUIGI,
} PlayerCharacter;

// Enum that indicates the animation type to play
typedef enum {
    ANIM_STATE_IDLE,
    ANIM_STATE_WALK,
    ANIM_STATE_JUMP,
    ANIM_STATE_CLIMB,
    ANIM_STATE_SWIM,

    ANIMATION_DUCK // Normal characters can't do this animations
} PlayerAnimationState;