#pragma once

#include <raylib.h>

//* +-----------------------------+
//* |         Animations          |
//* +-----------------------------+

// Struct to simplify animations
typedef struct {  
    Texture2D Texture; // Sprite sheets (frames of animation)
    Rectangle *Frames; // Rectangles that delimits the frames 
    int FrameCount; // The # of frames in the animation
    int CurrentFrame; // Current displayed animation's frame
    float FrameDelay; // Duration of each animation's frame
    float ElapsedTime; // Time passed on the current animation's frame
} Animation;

// AnimationsNextFrame is the function that handles the logic
// to check if the animation should go into a next frame.
Texture2D *AnimationsNextFrame(Animation *anim);