#include "Decor.hpp"
#include <iostream>

Decor::Decor(double x, double y)
    : GameObject(x, y) {}

void Decor::update(){
    // positon of the decor is not updated
}

void Decor::draw() const{
    std::cout << "Decor at (" << getX() << ", " << getY() << ")" << std::endl;
}