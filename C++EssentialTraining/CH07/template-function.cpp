#include <iostream>
#include <string>

template <typename T>
T maxOf(T a, T b){
    return (a > b ? a : b);
}

int main() {

    std::cout << maxOf<std::string>("bbb", "aaa") << std::endl;

    return 0;

}
