#include <iostream>

//Integers and Fixed size integers

int main() {

    char c = 0;
    short int shortInt = 0;
    int i = 0;
    long int longInt = 0;
    long long int longlongInt = 0;

    std::cout << "Char in bits: " << sizeof(c) * 8 << std::endl;
    std::cout << "Short int in bits: " << sizeof(shortInt) * 8 << std::endl;
    std::cout << "Int  in bits: " << sizeof(i) * 8 << std::endl;
    std::cout << "Long int in bits: " << sizeof(longInt) * 8 << std::endl;
    std::cout << "Long long int in bits: " << sizeof(longlongInt) * 8 << std::endl;

    return 0;
}
