#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vector1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator it1; //Iterator object

    auto begin = vector1.begin();
    auto end = vector1.end();

    for(it1 = begin; it1 < end; ++it1){
        cout << *it1 << " ";

    }



    return 0;
}
