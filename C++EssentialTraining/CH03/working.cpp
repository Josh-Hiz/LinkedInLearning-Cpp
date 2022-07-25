#include <cstdio>
#include <iostream>
using namespace std;

int main()
{

    int i = 5;
    int& ir = i;
    ir = 10;

    cout << i << endl;

//    puts("Hello,\n\tWorld \' \\ \x40");
    return 0;
}
