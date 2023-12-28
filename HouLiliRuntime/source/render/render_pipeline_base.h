#pragma once
#include <memory>
#include <vector>
#include "source/render/render_pipeline_base.h"

namespace HouLili
{
    class RHI;
    class RenderResourceBase;
    class WindowUI;

    struct RenderPipelineInitInfo
    {
        bool                                enable_fxaa{ false };
        std::shared_ptr<RenderResourceBase> render_resource;
    };

    class RenderPipelineBase
    {
        friend class RenderSystem;

    public:
        virtual ~RenderPipelineBase() {}

        virtual void clear() {};

        virtual void initialize(RenderPipelineInitInfo init_info) = 0;

        virtual void preparePassData(std::shared_ptr<RenderResourceBase> render_resource);
        virtual void forwardRender(std::shared_ptr<RHI> rhi, std::shared_ptr<RenderResourceBase> render_resource);
        virtual void deferredRender(std::shared_ptr<RHI> rhi, std::shared_ptr<RenderResourceBase> render_resource);

        void  initializeUIRenderBackend(WindowUI* window_ui);

    protected:
        std::shared_ptr<RHI> m_rhi;

    };
} 