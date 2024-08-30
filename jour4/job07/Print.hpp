#ifndef PRINT_HPP
#define PRINT_HPP

#include <iostream>

template<typename T>
void print(const T& t) {
    std::cout << t << std::endl;
}

template<typename T, typename... Args>
void print(const T& t, const Args&... args) {
    std::cout << t << ", ";
    print(args...);
}

#endif // PRINT_HPP
