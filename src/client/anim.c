#include "anim.h"


const AnimationInfo CharactersAnimations[CHARACTER_COUNT][FORM_COUNT][ANIMATION_COUNT] = {
    [CHAR_MARIO] = {
        [FORM_NORMAL] = {
            [ANIM_IDLE]  = {"assets/gfx/mario/idle.png", IDLE_FRAME_COUNT, IDLE_FRAME_DELAY},
            [ANIM_WALK]  = {"assets/gfx/mario/walk.png", WALK_FRAME_COUNT, WALK_FRAME_DELAY},
            [ANIM_JUMP]  = {"assets/gfx/mario/jump.png", JUMP_FRAME_COUNT, JUMP_FRAME_DELAY},
            [ANIM_CLIMB] = {"assets/gfx/mario/climb.png", CLIMB_FRAME_COUNT, CLIMB_FRAME_DELAY},
            [ANIM_SWIM]  = {"assets/gfx/mario/swim.png", SWIM_FRAME_COUNT, SWIM_FRAME_DELAY},
            [ANIM_DUCK]  = {"assets/gfx/mario/duck.png", DUCK_FRAME_COUNT, DUCK_FRAME_DELAY},
        },
        [FORM_SUPER] = {
            [ANIM_IDLE]  = {"assets/gfx/supermario/idle.png", IDLE_FRAME_COUNT, IDLE_FRAME_DELAY},
            [ANIM_WALK]  = {"assets/gfx/supermario/walk.png", WALK_FRAME_COUNT, WALK_FRAME_DELAY},
            [ANIM_JUMP]  = {"assets/gfx/supermario/jump.png", JUMP_FRAME_COUNT, JUMP_FRAME_DELAY},
            [ANIM_CLIMB] = {"assets/gfx/supermario/climb.png", CLIMB_FRAME_COUNT, CLIMB_FRAME_DELAY},
            [ANIM_SWIM]  = {"assets/gfx/supermario/swim.png", SWIM_FRAME_COUNT, SWIM_FRAME_DELAY},
            [ANIM_DUCK]  = {"assets/gfx/supermario/duck.png", DUCK_FRAME_COUNT, DUCK_FRAME_DELAY},
        },
        [FORM_FAIRY] = {
            [ANIM_IDLE]  = {"assets/gfx/fairymario/idle.png", IDLE_FRAME_COUNT, IDLE_FRAME_DELAY},
            [ANIM_WALK]  = {"assets/gfx/fairymario/walk.png", WALK_FRAME_COUNT, WALK_FRAME_DELAY},
            [ANIM_JUMP]  = {"assets/gfx/fairymario/jump.png", JUMP_FRAME_COUNT, JUMP_FRAME_DELAY},
            [ANIM_CLIMB] = {"assets/gfx/fairymario/climb.png", CLIMB_FRAME_COUNT, CLIMB_FRAME_DELAY},
            [ANIM_SWIM]  = {"assets/gfx/fairymario/swim.png", SWIM_FRAME_COUNT, SWIM_FRAME_DELAY},
            [ANIM_DUCK]  = {"assets/gfx/fairymario/duck.png", DUCK_FRAME_COUNT, DUCK_FRAME_DELAY},
        },
    },
    [CHAR_LUIGI] = {
        [FORM_NORMAL] = {
            [ANIM_IDLE]  = {"assets/gfx/luigi/idle.png", IDLE_FRAME_COUNT, IDLE_FRAME_DELAY},
            [ANIM_WALK]  = {"assets/gfx/luigi/walk.png", WALK_FRAME_COUNT, WALK_FRAME_DELAY},
            [ANIM_JUMP]  = {"assets/gfx/luigi/jump.png", JUMP_FRAME_COUNT, JUMP_FRAME_DELAY},
            [ANIM_CLIMB] = {"assets/gfx/luigi/climb.png", CLIMB_FRAME_COUNT, CLIMB_FRAME_DELAY},
            [ANIM_SWIM]  = {"assets/gfx/luigi/swim.png", SWIM_FRAME_COUNT, SWIM_FRAME_DELAY},
            [ANIM_DUCK]  = {"assets/gfx/luigi/duck.png", DUCK_FRAME_COUNT, DUCK_FRAME_DELAY},
        },
        [FORM_SUPER] = {
            [ANIM_IDLE]  = {"assets/gfx/superluigi/idle.png", IDLE_FRAME_COUNT, IDLE_FRAME_DELAY},
            [ANIM_WALK]  = {"assets/gfx/superluigi/walk.png", WALK_FRAME_COUNT, WALK_FRAME_DELAY},
            [ANIM_JUMP]  = {"assets/gfx/superluigi/jump.png", JUMP_FRAME_COUNT, JUMP_FRAME_DELAY},
            [ANIM_CLIMB] = {"assets/gfx/superluigi/climb.png", CLIMB_FRAME_COUNT, CLIMB_FRAME_DELAY},
            [ANIM_SWIM]  = {"assets/gfx/superluigi/swim.png", SWIM_FRAME_COUNT, SWIM_FRAME_DELAY},
            [ANIM_DUCK]  = {"assets/gfx/superluigi/duck.png", DUCK_FRAME_COUNT, DUCK_FRAME_DELAY},
        },
        [FORM_FAIRY] = {
            [ANIM_IDLE]  = {"assets/gfx/fairyluigi/idle.png", IDLE_FRAME_COUNT, IDLE_FRAME_DELAY},
            [ANIM_WALK]  = {"assets/gfx/fairyluigi/walk.png", WALK_FRAME_COUNT, WALK_FRAME_DELAY},
            [ANIM_JUMP]  = {"assets/gfx/fairyluigi/jump.png", JUMP_FRAME_COUNT, JUMP_FRAME_DELAY},
            [ANIM_CLIMB] = {"assets/gfx/fairyluigi/climb.png", CLIMB_FRAME_COUNT, CLIMB_FRAME_DELAY},
            [ANIM_SWIM]  = {"assets/gfx/fairyluigi/swim.png", SWIM_FRAME_COUNT, SWIM_FRAME_DELAY},
            [ANIM_DUCK]  = {"assets/gfx/fairyluigi/duck.png", DUCK_FRAME_COUNT, DUCK_FRAME_DELAY},
        },
    }
};
