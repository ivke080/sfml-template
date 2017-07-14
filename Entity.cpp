#include "Entity.h"

Entity::Entity()
{

}
Entity::Entity(sf::Vector2f position, sf::Texture texture)
	:m_position(position), m_image(texture)
{

}
Entity::~Entity()
{

}
