#include <iostream>
#include "DrawShape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"

int main() {
    Circle circle;
    Rectangle rectangle;

    drawShape(circle);
    drawShape(rectangle);

    return 0;
}
