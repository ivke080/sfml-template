#include "headers\Game.h"

sf::Time Game::FPS = sf::seconds(1.0f / 60.0f);
// Sve ove magicne konstante zameniti promenljivama
Game::Game()
	:m_window(sf::VideoMode(640, 480), "Sfml Template")
{
}
Game::~Game()
{
}
void Game::run()
{
	sf::Clock clock;
	sf::Time lastUpdate = sf::Time::Zero;

	while (m_window.isOpen()) {
		processEvents();
		lastUpdate += clock.restart();
		while (lastUpdate > FPS) {
			lastUpdate -= FPS;
			processEvents();
			update(FPS.asSeconds());
		}
		render();
	}
}
void Game::update(float dt)
{
}
void Game::render()
{
	m_window.clear();
	// ovde crtati 
	m_window.display();
}
void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			m_window.close();
		}
	}
}