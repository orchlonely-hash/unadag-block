#include <stdio.h>
#include <raylib.h>

#define RAYGUI_IMPLEMENTATION
#include "raygui.h"

int main() {
    int screen_width = 600, screen_height = 400;

    InitWindow(screen_width, screen_height, "stop doomscrolling");
    SetTargetFPS(60);

    While(!WindowShouldClose()) 
    {

        
    }

    printf("hello Uugnaa boii");
    return 0;
}