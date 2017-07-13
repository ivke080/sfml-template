#include "GlupSam.h"

#ifdef OS_LINUX
	#include "headers/Entity.h"
#elif defined OS_WINDOWS
	#include "headers/Entity.h"
#endif

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
