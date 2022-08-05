#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>

template <class T>
class embiggen{
private:
    T accum = 1;
public:
    T operator() (const T & n1, const T & n2){ //Functor takes TWO operands
        return (accum = n1 * n2 * accum);
    }
};

template<typename T>
void displayVector(const std::vector<T> & v){
    if(!v.size()) std::cout << "Error vector is empty" << std::endl;
    else for(T e : v) {std::cout << e << " ";}
    std::cout << std::endl;
}

int main() {

    std::vector<long> v1 = {1,2,3,4,5};
    std::vector<long> v2 = {5,10,15,20,25};
    std::vector<long> v3(v1.size(), 0);

    embiggen<long> fbig;

    displayVector(v1);
    displayVector(v2);
    displayVector(v3);

    std::cout << std::endl;

    std::transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), fbig);
    displayVector(v1);
    displayVector(v2);
    displayVector(v3);


    return 0;
}
