#ifndef BOW_HPP
#define BOW_HPP

#include "Weapon.hpp"

class Bow : public Weapon {
public:
    // Constructeur
    Bow();

    // Implémentation de la méthode attack
    void attack(Character& target) const override;

private:
    int range;
    int power;
};

#endif
