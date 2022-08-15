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

    //Transform function
    std::transform(intCollection.begin(), intCollection.end(), std::back_inserter(outCollection), [](const int & val) {
        return val * 3;
    });

    std::cout << "Transform" << std::endl;
    render(outCollection);

    std::vector<int> filteredCollection;

    //Copy_if function
    std::copy_if(outCollection.begin(), outCollection.end(),
                 std::back_inserter(filteredCollection), [](int & val) {return val % 2 != 0;});
    std::cout << "Copy if collection:" << std::endl;

    render(filteredCollection);

    int results = std::accumulate(filteredCollection.begin(), filteredCollection.end(),0, [](int total, int current){return total + current;});

    std::cout << "Accumulate" <<std::endl;

    std::cout << "Results: " << results;

    return 0;
}