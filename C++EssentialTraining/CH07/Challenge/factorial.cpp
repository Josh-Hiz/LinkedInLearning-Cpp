#include <iostream>

//Challenge: Make a C++ template that has a function to perform the factorial on any numerical type;
template <typename F>
F factorial(F n){
    int i = n - 1;
    while(i != 0){
        n *= i;
        i--;
    }
    return n;
}

int main() {

    long long int lli = 15;

    std::cout << factorial(lli) << std::endl;
    return 0;
}
