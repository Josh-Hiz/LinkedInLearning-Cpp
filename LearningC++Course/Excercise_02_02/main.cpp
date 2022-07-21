#include <iostream>
#include <string>

using namespace std;

//Global int variables
int a, b = 5; //Allocated in the data segment of memory

int main() {

    bool flag;
    a = 7;
    flag = false;

    cout << "a = " << a << endl;
    cout << "b = "  << b << endl;
    cout << "The flag is: " <<  flag << endl;

    flag = true;

    cout << "a + b = " << a + b << endl;
    cout << "b - a = " << b - a << endl;
    cout << "The flag now is: " << flag << endl;

    unsigned int positive;
    positive = b - a;
    cout << "b - a (unsigned) = " << positive << endl;

    return 0;
}
