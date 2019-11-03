#pragma once

#include "Entity.hpp";

namespace Faucet
{
    class EventListener
    {
    public:
        bool enabled;

        void on_mount(Entity* e, void* args);
        void on_play();
        void on_pause();
        void on_update(const int delta);
        void on_tick();
    };
}