#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class C{
private:
    int i = 0;
public:
    void setValue(int value){
        i = value;
    }

    int getValue(){
        return i;
    }
};

int main(){

    int num = 10;

    C c;

    c.setValue(num);
    cout << c.getValue();

    return 0;
}