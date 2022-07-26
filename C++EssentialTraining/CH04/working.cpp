#include <iostream>

using namespace std;

int main() {

    //Common operators
    int x = 47;
    int y = 5;
    int z = x + y; // * / % - +
    x = y;
    cout << x << endl;
    cout << z << endl;

    //Compound assignment operators
    int x2 = 5;
    int y2 = 47;

    y2 += x2; //Same as y = y + x
    cout << y2 << endl;

    //Increment and decrement operators
    int x3 = 5;
    cout << --x << endl;

//    //Relational (comparison operators)
    int x4 = 5;
    int y4 = 42;

    if(x4 == y4){ // == != < > <= >=
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    //Logical operators
    bool a = true;
    bool b = false;

    if(a || b){ // && || !
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    //Ternary operator
    int x5 = 5;
    int y5 = 42;
    const char* s = x5 > y5 ? "true" : "false";
    cout << s << endl;

    //Casting
    int x6 = 5;
    long long int y6;
    y6 = x6;
    cout << x6 << endl;
    cout << y6 << endl;

    //Size of things
    int x7 = 5;
    cout << sizeof(x7) * 8 << endl; //Returns size_t

    return 0;
}
