#include "ParticlesLifeSystem.hpp"

#include <Engine/Core/Context.hpp>

#include <Engine/ECS/Components/Particles/ParticleComponent.hpp>

namespace Engine
{
	void ParticlesLifeSystem::OnRun(Context* context)
	{
        auto& registry = context->scene.GetRegistry();
        auto view = registry.view<ParticleComponent>();
		view.each([this, &registry, context](entt::entity entity, ParticleComponent& particleComponent)
			{
				particleComponent.system.time += context->time.GetDeltaTime();

				if (particleComponent.system.time >= particleComponent.lifeTime)
				{
					registry.destroy(entity);
				}
			});
	}
}
