#pragma once

#include <SDL2/SDL.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

bool systemInitialize();

class GameWindow
{
public:
    GameWindow(const char *title, int positionX, int positionY, int windowWidth, int windowHeight, Uint32 windowType);
    ~GameWindow();
    
    void windowResizing(int width, int height, Uint32 windowType);

private:
    SDL_Window *window;
};
