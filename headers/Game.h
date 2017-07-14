#pragma once

#define WIDTH 800
#define HEIGHT 600
#ifdef __linux__
	#include <SFML/Graphics.hpp>
	#include <iostream>
#elif defined _WIN32
	#include <SFML\Graphics.hpp>
	#include <iostream>
#endif

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
