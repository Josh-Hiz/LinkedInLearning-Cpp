#include <functional>
#include <iostream>
#include <string>
#include <vector>

void demoFunction();

class functor {

public:
    void operator() () const {
        std::cout << "Functor called" << std::endl;
    }

};

void adder(int a, int b){
    std::cout << "Called added =  " << a + b << std::endl;
}


int main(int argc, char * argv[]){

    std::vector<std::function<void()>> funcs;

    funcs.push_back(demoFunction);

    functor functorInstance;

    funcs.push_back(functorInstance);

    funcs.push_back([](){
        std::cout << "Called anon lambda" << std::endl;
    });

    funcs.push_back(std::bind(& adder, 10, 15));

    for(auto & f : funcs){
        f();
    }

    return 0;

}

void demoFunction(){
    std::cout << "Demo function is called" << std::endl;
}

