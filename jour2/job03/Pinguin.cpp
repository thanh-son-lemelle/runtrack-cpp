#include "Pinguin.hpp"

#include <iostream>
#include <algorithm>

//initialisation de la liste des pingouins (vecteur statique)
std::vector<std::shared_ptr<Pinguin>> Pinguin::pinguinList;
//constructeur
Pinguin::Pinguin(double swimSpeed,double walkSpeed, double slidespeed) : Aquatique(swimSpeed), Terrestre(walkSpeed), slideSpeed(slidespeed)
{
}
/*copy constructor*/
Pinguin::Pinguin(const Pinguin &other)
        : Aquatique(other.getSwimSpeed()), Terrestre(other.getWalkSpeed()), slideSpeed(other.slideSpeed) 
{
    slideSpeed = other.slideSpeed;
    pinguinList.push_back(shared_from_this());
}
//destructeur
Pinguin::~Pinguin()
{
    //suppression de l'objet de la liste
    auto it = std::find(pinguinList.begin(), pinguinList.end(), shared_from_this());
    if (it != pinguinList.end())
    {
        pinguinList.erase(it);
    }
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

size_t Pinguin::getPinguinCount()
{
    return pinguinList.size();
}