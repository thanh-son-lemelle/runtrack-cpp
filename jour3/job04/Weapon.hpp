#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Character.hpp"

class Weapon {
public:
    // Méthode virtuelle pure pour l'attaque
    virtual void attack(Character& target) const = 0;

    // Destructeur virtuel pour assurer la bonne destruction des objets dérivés
    virtual ~Weapon() = default;
};

#endif
