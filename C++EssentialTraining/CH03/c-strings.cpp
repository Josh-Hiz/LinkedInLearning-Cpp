#include <iostream>
#include <cstdio>

int main() {
//    char cstring[] = "String";
    const char* cstring = "String";
    puts(cstring);
    
    for(int i = 0; cstring[i]; i++) {
//        printf("%d: %c\n", i, cstring[i]);
//        std::cout << std::endl;
        std::cout << "Element: " << i << " is " << cstring[i] << std::endl;
    }
    return 0;
}
