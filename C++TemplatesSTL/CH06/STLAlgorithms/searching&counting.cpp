#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

template <typename T>
void displayVector(T & v){
    if(!v.size()) return;
    else for(auto e : v) {std::cout << e << " ";}
    std::cout << std::endl;
}

template <typename T>
bool isOdd(const T & n) {
    return ((n % 2) == 1);
}

int main() {

    std::vector<int> v1 = {71, 13, 59, 7, 53, 29, 3, 97, 5, 11, 17, 19, 23, 2, 31, 83, 37, 41, 89, 43, 47, 61, 67,
                                 73, 79};
    sort(v1.begin(), v1.end());
    displayVector(v1);

    //Sequential search
    auto it = std::find_if(v1.begin(), v1.end(), isOdd<int>);

    if(it != v1.end()){
        size_t index = it - v1.begin();
        std::cout << *it << std::endl;
        std::cout << "Found at index " << index << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }
    return 0;
}