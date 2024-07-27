#include "global_context.h"

namespace HouLili
{
    RuntimeGlobalContext g_runtime_global_context;

    void RuntimeGlobalContext::startSystems(const std::string& config_file_path)
    {
        m_window_system = std::make_shared<WindowSystem>();
        WindowCreateInfo window_create_info;
        m_window_system->initialize(window_create_info);
    }

    void RuntimeGlobalContext::shutdownSystems()
    {
        m_window_system.reset();
    }
} // namespace HouLili