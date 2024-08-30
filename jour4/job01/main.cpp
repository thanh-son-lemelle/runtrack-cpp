#include <iostream>
#include "max.hpp"

int main() {
    int a = 5, b = 10;
    double c = 2.5, d = 1.5;
    std::string e = "apple", f = "orange";

    std::cout << "Max of " << a << " and " << b << " is: " << myMax(a, b) << std::endl;
    std::cout << "Max of " << c << " and " << d << " is: " << myMax(c, d) << std::endl;
    std::cout << "Max of " << e << " and " << f << " is: " << myMax(e, f) << std::endl;

    return 0;
}
