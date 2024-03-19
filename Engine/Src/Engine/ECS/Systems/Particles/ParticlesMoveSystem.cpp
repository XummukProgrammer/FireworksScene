#include "ParticlesMoveSystem.hpp"

#include <Engine/Core/Context.hpp>

#include <Engine/ECS/Components/Particles/ParticleComponent.hpp>

#include <Engine/ECS/Components/TransformComponent.hpp>

namespace Engine
{
    void ParticlesMoveSystem::OnRun(Context* context)
    {
        auto& registry = context->scene.GetRegistry();
        auto view = registry.view<ParticleComponent, TransformComponent>();
        view.each([context](entt::entity entity, const ParticleComponent& particleComponent, TransformComponent& transformComponent)
            {
                transformComponent.position.x += particleComponent.moveDirection.x * context->time.GetDeltaTime() * particleComponent.moveSpeed;
                transformComponent.position.y += particleComponent.moveDirection.y * context->time.GetDeltaTime() * particleComponent.moveSpeed;
            });
    }
}
