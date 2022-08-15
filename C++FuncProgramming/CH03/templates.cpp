#include <iostream>
#include <vector>

//Run time
template<typename T>
T cube(const T & value) {
    return value * value * value;
}

//Compile time
template<int toCube>
struct Cube {
    enum {
        value = toCube * toCube * toCube
    };
};

int main() {

    std::cout << "Cubed: " << cube(3) << std::endl;
    std::cout << "Cubed: " << Cube<3>::value << std::endl;

    return 0;
}
