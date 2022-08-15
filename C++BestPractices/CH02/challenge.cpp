#include <iostream>

template<typename T>
T summer(T v){
    return v;
}

template<typename T, typename ... Args>
T summer(T first, Args ... args){
    return summer(args ...) + first;
}

int main(int argc, char * argv[]){
    std::cout << summer(1,2,3,5) << std::endl;
    return 0;
}