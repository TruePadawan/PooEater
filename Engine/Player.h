#pragma once
#include "Entity.h"

class Player :
    public Entity
{
public:
    Player();
    Player(float x, float y);
    void moveX(float increment);
    void moveY(float increment);
    float getX() const;
    float getY() const;
    void draw(Graphics &gfx) const;
    void keepEntityInsideWindow();
public:
    static constexpr float WIDTH = 20;
    static constexpr float HEIGHT = 20;
};

