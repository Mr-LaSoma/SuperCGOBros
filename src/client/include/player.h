#pragma once

#include "anim.h"

//* +-----------------------------+
//* |           Player            |
//* +-----------------------------+

/// @brief Struct that contains all the player sendable data
typedef struct {
    char *Name;
    
    Vector2 Position;
    bool IsDead;

    bool IsLookingRight;
    CharacterType Character;
    CharacterForm CurrentCharacterForm;
    AnimationType CurrentAnimationType;
} SendablePlayer;

/// @brief Struct that contains all the player data needed for the game 
// (the data sended from other clients is transformed into this type) 
typedef struct {
    SendablePlayer Data;
    Animation CurrentAnimation;
} LocalPlayer;

/// @brief Function that handles the player's animation rendering
/// @param p The player (animation owner) 
void DrawPlayer(LocalPlayer *p);

void HandlePlayerInputs(LocalPlayer *p);
void ChangePlayerAnimation(LocalPlayer *p, AnimationType at);
void ChangePlayerForm(LocalPlayer *p, CharacterForm cf);
void ChangePlayerCharacter(LocalPlayer *p, CharacterType ct);