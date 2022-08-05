#include <iostream>
#include <iterator>

int main() {

    std::ostream_iterator<int> output(std::cout, " ");

    for(int i : {3, 197, 42, 0}){
        *output++ = i;
    }
    std::cout << std::endl;

    return 0;


}
