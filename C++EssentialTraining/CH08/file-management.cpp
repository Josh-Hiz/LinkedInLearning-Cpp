#include <cstdio>
#include <iostream>

using namespace std;

int main(){
    static const char* fn1 = "file1";
    static const char* fn2 = "file2";
    rename(fn1, fn2);
    cout << "Writing done" << endl;
    return 0;
}