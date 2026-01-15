#pragma once

#include <raylib.h>

//* +-----------------------------+
//* |       Animation Types       |
//* +-----------------------------+


typedef enum { CHAR_MARIO, CHAR_LUIGI, } CharacterType; // Enum used to divide every animation infos by characters

typedef enum { FORM_NORMAL, FORM_SUPER, FORM_FAIRY, } CharacterForm; // Enum used to divide every animation by character form

typedef enum { ANIM_IDLE, ANIM_WALK, ANIM_JUMP, ANIM_CLIMB, ANIM_SWIM, ANIM_DUCK, } AnimationType; // Enum used to divide every animation by Type 

// Struct to simplify animations
typedef struct {  
    Texture2D Texture; // Sprite sheets (frames of animation)
    Rectangle *Frames; // Rectangles that delimits the frames 
    int FrameCount; // The # of frames in the animation
    int CurrentFrame; // Current displayed animation's frame
    float FrameDelay; // Duration of each animation's frame
    float ElapsedTime; // Time passed on the current animation's frame
} Animation;

typedef struct {
    const char *SpriteSheetPath;
    int FrameCount;
    float FrameDelay;
};


// AnimationsNextFrame is the function that handles the logic
// to check if the animation should go into a next frame.
Texture2D *AnimationsNextFrame(Animation *anim);