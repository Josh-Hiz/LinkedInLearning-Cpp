#include <iostream>
#include <vector>

//While & Do-While

std::vector<int> numbers = {12,42,54,21};

using namespace std;
int main() {

    //With iterator declaration and initialization
    auto ptr = numbers.begin();

    while (ptr != numbers.end()){
        cout << *ptr << endl;
        ptr = next(ptr, 1); //Advances the current pointer to the next index
    }
    cout << endl;

    //Do while with variable
    int j = 0;
    do{
        cout << numbers[j] << endl;
        j++;
    } while(j < numbers.size());
    cout << endl;

//    While with variable no iterators
    int a = 0;
    while(a < numbers.size()){
        std::cout << numbers[a] << std::endl;
        a++;
    }


    return 0;
}
