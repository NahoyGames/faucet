#pragma once

#include "Scene.hpp"
#include "Input.hpp"
#include <SDL2/SDL.h>

namespace Faucet
{
    class Engine
    {
    public:
        static unsigned int frames_per_second;
        static unsigned int ticks_per_second;
    private:
        static bool paused;
        static Scene* loaded_scene;
    public:
        static void initialize();
        static void pause();
        static void play();
    private:
        Engine();
    };
}
