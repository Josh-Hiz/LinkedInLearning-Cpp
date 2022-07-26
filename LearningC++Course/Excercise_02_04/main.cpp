#include <iostream>
#include <typeinfo>

//Using the auto keyword
auto a = 8;
auto b = 12345678910;
auto c = 3.14f;
auto d = 3.14;
auto e = true;
auto f = 'd';

int main() {

    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(d).name() << std::endl;
    std::cout << typeid(e).name() << std::endl;
    std::cout << typeid(f).name() << std::endl;

    return 0;
}
