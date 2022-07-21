#include <iostream>
#include <string>
#include <cstdint>

#define CAPACITY 5000
#define DEBUG

using namespace std;
//Preprocessor directives
int main() {

    int32_t large = CAPACITY;
    uint8_t small = 37;

#ifdef DEBUG
    cout << "[About to perform the addition] \n";
#endif

    large += small;

    std::cout << "Large = " << large << std::endl;

    return 0;
}
