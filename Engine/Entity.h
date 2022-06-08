#pragma once

#include "Graphics.h"
#include <assert.h>

class Entity
{
public:
	Entity();
	Entity(float _x, float _y);
	Entity(const Entity& object) = delete;
	void operator=(const Entity& object);
	virtual void draw(Graphics &gfx) const = 0;
	virtual void keepEntityInsideWindow() = 0;
protected:
	float x;
	float y;
	bool initialized;
};

