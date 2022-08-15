#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

int main(int argc, char *argv[]){

    auto render = [](auto collection) {
        for(const auto & val : collection){
            std::cout << val << std::endl;
        }
    };

    std::vector<int> intCollection{1,2,3,4,5,6,7,8,9,10};
    std::vector<int> outCollection;

    std::transform(intCollection.begin(), intCollection.end(), std::back_inserter(outCollection), [](const int & val) {
        return val * 3;
    });

    std::cout << "Transform" << std::endl;
    render(outCollection);

    return 0;
}