#ifndef GOBLIN_HPP
#define GOBLIN_HPP

#include "Enemy.hpp"

class Goblin : public Enemy {
public:
    void attack() const override {
        std::cout << "Goblin attacks!" << std::endl;
    }
};

#endif // GOBLIN_HPP