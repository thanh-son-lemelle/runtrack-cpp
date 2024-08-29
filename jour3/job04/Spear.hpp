#ifndef SPEAR_HPP
#define SPEAR_HPP

#include "Weapon.hpp"

class Spear : public Weapon {
public:
    // Constructeur
    Spear();

    // Implémentation de la méthode attack
    void attack(Character& target) const override;

private:
    int range;
    int power;
};

#endif
