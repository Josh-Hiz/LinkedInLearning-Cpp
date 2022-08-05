#include <iostream>
#include <iterator>

int main() {

    double d1 = 0, d2 = 0;

    std::cout << "Two numeric values: " << std::flush;

    std::cin.clear();

    std::istream_iterator<double> eos;              //Defaults to end of stream
    std::istream_iterator<double> iit(std::cin); //Stdin iterator

    if(iit == eos){
        std::cout << "No values" << std::endl;
        return 0;
    } else {
        d1 = *iit++;
    }

    if(iit == eos){
        std::cout << "No second value" << std::endl;
        return 0;
    } else {
        d2 = *iit;
    }
    std::cin.clear();

    std::cout.precision(5);
    std::cout << d1 << "*" << d2 << " = " << d1 * d2 << std::endl;

    return 0;
}
