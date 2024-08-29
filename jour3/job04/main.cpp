#include "Character.hpp"
#include "Decor.hpp"
#include "Sword.hpp"
#include "Bow.hpp"
#include "Spear.hpp"


#include <iostream>

int main() {

    auto character = new Character("Alice", 100, 0.0, 0.0);
    auto decor = new Decor(1.0, 1.0);
    
    character->draw();
    decor->draw();

    character->update();
    decor->update();

    character->draw();
    decor->draw();

    auto primaryWeapon = new Sword();
    auto secondaryWeapon = new Bow();
    auto tertiaryWeapon = new Spear();

    primaryWeapon->attack(*character);
    secondaryWeapon->attack(*character);
    tertiaryWeapon->attack(*character);
    

    character->draw();
    if (!character->isAlive()) {
        std::cout << "Character is dead" << std::endl;
    }
    else {
        std::cout << "Character is alive avec "<< character->getHealthPoints() << "points de vie" << std::endl;
    }

    return 0;
}