#include "Pinguin.hpp"

#include <iostream>

Pinguin::Pinguin(double swimSpeed,double walkSpeed) : Aquatique(swimSpeed), Terrestre(walkSpeed)
{
}

Pinguin::~Pinguin()
{
}

void Pinguin::selfIntroduction()
{
    std::cout << "I'm a pinguin, I can swim at " << getSwimSpeed() << " m/s and walk at " << getWalkSpeed() << " m/s" << std::endl;
}