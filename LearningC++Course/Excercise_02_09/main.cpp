#include <iostream>

//Type Casting

using namespace std;

float flt = -7.44f;
int32_t sgn;
uint32_t unsgn;

int main() {

    sgn = flt;
    unsgn = sgn;

    cout << "Float: " << flt << endl;
    cout << "Signed: " << sgn << endl;
    cout << "Unsigned: " << unsgn << endl;

    int tempF = 100;
    int celF;

    celF = ((float) 5/9) * (tempF - 32);

    cout << tempF << endl;
    cout << celF << endl;

    float weight = 10.99f;
    cout << endl;
    cout << weight << endl;
    cout << (int) weight << endl;
    cout << (int)((weight - (int) weight) * 10000) << endl;

    return 0;
}
