#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    const int32_t iONE = 1;
    const int32_t iTWO = 2;
    const int32_t iTHREE = 3;
    const int32_t iFOUR = 4;

    int x = 3;

    switch(x){
        case iONE:
            cout << "one";
            break;
        case iTWO:
            cout << "two";
            break;
        case iTHREE:
            cout << "three";
            break;
        case iFOUR:
            cout << "four";
            break;
        default:
            cout << "invalid";
            break;
    }

}