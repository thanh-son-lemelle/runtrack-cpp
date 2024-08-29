#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include <iostream>
#include "Vector2D.hpp"

class GameObject : public Vector2D
{
    public:
        GameObject(double x = 0, double y = 0);

        virtual void update() = 0;
        virtual void draw() const = 0;

        virtual ~GameObject() = default;
};

#endif // GAMEOBJECT_HPP