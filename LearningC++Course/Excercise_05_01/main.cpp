#include <iostream>
#include <vector>
#include "records.h"
#include <fstream>
#include <istream>
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
ifstream inFile;
ofstream outFile;

void initialize(ifstream& inF) {

    std::string str, studentName, courseName;
    int studentID, courseID, count = 0;
    unsigned char courseCredit;
    char grade;

    inF.open("students.txt");
    if (inF.fail()) {
        std::cout << "Failed to open students.txt" << std::endl;
    } else {
        while (!inF.eof()) {
            getline(inF, str);
            studentID = stoi(str);
            getline(inF, studentName);
            SR.addStudent(studentID, studentName);
            count++;
        }
        inF.close();
        std::cout << "Found " << count << " students" << std::endl;
        count = 0;
    }

    inF.open("courses.txt");
    if (inF.fail()) {
        std::cout << "Failed to open courses.txt" << std::endl;
    } else {
        while (!inF.eof()) {
            getline(inF, str);
            courseID = stoi(str);
            getline(inF, courseName);
            getline(inF, str);
            courseCredit = stoi(str);
            SR.addCourse(courseID, courseName, courseCredit);
            count++;
        }
        inF.close();
        std::cout << "Found " << count << " courses" << std::endl;
        count = 0;
    }

    inF.open("grades.txt");
    if(inF.fail()){
        std::cout << "Failed to open grades.txt" << std::endl;
    } else {
        while(!inF.eof()){
            getline(inF, str);
            studentID = stoi(str);
            getline(inF, str);
            courseID = stoi(str);
            getline(inF, str);
            grade = str[0];
            SR.addGrade(studentID, courseID, grade);
            count++;
        }
        inF.close();
        std::cout << "Found " << count << " grades" << std::endl;
    }
}



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

    initialize(inFile);
//    initialize();
//    SR.reportCard(1);
    SR.reportText(outFile);

    return 0;
}
