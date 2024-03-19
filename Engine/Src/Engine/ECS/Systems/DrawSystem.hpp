#ifndef _ENGINE_DRAW_SYSTEM_HEADER_
#define _ENGINE_DRAW_SYSTEM_HEADER_

#include <Engine/ECS/System.hpp>

namespace Engine
{
	class DrawSystem final : public System
	{
	public:
		DrawSystem() = default;
		~DrawSystem() = default;

	public:
		void OnRun(Context* context) override;

		SystemType GetType() const override { return SystemType::Draw; }
		SystemPriority GetPriority() const override { return SystemPriority::VeryLow; }
	};
}

#endif // _ENGINE_DRAW_SYSTEM_HEADER_
