#include "Pinguin.hpp"
#include <iostream>

int main() {
    auto pinguin1 = Pinguin::create(2.0, 1.0);
    auto pinguin2 = Pinguin::copyCreate(*pinguin1, 3.0);

    pinguin1->selfIntroduction();
    pinguin2->slide();

    std::cout << "Total pinguins: " << Pinguin::getPinguinCount() << std::endl;

    pinguin1.reset();

    std::cout << "Total pinguins: " << Pinguin::getPinguinCount() << std::endl;

    return 0;
}
