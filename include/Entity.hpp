#pragma once

#include "Component.hpp"
#include <vector>

namespace Faucet
{
    class Entity : public EventListener
    {
    public:
        Entity();
        ~Entity();
    private:
        std::vector<Component*> components;
        std::vector<Entity*> children;
    public:
        void mount_component(const Component* c);
        void mount_child(const Entity* e);
    };
}