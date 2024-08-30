#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>

class Shape {
public:
    virtual void draw() const = 0;
    virtual ~Shape() {}
};

#endif // SHAPE_HPP
