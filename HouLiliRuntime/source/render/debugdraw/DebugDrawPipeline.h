#pragma once

#include "source/render/interface/rhi.h"
#include <mutex>
//#include "debug_draw_primitive.h"

namespace HouLili
{

    struct DebugDrawFrameBufferAttachment
    {
        RHIImage* image = nullptr;
        RHIDeviceMemory* mem = nullptr;
        RHIImageView* view = nullptr;
        RHIFormat       format;
    };

    struct DebugDrawFramebuffer
    {
        int           width;
        int           height;
        RHIRenderPass* render_pass = nullptr;

        std::vector<RHIFramebuffer*> framebuffers;
        std::vector<DebugDrawFrameBufferAttachment> attachments;
    };

    struct DebugDrawPipelineBase
    {
        RHIPipelineLayout* layout = nullptr;
        RHIPipeline* pipeline = nullptr;
    };

    enum DebugDrawPipelineType : uint8_t
    {
        _debug_draw_pipeline_type_point = 0,
        _debug_draw_pipeline_type_line,
        _debug_draw_pipeline_type_triangle,
        _debug_draw_pipeline_type_point_no_depth_test,
        _debug_draw_pipeline_type_line_no_depth_test,
        _debug_draw_pipeline_type_triangle_no_depth_test,
        _debug_draw_pipeline_type_count,
    };

    class DebugDrawPipeline
    {
    public:
        DebugDrawPipelineType m_pipeline_type;
        DebugDrawPipeline() { };
        DebugDrawPipeline(DebugDrawPipelineType pipelineType) { m_pipeline_type = pipelineType; }
        void initialize();
        void destory();
        void tick(float delta);
        const DebugDrawPipelineBase& getPipeline() const;
        const DebugDrawFramebuffer& getFramebuffer() const;

        void recreateAfterSwapchain();
        void draw(uint32_t current_swapchain_image_index);
        void drawTraingle();
        void swapDataToRender();

    private:
        void setupAttachments();
        void setupFramebuffer();
        void setupRenderPass();
        void setupDescriptorLayout();
        void setupPipelines();

        RHIDescriptorSetLayout* m_descriptor_layout;
        std::vector<DebugDrawPipelineBase> m_render_pipelines;
        DebugDrawFramebuffer m_framebuffer;
        std::shared_ptr<RHI> m_rhi;
        std::mutex m_mutex;

    };
}
