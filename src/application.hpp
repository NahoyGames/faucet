#pragma once

#include "scene.hpp"
#include "../libs/SDL2/include/SDL.h"

namespace faucet
{
    class application
    {
    public:
        application(); // Start the application
        ~application(); // Quit the application

        void pause(); // Pause the application loop
        void unpause(); // Unpause the application loop
        
        void load_scene(scene& s); // Load a scene
        scene* get_scene(); // Get the current scene
    private:
        scene* scene_ptr; // Loaded scene
        SDL_Window* window_ptr; // Application window

        bool running; // Should the game loop run?
    };
} // namespace faucet
