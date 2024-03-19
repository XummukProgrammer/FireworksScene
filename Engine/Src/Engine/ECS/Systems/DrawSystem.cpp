#include "DrawSystem.hpp"

#include <Engine/ECS/Components/TextureComponent.hpp>
#include <Engine/ECS/Components/TransformComponent.hpp>

namespace Engine
{
    void DrawSystem::OnRun(Context* context)
    {
        auto& registry = context->scene.GetRegistry();
        auto view = registry.view<const TransformComponent, const TextureComponent>();
        view.each([context](entt::entity entity, const TransformComponent& transformComponent, const TextureComponent& textureComponent)
            {
                if (auto texturePtr = textureComponent.GetTexture())
                {
                    if (texturePtr)
                    {
                        Vector2 pos;
                        pos.x = transformComponent.position.x + transformComponent.offset.x;
                        pos.y = transformComponent.position.y + transformComponent.offset.y;

                        DrawTextureEx(texturePtr->GetTexture(), pos, 0.f, 1.f, WHITE);
                    }
                }
            });
    }
}
