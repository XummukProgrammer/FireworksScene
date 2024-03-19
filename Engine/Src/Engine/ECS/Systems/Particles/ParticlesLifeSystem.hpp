#ifndef _PARTICLES_LIFE_SYSTEM_HEADER_
#define _PARTICLES_LIFE_SYSTEM_HEADER_

#include <Engine/ECS/System.hpp>

namespace Engine
{
	class ParticlesLifeSystem final : public System
	{
	public:
		ParticlesLifeSystem() = default;
		~ParticlesLifeSystem() = default;

	public:
		void OnRun(Context* context) override;

		SystemType GetType() const override { return SystemType::Update; }
		SystemPriority GetPriority() const override { return SystemPriority::VeryLow; }
	};
}

#endif // _PARTICLES_LIFE_SYSTEM_HEADER_
