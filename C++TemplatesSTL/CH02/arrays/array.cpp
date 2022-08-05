#include <iostream>
#include <array>
#include <string>

using namespace std;

template<typename T, size_t N>
void printArray(std::array<T,N> & a){
    for(T & i: a){
        std::cout << i << " ";
    } std::cout << std::endl;
}

int main() {

    //Init list
    cout << "Init list" << endl;
    array<int, 5> a1 = {1,2,3,4,5};
    printArray(a1);

    //Default constructor
    cout << "Default constructor" << endl;
    array<string, 5> a2;
    a2 = {"one", "two", "three", "four", "five"};
    printArray(a2);

    cout << endl;

    cout << a1.size() << endl;
    cout << a2.size() << endl;

    cout << endl;

    //Access elements are the same as vector
    cout << a1[1] << endl;
    cout << a2[4] << endl;

    //Direct data access
    int * ip1 = a1.data();
    for (auto i = 0; i < a1.size(); ++i){
        cout << "Element " << i << " is " << *ip1++ << endl;
    }

    return 0;
}
