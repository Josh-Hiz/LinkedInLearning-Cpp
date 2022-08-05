#include <iostream>
#include <string>
#include <vector>

//Template functions, template syntax, template specialization, and type deduction
//typename = class in usage, for me, use class

template <typename T>
T maxOf(const T& a , const T& b){
    return a > b ? a : b;
}

template <typename T>
void printVector(const std::vector<T> & v){
    for(auto i : v){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}



int main() {

    int a = 7;
    int b = 10;

    std::cout << "Max of a & b is: " << maxOf<int>(a , b) << std::endl;
    std::cout << "Max of a & b is: " << maxOf(a , b) << std::endl;
    std::cout << "Max of a & b is: " << maxOf<unsigned long long int>(a , b) << std::endl;

    std::vector<int> v1 = {1,2,3,4,5};
    printVector(v1); //Can deduce it is strings

    return 0;
}
