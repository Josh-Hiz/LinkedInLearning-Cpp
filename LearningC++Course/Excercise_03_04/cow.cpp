//
// Created by Josh Hiz on 7/21/22.
//

#include "cow.h"

cow::cow(std::string name_i, int age_i, unsigned char purpose_i){
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}
std::string cow::getName(){
    return name;
}

int cow::getAge(){
    return age;
}

unsigned char cow::getPurpose(){
    return purpose;
}

void cow::setAge(int newAge){
    age = newAge;
}

void cow::setName(std::string Name){
    name = Name;
}

void cow::setPurpose(unsigned char Purpose){
    purpose = Purpose;
}