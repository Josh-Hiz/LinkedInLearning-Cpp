#include <cstdio>
#include <iostream>

void func(){
    puts("This is the func() function");

}

int main(){

    puts("This is the main() function");
    void (*pfunc)() = func;
    (*pfunc)();
    return 0;
}