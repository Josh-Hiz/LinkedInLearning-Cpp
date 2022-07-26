#include <cstdio>
#include "func.h";
#include <iostream>

void func(int &i)
{
    i = 73;
    std::cout << "Value of i: " << i << std::endl;
}

int main()
{
    int i = 47;
    puts("this is main()");
    func(i);
    std::cout << i << std::endl;
    return 0;
}

