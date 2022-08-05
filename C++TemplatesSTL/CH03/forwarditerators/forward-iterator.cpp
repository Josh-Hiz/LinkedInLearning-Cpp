#include <iostream>
#include <forward_list>

int main() {

    std::forward_list<int> fl = {1,2,3,4};
    std::forward_list<int>::iterator it1;

    for(it1 = fl.begin(); it1 != fl.end(); ++it1){
        std::cout << *it1 << " ";
    }

    return 0;
}
