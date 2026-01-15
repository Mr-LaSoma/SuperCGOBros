#pragma once

#include <cstdlib>
#include <raylib.h>
#include "animations.h"


//* +-----------------------------+
//* |    Characters Animations    |
//* +-----------------------------+

#define TOTAL_ANIMATIONS_COUNT 
#define SINGLE_FRAME_TIME 1 // The duration for the single frame animation


#pragma region Idle

    #define IDLE_ANIMATION_FRAMECOUNT 1 // The # of frames in the idle animation (of every characters)
    #define IDLE_ANIMATION_FRAMEDELAY SINGLE_FRAME_TIME // The duration of each frames in idle animation

    #define IDLE_MARIO_SPRITESHEET "assets/gfx/mario/idle.png"
    #define IDLE_SUPER_MARIO_SPRITESHEET "assets/gfx/supermario/idle.png"
    #define IDLE_FIERY_MARIO_SPRITESHEET "assets/gfx/fierymario/idle.png"
    
    #define IDLE_LUIGI_SPRITESHEET "assets/gfx/luigi/idle.png"
    #define IDLE_SUPER_LUIGI_SPRITESHEET "assets/gfx/superluigi/idle.png"
    #define IDLE_FIERY_LUIGI_SPRITESHEET "assets/gfx/fieryluigi/idle.png"

#pragma endregion
#pragma region Walk

    #define WALK_ANIMATION_FRAMECOUNT 3 // The # of frames in the walk animation (of every characters)
    #define WALK_ANIMATION_FRAMEDELAY 0 //TODO change this with the actual value

    #define WALK_MARIO_SPRITESHEET "assets/gfx/mario/walk.png"
    #define WALK_SUPER_MARIO_SPRITESHEET "assets/gfx/supermario/walk.png"
    #define WALK_FIERY_MARIO_SPRITESHEET "assets/gfx/fierymario/walk.png"

    #define WALK_LUIGI_SPRITESHEET "assets/gfx/luigi/walk.png"
    #define WALK_SUPER_LUIGI_SPRITESHEET "assets/gfx/superluigi/walk.png"
    #define WALK_FIERY_LUIGI_SPRITESHEET "assets/gfx/fieryluigi/walk.png"


#pragma endregion
#pragma region Jump
    
    #define JUMP_ANIMATION_FRAMECOUNT 1 // The # of frames in the jump animation (of every characters)
    #define JUMP_ANIMATION_FRAMEDELAY SINGLE_FRAME_TIME // The duration of each frames in jump animation

    #define JUMP_MARIO_SPRITESHEET "assets/gfx/mario/jump.png"
    #define JUMP_SUPER_MARIO_SPRITESHEET "assets/gfx/supermario/jump.png"
    #define JUMP_FIERY_MARIO_SPRITESHEET "assets/gfx/fierymario/jump.png"
    
    #define JUMP_LUIGI_SPRITESHEET "assets/gfx/luigi/jump.png"
    #define JUMP_SUPER_LUIGI_SPRITESHEET "assets/gfx/superluigi/jump.png"
    #define JUMP_FIERY_LUIGI_SPRITESHEET "assets/gfx/fieryluigi/jump.png"

#pragma endregion
#pragma region Climb

    #define CLIMB_ANIMATION_FRAMECOUNT 2 // The # of frames in the climb animation (of every characters)
    #define CLIMB_ANIMATION_FRAMEDELAY 0 //TODO change this with the actual value


    #define CLIMB_MARIO_SPRITESHEET "assets/gfx/mario/climb.png"
    #define CLIMB_SUPER_MARIO_SPRITESHEET "assets/gfx/supermario/climb.png"
    #define CLIMB_FIERY_MARIO_SPRITESHEET "assets/gfx/fierymario/climb.png"

    #define CLIMB_LUIGI_SPRITESHEET "assets/gfx/luigi/climb.png"
    #define CLIMB_SUPER_LUIGI_SPRITESHEET "assets/gfx/superluigi/climb.png"
    #define CLIMB_FIERY_LUIGI_SPRITESHEET "assets/gfx/fieryluigi/climb.png"


#pragma endregion
#pragma region Swim

    #define NORMAL_SWIM_ANIMATION_FRAMECOUNT 4 // The # of frames in the swim animation (of normal characters)
    #define NORMAL_SWIM_ANIMATION_FRAMEDELAY 0 //TODO change this with the actual value

    #define SPECIAL_SWIM_ANIMATION_FRAMECOUNT 8 // The # of frames in the swim animation (of special characters)
    #define SPECIAL_SWIM_ANIMATION_FRAMEDELAY 0 //TODO change this with the actual value


    #define SWIM_MARIO_SPRITESHEET "assets/gfx/mario/swim.png"
    #define SWIM_SUPER_MARIO_SPRITESHEET "assets/gfx/supermario/swim.png"
    #define SWIM_FIERY_MARIO_SPRITESHEET "assets/gfx/fierymario/swim.png"
    #define SWIM_LUIGI_SPRITESHEET "assets/gfx/luigi/swim.png"
    #define SWIM_SUPER_LUIGI_SPRITESHEET "assets/gfx/superluigi/swim.png"
    #define SWIM_FIERY_LUIGI_SPRITESHEET "assets/gfx/fieryluigi/swim.png"

#pragma endregion
#pragma region DUCK

    #define DUCK_ANIMATION_FRAMECOUNT 1 // The # of frames in the duck animation (of every character)
    #define DUCK_ANIMATION_FRAMEDELAY SINGLE_FRAME_TIME // The duration of each frames in duck animation

    #define DUCK_SUPER_MARIO_SPRITESHEET "assets/gfx/supermario/duck.png"
    #define DUCK_FIERY_MARIO_SPRITESHEET "assets/gfx/fierymario/duck.png"
    
    #define DUCK_SUPER_LUIGI_SPRITESHEET "assets/gfx/superluigi/duck.png"
    #define DUCK_FIERY_LUIGI_SPRITESHEET "assets/gfx/fieryluigi/duck.png"

#pragma endregion