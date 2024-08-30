#ifndef BOX_HPP
#define BOX_HPP

template<typename T>
class Box {
private:
    T value;

public:
    Box(const T& val) : value(val) {}
    T getValue() const { return value; }
    void setValue(const T& val) { value = val; }
};

#endif // BOX_HPP
