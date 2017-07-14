#ifdef __linux__
	#include "headers/Game.h"
	#include "headers/Collision.h"
#elif defined _WIN32
	#include "headers\Game.h"
	#include "headers\Collision.h"
#endif

sf::Time Game::FPS = sf::seconds(1.0f / 60.0f);
std::vector<sf::Shape*> shapes; //samo za test, slobodno obrisi
// Sve ove magicne konstante zameniti promenljivama
Game::Game()
	:m_window(sf::VideoMode(WIDTH, HEIGHT), "Sfml Template")
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

	for(auto i = shapes.begin(); i != shapes.cend(); i++)
	{
		m_window.draw(**i);
	}

	m_window.display();
}
void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			m_window.close();
		}
		/*
		 * Ovo je sve samo test za kolizije, slobodno brisi, ostavio sam ti ga samo da mozes da vidis bag
		 * da dva puta detektuje klik dirke na tastaturi, mrzi me sad da trazim zasto je to tako a garant sam ja nesto sjebao
		 */
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::C)) {
			sf::CircleShape *shape = new sf::CircleShape(rand()%30);
			shape->setPosition(rand() % (int) (WIDTH - shape->getRadius()), rand()% (int)(HEIGHT - shape->getRadius()));
			std::cout << "Added Circle of radius " << shape->getRadius() << " to the position (" << shape->getPosition().x << ", " << shape->getPosition().y << ")." << std::endl;
			shape->setOutlineColor(sf::Color(255, 255, 255));
			shape->setOutlineThickness(1);
			shape->setFillColor(sf::Color(0, 0, 0));

			for(auto i = shapes.begin(); i != shapes.end(); i++)
			{
				if(AreColliding(shape, *i))
				{
			//  std::cout << "Pravi Left B (" << *i->getPosition().x << ", " << *i->getPosition().y << ")\n";
					shape->setFillColor(sf::Color(255, 255, 0));
					sf::Shape *other = dynamic_cast<sf::Shape*> (*i);
					other->setFillColor(sf::Color(255, 255, 0));
				}
			}
			shapes.push_back(shape);


		}
		else if(sf::Keyboard::isKeyPressed(sf::Keyboard::R)) {
			sf::RectangleShape *shape = new sf::RectangleShape(sf::Vector2f(rand()%50, rand()%50));
			shape->setPosition(rand() % (int) (WIDTH - shape->getSize().x), rand() % (int)(HEIGHT - shape->getSize().y));
			std::cout << "Added Rect of size (" << shape->getSize().x << ", " << shape->getSize().y <<  ") to the position (" << shape->getPosition().x << ", " << shape->getPosition().y << ")." << std::endl;
			shape->setOutlineColor(sf::Color(255, 0, 0));
			shape->setOutlineThickness(1);
			shape->setFillColor(sf::Color(0, 0, 0));

			for(auto i = shapes.begin(); i != shapes.end(); i++)
			{
				if(AreColliding(shape, *i))
				{
					shape->setFillColor(sf::Color(255, 255, 0));
					sf::Shape *other = dynamic_cast<sf::Shape*> (*i);
					other->setFillColor(sf::Color(255, 255, 0));
				}
			}
			shapes.push_back(shape);
		}
	}
}
