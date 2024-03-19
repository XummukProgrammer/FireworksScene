#include <Engine/Engine.hpp>

#include <Engine/ECS/Components/Particles/ParticlesComponent.hpp>

#include <Engine/ECS/Systems/DrawSystem.hpp>
#include <Engine/ECS/Systems/Particles/ParticlesSpawnSystem.hpp>
#include <Engine/ECS/Systems/Particles/ParticlesLifeSystem.hpp>
#include <Engine/ECS/Systems/Particles/ParticlesMoveSystem.hpp>

class ApplicationDelegate final : public Engine::ApplicationDelegate
{
public:
    ApplicationDelegate() = default;
    ~ApplicationDelegate() = default;

public:
    void OnInit(Engine::Application* app) override
    {
        app->GetContext().systems.AddAndCreateSystem<Engine::ParticlesSpawnSystem>();
        app->GetContext().systems.AddAndCreateSystem<Engine::ParticlesLifeSystem>();
        app->GetContext().systems.AddAndCreateSystem<Engine::ParticlesMoveSystem>();
        app->GetContext().systems.AddAndCreateSystem<Engine::DrawSystem>();

        Engine::ResourcesParser::LoadFromXMLFile(app->GetContext().fileSystem.BuildPath(Engine::DirType::Assets, "Assets.xml"), app->GetContext());

        auto& registry = app->GetContext().scene.GetRegistry();

        auto particles = registry.create();
        auto& particlesComponent = registry.emplace<Engine::ParticlesComponent>(particles);
        particlesComponent.type = Engine::ParticlesComponent::Type::Loop;
        particlesComponent.lifeTime = 1;
        particlesComponent.textureId = "TestParticle";
        particlesComponent.startRotation = 0;
        particlesComponent.startScale = 0.5;
        particlesComponent.startColor = CLITERAL(Color) { 255, 255, 255, 25 };
        particlesComponent.explosionDelay = 1;
        particlesComponent.particlesInExplosion = 3;
        particlesComponent.startSpeed = 50;

        app->GetContext().scene.RefreshTransforms();
    }

    void OnDeinit(Engine::Application* app) override
    {
    }
};

int main(int argc, char** argv)
{
    Engine::Application app;
    app.SetDelegate(std::make_unique<ApplicationDelegate>());
    app.Execute(argv);
	return 0;
}
