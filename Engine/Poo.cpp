#include "Poo.h"
#include "Graphics.h"

Poo::Poo()
	:Entity()
{
	this->vx = 0;
	this->vy = 0;
}

Poo::Poo(float _x, float _y, float velocityX, float velocityY)
	:Entity(_x, _y)
{
	(velocityX != 0.0f) ? vx = velocityX : vx = 1.0f;
	(velocityY != 0.0f) ? vy = velocityY : vy = 1.0f;
}

void Poo::draw(Graphics& gfx) const
{
	assert(initialized == true);

	const int int_x = int(x);
	const int int_y = int(y);

	gfx.PutPixel(14 + int_x, 0 + int_y, 138, 77, 0);
	gfx.PutPixel(7 + int_x, 1 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 1 + int_y, 138, 77, 0);
	gfx.PutPixel(20 + int_x, 1 + int_y, 138, 77, 0);
	gfx.PutPixel(6 + int_x, 2 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 2 + int_y, 138, 77, 0);
	gfx.PutPixel(20 + int_x, 2 + int_y, 138, 77, 0);
	gfx.PutPixel(6 + int_x, 3 + int_y, 138, 77, 0);
	gfx.PutPixel(6 + int_x, 4 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 4 + int_y, 138, 77, 0);
	gfx.PutPixel(21 + int_x, 4 + int_y, 138, 77, 0);
	gfx.PutPixel(7 + int_x, 5 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 5 + int_y, 138, 77, 0);
	gfx.PutPixel(21 + int_x, 5 + int_y, 138, 77, 0);
	gfx.PutPixel(7 + int_x, 6 + int_y, 138, 77, 0);
	gfx.PutPixel(20 + int_x, 6 + int_y, 138, 77, 0);
	gfx.PutPixel(6 + int_x, 7 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 7 + int_y, 51, 28, 0);
	gfx.PutPixel(15 + int_x, 7 + int_y, 51, 28, 0);
	gfx.PutPixel(20 + int_x, 7 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 8 + int_y, 51, 28, 0);
	gfx.PutPixel(13 + int_x, 8 + int_y, 51, 28, 0);
	gfx.PutPixel(14 + int_x, 8 + int_y, 51, 28, 0);
	gfx.PutPixel(7 + int_x, 9 + int_y, 138, 77, 0);
	gfx.PutPixel(11 + int_x, 9 + int_y, 51, 28, 0);
	gfx.PutPixel(12 + int_x, 9 + int_y, 102, 57, 0);
	gfx.PutPixel(13 + int_x, 9 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 9 + int_y, 138, 77, 0);
	gfx.PutPixel(15 + int_x, 9 + int_y, 51, 28, 0);
	gfx.PutPixel(21 + int_x, 9 + int_y, 138, 77, 0);
	gfx.PutPixel(10 + int_x, 10 + int_y, 51, 28, 0);
	gfx.PutPixel(11 + int_x, 10 + int_y, 51, 28, 0);
	gfx.PutPixel(12 + int_x, 10 + int_y, 102, 57, 0);
	gfx.PutPixel(13 + int_x, 10 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 10 + int_y, 138, 77, 0);
	gfx.PutPixel(15 + int_x, 10 + int_y, 51, 28, 0);
	gfx.PutPixel(20 + int_x, 10 + int_y, 138, 77, 0);
	gfx.PutPixel(9 + int_x, 11 + int_y, 51, 28, 0);
	gfx.PutPixel(10 + int_x, 11 + int_y, 138, 77, 0);
	gfx.PutPixel(11 + int_x, 11 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 11 + int_y, 51, 28, 0);
	gfx.PutPixel(13 + int_x, 11 + int_y, 51, 28, 0);
	gfx.PutPixel(14 + int_x, 11 + int_y, 51, 28, 0);
	gfx.PutPixel(15 + int_x, 11 + int_y, 51, 28, 0);
	gfx.PutPixel(16 + int_x, 11 + int_y, 51, 28, 0);
	gfx.PutPixel(9 + int_x, 12 + int_y, 51, 28, 0);
	gfx.PutPixel(10 + int_x, 12 + int_y, 138, 77, 0);
	gfx.PutPixel(11 + int_x, 12 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 12 + int_y, 111, 62, 0);
	gfx.PutPixel(13 + int_x, 12 + int_y, 102, 57, 0);
	gfx.PutPixel(14 + int_x, 12 + int_y, 102, 57, 0);
	gfx.PutPixel(15 + int_x, 12 + int_y, 102, 57, 0);
	gfx.PutPixel(16 + int_x, 12 + int_y, 51, 28, 0);
	gfx.PutPixel(9 + int_x, 13 + int_y, 51, 28, 0);
	gfx.PutPixel(10 + int_x, 13 + int_y, 109, 61, 0);
	gfx.PutPixel(11 + int_x, 13 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 13 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 13 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 13 + int_y, 138, 77, 0);
	gfx.PutPixel(15 + int_x, 13 + int_y, 138, 77, 0);
	gfx.PutPixel(16 + int_x, 13 + int_y, 51, 28, 0);
	gfx.PutPixel(5 + int_x, 14 + int_y, 51, 28, 0);
	gfx.PutPixel(7 + int_x, 14 + int_y, 51, 28, 0);
	gfx.PutPixel(8 + int_x, 14 + int_y, 51, 28, 0);
	gfx.PutPixel(9 + int_x, 14 + int_y, 51, 28, 0);
	gfx.PutPixel(10 + int_x, 14 + int_y, 51, 28, 0);
	gfx.PutPixel(11 + int_x, 14 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 14 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 14 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 14 + int_y, 138, 77, 0);
	gfx.PutPixel(15 + int_x, 14 + int_y, 138, 77, 0);
	gfx.PutPixel(16 + int_x, 14 + int_y, 51, 28, 0);
	gfx.PutPixel(4 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(5 + int_x, 15 + int_y, 138, 77, 0);
	gfx.PutPixel(6 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(7 + int_x, 15 + int_y, 116, 65, 0);
	gfx.PutPixel(8 + int_x, 15 + int_y, 138, 77, 0);
	gfx.PutPixel(9 + int_x, 15 + int_y, 138, 77, 0);
	gfx.PutPixel(10 + int_x, 15 + int_y, 138, 77, 0);
	gfx.PutPixel(11 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(12 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(13 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(14 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(15 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(16 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(17 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(18 + int_x, 15 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 16 + int_y, 51, 28, 0);
	gfx.PutPixel(2 + int_x, 16 + int_y, 51, 28, 0);
	gfx.PutPixel(3 + int_x, 16 + int_y, 51, 28, 0);
	gfx.PutPixel(4 + int_x, 16 + int_y, 51, 28, 0);
	gfx.PutPixel(5 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(6 + int_x, 16 + int_y, 51, 28, 0);
	gfx.PutPixel(7 + int_x, 16 + int_y, 116, 65, 0);
	gfx.PutPixel(8 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(9 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(10 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(11 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 16 + int_y, 109, 61, 0);
	gfx.PutPixel(14 + int_x, 16 + int_y, 51, 28, 0);
	gfx.PutPixel(15 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(16 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(17 + int_x, 16 + int_y, 138, 77, 0);
	gfx.PutPixel(18 + int_x, 16 + int_y, 123, 69, 0);
	gfx.PutPixel(19 + int_x, 16 + int_y, 51, 28, 0);
	gfx.PutPixel(0 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 17 + int_y, 87, 49, 0);
	gfx.PutPixel(2 + int_x, 17 + int_y, 87, 49, 0);
	gfx.PutPixel(3 + int_x, 17 + int_y, 87, 49, 0);
	gfx.PutPixel(4 + int_x, 17 + int_y, 87, 49, 0);
	gfx.PutPixel(5 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(6 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(7 + int_x, 17 + int_y, 43, 24, 0);
	gfx.PutPixel(8 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(9 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(10 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(11 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(12 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(13 + int_x, 17 + int_y, 40, 22, 0);
	gfx.PutPixel(14 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(15 + int_x, 17 + int_y, 138, 77, 0);
	gfx.PutPixel(16 + int_x, 17 + int_y, 138, 77, 0);
	gfx.PutPixel(17 + int_x, 17 + int_y, 138, 77, 0);
	gfx.PutPixel(18 + int_x, 17 + int_y, 123, 69, 0);
	gfx.PutPixel(19 + int_x, 17 + int_y, 51, 28, 0);
	gfx.PutPixel(0 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 18 + int_y, 138, 77, 0);
	gfx.PutPixel(2 + int_x, 18 + int_y, 138, 77, 0);
	gfx.PutPixel(3 + int_x, 18 + int_y, 138, 77, 0);
	gfx.PutPixel(4 + int_x, 18 + int_y, 138, 77, 0);
	gfx.PutPixel(5 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(6 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(7 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(8 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(9 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(10 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(11 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(12 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(13 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(14 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(15 + int_x, 18 + int_y, 138, 77, 0);
	gfx.PutPixel(16 + int_x, 18 + int_y, 138, 77, 0);
	gfx.PutPixel(17 + int_x, 18 + int_y, 138, 77, 0);
	gfx.PutPixel(18 + int_x, 18 + int_y, 123, 69, 0);
	gfx.PutPixel(19 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(20 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(21 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(22 + int_x, 18 + int_y, 51, 28, 0);
	gfx.PutPixel(0 + int_x, 19 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(2 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(3 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(4 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(5 + int_x, 19 + int_y, 51, 28, 0);
	gfx.PutPixel(6 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(7 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(8 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(9 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(10 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(11 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(15 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(16 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(17 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(18 + int_x, 19 + int_y, 123, 69, 0);
	gfx.PutPixel(19 + int_x, 19 + int_y, 51, 28, 0);
	gfx.PutPixel(20 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(21 + int_x, 19 + int_y, 138, 77, 0);
	gfx.PutPixel(22 + int_x, 19 + int_y, 65, 36, 0);
	gfx.PutPixel(23 + int_x, 19 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 20 + int_y, 51, 28, 0);
	gfx.PutPixel(2 + int_x, 20 + int_y, 51, 28, 0);
	gfx.PutPixel(3 + int_x, 20 + int_y, 51, 28, 0);
	gfx.PutPixel(4 + int_x, 20 + int_y, 51, 28, 0);
	gfx.PutPixel(5 + int_x, 20 + int_y, 51, 28, 0);
	gfx.PutPixel(6 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(7 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(8 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(9 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(10 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(11 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(12 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(13 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(14 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(15 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(16 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(17 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(18 + int_x, 20 + int_y, 123, 69, 0);
	gfx.PutPixel(19 + int_x, 20 + int_y, 51, 28, 0);
	gfx.PutPixel(20 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(21 + int_x, 20 + int_y, 138, 77, 0);
	gfx.PutPixel(22 + int_x, 20 + int_y, 65, 36, 0);
	gfx.PutPixel(23 + int_x, 20 + int_y, 51, 28, 0);
	gfx.PutPixel(0 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 21 + int_y, 138, 77, 0);
	gfx.PutPixel(2 + int_x, 21 + int_y, 138, 77, 0);
	gfx.PutPixel(3 + int_x, 21 + int_y, 138, 77, 0);
	gfx.PutPixel(4 + int_x, 21 + int_y, 138, 77, 0);
	gfx.PutPixel(5 + int_x, 21 + int_y, 138, 77, 0);
	gfx.PutPixel(6 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(7 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(8 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(9 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(10 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(11 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(12 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(13 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(14 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(15 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(16 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(17 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(18 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(20 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(21 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(22 + int_x, 21 + int_y, 51, 28, 0);
	gfx.PutPixel(0 + int_x, 22 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 22 + int_y, 65, 36, 0);
	gfx.PutPixel(2 + int_x, 22 + int_y, 65, 36, 0);
	gfx.PutPixel(3 + int_x, 22 + int_y, 65, 36, 0);
	gfx.PutPixel(4 + int_x, 22 + int_y, 65, 36, 0);
	gfx.PutPixel(5 + int_x, 22 + int_y, 65, 36, 0);
	gfx.PutPixel(6 + int_x, 22 + int_y, 51, 28, 0);
	gfx.PutPixel(1 + int_x, 23 + int_y, 51, 28, 0);
	gfx.PutPixel(2 + int_x, 23 + int_y, 51, 28, 0);
	gfx.PutPixel(3 + int_x, 23 + int_y, 51, 28, 0);
	gfx.PutPixel(4 + int_x, 23 + int_y, 51, 28, 0);
	gfx.PutPixel(5 + int_x, 23 + int_y, 51, 28, 0);
	gfx.PutPixel(6 + int_x, 23 + int_y, 51, 28, 0);

}

void Poo::keepEntityInsideWindow()
{
	assert(initialized == true);

	float right = x + WIDTH;
	float down = y + HEIGHT;

	int screenWidth = Graphics::ScreenWidth;
	int screenHeight = Graphics::ScreenHeight;

	if (right >= screenWidth)
	{
		x = float(screenWidth - 1) - WIDTH;
		vx = -vx;
	}
	else if (x < 0)
	{
		x = 0;
		vx = -vx;
	}

	if (down >= (float)screenHeight)
	{
		y = float(screenHeight - 1) - HEIGHT;
		vy = -vy;
	}
	else if (y < 0)
	{
		y = 0;
		vy = -vy;
	}
}

void Poo::move(const float frameTime)
{
	assert(initialized == true);

	this->x += vx * frameTime;
	this->y += vy * frameTime;

	keepEntityInsideWindow();
}

void Poo::increaseSpeed(float increment)
{
	assert(initialized == true);

	if (increment <= 0) return;

	(vx < 0) ? vx -= increment : vx += increment;
	(vy < 0) ? vy -= increment : vy += increment;
}

bool Poo::isCollidingWith(const Player& player) const
{
	assert(initialized == true);

	float playerXCord = player.getX();
	float playerYCord = player.getY();

	const float player_left = playerXCord;
	const float player_right = playerXCord + player.WIDTH;
	const float player_top = playerYCord;
	const float player_bottom = playerYCord + player.HEIGHT;

	const float poo_left = this->x;
	const float poo_right = this->x + this->WIDTH;
	const float poo_top = this->y;
	const float poo_bottom = this->y + this->HEIGHT;

	return ((player_left <= poo_right) &&
		(player_right >= poo_left) &&
		(player_top <= poo_bottom) &&
		(player_bottom >= poo_top));
}
