#pragma once

#ifdef OS_LINUX
	#include <SFML/Graphics.hpp>
#elif defined OS_WINDOWS
	#include <SFML\Graphics.hpp>
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
