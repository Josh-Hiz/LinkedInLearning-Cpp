#include <iostream>
#include <string>
#include "cow.h"
//Pointers

int a = 37;
int *ptr;

cow *my_cow;

int main() {

    ptr = &a;

    std::cout << "The content of a is: " << a << std::endl;
    std::cout << "ptr is pointing to address: " << ptr << std::endl;
    std::cout << "The address of a is: " << &a << std::endl;
    std::cout << "The content of where ptr is pointing is: " << *ptr << std::endl;
    std::cout << "The address of  ptr is: " << &ptr << std::endl;


    my_cow = new cow("Cow", 5, meat);

//    my_cow.age = 5;
//    my_cow.name = "Cow";
//    my_cow.purpose = meat;

    std::cout << my_cow->getName() << std::endl;
    std::cout << my_cow->getAge() << std::endl;
    std::cout << (int) my_cow->getPurpose() << std::endl;

    my_cow->setAge(10);
    std::cout << "New age is: " << my_cow->getAge() << std::endl;
    delete my_cow;

    return 0;

}
