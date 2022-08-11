#pragma once

#include "DEFINITIONS.hpp"
#include "Game.hpp"

namespace MyNamespace
{
	class Bird
	{
	public:
		Bird(GameDataRef data);

		void Draw();

	private:
		GameDataRef _data;

		sf::Sprite _birdSprite;
	};
}