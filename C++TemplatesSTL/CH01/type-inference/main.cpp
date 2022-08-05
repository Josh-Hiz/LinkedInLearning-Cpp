#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

int main() {

    int i = 46;
    const char * cstr = "this is a c-string";
    const string stringClass = string("this is a string class string");

    auto x = "This is a c string";
    decltype(x) y; //Make the type of y = type of x

    cout << "type of i is " << typeid(i).name() << endl;
    cout << "type of cstr is " << typeid(cstr).name() << endl;
    cout << "type of stringClass is " << typeid(stringClass).name() << endl;
    cout << "type of x is " << typeid(x).name() << endl;
    cout << "type of y is " << typeid(y).name() << endl;

    for(auto it = stringClass.begin(); it != stringClass.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    for(char stringClas : stringClass){
        cout << stringClas << " ";
    }
    cout << endl;

    return 0;
}
