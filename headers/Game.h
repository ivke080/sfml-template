#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>
class Game
{
public:
	Game();
	~Game();

	void run();
private:
	sf::RenderWindow m_window;
	static sf::Time FPS;
private:
	void update(float dt);
	void render();
	void processEvents();
};

