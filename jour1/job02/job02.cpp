#include <iostream>
#include <stdexcept>

int main() {
    int init = 0;

    while (init == 0) {
        int number = 0;
        try {
            std::cout << "Enter a number: ";
            std::cin >> number;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(256, '\n');
                throw std::runtime_error("Invalid input for the first number.");
            }

            int numberCopy = number;
            std::cout << "numberCopy: " << numberCopy << std::endl;
            std::cout << "Enter another number: ";
            std::cin >> number;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(256, '\n');
                throw std::runtime_error("Invalid input for the second number.");
            }

            int result = numberCopy * number;
            std::cout << "The result is " << result << std::endl;
        } catch (const std::exception &e) {
            std::cerr << "Error: " << e.what() << std::endl;
            std::cerr << "Please try again." << std::endl;
            std::cin.clear();
        }

        char quit= ' ';
        while (quit != 'y' && quit != 'n'){
            std::cout << "Do you want to continue? (y/n): ";
            
            std::cin >> quit;

            if (quit == 'n') {
                init = 1;
                std::cout << "Goodbye!" << std::endl;
            }
            else if (quit != 'y')
            {
                std::cerr << "Invalid input for the choice." << std::endl;
            }
            else {
                std::cout << "Continuing..." << std::endl;
            }
        }
    }
    return 0;
}
