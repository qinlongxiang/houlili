#include "source/render/render_pipeline.h"
#include "source/global/global_context.h"
#include "source/render/interface/vulkan_rhi/vulkan_rhi.h"

//#include "source/render/passes/pick_pass.h"

namespace HouLili {

    void RenderPipeline::initialize(RenderPipelineInitInfo init_info)
    {

        //RenderPassCommonInfo pass_common_info;
        //pass_common_info.rhi = m_rhi;
        //pass_common_info.render_resource = init_info.render_resource;

        //m_point_light_shadow_pass->setCommonInfo(pass_common_info);
        //m_directional_light_pass->setCommonInfo(pass_common_info);
        //m_main_camera_pass->setCommonInfo(pass_common_info);
        //m_tone_mapping_pass->setCommonInfo(pass_common_info);
        //m_color_grading_pass->setCommonInfo(pass_common_info);
        //m_ui_pass->setCommonInfo(pass_common_info);
        //m_combine_ui_pass->setCommonInfo(pass_common_info);
        //m_pick_pass->setCommonInfo(pass_common_info);
        //m_fxaa_pass->setCommonInfo(pass_common_info);
        //m_particle_pass->setCommonInfo(pass_common_info);

        //m_point_light_shadow_pass->initialize(nullptr);
        //m_directional_light_pass->initialize(nullptr);

        //std::shared_ptr<MainCameraPass> main_camera_pass = std::static_pointer_cast<MainCameraPass>(m_main_camera_pass);
        //std::shared_ptr<RenderPass>     _main_camera_pass = std::static_pointer_cast<RenderPass>(m_main_camera_pass);
        //std::shared_ptr<ParticlePass> particle_pass = std::static_pointer_cast<ParticlePass>(m_particle_pass);

        //ParticlePassInitInfo particle_init_info{};
        //particle_init_info.m_particle_manager = g_runtime_global_context.m_particle_manager;
        //m_particle_pass->initialize(&particle_init_info);

        //main_camera_pass->m_point_light_shadow_color_image_view =
        //    std::static_pointer_cast<RenderPass>(m_point_light_shadow_pass)->getFramebufferImageViews()[0];
        //main_camera_pass->m_directional_light_shadow_color_image_view =
        //    std::static_pointer_cast<RenderPass>(m_directional_light_pass)->m_framebuffer.attachments[0].view;

        //MainCameraPassInitInfo main_camera_init_info;
        //main_camera_init_info.enble_fxaa = init_info.enable_fxaa;
        //main_camera_pass->setParticlePass(particle_pass);
        //m_main_camera_pass->initialize(&main_camera_init_info);

        //std::static_pointer_cast<ParticlePass>(m_particle_pass)->setupParticlePass();

        //std::vector<RHIDescriptorSetLayout*> descriptor_layouts = _main_camera_pass->getDescriptorSetLayouts();
        //std::static_pointer_cast<PointLightShadowPass>(m_point_light_shadow_pass)
        //    ->setPerMeshLayout(descriptor_layouts[MainCameraPass::LayoutType::_per_mesh]);
        //std::static_pointer_cast<DirectionalLightShadowPass>(m_directional_light_pass)
        //    ->setPerMeshLayout(descriptor_layouts[MainCameraPass::LayoutType::_per_mesh]);

        //m_point_light_shadow_pass->postInitialize();
        //m_directional_light_pass->postInitialize();

        //ToneMappingPassInitInfo tone_mapping_init_info;
        //tone_mapping_init_info.render_pass = _main_camera_pass->getRenderPass();
        //tone_mapping_init_info.input_attachment =
        //    _main_camera_pass->getFramebufferImageViews()[_main_camera_pass_backup_buffer_odd];
        //m_tone_mapping_pass->initialize(&tone_mapping_init_info);

        //ColorGradingPassInitInfo color_grading_init_info;
        //color_grading_init_info.render_pass = _main_camera_pass->getRenderPass();
        //color_grading_init_info.input_attachment =
        //    _main_camera_pass->getFramebufferImageViews()[_main_camera_pass_backup_buffer_even];
        //m_color_grading_pass->initialize(&color_grading_init_info);

        //UIPassInitInfo ui_init_info;
        //ui_init_info.render_pass = _main_camera_pass->getRenderPass();
        //m_ui_pass->initialize(&ui_init_info);

        //CombineUIPassInitInfo combine_ui_init_info;
        //combine_ui_init_info.render_pass = _main_camera_pass->getRenderPass();
        //combine_ui_init_info.scene_input_attachment =
        //    _main_camera_pass->getFramebufferImageViews()[_main_camera_pass_backup_buffer_odd];
        //combine_ui_init_info.ui_input_attachment =
        //    _main_camera_pass->getFramebufferImageViews()[_main_camera_pass_backup_buffer_even];
        //m_combine_ui_pass->initialize(&combine_ui_init_info);

        //PickPassInitInfo pick_init_info;
        //pick_init_info.per_mesh_layout = descriptor_layouts[MainCameraPass::LayoutType::_per_mesh];
        //m_pick_pass->initialize(&pick_init_info);

        //FXAAPassInitInfo fxaa_init_info;
        //fxaa_init_info.render_pass = _main_camera_pass->getRenderPass();
        //fxaa_init_info.input_attachment =
        //    _main_camera_pass->getFramebufferImageViews()[_main_camera_pass_post_process_buffer_odd];
        //m_fxaa_pass->initialize(&fxaa_init_info);

    }

    void RenderPipeline::forwardRender(std::shared_ptr<RHI> rhi, std::shared_ptr<RenderResourceBase> render_resource)
    {
       
    }
}