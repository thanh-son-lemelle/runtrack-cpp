#include "Terrestre.hpp"

#include <iostream>

Terrestre::Terrestre(double speed)
{
    walkSpeed = speed;
}

Terrestre::~Terrestre()
{
}

double Terrestre::getWalkSpeed() const
{
    return walkSpeed;
}

void Terrestre::walk()
{
    std::cout << "I'm walking at " << walkSpeed << " m/s" << std::endl;
}