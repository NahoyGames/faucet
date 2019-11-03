#pragma once

namespace faucet
{
    class application
    {
        virtual void on_start();

        virtual void on_update(int delta);

        virtual void on_quit();
    };
} // namespace faucet
