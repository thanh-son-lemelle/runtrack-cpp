#include <iostream>
#include <stdexcept>

int main(){
    int init =0;
    int number = 0;
    int result = 0;
    while (init<5){
        
        try{
            std::cout << "Enter a number: ";
            std::cin >> number;
            if (std::cin.fail()){
                std::cin.clear();
                std::cin.ignore(256, '\n');
                throw std::runtime_error("Invalid input.");
            }
        }
        catch (const std::exception &e){
            std::cerr << "Error: " << e.what() << std::endl;
            std::cerr << "Please try again." << std::endl;
            std::cin.clear();
        }
        init++;
        result += number;
    }
    result = result / init;
    std::cout << "The result is " << result << std::endl;
    return 0;
}