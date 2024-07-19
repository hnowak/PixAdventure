#include <iostream>

#include "platform.hpp"

bool systemInitialize()
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0)
    {
        std::cout << SDL_GetError() << std::endl;
        return false;
    }
    return true;
}

void GameWindow::windowResizing(int width, int height, Uint32 windowType)
{
    if (SDL_GetWindowFlags(GameWindow::window))
    {

        SDL_SetWindowSize(GameWindow::window, width, height);
    }
}

GameWindow::GameWindow(
    const char *title,
    int positionX,
    int positionY,
    int windowWidth,
    int windowHeight,
    Uint32 windowType)
{
    window = SDL_CreateWindow(title, positionX, positionY, windowWidth, windowHeight, windowType);
    Uint32 type = SDL_GetWindowFlags(GameWindow::window);
    std::cout << type << std::endl;
}

GameWindow::~GameWindow()
{
    SDL_DestroyWindow(window);
    std::cout << "Window destoyed" << std::endl;
}