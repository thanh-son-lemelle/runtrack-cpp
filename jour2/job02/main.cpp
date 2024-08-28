#include "Pinguin.hpp"
#include <iostream>

int main() {
    // Création d'un objet Pingouin
    Pinguin *pingu1 = new Pinguin(5.0, 2.0, 10.0);  // Vitesse de nage : 5 m/s, marche : 2 m/s, glisse : 10 m/s

    pingu1->selfIntroduction();
    pingu1->swim();
    pingu1->walk();
    pingu1->slide();

    // Utilisation du constructeur de copie
    Pinguin *pingu2 = new Pinguin(*pingu1);  // Copie de pingu1

    pingu2->selfIntroduction();
    pingu2->setSlideSpeed(15.0);  // Modification de la vitesse de glisse
    pingu2->slide();

    std::cout << "changement attribut de pingu1" << std::endl;
    pingu1->setSwimSpeed(10.0);  // Modification de la vitesse de nage
    pingu1->selfIntroduction();
    pingu2->selfIntroduction();

    std::cout << "copie de pingu2 dans pingu3" << std::endl;

    Pinguin pingu3 = *pingu2;  // Copie de pingu2
    pingu3.selfIntroduction();

    std::cout << "changement attribut de pingu2" << std::endl;
    pingu2->setSwimSpeed(20.0);  // Modification de la vitesse de nage
    pingu2->selfIntroduction();
    pingu3.selfIntroduction();

    return 0;
}
