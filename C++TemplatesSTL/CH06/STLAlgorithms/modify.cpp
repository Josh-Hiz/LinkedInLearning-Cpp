#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

template <typename T>
void disp_v(const T & v) {
    if(!v.size()) return;
    for(auto e :  v) { cout << e << " "; }
    cout << endl;
}

int main() {
    // prime numbers < 100
    vector<int> v1 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
    vector<int> v2(v1.size(), 0);
    disp_v(v1);
    disp_v(v2);

    auto rng = std::default_random_engine {};

    shuffle(v1.begin(), v1.end(), rng);
    disp_v(v1);

    return 0;
}
