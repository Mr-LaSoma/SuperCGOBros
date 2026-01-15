#pragma once

#include <raylib.h>

//* +-----------------------------+
//* |       Animation Types       |
//* +-----------------------------+


#pragma region Struct related

    // Struct to simplify animations
    typedef struct {  
        Texture2D Texture; // Sprite sheets (frames of animation)
        Rectangle *Frames; // Rectangles that delimits the frames 
        int FrameCount; // The # of frames in the animation
        int CurrentFrame; // Current displayed animation's frame
        float FrameDelay; // Duration of each animation's frame
        float ElapsedTime; // Time passed on the current animation's frame
    } Animation;

    // Struct to create animations informations
    typedef struct {
        const char *SpriteSheetPath;
        int FrameCount;
        float FrameDelay;
    } AnimationInfo;

#pragma endregion
#pragma region Enum related
    
    typedef enum { CHAR_MARIO, CHAR_LUIGI, } CharacterType; // Enum used to divide every animation infos by characters
    #define CHARACTER_COUNT 2

    typedef enum { FORM_NORMAL, FORM_SUPER, FORM_FAIRY, } CharacterForm; // Enum used to divide every animation by character form
    #define FORM_COUNT 3
    
    typedef enum { ANIM_IDLE, ANIM_WALK, ANIM_JUMP, ANIM_CLIMB, ANIM_SWIM, ANIM_DUCK, } AnimationType; // Enum used to divide every animation by Type 
    #define ANIMATION_COUNT 6

    #pragma region AnimationsInfos

        #define IDLE_FRAME_COUNT 1
        #define IDLE_FRAME_DELAY 1

        #define WALK_FRAME_COUNT 3
        #define WALK_FRAME_DELAY 0 // TODO change with actual value

        #define JUMP_FRAME_COUNT 1
        #define JUMP_FRAME_DELAY 1

        #define CLIMB_FRAME_COUNT 2
        #define CLIMB_FRAME_DELAY 0 // TODO change with actual value

        #define SWIM_FRAME_COUNT 4
        #define SWIM_FRAME_DELAY 0 // TODO change with actual value

        #define SPECIAL_SWIM_FRAME_COUNT 8
        #define SPECIAL_SWIM_FRAME_DELAY 0 // TODO change with actual value

        #define DUCK_FRAME_COUNT 1
        #define DUCK_FRAME_DELAY 1


    #pragma endregion

#pragma endregion

#define ASSETS_STD_PATH PROJECT_ROOT_PATH+"/src/client/assets"
extern const AnimationInfo CharactersAnimations[CHARACTER_COUNT][FORM_COUNT][ANIMATION_COUNT];

// AnimationsNextFrame is the function that handles the logic
// to check if the animation should go into a next frame.
Texture2D *AnimationsNextFrame(Animation *anim);