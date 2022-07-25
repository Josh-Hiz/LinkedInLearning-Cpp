#include <iostream>
#include <stdio.h>

const size_t byte = 8;

using namespace std;

int main(){

    float f;
    double df;
    long double ldf;

    cout << "Float in bits: " << sizeof(f) * byte << endl;
    cout << "Double in bits: " << sizeof(df) * byte << endl;
    cout << "Long double in bits: " << sizeof(ldf) * byte << endl;


    return 0;
}