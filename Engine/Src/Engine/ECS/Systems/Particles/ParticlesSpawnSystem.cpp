#include "ParticlesSpawnSystem.hpp"

#include <Engine/ECS/Components/Particles/ParticleComponent.hpp>

#include <Engine/ECS/Components/TransformComponent.hpp>
#include <Engine/ECS/Components/TextureComponent.hpp>

namespace Engine
{
    void ParticlesSpawnSystem::OnRun(Context* context)
    {
        auto& registry = context->scene.GetRegistry();
        auto view = registry.view<ParticlesComponent>();
        view.each([this, &registry, context](entt::entity entity, ParticlesComponent& particlesComponent)
            {
                particlesComponent.system.time += context->time.GetDeltaTime();
            
                if (particlesComponent.system.time >= particlesComponent.explosionDelay)
                {
                    particlesComponent.system.time = 0;

                    if (particlesComponent.type == ParticlesComponent::Type::Single && particlesComponent.system.explosions == 0
                        || particlesComponent.type == ParticlesComponent::Type::Loop)
                    {
                        SpawnParticles(registry, *context, particlesComponent);
                        ++particlesComponent.system.explosions;
                    }

                    if (particlesComponent.type == ParticlesComponent::Type::Single)
                    {
                        registry.destroy(entity);
                    }
                }
            });
    }

    void ParticlesSpawnSystem::SpawnParticle(entt::registry& registry, Context& context, ParticlesComponent& particlesComponent)
    {
        auto particle = registry.create();
        Vector2 pos;
        pos.x = context.random.GetInt(0, 100);
        pos.y = context.random.GetInt(0, 100);
        auto& transformComponent = registry.emplace<TransformComponent>(particle, pos, Vector2());
        transformComponent.rotation = particlesComponent.startRotation;
        transformComponent.scale = particlesComponent.startScale;
        auto& textureComponent = registry.emplace<TextureComponent>(particle, particlesComponent.textureId, context);
        textureComponent.SetColor(particlesComponent.startColor);
        auto& particleComponent = registry.emplace<ParticleComponent>(particle);
        particleComponent.lifeTime = particlesComponent.lifeTime;
    }

    void ParticlesSpawnSystem::SpawnParticles(entt::registry& registry, Context& context, ParticlesComponent& particlesComponent)
    {
        for (int i = 0; i < particlesComponent.particlesInExplosion; ++i)
        {
            SpawnParticle(registry, context, particlesComponent);
        }
    }
}
