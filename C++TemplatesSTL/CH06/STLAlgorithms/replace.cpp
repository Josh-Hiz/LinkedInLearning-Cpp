#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>
bool is_even(const T & n) {
    return ((n % 2) == 0);
}

template <typename T>
void disp_v(const T & v) {
    if(!v.size()) return;
    for(auto e :  v) { cout << e << " "; }
    cout << endl;
}

int main() {
    // prime numbers < 100
    vector<int> v1 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
    disp_v(v1);

    auto it = remove(v1.begin(), v1.end(), 41);
    if(it == v1.end()){
        cout << "No elements were removed " << endl;
    } else {
        v1.resize(it - v1.begin());
        disp_v(v1);
    }

    return 0;
}
