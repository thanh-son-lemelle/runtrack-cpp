#ifndef BOXPTR_HPP
#define BOXPTR_HPP

#include "Box.hpp"

template<typename T>
class Box<T*> {
private:
    T* value;

public:
    Box(T* val) : value(val) {}
    T getValue() const { return *value; }
    void setValue(T* val) { value = val; }
};

#endif // BOX_PTR_HPP
