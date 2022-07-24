#include <iostream>
#include <cstdio>

int main(){
    int array[] = {1,2,3,4,5};
    int i = 0;

    while(i < 5){
        if(i == 2) {
            i++;
            continue;
        }
        std::cout << "Element: " << i << " equals " << array[i] << std::endl;
        i++;
    }
    return 0;
}