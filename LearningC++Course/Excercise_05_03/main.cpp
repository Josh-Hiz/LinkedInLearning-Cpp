#include <iostream>
#include <math.h>
//Parameters

int square(int x){
    return pow (x, 2);
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y; //Swap x pointer with y
    *y = temp; //Swap y pointer with x
}

void swap(int& x, int& y){
    int temp = x;
    x = y; //Swap x reference with y
    y = temp; //Swap y reference with x
}

int main() {

    int a = 9, b;
    b = square(a);

    std::cout << " a = " << a << ", b = " << b << std::endl;
    //Swap
    swap(&a, &b);
    std::cout << " a = " << a << ", b = " << b << std::endl;
    //Swap
    swap(a,b);
    std::cout << " a = " << a << ", b = " << b << std::endl;

    return 0;

}
