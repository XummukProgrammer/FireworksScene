#ifndef _ENGINE_TRANSFORM_COMPONENT_HEADER_
#define _ENGINE_TRANSFORM_COMPONENT_HEADER_

#include "raylib.h"

namespace Engine
{
	struct TransformComponent
	{
		Vector2 position;
		Vector2 offset;
		int order = 0;
		float rotation = 0;
		float scale = 1;

		TransformComponent(const Vector2& position, const Vector2& offset);
	};
}

#endif // _ENGINE_TRANSFORM_COMPONENT_HEADER_
