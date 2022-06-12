#pragma once

#include "Graphics.h"
#include "Vector2D.h"
#include <assert.h>

class Entity
{
public:
	Entity();
	Entity(float _x, float _y);
	Entity(const Vector2D& position);
	Entity(const Entity& object) = delete;
	void operator=(const Entity& object);
	virtual void draw(Graphics &gfx) const = 0;
	virtual void keepEntityInsideWindow() = 0;
protected:
	Vector2D coordinate;
	bool initialized;
};

