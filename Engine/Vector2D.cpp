#include "Vector2D.h"
#include <cmath>

Vector2D::Vector2D(float _x, float _y)
	:x(_x), y(_y)
{
}

float Vector2D::getLength() const
{
	return std::sqrt(getLengthSquared());
}

float Vector2D::getLengthSquared() const
{
	return (x*x) + (y*y);
}

Vector2D& Vector2D::normalize()
{
	*this = getNormalize();
	return *this;
}

Vector2D Vector2D::getNormalize() const
{
	float length = getLength();
	if (length != 0.0f)
	{
		return Vector2D(x / length, y / length);
	}
	return *this;
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

Vector2D Vector2D::operator-(const Vector2D& rhs) const
{
	return Vector2D(x - rhs.x, y - rhs.y);
}

Vector2D& Vector2D::operator-=(const Vector2D& rhs)
{
	this->x -= rhs.x;
	this->y -= rhs.y;
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
