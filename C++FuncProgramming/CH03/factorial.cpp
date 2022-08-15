#include <iostream>
#include <vector>

int factorial(const int input, const int sum = 1){
    if(input > 1){
        return factorial(input - 1, sum * input);
    }
    return sum;
}

template<int input, int sum = 1>
struct Factorial : Factorial<input - 1, input * sum> {
};

template<int sum>
struct Factorial<1, sum> {
    enum {
        value = sum
    };
};

int main(int argc, char * argv[]){

    std::cout << factorial(5) << std::endl;
    std::cout << Factorial<5>::value;
}