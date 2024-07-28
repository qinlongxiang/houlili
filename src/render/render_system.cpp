#include "render_system.h"
#include "../base/macro.h"

#include "../global/global_context.h"

namespace HouLili
{
    RenderSystem::~RenderSystem()
    {
        clear();
    }

    void RenderSystem::initialize(RenderSystemInitInfo init_info)
    {
        // render context initialize
        RHIInitInfo rhi_init_info;
        rhi_init_info.window_system = init_info.window_system;

        m_rhi = std::make_shared<VulkanRHI>();
        m_rhi->initialize(rhi_init_info);
    }

    void RenderSystem::tick(float delta_time)
    {
         // prepare render command context
        m_rhi->prepareContext();

        g_runtime_global_context.m_debugdraw_manager->tick(delta_time);
    } 

    void RenderSystem::clear()
    {

    }

    std::shared_ptr<RenderCamera> RenderSystem::getRenderCamera() const { return m_render_camera; }

    std::shared_ptr<RHI>          RenderSystem::getRHI() const { return m_rhi; }
}