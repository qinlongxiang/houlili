#pragma once

#include <memory>
#include <string>
#include "../render/window_system.h"
#include "../render/render_system.h"

namespace HouLili
{
    class WindowSystem;
    class RenderSystem;
    class DebugDrawManager;

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
        std::shared_ptr<RenderSystem>      m_render_system;
        std::shared_ptr<DebugDrawManager>  m_debugdraw_manager;

    };

    extern RuntimeGlobalContext g_runtime_global_context;
} // namespace HouLili