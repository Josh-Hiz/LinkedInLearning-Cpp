#include <iostream>
using namespace std;

auto addCurry = [](auto a) {
  return [a](auto b) {
    return [a, b] (auto c){
      return a+b+c;
    };
  };
};

auto incrementer = [](){
    auto increment = 0;
    return [increment]() mutable {
        return increment++;
    };
};


int main() {
  auto added1 = addCurry(1);
  auto added2 = added1(10);
  auto addResults = added2(100);
  cout << "results: " << addResults << endl; 
  auto allAtOnce = addCurry(990000)(9900)(99);
  cout << "All results: " << allAtOnce << endl;
  std::cout<<std::endl;

  return 0;
}