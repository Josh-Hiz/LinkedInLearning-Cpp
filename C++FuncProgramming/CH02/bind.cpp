#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

    auto greaterThan(int first, int second){
        return first >= second;
    }


int main(int argc, char * argv[]){

    vector<int> ages{9,20,13,4,5,6,10,28,19,15,60,23,47,12,19,99};
    int over21 = 0;

    for(auto age : ages){
        if(age >= 21){
            over21++;
        }
    }

    std::cout << "Over 21: " << over21 << std::endl;

    auto numOver21 = std::count_if(ages.begin(), ages.end(),std::bind(&greaterThan, std::placeholders::_1, 21));
    std::cout << numOver21;
    return 0;
}