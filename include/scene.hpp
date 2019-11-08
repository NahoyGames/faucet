#pragma once

#include "../libs/entt/src/entt/entity/registry.hpp"
#include "event_listener.hpp"

namespace faucet
{
    class scene : public event_listener
    {
    public:
        entt::registry registry; // TODO separate UI registry from simulation registry
    };
} // namespace faucet
