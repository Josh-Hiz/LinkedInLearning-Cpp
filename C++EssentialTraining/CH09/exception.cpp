// exception.cpp by Bill Weinman <http://bw.org/>
// updated 2002-09-03
#include <iostream>
#include <exception>

namespace BW {
    class E : public std::exception {
        const char * msg;
        E();
    public:
        E(const char *s) noexcept(true) : msg(s) {}
        const char * what() const noexcept(true) {
            return msg;
        }
    };
}

void broken() {
    std::cout << "this is a broken function" << std::endl;
    throw BW::E("Write your code better");
}

int main() {

    std::cout << "let's have an emergency!" << std::endl;

    try{
        broken();
    } catch (BW::E& e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}