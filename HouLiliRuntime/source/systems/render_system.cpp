#include "render_systems.h"

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

    }


}