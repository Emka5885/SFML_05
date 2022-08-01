#pragma once

#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include <vector>

namespace MyNamespace
{
	class Pipe
	{
	public:
		Pipe(GameDataRef data);

		void DrawPipes();

	public:
		GameDataRef _data;
		std::vector<sf::Sprite> pipeSprites;
	};
}