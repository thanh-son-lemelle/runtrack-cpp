#include "Sword.hpp"
#include <iostream>

Sword::Sword() : range(1), power(4) {}

void Sword::attack(Character& target) const {
    std::cout << "Attacking with Sword at range " << range << " and power " << power << std::endl;
    target.takeDamage(power);
}
