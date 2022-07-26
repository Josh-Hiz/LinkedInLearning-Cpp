#include <iostream>

//Challenge: Make a factorial function that does not use recursion

unsigned long long int factorial(unsigned long long int n){

    int i = n - 1;

    while(i != 1){
        n *= i;
        i--;
    }

    return n;
}

int main() {
    int n = 10;
    std::cout << factorial(n);
    return 0;
}
