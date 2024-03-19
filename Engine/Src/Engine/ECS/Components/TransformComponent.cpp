#include "TransformComponent.hpp"

namespace Engine
{
    TransformComponent::TransformComponent(const Vector2& position, const Vector2& offset)
        : position(position)
        , offset(offset)
    {
    }
}
