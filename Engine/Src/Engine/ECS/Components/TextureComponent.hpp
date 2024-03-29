﻿#ifndef _ENGINE_TEXTURE_COMPONENT_HEADER_
#define _ENGINE_TEXTURE_COMPONENT_HEADER_

#include <Engine/Resources/Types/ResourceTexture.hpp>
#include <Engine/Core/Context.hpp>

#include <memory>

namespace Engine
{
	class TextureComponent final
	{
	public:
		TextureComponent() = default;
		TextureComponent(std::string_view id, Context& context);
		~TextureComponent() = default;

	public:
		void SetTextureByResources(std::string_view id, Resources& resources);
		std::shared_ptr<ResourceTexture> GetTexture() const { return _weakTexturePtr.lock(); }

		void SetColor(const Color& color) { _color = color; }
		const Color& GetColor() const { return _color; }

	private:
		std::weak_ptr<ResourceTexture> _weakTexturePtr;
		Color _color = WHITE;
	};
}

#endif // _ENGINE_TEXTURE_COMPONENT_HEADER_
