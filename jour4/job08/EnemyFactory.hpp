#ifndef ENEMY_FACTORY_HPP
#define ENEMY_FACTORY_HPP

#include "enemy.hpp"
#include "goblin.hpp"
#include "ogre.hpp"
#include "dragon.hpp"

#include <string>
#include <unordered_map>
#include <functional>

class EnemyFactory {
private:
    std::unordered_map<std::string, std::function<Enemy*()>> enemyMap;

public:
    EnemyFactory() {
        enemyMap["Goblin"] = []() { return new Goblin(); };
        enemyMap["Ogre"] = []() { return new Ogre(); };
        enemyMap["Dragon"] = []() { return new Dragon(); };
    }

    Enemy* createEnemy(const std::string& enemyType) {
        auto it = enemyMap.find(enemyType);
        if (it != enemyMap.end()) {
            return it->second();
        }
        return nullptr;
    }
};

#endif // ENEMY_FACTORY_HPP
