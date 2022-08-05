#include <iostream>

using namespace std;

template <class T>
class multiplyBy{
private:
    T mult = 0;
    multiplyBy();
public:
    multiplyBy(T n) : mult(n){}
    void multi(T n) {mult = n;}
    T multi() const { return mult;}
    T operator() (T n) const {return mult * n;}
};


int main() {

    multiplyBy<float> x(9);
    cout << "x mult is " << x.multi() << endl;

    cout << "x(5) = " << x(5) << endl; //45
    cout << "x(25) = " << x(25) << endl;

    x.multi(7);
    cout << "x(5) = " << x(5) << endl; //45
    cout << "x(25) = " << x(25) << endl;

    return 0;
}
