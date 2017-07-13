#include "GlupSam.h"

#ifdef OS_LINUX
	#include <SFML/Graphics.hpp>
	#include "headers/Game.h"
#elif defined OS_WINDOWS
	#include <SFML\Graphics.hpp>
	#include "headers\Game.h"
#endif

int main()
{
	Game game;
	game.run();

	return 0;
}
