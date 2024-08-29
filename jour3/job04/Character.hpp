#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "GameObject.hpp"
#include <string>

class Character : public GameObject {
private:
    std::string name;
    int healthPoints;

public:
    // Constructeur
    Character(const std::string& name, int hp, double x = 0, double y = 0);

    // Implémentation des méthodes virtuelles
    void draw() const override;
    void update() override;
    
    // Autres méthodes
    bool isAlive() const;
    const std::string& getName() const;
    int getHealthPoints() const;
    void takeDamage(int damage);
};

#endif
