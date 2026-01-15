#include <raylib.h>
#include <stdbool.h>
#include "playerconf.h"

// Struct for the base player
typedef struct {
    Vector2 Position;
    bool IsLookingRight;
} Player;

