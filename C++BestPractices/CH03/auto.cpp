#include <iostream>

auto sumDown(int n) {
    if(n <= 0) {
        return 0;
    }
    return n + sumDown(n - 1);
}

int main(int argc, char * argv[]){

    const std::size_t N{10};
    std::size_t a[N]{};

    for(std::size_t n{0}; n < N; ++n){
        a[n] = n;
    }
    std::cout << std::endl;

    for(std::size_t n{N}; n-- > 0;){
        std::cout << a[n] << " ";
    }
    std::cout << "\n";

    std::cout << sumDown(10);

}