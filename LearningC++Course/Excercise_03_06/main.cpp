#include <iostream>
#include "cow.h"
#include <vector>

//Vectors

using namespace std;

vector<int> primes;

int main() {

    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);

    cout << "Size of vector is: " << primes.size() << endl;
    cout << "Element 2 in the vector is: " << primes[2] << endl;
    primes[2] = 13;
    cout << "New Element 2 in the vector is: " << primes[2] << endl;
    cout << endl;

    vector<cow> cattle;
    cattle.push_back(cow("John", 10, dairy));
    cattle.push_back(cow("Johnny", 4, meat));
    cattle.push_back(cow("Johnathan", 32, pet));

    cout << "The first cow is named: " << cattle.begin()->getName() << endl;
    cout << "The first cow is named: " << (cattle.end() - 1)->getName() << endl;

    return 0;
}
