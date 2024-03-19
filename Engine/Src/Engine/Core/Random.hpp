#ifndef _RANDOM_HEADER_
#define _RANDOM_HEADER_

namespace Engine
{
	class Random final
	{
	public:
		Random() = default;
		~Random() = default;

	public:
		void Init();

		int GetInt(int min, int max) const;
	};
}

#endif // _RANDOM_HEADER_
