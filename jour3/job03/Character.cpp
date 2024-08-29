#include "Character.hpp"
#include <iostream>

Character::Character(const std::string& name, int hp, double x, double y)
    : GameObject(x, y), name(name), healthPoints(hp) {}

void Character::draw() const {
    std::cout << "Drawing character " << name << " at (" << getX() << ", " << getY() << ")" << std::endl;
}

void Character::update() {
    // position of the character is updated
    setX(getX() + 1);
}

bool Character::isAlive() const {
    return healthPoints > 0;
}

const std::string& Character::getName() const {
    return name;
}

int Character::getHealthPoints() const {
    return healthPoints;
}

void Character::takeDamage(int damage) {
    healthPoints -= damage;
    if (healthPoints < 0) {
        healthPoints = 0;
    }
}
