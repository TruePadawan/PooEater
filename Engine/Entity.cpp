#include "Entity.h"
#include "Graphics.h"

Entity::Entity()
	:x(0), y(0)
{
	initialized = false;
}

Entity::Entity(float _x, float _y)
	:x(_x), y(_y)
{
	initialized = true;
}

void Entity::operator=(const Entity& object)
{
	assert(initialized == false);
	this->x = object.x;
	this->y = object.y;
	initialized = true;
}