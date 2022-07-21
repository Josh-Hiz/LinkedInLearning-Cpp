#include <iostream>
#include <string>
#include "cow.h"
//Classes, Header and Implementation Files

int main() {
    cow my_cow("Cow", 5, meat);

//    my_cow.age = 5;
//    my_cow.name = "Cow";
//    my_cow.purpose = meat;

    std::cout << my_cow.getName() << std::endl;
    std::cout << my_cow.getAge() << std::endl;
    std::cout << (int) my_cow.getPurpose() << std::endl;

    my_cow.setAge(10);
    std::cout << "New age is: " << my_cow.getAge() << std::endl;

    return 0;
}
