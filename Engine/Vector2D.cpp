#include "Vector2D.h"

Vector2D::Vector2D(float _x, float _y)
	:x(_x), y(_y)
{
}

Vector2D Vector2D::operator+(const Vector2D& rhs) const
{
	return Vector2D(this->x + rhs.x, this->y + rhs.y);
}

Vector2D& Vector2D::operator+=(const Vector2D& rhs)
{
	this->x += rhs.x;
	this->y += rhs.y;

	return *this;
}

Vector2D Vector2D::operator*(float rhs) const
{
	return Vector2D(this->x * rhs, this->y * rhs);
}

Vector2D& Vector2D::operator*=(float rhs)
{
	this->x *= rhs;
	this->y *= rhs;

	return *this;
}
