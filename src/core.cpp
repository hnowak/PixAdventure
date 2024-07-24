#include <iostream>

#include "core.hpp"
#include "platform.hpp"
#include "define.hpp"

void App::run()
{
    if (!systemInitialize()) return;

    GameWindow window("Pix Adventure", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_RESIZABLE);

    while(App::running){
    }
}

App *App::getInstance()
{
    if (!App::instance)
    {
        App::instance = new App();
    }
    return App::instance;
}

void App::destruct()
{
    delete App::instance;
    App::instance = nullptr;
}

App *App::instance = nullptr;