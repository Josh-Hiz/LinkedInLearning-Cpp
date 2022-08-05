#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void displayVector(std::vector<T> v){
    if(!v.size()) return;
    for(T e : v){
        std::cout << e << " ";
    }
    std::cout << std::endl;
}

int main() {
    return 0;
}
