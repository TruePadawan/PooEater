#include "Player.h"
#include "Graphics.h"

Player::Player(float x, float y, float _speed)
	:Entity(x, y), speed(_speed * 60.0f)
{
}

Player::Player(Vector2D coordinate, float _speed)
{
	Player(coordinate.x, coordinate.y, _speed);
}

void Player::move(const Keyboard& kbd, const float frameTime)
{
	Vector2D delta_coordinate{ 0, 0 };
	if (kbd.KeyIsPressed(VK_UP))
	{
		delta_coordinate.y -= speed;
	}
	if (kbd.KeyIsPressed(VK_DOWN))
	{
		delta_coordinate.y += speed;
	}
	if (kbd.KeyIsPressed(VK_LEFT))
	{
		delta_coordinate.x -= speed;
	}
	if (kbd.KeyIsPressed(VK_RIGHT))
	{
		delta_coordinate.x += speed;
	}

	delta_coordinate.normalize();
	coordinate += delta_coordinate * speed * frameTime;

	keepEntityInsideWindow();
}

void Player::move(const Mouse& mouse, const float frameTime)
{
	if (mouse.LeftIsPressed())
	{
		float xComp = (float)mouse.GetPosX();
		float yComp = (float)mouse.GetPosY();
		Vector2D destination{ xComp, yComp };
		destination -= coordinate;

		if (destination.getLengthSquared() > 2.0f)
		{
			coordinate += destination.normalize() * speed * frameTime;
		}

		keepEntityInsideWindow();
	}
}

Vector2D Player::getCoordinate() const
{
	return this->coordinate;
}

void Player::draw(Graphics& gfx) const
{
	assert(initialized == true);

	const int int_x = int(coordinate.x);
	const int int_y = int(coordinate.y);

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

	float right = coordinate.x + WIDTH;
	float down = coordinate.y + HEIGHT;

	int screenWidth = Graphics::ScreenWidth;
	int screenHeight = Graphics::ScreenHeight;

	if (right >= screenWidth)
	{
		coordinate.x = float(screenWidth - 1) - WIDTH;
	}
	else if (coordinate.x < 0)
	{
		coordinate.x = 0;
	}

	if (down >= screenHeight)
	{
		coordinate.y = float(screenHeight - 1) - HEIGHT;
	}
	else if (coordinate.y < 0)
	{
		coordinate.y = 0;
	}
}
