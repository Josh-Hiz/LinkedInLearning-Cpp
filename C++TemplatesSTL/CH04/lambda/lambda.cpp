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

    int accum;
    //Acts similar to a functor
//    auto x = [accum = 14](int d) mutable -> int {return accum += d;};

    std::vector<int> v1 = {1,2,3,4,5};

    displayVector(v1);

    std::vector<int> v2(v1.size());
    //d will be equal to element + n
    std::transform(v1.begin(), v1.end(), v2.begin(), [accum = 14](int d) mutable -> int {
        return accum += d;
    });

    displayVector(v2);

    return 0;
}
