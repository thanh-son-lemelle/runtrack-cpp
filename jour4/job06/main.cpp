#include <iostream>
#include "shapeFactoryTemplate.hpp"


int main() {
    Circle* circle = ShapeFactory::createShape<Circle>();
    Rectangle* rectangle = ShapeFactory::createShape<Rectangle>();

    circle->draw();
    rectangle->draw();

    delete circle;
    delete rectangle;

    return 0;
}
