#include <iostream>

int main(){

    int array[] = {1,2,3,4,5};
    for(auto& i : array){
        std::cout << i << ", ";
    }

    return 0;
}