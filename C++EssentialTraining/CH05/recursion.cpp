#include <iostream>
#include <math.h>

unsigned long int factorial(unsigned long int n){
    if(n <= 1 && n > 0){
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(){
    auto n = 5;
    std::cout << "Factorial of " << n << " is " << factorial(n);
    return 0;
}