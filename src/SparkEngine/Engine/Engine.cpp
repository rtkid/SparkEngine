////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SparkEngine/Engine/Engine.hpp>

Engine g_engine;

////////////////////////////////////////////////////////////
Engine::Engine()
{
    init();
}

////////////////////////////////////////////////////////////
Engine::~Engine()
{
}

////////////////////////////////////////////////////////////
void Engine::run()
{
    while (m_window.isOpen())
    {
        while (m_window.processMessages())
        {
        }
    }
}

////////////////////////////////////////////////////////////
void Engine::init()
{
}
