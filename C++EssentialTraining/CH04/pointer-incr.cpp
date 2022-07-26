#include <iostream>
using namespace std;

void printP(uint32_t* p){
    cout << "Pointer is " << p << " Value: " << *p << endl;

}

int main(){

    uint32_t arr[5] = {1,2,3,4,5};
    uint32_t* p = arr;
    printP(p++);
    printP(p++);
    printP(p++);

    return 0;
}