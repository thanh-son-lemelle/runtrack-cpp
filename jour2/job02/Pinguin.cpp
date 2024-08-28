#include "Pinguin.hpp"

#include <iostream>
#include <algorithm>

//constructeur
Pinguin::Pinguin(double swimSpeed,double walkSpeed, double slidespeed) : Aquatique(swimSpeed), Terrestre(walkSpeed), slideSpeed(slidespeed)
{
}
/*copy constructor*/
Pinguin::Pinguin(const Pinguin &other)
        : Aquatique(other.getSwimSpeed()), Terrestre(other.getWalkSpeed()), slideSpeed(other.slideSpeed) 
{
    slideSpeed = other.slideSpeed;
}
//destructeur
Pinguin::~Pinguin()
{
}
void Pinguin::selfIntroduction()
{
    std::cout << "I'm a pinguin, I can swim at " << getSwimSpeed() << " m/s and walk at " << getWalkSpeed() << " m/s" << std::endl;
}

void Pinguin::setSlideSpeed(double speed)
{
    slideSpeed = speed;
}

void Pinguin::slide()
{
    std::cout << "I'm sliding at " << slideSpeed << " m/s" << std::endl;
}
