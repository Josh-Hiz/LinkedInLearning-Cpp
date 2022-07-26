// qualifiers.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>

class S {
public:
    int static_value() {
        static int x = 7;
        return ++x;
    }
};

int func() {
    static int x = 7;
    return ++x;
}

int main() {
    int i = func();
    i = func();
    i = func();
    printf("The integer is %d\n", i);
    return 0;
}

