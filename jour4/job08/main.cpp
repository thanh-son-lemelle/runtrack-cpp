#include "EnemyFactory.hpp"

int main() {
    EnemyFactory factory;

    Enemy* goblin = factory.createEnemy("Goblin");
    Enemy* ogre = factory.createEnemy("Ogre");
    Enemy* dragon = factory.createEnemy("Dragon");

    if (goblin) goblin->attack();
    if (ogre) ogre->attack();
    if (dragon) dragon->attack();

    delete goblin;
    delete ogre;
    delete dragon;

    return 0;
}
