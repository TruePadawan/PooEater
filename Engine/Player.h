#pragma once
#include "Entity.h"
#include "Keyboard.h"

class Player :
    public Entity
{
public:
    Player() = delete;
    Player(float x, float y, float _speed = 4.0f);
    void move(const Keyboard& kbd);
    float getX() const;
    float getY() const;
    void draw(Graphics &gfx) const;
private:
    void moveX(float increment);
    void moveY(float increment);
    void keepEntityInsideWindow();
private:
    float speed;
public:
    static constexpr float WIDTH = 20;
    static constexpr float HEIGHT = 20;
};

