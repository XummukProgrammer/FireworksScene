
set(GAME_HEADERS
	src/Game/ECS/Components/ArcherComponent.hpp
	src/Game/ECS/Components/ArchersSpawnComponent.hpp
	
	src/Game/ECS/Systems/SpawnArchersSystem.hpp
)

set(GAME_SOURCES
	src/main.cpp
	
	src/Game/ECS/Components/ArcherComponent.cpp
	src/Game/ECS/Components/ArchersSpawnComponent.cpp
	
	src/Game/ECS/Systems/SpawnArchersSystem.cpp
)
