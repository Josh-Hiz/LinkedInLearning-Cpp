#include <iostream>
#include <string>
//Structures

enum cow_purpose {
    dairy, meat, hide, pet
};

struct cow{
    std::string name;
    int age;
    unsigned char purpose;
};

int main() {

    cow my_cow;

    my_cow.age = 5;
    my_cow.name = "Cow";
    my_cow.purpose = meat;

    std::cout << my_cow.name << std::endl;
    std::cout << my_cow.age << std::endl;
    std::cout << (int) my_cow.purpose << std::endl;

    return 0;
}
