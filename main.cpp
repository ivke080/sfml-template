#include "GlupSam.h"

#ifdef __linux__
	#include <SFML/Graphics.hpp>
	#include "headers/Game.h"
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
