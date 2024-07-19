#include <iostream>

#include "src/core.hpp"

int main(int argc, char *argv[])
{
    App *app = App::getInstance();
    app->run();
    app->destruct();
}