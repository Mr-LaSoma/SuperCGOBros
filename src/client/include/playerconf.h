#pragma once

//* +-----------------------------+
//* |          Graphics           |
//* +-----------------------------+

typedef enum { N_MARIO, N_LUIGI, } PlayerCharacter; // Enum that indicates the sprite to render on screen

// Struct to simplify animations
typedef struct {  
    Texture2D *texture; // Array of texture (frames of animation) 
    int frameCount; // The # of frames in the animation
    int currentFrame; // Current displayed frame
    float frameTime; // Duration of each frame
    float elapsedTime; // Time passed on the current frame
} Animation;
