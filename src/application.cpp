#include "application.hpp"

faucet::application::application() : running(true)
{
    #ifndef FAUCET_HEADLESS
        if (SDL_Init(SDL_INIT_EVERYTHING) < 0) throw SDL_GetError();
        //window_ptr = SDL_CreateWindow("")

    #endif
}

faucet::application::~application()
{
    delete scene_ptr;
    SDL_Quit();
}