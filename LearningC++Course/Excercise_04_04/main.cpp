#include <iostream>
#include <vector>

//For loops

float average;
std::vector<int> numbers = {11,11,23,1,5};

int main() {
    average = 0.0f;
    for(int i = 0; i < numbers.size(); i++){
        average += numbers[i];
    }

    std::cout << (average / numbers.size()) << std::endl;

    std::cout << std::endl;

    average = 0.0f;

    for(auto j : numbers){
        average += j;
    }
    average /= numbers.size();

    std::cout << average << std::endl;

    return 0;
}
