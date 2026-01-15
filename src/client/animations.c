#include <raylib.h>
#include "animations.h"

// AnimationsNextFrame is the function that handles the logic
// to check if the animation should go into a next frame.
Texture2D *AnimationsNextFrame(Animation *anim) {
    anim->ElapsedTime += GetFrameTime();
    
    if (anim->ElapsedTime < anim->FrameDelay) {
        return &anim->Textures[anim->CurrentFrame];
    }

    anim->ElapsedTime = 0;
    if (anim->CurrentFrame >= anim->FrameCount-1) {
        anim->CurrentFrame = 0;
    }

    return &anim->Textures[anim->CurrentFrame];
}