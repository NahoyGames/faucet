#include "window.hpp"

faucet::window::window(const char* name, const int w, const int h)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) throw SDL_GetError();

    sdl_win = SDL_CreateWindow(
        name, // Name
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, // Position
        w, h, // Size
        SDL_WINDOW_RESIZABLE | SDL_WINDOW_SHOWN // Arguments
    );

    if (!sdl_win) throw SDL_GetError();
}

faucet::window::~window()
{
    SDL_DestroyWindow(sdl_win);
    SDL_Quit();
}