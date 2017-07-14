#pragma once

#ifdef __linux__
	#include <SFML/Graphics.hpp>
#elif defined _WIN32
	#include <SFML\Graphics.hpp>
#endif
/*
*	Bazna klasa za sve objekte u igri
*/
class Ball: public Entity
{
public:
  
	~Ball();
	Ball(); // zabrana kreiranja Entity objekata
  Entity(sf::Vector2f position, sf::Texture);

	void update(float dt);
	void render(sf::RenderWindow window);

protected:


	sf::Vector2f m_position;
	sf::Sprite m_image;
	// Ako je u pitanju animacija, a ne staticna slika, dodati ovde objekat klase animacije

};
