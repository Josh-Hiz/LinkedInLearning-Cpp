#include <iostream>
#include <string>
#include <stdio.h>

struct S {
    int i;
    double d;
    const char* s;
};

int main(){

    S s1 = { 3 , 47.9, "chars are funny"};

    std::cout << s1.i << " " << s1.d << " " << s1.s << std::endl;

    return 0;
}