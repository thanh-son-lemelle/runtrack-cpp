#include <iostream>

int main()
{
    int init = 1;
    long in = 0;
    long out = 0;
    while(init)
    {
        std::cout << "Enter a number: ";
        std::cin >> in;
        if(std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cerr << "Invalid input." << std::endl;
            std::cerr << "Please try again." << std::endl;
        }
        else
        {
            init = 0;
        }
    }
    while(in)
    {
        out *= 10;
        out += in % 10;
        in /= 10;
    }
    std::cout << out << std::endl;
    return 0;
}