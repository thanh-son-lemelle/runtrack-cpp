#ifndef SHAPEFACTORYTEMPLATE_HPP
#define SHAPEFACTORYTEMPLATE_HPP

#include "shape.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include <string>
#include <unordered_map>
#include <functional>

class ShapeFactory {
public:
    template<typename T>
    static T* createShape() {
        return new T();
    }
};

#endif // SHAPE_FACTORY_TEMPLATE_HPP
