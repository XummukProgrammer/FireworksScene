#include "Random.hpp"

#include <ctime>
#include <stdlib.h>

namespace Engine
{
    void Random::Init()
    {
        srand(time(0));
    }

    int Random::GetInt(int min, int max) const
    {
        return rand() % (min - max + 1) + max;
    }
}
