#include <iostream>
#include <vector>
#include "records.h"
/**
 * Goal: calculate GPA with a student record system
 * This record system must (in functions):
 * Add student names
 * Add Courses
 * Add Grades
 *
 * It must do the following:
 * Calculate total credits that related to that student
 * Calculate total points related to that student
 * Return the letter grade as a number
 *
 * This will ALL be under the student records class but first must make helper classes
 * @return
 */

//Creating and using functions exercise using exercise 04_05

using namespace std;

int id;
StudentRecords SR;

void initialize(){
    SR.addStudent(1, "George P. Burdell");
    SR.addStudent(2, "Nancy Rhodes");

    SR.addCourse(1, "Algebra", 5);
    SR.addCourse(2, "Physics", 4);
    SR.addCourse(3, "English", 3);
    SR.addCourse(4, "Economics", 4);

    SR.addGrade(1, 1, 'B');
    SR.addGrade(1, 2, 'A');
    SR.addGrade(1, 3, 'C');
    SR.addGrade(2, 1, 'A');
    SR.addGrade(2, 2, 'A');
    SR.addGrade(2, 4, 'B');
}

int main() {

    initialize();

    cout << "Enter student ID: " << endl;
    cin >> id;

    SR.reportCard(id);

    return 0;
}
