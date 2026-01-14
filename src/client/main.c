#include <stdio.h>
#include <raylib.h>

#include "mainconf.h"

int main() {

    #if SCREEN_CONFIG_FULLSCREEN
        SetConfigFlags(FLAG_FULLSCREEN_MODE);
        InitWindow(0, 0, SCREEN_CONFIG_TITLE);
    #else
        InitWindow(SCREEN_CONFIG_WIDTH, SCREEN_CONFIG_HEIGHT, SCREEN_CONFIG_TITLE);
    #endif

    SetTargetFPS(SCREEN_CONFIG_TARGET_FPS);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}