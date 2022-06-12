#pragma once
#include "Entity.h"
#include "Player.h"
#include "Vector2D.h"

class Poo : public Entity
{
public:
	Poo();
	Poo(float _x, float _y, float velocityX = -1, float velocityY = -1);
	Poo(const Vector2D& _coordinate, const Vector2D& _velocity);
	void draw(Graphics &gfx) const;
	void move(const float frameTime);
	void increaseSpeed(float multiplier = 1.5);
	bool isCollidingWith(const Player& player) const;
public:
	static constexpr float WIDTH = 24.0f;
	static constexpr float HEIGHT = 24.0f;
private:
	void keepEntityInsideWindow();
private:
	Vector2D velocity;
};