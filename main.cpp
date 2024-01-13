#include <iostream>
#include <raylib.h>

using namespace std;

Color green = {173, 204, 96, 255};
Color darkGreen = {43, 51, 42, 255};
int main () {
    cout << "Starting the game \n";
    InitWindow(750, 750, "Snake Project");
    SetTargetFPS(60);
    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(green);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}