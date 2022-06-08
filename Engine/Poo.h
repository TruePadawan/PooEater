#pragma once
#include "Entity.h"
#include "Player.h"

class Poo : public Entity
{
public:
	Poo();
	Poo(float _x, float _y, float velocityX = -1, float velocityY = -1);
	void draw(Graphics &gfx) const;
	void move();
	void increaseSpeed(float increment = 0.5f);
	bool isCollidingWith(const Player& player) const;
public:
	static constexpr float WIDTH = 24;
	static constexpr float HEIGHT = 24;
private:
	void keepEntityInsideWindow();
private:
	float vx;
	float vy;
};