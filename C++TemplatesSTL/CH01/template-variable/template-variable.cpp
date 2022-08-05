#include <iostream>

template<class T>
constexpr T pi = T(3.14159263554698269269L);

template<typename T>
T areaOfCircle(const T & r){
    return r * r * pi<T>;
}

int main() {
    std::cout.precision(10);
    std::cout << pi<double> << std::endl;
    std::cout.precision(2);
    std::cout << pi<long double> << std::endl;

    return 0;
}
