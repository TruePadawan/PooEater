#pragma once
#include "Graphics.h"
#include "Player.h"
#include <random>

class Box
{
public:
	Box(Graphics& _gfx);
	void draw();
	void respawn();
	bool isCollidingWith(const Player& player);
public:
	static constexpr float DIMENSION = 20.0f;
private:
	Graphics& gfx;
	std::mt19937 RNG;
	std::uniform_real_distribution<float> xDist;
	std::uniform_real_distribution<float> yDist;
	Vector2D coordinate;
	int glowEffect;
	int glowEffectModifier;
	Color boxColor;
};

