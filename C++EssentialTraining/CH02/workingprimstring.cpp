#include <iostream>
#include <string>

using namespace std;

int main(){

    char string[] = "Hello";
    char str[] = {'A','B','C','D','E',0};

    cout << str << endl;
    cout << string << endl;

    //Using pointer for loop
    for(char* charP = string; *charP != 0; charP++){
        cout << "Letter in Hello: " << *charP << endl;
    }

    return 0;
}