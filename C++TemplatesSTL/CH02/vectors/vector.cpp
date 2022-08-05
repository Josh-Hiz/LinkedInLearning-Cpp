#include <iostream>
#include <vector>
#include <string>

//STL Containers: Vectors & its utility functions

template<typename T>
void printV(std::vector<T>& v){
    if(v.empty()) return;
    for(T & i : v){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {

    std::cout << "Vector with init list: " << std::endl;
    std::vector<int> vector1 = {1,2,3,4,5,6,7,8,9,10};
    printV(vector1);

    //Basic but very useful information
    std::cout << "Size of vector: " << vector1.size() << std::endl;
    std::cout << "Front of vector " << vector1.front() << std::endl;
    std::cout << "Back of vector " << vector1.back() << std::endl;

    //Indexes of vectors
    std::cout << "Element at index 5: " << vector1[5] << std::endl;
    std::cout << "Element at index 5: " << vector1.at(5) << std::endl;

    //Inserting elements
    std::cout << "Inserting the number 42 at the beginning + 5 places " <<  std::endl;
    vector1.insert(vector1.begin() + 5, 42);
    printV(vector1);

    //Erase (Very costly though)
    std::cout << "Erasing element at beginning + 5 " << std::endl;
    vector1.erase(vector1.begin() + 5);
    printV(vector1);

    //Pushes element to vector all the way to the back
    std::cout << "Pushing back 47 to back " << std::endl;
    vector1.push_back(47);
    printV(vector1);

    //Pop_back (get rid of) elements starting from the back
    std::cout << "Popping element at back " << std::endl;
    vector1.pop_back();
    printV(vector1);

    //Test if vector is empty
    std::cout << "Empty:" << std::endl;
    std::vector<int> vector2 = {1,2,3};
    while(!vector2.empty()){
        printV(vector2);
        vector2.pop_back();
    }

    //Clear the vector
    std::cout << "Clearing vector" << std::endl;
    vector2.clear();
    printV(vector2);

    //Constructors:

    //Making vector from C-Array
    constexpr size_t size = 10;
    int ia[size] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << "Vector from C array: " << std::endl;
    std::vector<int> v2(ia, ia + size);
    printV(v2);

    //Filled with strings
    std::cout << "Vector filled with strings " << std::endl;
    std::vector<std::string> v3(5, "string");
    printV(v3);

    //Copy constructor
    std::cout << "Copying constructor " << std::endl;
    std::vector<std::string> v4(v3);
    printV(v4);

    //Move constructor
    std::cout << "v5 is moved from v4 " << std::endl;
    std::cout << "Size of v4: " << (int) v4.size() << std::endl;
    std::vector<std::string> v5(std::move(v4));
    printV(v5);
    std::cout << "Size of v4: " << (int) v4.size() << std::endl;

    return 0;
}
