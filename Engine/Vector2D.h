#pragma once

class Vector2D
{
public:
	Vector2D() = default;
	Vector2D(float _x, float _y);

	float getLength() const;
	float getLengthSquared() const;

	Vector2D& normalize();
	Vector2D getNormalize() const;

	Vector2D operator+(const Vector2D& rhs) const;
	Vector2D& operator+=(const Vector2D& rhs);
	Vector2D operator-(const Vector2D& rhs) const;
	Vector2D& operator-=(const Vector2D& rhs);
	Vector2D operator*(float rhs) const;
	Vector2D& operator*=(float rhs);
public:
	float x;
	float y;
};