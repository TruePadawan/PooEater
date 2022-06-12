#include "Entity.h"
#include "Graphics.h"

Entity::Entity()
	:coordinate(0, 0)
{
	initialized = false;
}

Entity::Entity(float _x, float _y)
	:coordinate(_x, _y)
{
	initialized = true;
}

Entity::Entity(const Vector2D& position)
	:coordinate(position)
{
	initialized = true;
}

void Entity::operator=(const Entity& object)
{
	assert(initialized == false);
	coordinate = object.coordinate;
	initialized = true;
}