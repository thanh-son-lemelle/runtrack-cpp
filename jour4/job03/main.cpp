#include <iostream>
#include "BoxPtr.hpp"
#include <string>

int main() {
    int x = 123;
    Box<int*> ptrBox(&x);

    std::cout << "Value in box: " << ptrBox.getValue() << std::endl;

    int y = 456;
    ptrBox.setValue(&y);
    std::cout << "Updated value in box: " << ptrBox.getValue() << std::endl;

    std::string z = "Hello";
    Box<std::string*> ptrBoxString(&z);
    std::cout << "String in box: " << ptrBoxString.getValue() << std::endl;


    return 0;
}
