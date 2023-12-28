#include "source/render/render_type.h"
#include "source/render/interface/rhi.h"

#include <memory>
namespace HouLili {

	class RenderPipelineBase;
	class RHI;
	struct RenderSystemInitInfo
	{
		std::shared_ptr<WindowSystem> window_system;
	};

	class RenderSystem
	{
	public:
		RenderSystem() = default;
		~RenderSystem();

		void initialize(RenderSystemInitInfo init_info);
		void tick(float delta_time);
		void clear();
		void createCustomGraphicsPipeline();
		void createCustomRenderPass();
		std::shared_ptr<RHI>          getRHI() const;

	private:
		std::shared_ptr<RHI>  m_rhi;
		std::shared_ptr<RenderPipelineBase> m_render_pipeline;
	};


}
