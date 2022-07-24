#include <iostream>

int main(){
//Pointers
    int x = 7, y = 42;
    int* ip = &x;

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << *ip << std::endl;

    x = 73;
    std::cout << x << std::endl;

    ip = &y;
    std::cout << *ip << std::endl;

//References
    int x2 = 7;
    int* ip2 = &x2;
    int& y2 = x2;

    std::cout << x2 << std::endl;
    std::cout << y2 << std::endl;
    std::cout << *ip2 << std::endl;

    y2 = 70;

    std::cout << x2 << std::endl;
    std::cout << y2 << std::endl;
    std::cout << *ip2 << std::endl;

    return 0;
}