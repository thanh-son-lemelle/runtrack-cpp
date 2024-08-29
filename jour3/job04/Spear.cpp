#include "Spear.hpp"
#include <iostream>

Spear::Spear() : range(2), power(2) {}

void Spear::attack(Character& target) const {
    std::cout << "Attacking with Spear at range " << range << " and power " << power << std::endl;
    target.takeDamage(power);
}
