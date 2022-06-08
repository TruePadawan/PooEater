#include "Player.h"
#include "Graphics.h"

Player::Player()
	:Entity()
{

}

Player::Player(float x, float y)
	:Entity(x, y)
{
}

void Player::moveX(float increment)
{
	assert(initialized == true);

	this->x += increment;
}

void Player::moveY(float increment)
{
	assert(initialized == true);

	this->y += increment;
}

float Player::getX() const
{
	return this->x;
}

float Player::getY() const
{
	return this->y;
}

void Player::draw(Graphics& gfx) const
{
	assert(initialized == true);

	const int int_x = int(x);
	const int int_y = int(y);

	gfx.PutPixel(7 + int_x, 0 + int_y, 0, 0, 0);
	gfx.PutPixel(8 + int_x, 0 + int_y, 0, 0, 0);
	gfx.PutPixel(9 + int_x, 0 + int_y, 0, 0, 0);
	gfx.PutPixel(10 + int_x, 0 + int_y, 0, 0, 0);
	gfx.PutPixel(11 + int_x, 0 + int_y, 0, 0, 0);
	gfx.PutPixel(12 + int_x, 0 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 1 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 1 + int_y, 0, 0, 0);
	gfx.PutPixel(7 + int_x, 1 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 1 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 1 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 1 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 1 + int_y, 254, 221, 88);
	gfx.PutPixel(12 + int_x, 1 + int_y, 254, 221, 88);
	gfx.PutPixel(13 + int_x, 1 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 1 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 2 + int_y, 0, 0, 0);
	gfx.PutPixel(4 + int_x, 2 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(6 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(12 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(13 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(14 + int_x, 2 + int_y, 254, 221, 88);
	gfx.PutPixel(15 + int_x, 2 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 2 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 3 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(5 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(6 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(12 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(13 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(14 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(15 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(16 + int_x, 3 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 3 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 4 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(5 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(6 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(12 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(13 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(14 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(15 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(16 + int_x, 4 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 4 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(3 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(4 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(6 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(12 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(13 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(15 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(16 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 5 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 5 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 6 + int_y, 255, 255, 255);
	gfx.PutPixel(4 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 6 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 6 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 6 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 6 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(11 + int_x, 6 + int_y, 255, 255, 255);
	gfx.PutPixel(12 + int_x, 6 + int_y, 255, 255, 255);
	gfx.PutPixel(13 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(15 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 6 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 6 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 6 + int_y, 0, 0, 0);
	gfx.PutPixel(0 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 7 + int_y, 255, 255, 255);
	gfx.PutPixel(3 + int_x, 7 + int_y, 255, 255, 255);
	gfx.PutPixel(4 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 7 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 7 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 7 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 7 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(11 + int_x, 7 + int_y, 255, 255, 255);
	gfx.PutPixel(12 + int_x, 7 + int_y, 255, 255, 255);
	gfx.PutPixel(13 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(15 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 7 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 7 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 7 + int_y, 254, 221, 88);
	gfx.PutPixel(19 + int_x, 7 + int_y, 0, 0, 0);
	gfx.PutPixel(0 + int_x, 8 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 8 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 8 + int_y, 255, 255, 255);
	gfx.PutPixel(3 + int_x, 8 + int_y, 255, 255, 255);
	gfx.PutPixel(4 + int_x, 8 + int_y, 255, 255, 255);
	gfx.PutPixel(5 + int_x, 8 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 8 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 8 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 8 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 8 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 8 + int_y, 0, 0, 0);
	gfx.PutPixel(11 + int_x, 8 + int_y, 255, 255, 255);
	gfx.PutPixel(12 + int_x, 8 + int_y, 255, 255, 255);
	gfx.PutPixel(13 + int_x, 8 + int_y, 255, 255, 255);
	gfx.PutPixel(14 + int_x, 8 + int_y, 255, 255, 255);
	gfx.PutPixel(15 + int_x, 8 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 8 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 8 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 8 + int_y, 254, 221, 88);
	gfx.PutPixel(19 + int_x, 8 + int_y, 0, 0, 0);
	gfx.PutPixel(0 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(2 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(4 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(12 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(13 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(15 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(16 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 9 + int_y, 254, 221, 88);
	gfx.PutPixel(19 + int_x, 9 + int_y, 0, 0, 0);
	gfx.PutPixel(0 + int_x, 10 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(2 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(3 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(5 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(6 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(12 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(13 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(14 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(15 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(16 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 10 + int_y, 254, 221, 88);
	gfx.PutPixel(19 + int_x, 10 + int_y, 0, 0, 0);
	gfx.PutPixel(0 + int_x, 11 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(2 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(3 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(5 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(6 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(7 + int_x, 11 + int_y, 20, 14, 18);
	gfx.PutPixel(8 + int_x, 11 + int_y, 18, 11, 14);
	gfx.PutPixel(9 + int_x, 11 + int_y, 18, 12, 14);
	gfx.PutPixel(10 + int_x, 11 + int_y, 18, 12, 14);
	gfx.PutPixel(11 + int_x, 11 + int_y, 21, 13, 16);
	gfx.PutPixel(12 + int_x, 11 + int_y, 24, 11, 15);
	gfx.PutPixel(13 + int_x, 11 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(15 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(16 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 11 + int_y, 254, 221, 88);
	gfx.PutPixel(19 + int_x, 11 + int_y, 0, 0, 0);
	gfx.PutPixel(0 + int_x, 12 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(2 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(3 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(5 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(6 + int_x, 12 + int_y, 23, 9, 23);
	gfx.PutPixel(7 + int_x, 12 + int_y, 135, 26, 68);
	gfx.PutPixel(8 + int_x, 12 + int_y, 135, 26, 68);
	gfx.PutPixel(9 + int_x, 12 + int_y, 135, 26, 68);
	gfx.PutPixel(10 + int_x, 12 + int_y, 135, 26, 68);
	gfx.PutPixel(11 + int_x, 12 + int_y, 135, 26, 68);
	gfx.PutPixel(12 + int_x, 12 + int_y, 135, 26, 68);
	gfx.PutPixel(13 + int_x, 12 + int_y, 135, 26, 68);
	gfx.PutPixel(14 + int_x, 12 + int_y, 0, 0, 0);
	gfx.PutPixel(15 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(16 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 12 + int_y, 254, 221, 88);
	gfx.PutPixel(19 + int_x, 12 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 13 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 13 + int_y, 254, 221, 88);
	gfx.PutPixel(3 + int_x, 13 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 13 + int_y, 254, 221, 88);
	gfx.PutPixel(5 + int_x, 13 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(7 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(8 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(9 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(10 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(11 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(12 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(13 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(14 + int_x, 13 + int_y, 135, 26, 68);
	gfx.PutPixel(15 + int_x, 13 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 13 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 13 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 13 + int_y, 0, 0, 0);
	gfx.PutPixel(1 + int_x, 14 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 14 + int_y, 254, 221, 88);
	gfx.PutPixel(3 + int_x, 14 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 14 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 14 + int_y, 135, 26, 68);
	gfx.PutPixel(6 + int_x, 14 + int_y, 135, 26, 68);
	gfx.PutPixel(7 + int_x, 14 + int_y, 135, 26, 68);
	gfx.PutPixel(8 + int_x, 14 + int_y, 135, 26, 68);
	gfx.PutPixel(9 + int_x, 14 + int_y, 251, 192, 224);
	gfx.PutPixel(10 + int_x, 14 + int_y, 251, 192, 224);
	gfx.PutPixel(11 + int_x, 14 + int_y, 251, 192, 224);
	gfx.PutPixel(12 + int_x, 14 + int_y, 251, 192, 224);
	gfx.PutPixel(13 + int_x, 14 + int_y, 135, 26, 68);
	gfx.PutPixel(14 + int_x, 14 + int_y, 135, 26, 68);
	gfx.PutPixel(15 + int_x, 14 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 14 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 14 + int_y, 254, 221, 88);
	gfx.PutPixel(18 + int_x, 14 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 15 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 15 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 15 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 15 + int_y, 135, 26, 68);
	gfx.PutPixel(6 + int_x, 15 + int_y, 135, 26, 68);
	gfx.PutPixel(7 + int_x, 15 + int_y, 135, 26, 68);
	gfx.PutPixel(8 + int_x, 15 + int_y, 251, 192, 224);
	gfx.PutPixel(9 + int_x, 15 + int_y, 251, 192, 224);
	gfx.PutPixel(10 + int_x, 15 + int_y, 251, 192, 224);
	gfx.PutPixel(11 + int_x, 15 + int_y, 251, 192, 224);
	gfx.PutPixel(12 + int_x, 15 + int_y, 251, 192, 224);
	gfx.PutPixel(13 + int_x, 15 + int_y, 251, 192, 224);
	gfx.PutPixel(14 + int_x, 15 + int_y, 135, 26, 68);
	gfx.PutPixel(15 + int_x, 15 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 15 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 15 + int_y, 0, 0, 0);
	gfx.PutPixel(2 + int_x, 16 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 16 + int_y, 254, 221, 88);
	gfx.PutPixel(4 + int_x, 16 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 16 + int_y, 135, 26, 68);
	gfx.PutPixel(6 + int_x, 16 + int_y, 135, 26, 68);
	gfx.PutPixel(7 + int_x, 16 + int_y, 135, 26, 68);
	gfx.PutPixel(8 + int_x, 16 + int_y, 251, 192, 224);
	gfx.PutPixel(9 + int_x, 16 + int_y, 251, 192, 224);
	gfx.PutPixel(10 + int_x, 16 + int_y, 251, 192, 224);
	gfx.PutPixel(11 + int_x, 16 + int_y, 251, 192, 224);
	gfx.PutPixel(12 + int_x, 16 + int_y, 251, 192, 224);
	gfx.PutPixel(13 + int_x, 16 + int_y, 251, 192, 224);
	gfx.PutPixel(14 + int_x, 16 + int_y, 135, 26, 68);
	gfx.PutPixel(15 + int_x, 16 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 16 + int_y, 254, 221, 88);
	gfx.PutPixel(17 + int_x, 16 + int_y, 0, 0, 0);
	gfx.PutPixel(3 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(4 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(7 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(8 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(9 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(10 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(11 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(12 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(13 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(15 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(16 + int_x, 17 + int_y, 0, 0, 0);
	gfx.PutPixel(5 + int_x, 18 + int_y, 0, 0, 0);
	gfx.PutPixel(6 + int_x, 18 + int_y, 0, 0, 0);
	gfx.PutPixel(7 + int_x, 18 + int_y, 254, 221, 88);
	gfx.PutPixel(8 + int_x, 18 + int_y, 254, 221, 88);
	gfx.PutPixel(9 + int_x, 18 + int_y, 254, 221, 88);
	gfx.PutPixel(10 + int_x, 18 + int_y, 254, 221, 88);
	gfx.PutPixel(11 + int_x, 18 + int_y, 254, 221, 88);
	gfx.PutPixel(12 + int_x, 18 + int_y, 254, 221, 88);
	gfx.PutPixel(13 + int_x, 18 + int_y, 0, 0, 0);
	gfx.PutPixel(14 + int_x, 18 + int_y, 0, 0, 0);
	gfx.PutPixel(7 + int_x, 19 + int_y, 0, 0, 0);
	gfx.PutPixel(8 + int_x, 19 + int_y, 0, 0, 0);
	gfx.PutPixel(9 + int_x, 19 + int_y, 0, 0, 0);
	gfx.PutPixel(10 + int_x, 19 + int_y, 0, 0, 0);
	gfx.PutPixel(11 + int_x, 19 + int_y, 0, 0, 0);
	gfx.PutPixel(12 + int_x, 19 + int_y, 0, 0, 0);
}

void Player::keepEntityInsideWindow()
{
	assert(initialized == true);

	float right = x + WIDTH;
	float down = y + HEIGHT;

	int screenWidth = Graphics::ScreenWidth;
	int screenHeight = Graphics::ScreenHeight;

	if (right >= screenWidth)
	{
		x = float(screenWidth - 1) - WIDTH;
	}
	else if (x < 0)
	{
		x = 0;
	}

	if (down >= screenHeight)
	{
		y = float(screenHeight - 1) - HEIGHT;
	}
	else if (y < 0)
	{
		y = 0;
	}
}