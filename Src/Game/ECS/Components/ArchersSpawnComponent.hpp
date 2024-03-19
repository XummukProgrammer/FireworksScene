#ifndef _GAME_ARCHERS_SPAWN_COMPONENT_HEADER_
#define _GAME_ARCHERS_SPAWN_COMPONENT_HEADER_

#include <raylib.h>

namespace Game
{
	struct ArchersSpawnComponent
	{
		struct Settings
		{
			Vector2 position;
			int count;
		};

		struct State
		{

		};

		Settings settings;
		State state;
	};
}

#endif // _GAME_ARCHERS_SPAWN_COMPONENT_HEADER_
