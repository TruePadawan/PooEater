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
	static constexpr int DIMENSION = 20;
private:
	Graphics& gfx;
	std::mt19937 RNG;
	std::uniform_int_distribution<int> xDist{ 0,750 };
	std::uniform_int_distribution<int> yDist{ 0, 550 };
	int x;
	int y;
	int glowEffect;
	int glowEffectModifier;
	Color boxColor;
};

