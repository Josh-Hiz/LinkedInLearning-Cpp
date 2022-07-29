#include <iostream>
#include <vector>
#include <string>

int main() {
    std::cout << "vector from initialized list: " << std::endl;

    std::vector<int> vector1 = {1,2,3,4,5,6,7,8,9,10};

    std::cout << "Size: " << vector1.size() << std::endl;
    std::cout << "Front: " << vector1.front() << std::endl;
    std::cout << "Back: " << vector1.back() << std::endl;

    std::cout << std::endl;

    //Iterators (Used to iterate over vectors)
    std::vector<int>::iterator itBegin = vector1.begin();
    std::vector<int>::iterator itEnd = vector1.end();

    for(auto it = itBegin; it < itEnd; ++it){
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Element at index 5: " << vector1[5] << std::endl;
    std::cout << "Element at index 5: " << vector1.at(5) << std::endl;

    std::cout << std::endl;

    std::cout << "Range based for-loop" << std::endl;
    for(int i : vector1){
        std::cout << i << ", ";
    }

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Insert 42 at begin + 5 :" << std::endl;
    vector1.insert(vector1.begin() + 5, 42);
    std::cout << "Size: " << vector1.size() << std::endl;
    std::cout << "Vector1[5]: " << vector1[5] << std::endl;

    std::cout << std::endl;

    std::cout << "Erase at begin + 5 :" << std::endl;
    vector1.erase(vector1.begin() + 5);
    std::cout << "Size: " << vector1.size() << std::endl;
    std::cout << "Vector1[5]: " << vector1[5] << std::endl;

    std::cout << std::endl;

    std::cout << "Push back 47 :" << std::endl;
    vector1.push_back(47);
    std::cout << "Size: " << vector1.size() << std::endl;
    std::cout << "Vector1 back: " << vector1.back()<< std::endl;

    //C arrays
    const static size_t size = 10; //Init size
    int ia[size] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << "Vector from C array" << std::endl;
    std::vector<int> vector2(ia, ia + size);
    for(auto i : vector2){
        std::cout << i << ", ";
    }
    std::cout << std::endl;

    return 0;
}
