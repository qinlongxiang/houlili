#include "render_systems.h"
#include "source/core/base/macro.h"

#include "source/render/interface/vulkan_rhi/vulkan_rhi.h"
namespace HouLili
{
    RenderSystem::~RenderSystem()
    {
        clear();
    }

    // initialize rhi
    void RenderSystem::initialize(RenderSystemInitInfo init_info) {
        RHIInitInfo rhi_init_info;
        rhi_init_info.window_system = init_info.window_system;
        m_rhi = std::make_shared<VulkanRHI>();
        m_rhi->initialize(rhi_init_info);
    };

    void RenderSystem::clear() {

    }

    void RenderSystem::tick(float delta) {
        // prepare render command context
        m_rhi->prepareContext();

        // prepare pipeline's render passes data
        //m_render_pipeline->preparePassData(m_render_resource);

        //g_runtime_global_context.m_debugdraw_manager->tick(delta_time);

        ////// render one frame
        //if (m_render_pipeline_type == RENDER_PIPELINE_TYPE::FORWARD_PIPELINE)
        //{
        //    m_render_pipeline->forwardRender(m_rhi, m_render_resource);
        //}
        //else if (m_render_pipeline_type == RENDER_PIPELINE_TYPE::DEFERRED_PIPELINE)
        //{
        //    m_render_pipeline->deferredRender(m_rhi, m_render_resource);
        //}
        //else
        //{
        //    LOG_ERROR(__FUNCTION__, "unsupported render pipeline type");
        //}
    }


}