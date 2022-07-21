
#include <iostream>
#include <string>

#ifndef EXCERCISE_03_03_COW_H
#define EXCERCISE_03_03_COW_H


enum cow_purpose {
    dairy, meat, hide, pet
};

class cow{

private:

    std::string name;
    int age;
    unsigned char purpose;

public:

    cow(std::string name_i, int age_i, unsigned char purpose_i);

    std::string getName();

    int getAge();

    unsigned char getPurpose();

    void setAge(int newAge);

    void setName(std::string Name);

    void setPurpose(unsigned char Purpose);
};

#endif //EXCERCISE_03_03_COW_H
