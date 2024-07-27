#pragma once

#include <memory>
#include <string>
#include "../render/window_system.h"

namespace HouLili
{
    class WindowSystem;


    struct EngineInitParams;

    /// Manage the lifetime and creation/destruction order of all global system
    class RuntimeGlobalContext
    {
    public:
        // create all global systems and initialize these systems
        void startSystems(const std::string& config_file_path);
        // destroy all global systems
        void shutdownSystems();

    public:
        std::shared_ptr<WindowSystem>      m_window_system;

    };

    extern RuntimeGlobalContext g_runtime_global_context;
} // namespace HouLili