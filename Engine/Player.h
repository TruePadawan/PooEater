#pragma once
#include "Entity.h"
#include "Keyboard.h"

class Player :
    public Entity
{
public:
    Player() = delete;
    Player(float x, float y, float _speed = 4.0f);
    Player(Vector2D coordinate, float _speed = 4.0f);
    void move(const Keyboard& kbd, const float frameTime);
    Vector2D getCoordinate() const;
    void draw(Graphics &gfx) const;
private:
    void keepEntityInsideWindow();
private:
    float speed;
public:
    static constexpr float WIDTH = 20.0f;
    static constexpr float HEIGHT = 20.0f;
};

