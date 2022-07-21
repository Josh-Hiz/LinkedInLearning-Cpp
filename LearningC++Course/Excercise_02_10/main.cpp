#include <iostream>
//Take average

using namespace std;

int main() {

   int array[5] = {1,23,32,24,337};
   float result =  ((array[4] + array[3] + array[2] + array[1] + array[0]) / (float)5);

   cout << "Average = " << result << endl;

    return 0;
}
