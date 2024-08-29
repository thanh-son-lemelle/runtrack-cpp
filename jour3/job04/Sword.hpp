#ifndef SWORD_HPP
#define SWORD_HPP

#include "Weapon.hpp"

class Sword : public Weapon {
public:
    // Constructeur
    Sword();

    // Implémentation de la méthode attack
    void attack(Character& target) const override;

private:
    int range;
    int power;
};

#endif
