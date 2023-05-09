#include "source/global/global_context.h"

#include "source/log/log_system.h"

//#include "runtime/engine.h"
//
//#include "runtime/platform/file_service/file_service.h"
//
//#include "runtime/resource/asset_manager/asset_manager.h"
//#include "runtime/resource/config_manager/config_manager.h"
//
//#include "runtime/engine.h"
//#include "runtime/function/framework/world/world_manager.h"
//#include "runtime/function/input/input_system.h"
//#include "runtime/function/particle/particle_manager.h"
//#include "runtime/function/physics/physics_manager.h"
//#include "runtime/function/render/debugdraw/debug_draw_manager.h"
//#include "runtime/function/render/render_debug_config.h"
#include "source/render/window_system.h"
#include "source/systems/render_systems.h"

namespace HouLili
{
    RuntimeGlobalContext g_runtime_global_context;

    void RuntimeGlobalContext::startSystems(const std::string& config_file_path)
    {
        m_logger_system = std::make_shared<LogSystem>();

        // window
        m_window_system = std::make_shared<WindowSystem>();
        WindowCreateInfo window_create_info;
        m_window_system->initialize(window_create_info);


        // render
        m_render_system = std::make_shared<RenderSystem>();
        RenderSystemInitInfo render_init_info;
        render_init_info.window_system = m_window_system;
        m_render_system->initialize(render_init_info);
    }

    void RuntimeGlobalContext::shutdownSystems()
    {
        m_render_system->clear();
        m_render_system.reset();
        m_window_system.reset();
        m_logger_system.reset();

    }
} // namespace HouLili