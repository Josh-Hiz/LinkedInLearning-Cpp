#include <iostream>
#include <vector>
#include <numeric>

int main() {

    auto header = [](const std::string & title){
        std::cout << "--- " << title << " ---" << "\n";
    };

    auto render = [](auto collection){
        for(const auto & val : collection){
            std::cout << val << " ";
        }
        printf("\n");
    };

    header("Map");
    std::vector<int> inCollection{11,12,13,14,15,16,17,18,19,20};
    std::vector<int> outCollection;
    std::transform(inCollection.begin(), inCollection.end(), std::back_inserter(outCollection),[](const int & value) { return value * 3; });
    render(outCollection);

    header("Filter");
    std::vector<int> filteredCollection;
    std::copy_if(outCollection.begin(), outCollection.end(), std::back_inserter(filteredCollection),[](const int & value) { return value % 2 != 0; });
    render(filteredCollection);

    header("Reduce");
    int results = std::accumulate(filteredCollection.begin(), filteredCollection.end(), 0, [](int total, int current) { return total + current; });
    std::cout << "Result: " << results <<  std::endl;

    return 0;
}
