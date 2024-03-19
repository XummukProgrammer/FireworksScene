#ifndef _PARTICLES_COMPONENT_HEADER_
#define _PARTICLES_COMPONENT_HEADER_

#include <string>

namespace Engine
{
	struct ParticlesComponent
	{
		struct System
		{
			float time;
			int explosions;
		};

		enum class Type
		{
			Single,
			Loop
		};

		Type type;

		float lifeTime;
		std::string textureId;
		
		float explosionDelay;
		int particlesInExplosion;

		System system;
	};
}

#endif // _PARTICLES_COMPONENT_HEADER_
