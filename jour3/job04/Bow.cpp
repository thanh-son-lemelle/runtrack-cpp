#include "Bow.hpp"
#include <iostream>

Bow::Bow() : range(4), power(1) {}

void Bow::attack(Character& target) const {
    std::cout << "Attacking with Bow at range " << range << " and power " << power << std::endl;
    target.takeDamage(power);
}
