#include <iostream>
#include <string>
#include <algorithm>
#include <locale>
#include "title-case.h";

int main() {

    std::string s1 = "This is a string";
    std::cout << s1 << std::endl;

    std::string s2(s1.size(), '.');
    std::cout << s2 << std::endl;

    std::transform(s1.begin(), s1.end(), s2.begin(), title_case());
    std::cout << s2 << std::endl;

    return 0;
}
