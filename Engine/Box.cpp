#include "Box.h"
#include <assert.h>

Box::Box(Graphics& _gfx)
	:gfx(_gfx), RNG(std::random_device()()), xDist(0.0f, 750.0f), yDist(0.0f, 550.0f), coordinate(xDist(RNG), yDist(RNG)),
	glowEffect(0), glowEffectModifier(4), boxColor(255, glowEffect, glowEffect)
{
}

void Box::draw()
{
	gfx.DrawBox((int)coordinate.x, (int)coordinate.y, (int)DIMENSION, (int)DIMENSION, boxColor);

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
	coordinate.x = xDist(RNG);
	coordinate.y = yDist(RNG);
}

bool Box::isCollidingWith(const Player& player)
{
	Vector2D playerCord = player.getCoordinate();

	const float player_left = playerCord.x;
	const float player_right = playerCord.x + player.WIDTH;
	const float player_top = playerCord.y;
	const float player_bottom = playerCord.y + player.HEIGHT;

	const float box_left = coordinate.x;
	const float box_right = coordinate.x + DIMENSION;
	const float box_top = coordinate.y;
	const float box_bottom = coordinate.y + DIMENSION;

	return ((player_left <= box_right) &&
		(player_right >= box_left) &&
		(player_top <= box_bottom) &&
		(player_bottom >= box_top));
}
