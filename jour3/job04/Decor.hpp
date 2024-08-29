#ifndef DECOR_HPP
#define DECOR_HPP

#include "GameObject.hpp"

class Decor : public GameObject
{
    public:
        // Constructor
        Decor(double x = 0, double y = 0);

        // Override of GameObject::methods
        void update() override;
        void draw() const override;
};

#endif // DECOR_HPP