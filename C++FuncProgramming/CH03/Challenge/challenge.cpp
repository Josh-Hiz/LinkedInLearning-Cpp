#include <iostream>
#include <vector>

void fibonacci(int n) {

    int n1 = 0;
    int n2 = 1;

    std::cout << n1 << " " << n2 << " ";

    for(int i = 2; i < n; ++i){
        int n3 = n1 + n2;
        std::cout << n3 << " ";
        n1=n2;
        n2 = n3;
    }

}


int main(int argc, char * argv[]){
    int n;
    std::cout << "Enter N, as in, first N fibonacci numbers" << std::endl;
    std::cin >> n;

    fibonacci(n);

}
