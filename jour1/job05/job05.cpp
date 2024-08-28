#include <iostream>

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int x;
    int y;
    std::cout << "Enter the first number: ";
    std::cin >> x;
    std::cout << "Enter the second number: ";
    std::cin >> y;
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
    swap(&x, &y);
    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;
}