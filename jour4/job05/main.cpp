#include <iostream>
#include "shapeFactory.hpp"

int main() {
    Shape* shape1 = ShapeFactory::createShape("Circle");
    Shape* shape2 = ShapeFactory::createShape("Rectangle");

    if (shape1) shape1->draw();
    if (shape2) shape2->draw();

    delete shape1;
    delete shape2;

    return 0;
}
