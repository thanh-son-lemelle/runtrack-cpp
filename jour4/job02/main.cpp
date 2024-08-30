#include <iostream>
#include "box.hpp"

int main() {
    Box<int> intBox(123);
    Box<std::string> strBox("Hello");

    std::cout << "Integer in box: " << intBox.getValue() << std::endl;
    std::cout << "String in box: " << strBox.getValue() << std::endl;

    intBox.setValue(456);
    strBox.setValue("World");

    std::cout << "Updated Integer in box: " << intBox.getValue() << std::endl;
    std::cout << "Updated String in box: " << strBox.getValue() << std::endl;

    return 0;
}
