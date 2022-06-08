#include "Box.h"
#include <assert.h>

Box::Box(Graphics& _gfx)
	:gfx(_gfx), RNG(std::random_device()()), xDist(0, 750), yDist(0, 550), x(xDist(RNG)), y(yDist(RNG)),
	glowEffect(0), glowEffectModifier(4), boxColor(255, glowEffect, glowEffect)
{
}

void Box::draw()
{
	gfx.DrawBox(x, y, DIMENSION, DIMENSION, boxColor);

	glowEffect += glowEffectModifier;
	
	if (glowEffect >= 255)
	{
		glowEffectModifier = -4;
		glowEffect = 255;
	}
	else if (glowEffect <= 0)
	{
		glowEffectModifier = 4;
		glowEffect = 0;
	}

	boxColor = Color(255, glowEffect, glowEffect);
}

void Box::respawn()
{
	x = xDist(RNG);
	y = yDist(RNG);
}

bool Box::isCollidingWith(const Player& player)
{
	float playerXCord = player.getX();
	float playerYCord = player.getY();

	const float player_left = playerXCord;
	const float player_right = playerXCord + player.WIDTH;
	const float player_top = playerYCord;
	const float player_bottom = playerYCord + player.HEIGHT;

	const float box_left = (float)this->x;
	const float box_right = float(this->x + this->DIMENSION);
	const float box_top = (float)this->y;
	const float box_bottom = float(this->y + this->DIMENSION);

	return ((player_left <= box_right) &&
		(player_right >= box_left) &&
		(player_top <= box_bottom) &&
		(player_bottom >= box_top));
}
