#include <iostream>

namespace A::B::C {
    int i;
}


int main() {
    A::B::C::i = 42;
    std::cout << "Nested namespaces are weird and useless such as i = " << A::B::C::i << std::endl;

    return 0;
}
