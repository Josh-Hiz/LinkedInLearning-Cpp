#include <iostream>
#include <array>
#include <math.h>
#include <vector>
//Challenge print the first 25 prime numbers

void isPrime(){
    bool flag = false;
    for(int candiate = 0; candiate < 100; candiate++){
        for(int factor = 2; factor < candiate; factor++){
            if(candiate % factor == 0){
                flag = false;
                break;
            } else {
                flag = true;
            }
        }
        if(flag){
            std::cout << candiate << std::endl;
        }
    }
}

int main() {

    isPrime();


    return 0;
}
