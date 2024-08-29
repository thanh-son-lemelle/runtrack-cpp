#include "Pinguin.hpp"

#include <iostream>
#include <algorithm>

//initialisation de la liste des pingouins (vecteur statique)
std::vector<std::shared_ptr<Pinguin>> Pinguin::pinguinList;
// Factory method for creating Pinguin instances
std::shared_ptr<Pinguin> Pinguin::create(double swimSpeed, double walkSpeed) {
    std::shared_ptr<Pinguin> pinguinPtr(new Pinguin(swimSpeed, walkSpeed));
    pinguinList.push_back(pinguinPtr);
    return pinguinPtr;
}

// Factory method for creating Pinguin instances using copy constructor
std::shared_ptr<Pinguin> Pinguin::copyCreate(const Pinguin &other, double slideSpeed) {
    std::shared_ptr<Pinguin> pinguinPtr(new Pinguin(other, slideSpeed));
    pinguinList.push_back(pinguinPtr);
    return pinguinPtr;
}
//constructeur
Pinguin::Pinguin(double swimSpeed, double walkSpeed) 
    : Aquatique(swimSpeed), Terrestre(walkSpeed) {}

//copy constructor
Pinguin::Pinguin(const Pinguin &other, double slideSpeed)
    : Aquatique(other.getSwimSpeed()), Terrestre(other.getWalkSpeed()), slideSpeed(other.slideSpeed) {}

//destructeur
Pinguin::~Pinguin()
{
    // Supprime l'objet de la liste
    auto it = std::find_if(pinguinList.begin(), pinguinList.end(),
        [this](const std::shared_ptr<Pinguin> &ptr) { return ptr.get() == this; });
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
    std::cout << "I'm sliding at " << getSlideSpeed() << " m/s" << std::endl;
}

double Pinguin::getSlideSpeed() const
{
    return slideSpeed;
}

size_t Pinguin::getPinguinCount()
{
    return pinguinList.size();
}