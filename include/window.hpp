#pragma once

#include <SDL2/SDL.h>

namespace faucet
{
    class window
    {
    public:
        window(const char* name, const int w, const int h);
        ~window();

        friend class application;
    private:
        SDL_Window* sdl_win;
    };
} // namespace faucet
