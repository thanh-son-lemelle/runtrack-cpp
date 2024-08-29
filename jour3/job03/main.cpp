#include "Character.hpp"
#include "Decor.hpp"

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

    return 0;
}