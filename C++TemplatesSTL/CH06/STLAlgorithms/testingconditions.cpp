#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

template <typename T>
const bool isPrime(const T & num){ //Either returns false or true if number is prime
    if (num <= 1) {
        return false;
    } else {
        bool primeFlag = true;
        for(T l = 2; l < num; ++l){
            if(num % l == 0) {
                primeFlag = false;
                break;
            }
        }
        return primeFlag;
    }
}

template <typename T>
void displayVector(std::vector<T> & v){
    if(!v.size()) return;
    else for(auto e : v) {std::cout << e << " ";}
    std::cout << std::endl;
}

int main(){

    std::vector<int> primeV = { 71, 13, 59, 7, 53, 29, 3, 97, 5, 11, 17, 19, 23, 2, 31, 83, 37, 41, 89, 43, 47, 61, 67, 73, 79 };
    displayVector(primeV);

    if(std::any_of(primeV.begin(),primeV.end(), isPrime<int>)){
        std::cout << "All elements in this vector are primes " << std::endl;
    } else {
        std::cout << "At least one element in this vector is not a prime number " << std::endl;
    }

    return 0;
}
