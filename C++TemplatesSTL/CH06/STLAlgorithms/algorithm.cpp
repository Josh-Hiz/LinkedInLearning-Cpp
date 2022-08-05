#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

template <typename T>
void displayVector(std::vector<T> & v){
    if(!v.size()) return;
    else for(auto e : v) {std::cout << e << " ";}
    std::cout << std::endl;
}

int main() {

    int n = 97;

    //Primes out of order
    std::vector<int> primeV = { 71, 13, 59, 7, 53, 29, 3, 97, 5, 11, 17, 19, 23, 2, 31, 83, 37, 41, 89, 43, 47, 61, 67, 73, 79 };

    displayVector(primeV);

    std::sort(primeV.begin(), primeV.end());
    displayVector(primeV);

    if(std::binary_search(primeV.begin(), primeV.end(), n)){
        std::cout << "Found " << n << std::endl;
    } else {
        std::cout << "Value not found";
    }

    return 0;
}
