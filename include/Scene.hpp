#pragma once

#include "Entity.hpp";

namespace Faucet
{
    class Scene : public Entity
    {
    private:
        /* data */
    public:
        Scene(const char* path);
        Scene();
        ~Scene();
    }; 
}
