#include <iostream>
#include <vector>
#include <algorithm>
#include "rational.h"

template <class T>
class accum {
    T acc = 0;
    accum()= default;; //Default constructor
public:

    explicit accum(T n) : acc(n){}

    T operator() (T y) {
        acc += y;
        return acc;
    }

};

template <typename T>
void displayVector(std::vector<T> & v){
    if(!v.size()) return;
    for(const T& e : v){
        std::cout << e << " ";
    }
    std::cout << std::endl;
}

std::ostream & operator << (std::ostream & o, const Rational & r){
    return o << std::string(r);
}

int main() {

    accum<Rational> x(Rational(3,5)); //Instance of accum with acc = 7
    std::cout << x(7) << std::endl; //acc = 7 + 7 = 14

    std::vector<Rational> v1 = {1,2,3,4,5};
    displayVector(v1);

    std::vector<Rational> v2(v1.size());
    //Begin point (source), End point (source), Begin point of destination container (output iterator), Object operator (Pointer to a function or object functor that takes one argument
    std::transform(v1.begin(), v1.end(), v2.begin(), x);

    displayVector(v2);

    return 0;
}
