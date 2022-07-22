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

    std::cout << "Enter student ID" << std::endl;
    std::cin >> id;

    float totalCredits, totalPoints;

    //Get the grade multiplier
    for (Grade& grd: grades) {
        if (grd.get_student_id() == id) {
            float gradeNum = 0;
            switch (grd.get_grade()) {
                case 'A':
                    gradeNum = 4;
                    break;
                case 'B':
                    gradeNum = 3;
                    break;
                case 'C':
                    gradeNum = 2;
                    break;
                case 'D':
                    gradeNum = 1;
                    break;
                case 'F':
                    gradeNum = 0;
                    break;
            }
            //Get total credits and points
            int i = 0;
            while (i < courses.size() && courses[i].get_id() == grades[i].get_course_id()) {
                totalCredits += courses[i].get_credits();
                totalPoints += gradeNum * courses[i].get_credits();
                i++;
            }
        }
    }
    GPA = (float) totalPoints / (float) totalCredits;

    std::cout << "GPA for " << students[id - 1].get_name() << " is " << GPA << std::endl;

    return 0;
}