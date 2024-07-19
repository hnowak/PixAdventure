#pragma once

class App
{
public:
    void run();
    static App *getInstance();
    void destruct();

private:
    bool running = true;
    static App *instance;

    App() = default;
    App(const App &) = delete;
};