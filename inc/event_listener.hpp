#pragma once

#include "application.hpp"

namespace faucet
{
    class event_listener
    {
    public:
        friend class application;
    private:
        virtual void on_load(); // Callback on scene load
        virtual void on_unload(); // Callback on scene unload

        virtual void on_update(int delta); // Callback on application update | delta: delta time in ms
        virtual void on_tick(int delta); // Callback on application tick | delta: delta time in ms

        virtual void on_event(const SDL_Window& win, const SDL_Event& evt); // Callback on input event

        virtual void on_pause(); // Callback on application pause
        virtual void on_unpause(); // Callback on application unpause
    }; 
} // namespace faucet
