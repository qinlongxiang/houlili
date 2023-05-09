#include "source/render/render_type.h"
#include "source/render/interface/rhi.h"

#include <memory>
namespace HouLili {

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

	private:
		std::shared_ptr<RHI>  m_rhi;
	};


}
