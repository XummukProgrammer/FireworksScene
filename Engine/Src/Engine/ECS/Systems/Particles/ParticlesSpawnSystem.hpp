#ifndef _PARTICLES_SPAWN_SYSTEM_HEADER_
#define _PARTICLES_SPAWN_SYSTEM_HEADER_

#include <Engine/ECS/System.hpp>
#include <Engine/Core/Context.hpp>

#include <Engine/ECS/Components/Particles/ParticlesComponent.hpp>

namespace Engine
{
	class ParticlesSpawnSystem final : public System
	{
	public:
		ParticlesSpawnSystem() = default;
		~ParticlesSpawnSystem() = default;

	public:
		void OnRun(Context* context) override;

		SystemType GetType() const override { return SystemType::Update; }
		SystemPriority GetPriority() const override { return SystemPriority::VeryLow; }

	private:
		void SpawnParticle(entt::registry& registry, Context& context, ParticlesComponent& particlesComponent);
		void SpawnParticles(entt::registry& registry, Context& context, ParticlesComponent& particlesComponent);
	};
}

#endif // _PARTICLES_SPAWN_SYSTEM_HEADER_
