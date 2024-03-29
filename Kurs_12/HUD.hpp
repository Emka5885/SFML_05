#pragma once

#include <SFML/Graphics.hpp>

#include "DEFINITIONS.hpp"
#include "Game.hpp"

namespace MyNamespace
{
	class HUD
	{
	public:
		HUD(GameDataRef data);

		void Draw();
		void UpdateScore(int score);

	private:
		GameDataRef _data;

		sf::Text _scoreText;
	};
}