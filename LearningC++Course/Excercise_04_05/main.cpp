#include <iostream>
#include <vector>
#include "records.h"

//GPA = Total points / Total credits
//A = 4.0 points, B = 3.0 points, C = 2.0 points, D = 1.0 points, F = 0.0 points
//Total points = grade * credit

std::vector<Student> students = {Student(1, "Jhonny Sins"),
                                 Student(2, "Big man")};

std::vector<Course> courses = {Course(1,"Algebra",5),
                               Course(2, "Physics", 4),
                               Course(3,"English", 3),
                               Course(4,"Economics", 4)};

std::vector<Grade> grades = {Grade(1,1,'B'), Grade(1,2,'A'), Grade(1,3,'C'), //Johnny Sins
                             Grade(2,1,'A'), Grade(2, 2, 'A'), Grade(2,4,'B')}; //Big man

float GPA = 0.0f;
int id;

int main() {

    float totalCredits = 0;
    float totalPoints = 0;

    std::cout << "Enter student ID" << std::endl;
    std::cin >> id;

    //Calc GPA, we need a loop to calc total points, and a loop to calc total credits

    //If Johnny Sins
    if(id == students[0].get_id()) {

        int i = 0;

        while (grades[i].get_student_id() == id) {
            totalCredits += courses[i].get_credits();

            switch(grades[i].get_grade()){
                case 'A':
                    totalPoints += (courses[i].get_credits() * 4);
                    break;
                case 'B':
                    totalPoints += (courses[i].get_credits() * 3);
                    break;
                case 'C':
                    totalPoints += (courses[i].get_credits() * 2);
                    break;
                case 'D':
                    totalPoints += (courses[i].get_credits() * 1);
                    break;
                case 'F':
                    totalPoints += (courses[i].get_credits() * 0);
                    break;
            }
            i++;
        }
        GPA = float(totalPoints) / totalCredits;
        std::cout << "Johnny sins total credits are: " << totalCredits << std::endl; //Should be 12
        std::cout << "Johnny sins total points are: " << totalPoints << std::endl; //Should be
        std::cout << "Johnny sins GPA is: " << GPA << std::endl; //Should be

    } else if (id == students[1].get_id()){ //If Big man

        int i = 3;
        int z = 0;
        while(grades[i].get_course_id() == courses[z].get_id()){
            totalCredits += (courses[z].get_credits());

            switch(grades[i].get_grade()){
                case 'A':
                    totalPoints += (courses[z].get_credits() * 4);
                    break;
                case 'B':
                    totalPoints += (courses[z].get_credits() * 3);
                    break;
                case 'C':
                    totalPoints += (courses[z].get_credits() * 2);
                    break;
                case 'D':
                    totalPoints += (courses[z].get_credits() * 1);
                    break;
                case 'F':
                    totalPoints += (courses[z].get_credits() * 0);
                    break;
            }

            i++;
            z++;
        }
        totalCredits += courses[3].get_credits();
        totalPoints += (courses[3].get_credits() * 3);
        GPA = (totalPoints) / totalCredits;
        std::cout << "Big man total credits are: " << totalCredits << std::endl; //Should be 12
        std::cout << "Big man total points are: " << totalPoints << std::endl; //Should be
        std::cout << "Big man GPA is: " << GPA << std::endl; //Should be
    } else { //If neither
        std::cout << "Invalid ID" << std::endl;
    }
    return 0;
}
