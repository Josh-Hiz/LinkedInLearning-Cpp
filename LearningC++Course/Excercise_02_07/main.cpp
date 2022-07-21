#include <iostream>

//Arrays

int age[4];
float temperature[] = {31.5f, 32.7f, 38.9f};

//#define AGE_LENGTH 4
const int AGE_LENGTH = 4;

int main() {

    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "The length of the Age array = " << AGE_LENGTH << std::endl;
    std::cout << "Age[0] = " << age[0] << " Age[1] = " << age[1] << " Age[2] = " << age[2] << " Age[3] = " << age[3] << std::endl;
    std::cout << std::endl;
    std::cout << "Temp[0] = " << temperature[0] << " Temp[1] = " << temperature[1] << " Temp[2] = " << temperature[2] << std::endl;

    return 0;
}
