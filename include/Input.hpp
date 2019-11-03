#pragma once

namespace Faucet
{
    class Input
    {
    public:
        enum Events
        {
            WINDOW_CLOSE,
            KEY_0, KEY_1, KEY_2, KEY_3, KEY_4, KEY_5, KEY_6, KEY_7, KEY_8, KEY_9,
            KEY_A, KEY_B, KEY_C, KEY_D, KEY_E, KEY_F, KEY_G, KEY_H, KEY_I, KEY_J, KEY_K, KEY_L, KEY_M, KEY_N, KEY_O, KEY_P, KEY_Q, KEY_R, KEY_S, KEY_T, KEY_U, KEY_V, KEY_W, KEY_X, KEY_Y, KEY_Z,
        };

        void reset_buffers();
        void poll_events();

        void test()
        {
            auto ptr = &poll_events;
        }

    private:
        Input();
    };
}