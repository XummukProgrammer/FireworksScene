
set(ENGINE_HEADERS
	src/Engine/Engine.hpp
	
	src/Engine/Core/Application.hpp
	src/Engine/Core/Context.hpp
	src/Engine/Core/Window.hpp
	src/Engine/Core/Camera.hpp
	src/Engine/Core/Input.hpp
	src/Engine/Core/Time.hpp
	src/Engine/Core/FileSystem.hpp
	src/Engine/Core/Random.hpp
	
	src/Engine/Settings/Settings.hpp
	src/Engine/Settings/IsoSettings.hpp
	
	src/Engine/Resources/IResource.hpp
	src/Engine/Resources/Resources.hpp
	src/Engine/Resources/ResourcesParser.hpp
	src/Engine/Resources/Types/ResourceTexture.hpp
	
	src/Engine/Scene/Scene.hpp
	
	src/Engine/ECS/System.hpp
	src/Engine/ECS/Systems.hpp
	
	src/Engine/ECS/Components/TextureComponent.hpp
	src/Engine/ECS/Components/TransformComponent.hpp
	src/Engine/ECS/Components/RefreshTransformsComponent.hpp
	
	src/Engine/ECS/Components/Particles/ParticleComponent.hpp
	src/Engine/ECS/Components/Particles/ParticlesComponent.hpp
	
	src/Engine/ECS/Systems/IsoDrawSystem.hpp
	src/Engine/ECS/Systems/DrawSystem.hpp
	src/Engine/ECS/Systems/RefreshTransformsSystem.hpp
	
	src/Engine/ECS/Systems/Particles/ParticlesSpawnSystem.hpp
	src/Engine/ECS/Systems/Particles/ParticlesLifeSystem.hpp
	src/Engine/ECS/Systems/Particles/ParticlesMoveSystem.hpp
)

set(ENGINE_SOURCES
	src/Engine/Engine.cpp
	
	src/Engine/Core/Application.cpp
	src/Engine/Core/Context.cpp
	src/Engine/Core/Window.cpp
	src/Engine/Core/Camera.cpp
	src/Engine/Core/Input.cpp
	src/Engine/Core/Time.cpp
	src/Engine/Core/FileSystem.cpp
	src/Engine/Core/Random.cpp
	
	src/Engine/Settings/Settings.cpp
	src/Engine/Settings/IsoSettings.cpp
	
	src/Engine/Resources/Resources.cpp
	src/Engine/Resources/ResourcesParser.cpp
	src/Engine/Resources/Types/ResourceTexture.cpp
	
	src/Engine/Scene/Scene.cpp
	
	src/Engine/ECS/System.cpp
	src/Engine/ECS/Systems.cpp
	
	src/Engine/ECS/Components/TextureComponent.cpp
	src/Engine/ECS/Components/TransformComponent.cpp
	src/Engine/ECS/Components/RefreshTransformsComponent.cpp
	
	src/Engine/ECS/Components/Particles/ParticleComponent.cpp
	src/Engine/ECS/Components/Particles/ParticlesComponent.cpp
	
	src/Engine/ECS/Systems/IsoDrawSystem.cpp
	src/Engine/ECS/Systems/DrawSystem.cpp
	src/Engine/ECS/Systems/RefreshTransformsSystem.cpp
	
	src/Engine/ECS/Systems/Particles/ParticlesSpawnSystem.cpp
	src/Engine/ECS/Systems/Particles/ParticlesLifeSystem.cpp
	src/Engine/ECS/Systems/Particles/ParticlesMoveSystem.cpp
)
