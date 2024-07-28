#pragma once

#include "../interface/rhi.h"


namespace HouLili
{
    class DebugDrawManager
    {
    public:
        DebugDrawManager() {};
        void initialize();
        void setupPipelines();
        void destory();
        void clear();
        void tick(float delta_time);
        void updateAfterRecreateSwapchain();
        DebugDrawGroup* tryGetOrCreateDebugDrawGroup(const std::string& name);
        
        void draw(uint32_t current_swapchain_image_index);
        ~DebugDrawManager() { destory(); }

    private:
        void swapDataToRender();
        void drawDebugObject(uint32_t current_swapchain_image_index);
        void prepareDrawBuffer();
        void drawPointLineTriangleBox(uint32_t current_swapchain_image_index);
        void drawWireFrameObject(uint32_t current_swapchain_image_index);
        
        std::mutex m_mutex;
        std::shared_ptr<RHI> m_rhi = nullptr;
        DebugDrawPipeline* m_debug_draw_pipeline[DebugDrawPipelineType::_debug_draw_pipeline_type_count] = {};
        
        DebugDrawAllocator* m_buffer_allocator = nullptr;

        DebugDrawContext m_debug_draw_context;

        DebugDrawGroup m_debug_draw_group_for_render;

        Matrix4x4 m_proj_view_matrix;
        
        size_t m_point_start_offset;
        size_t m_point_end_offset;
        size_t m_line_start_offset;
        size_t m_line_end_offset;
        size_t m_triangle_start_offset;
        size_t m_triangle_end_offset;
        size_t m_no_depth_test_point_start_offset;
        size_t m_no_depth_test_point_end_offset;
        size_t m_no_depth_test_line_start_offset;
        size_t m_no_depth_test_line_end_offset;
        size_t m_no_depth_test_triangle_start_offset;
        size_t m_no_depth_test_triangle_end_offset;
        size_t m_text_start_offset;
        size_t m_text_end_offset;
    };

}
