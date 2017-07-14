#pragma once

#define WIDTH 800
#define HEIGHT 600
#include <SFML\Graphics.hpp>
#include "ResourceManager.h"
#include <iostream>

class Game
{
public:
	Game();
	~Game();

	void Run();
private:
	sf::RenderWindow m_window;
	static sf::Time FPS;
	TextureManager m_textures;
	sf::Sprite m_ship;
private:
	void Update(float dt);
	void Render();
	void ProcessEvents();
};
