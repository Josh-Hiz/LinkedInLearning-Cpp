#include <iostream>

//If statements


int32_t a = 1023;
bool flag = false;
char letter = 'd';

int main() {

    if(a > 1000){
        std::cout << "a is over 1000" << std::endl;
    }

    if(a % 2 == 0){
        std::cout << "a is even" << std::endl;
    } else {
        std::cout << "a is odd" << std::endl;
    }

    return 0;
}
