#include <iostream>
#include <string>
#include "records.h"

Student student(22005420, "Joshua Hizgiaev");
Course computerScience(115, "Computer Science", 4);
Grade compSciGrade(student.get_id(), computerScience.get_id(), 'A');

int main(){

    std::cout << student.get_name() << std::endl;
    std::cout << computerScience.get_name() << std::endl;
    std::cout << computerScience.get_credits() << std::endl;
    std::cout << compSciGrade.get_grade() << std::endl;

    return 0;
}