#include "source/render/render_type.h"
#include "source/render/interface/rhi.h"

#include <memory>
namespace HouLili {
	class RenderSystem
	{
	public:
		RenderSystem() = default;
		~RenderSystem();

		void initialize();
		void tick(float delta_time);
		void clear();

	private:
		std::shared_ptr<RHI>  m_rhi;
	};


}
