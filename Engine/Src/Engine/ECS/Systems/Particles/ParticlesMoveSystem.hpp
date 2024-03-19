#ifndef _PARTICLES_MOVE_SYSTEM_HEADER_
#define _PARTICLES_MOVE_SYSTEM_HEADER_

#include <Engine/ECS/System.hpp>

namespace Engine
{
	class ParticlesMoveSystem final : public System
	{
	public:
		ParticlesMoveSystem() = default;
		~ParticlesMoveSystem() = default;

	public:
		void OnRun(Context* context) override;

		SystemType GetType() const override { return SystemType::Update; }
		SystemPriority GetPriority() const override { return SystemPriority::VeryLow; }
	};
}

#endif // _PARTICLES_MOVE_SYSTEM_HEADER_
