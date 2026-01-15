#include <raylib.h>
#include <stdbool.h>
#include "player.h"
#include "anim.h"

/// @brief Functions that handles the player's animation rendering
/// @param p The player (animation owner) 
void DrawPlayer(LocalPlayer *p) {
    Rectangle *rec = AnimationCurrentFrame(&p->CurrentAnimation);

    DrawTextureRec(
        p->CurrentAnimation.Texture,
        (*rec),
        p->Data.Position,
        WHITE
    );
}