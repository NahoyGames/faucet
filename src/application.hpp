#pragma once

#include "scene.hpp"
#include "window.hpp"

namespace faucet
{
    class application
    {
    public:
        int frames_per_second = 60; // Runs as often as possible, capping @ value
        int ticks_per_second = 15; // Runs @ value, multiple times per frame if needed

        application(); // Start the application
        ~application(); // Quit the application

        void pause(); // Pause the application loop
        void unpause(); // Unpause the application loop
        
        void load_scene(scene* s); // Load a scene
        scene* get_scene(); // Get the current scene

        void load_window(window* w); // Load a window
        window* get_window(); // Get the current window
    private:
        scene* scene_ptr; // Loaded scene
        window* window_ptr; // Application window

        bool running; // Should the game loop run?
    };
} // namespace faucet
