#include <iostream>
#include <cstdio>

//For & For in Range/For in loop

int main() {

    int array[] = {1,2,3,4,5};

    char str[] = "Hello";

    for(char* p = str; *p != 0; p++){
        std::cout << "Letter in Hello: " << *p << std::endl;
    }

    std::cout << std::endl;

    for(int i = 0; i < 5; i++){
        std::cout << "Element ID (i): " << i << " Value: " << array[i] << std::endl;
    }

    std::cout << std::endl;

    for(int& i : array){
        std::cout << "i = " << i << std::endl;
    }

    return 0;
}