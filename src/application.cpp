#include "application.hpp"

using namespace faucet;

application::application() : running(true)
{
    
}

application::~application()
{
    delete scene_ptr;
    delete window_ptr;
}

void application::load_scene(scene* s)
{
    (scene_ptr = s)->on_load();
}

scene* application::get_scene()
{
    return scene_ptr;
}

void application::load_window(window* w)
{
    window_ptr = w;
}

window* application::get_window()
{
    return window_ptr;
}