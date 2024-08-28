#include <iostream>
#include <stdexcept>

int main(){
    int init = 0;
    int number;
    int result;
    bool validInput = false;
    while (init==0)
    {
        try
        {
            std::cout << "Enter a number: ";

            std::cin >> number;
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(256, '\n');
                throw std::runtime_error("Invalid input.");
            }
            validInput = true;
        }
        catch(const std::exception& e)
        {
            std::cerr << "Error: " << e.what() << '\n';
            validInput = false;
        }
        if (validInput){
            result = number % 2;
            if (result == 0)
            {
                std::cout << "The number " << number << " is even." << std::endl;
            }
            else
            {
                std::cout << "The number " << number << " is odd." << std::endl;
            }
        }
    }
    return 0;
}