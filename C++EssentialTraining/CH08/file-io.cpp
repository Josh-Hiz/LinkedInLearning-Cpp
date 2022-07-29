#include <iostream>
#include <cstdio>

//File I/O implementation in C format (NOT C++)

constexpr int maxstring = 1024;
constexpr int repeat = 5;

int main() {

    const char* fn = "testfile.txt";
    const char* str = "This is a literal c-string.\n";

    //Create / Write the file
    std::cout << "Writing file" << std::endl;
    FILE* fw = fopen(fn, "w");

    for(int i = 0; i < repeat; i++){
        fputs(str, fw);
    }
    fclose(fw);

    std::cout << "writing is over" << std::endl;

    //Read the file
    std::cout << "Reading file" << std::endl;
    char buf[maxstring];
    FILE* fr = fopen(fn, "r");

    while(fgets(buf, maxstring, fr)){
        fputs(buf, stdout);
    }

    fclose(fr);
    remove(fn);

    std::cout << "Done";
    return 0;

}
