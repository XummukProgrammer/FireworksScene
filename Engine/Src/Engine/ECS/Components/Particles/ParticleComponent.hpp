﻿#ifndef _PARTICLE_COMPONENT_HEADER_
#define _PARTICLE_COMPONENT_HEADER_

#include "raylib.h"

namespace Engine
{
	struct ParticleComponent
	{
		struct System
		{
			float time;
		};

		float lifeTime;
		System system;
	};
}

#endif // _PARTICLE_COMPONENT_HEADER_
