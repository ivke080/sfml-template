#include <SFML/Graphics.hpp>
#include "Game.h"

int main(int argc, char *argv[])
{
	std::cout << argv[0] << std::endl;
	Game game;
	game.Run();

	return 0;
}