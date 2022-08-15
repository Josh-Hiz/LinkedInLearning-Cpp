#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

int main(int argc, char * argv[]){

    auto continuousAdd = [](int initial, int addBy){
        auto total = initial;
        return [total, addBy]() mutable{
            total += addBy;
            return total;
        };
    };

    auto x = continuousAdd(100,10);
    std::cout << x() << std::endl;
    std::cout << x() << std::endl;
    std::cout << x() << std::endl;
    std::cout << x() << std::endl;

    return 0;
}