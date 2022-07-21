#include <iostream>
#include <string>
#include <cstring>

 //Strings
 const int LENGTH1 = 25;

char array_str1[LENGTH1] = "Hello! ";
char array_str2[] = "Hello Mike!";

std::string std_str1 = "Hello world! ";
std::string std_str2 = "World hello!";

int main() {
    std::cout << strcat(array_str1, array_str2) << std::endl;
    std::cout << array_str1 << std::endl; //This will hold the concatenation after it has been done
    std::cout << std_str1 + std_str2 << std::endl;
    return 0;
}
