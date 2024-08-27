#include <iostream>

float TTCPrice( float* kiloPrice, float* weight, int* TVAValue){
    float TTC = *kiloPrice * *weight * (1 + *TVAValue / 100.0);
    return TTC;
}

int main(int argc, char const *argv[]){
    float kiloPrice;
    float weight;
    int TVAValue;
    
    std::cout << "Enter the price per kilo: ";
    std::cin >> kiloPrice;
    std::cout << "Enter the weight: ";
    std::cin >> weight;
    std::cout << "Enter the TVA value: ";
    std::cin >> TVAValue;
    std::cout << "The TTC price is " << TTCPrice(&kiloPrice, &weight, &TVAValue) << std::endl;
    return 0;
}
