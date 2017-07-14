#ifdef __linux__
	#include <SFML/Graphics.hpp>
	#include <iostream>
	#include "headers/Game.h"
	#include "headers/Collision.h"
#elif defined _WIN32
	#include <SFML\Graphics.hpp>
	#include "headers\Game.h"
#endif

int main()
{
	Game game;
	
	game.run();
	return 0;
}
