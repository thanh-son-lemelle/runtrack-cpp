#ifndef SHAPE_FACTORY_HPP
#define SHAPE_FACTORY_HPP

#include "shape.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include <string>

class ShapeFactory {
public:
    static Shape* createShape(const std::string& shapeType) {
        if (shapeType == "Circle") {
            return new Circle();
        } else if (shapeType == "Rectangle") {
            return new Rectangle();
        }
        return nullptr;
    }
};

#endif // SHAPE_FACTORY_HPP
