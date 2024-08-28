#include "Aquatique.hpp"

#include <iostream>

Aquatique::Aquatique(double speed)
{
    swimSpeed = speed;
}

Aquatique::~Aquatique()
{
}

double Aquatique::getSwimSpeed() const
{
    return swimSpeed;
}

void Aquatique::swim()
{
    std::cout << "I'm swimming at " << swimSpeed << " m/s" << std::endl;
}