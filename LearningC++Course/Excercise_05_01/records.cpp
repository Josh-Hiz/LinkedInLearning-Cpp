//
// Created by Josh Hizgiaev on 7/22/22.
//

#include "records.h"
#include <iostream>
#include <utility>

//Add characteristics to student class
Student::Student(int stuID, std::string stuName) { //Constructor
    studentID = stuID;
    studentName = std::move(stuName);
}

std::string Student::getName() { //Returns the student name of the student object
    return studentName;
}

int Student::getStudentID() const { //Returns the student ID of the student object
    return studentID;
}

//Add characteristics to courses class
Course::Course(int cID, std::string cName, unsigned char cCredits) {
    courseID = cID;
    courseName = std::move(cName);
    courseCredits = cCredits;
}

int Course::getCourseID() const {
    return courseID;
}

std::string Course::getCourseName() {
    return courseName;
}

int Course::getCourseCredit() const {
    return courseCredits;
}

//Add characteristics to grade class
Grade::Grade(int stuID, int cID, char grd) {
    student_id = stuID;
    course_id = cID;
    grade = grd;
}

int Grade::getStudentIDGrd() const {
    return student_id;
}

int Grade::getCourseIDGrd() const {
    return course_id;
}

char Grade::getGrade() const {
    return grade;
}

//Add characteristics to student records class

float StudentRecords::getNumericGrade(char letter) {

    float numGrade = 0.0f;

    switch (letter) {
        case 'A':
            numGrade = 4.0f;
            break;
        case 'B':
            numGrade = 3.0f;
            break;
        case 'C':
            numGrade = 2.0f;
            break;
        case 'D':
            numGrade = 1.0f;
            break;
        case 'F':
            numGrade = 0.0f;
            break;
        default:
            numGrade = 1.0f;
            break;
    }
    return numGrade;
}

//Basic functions to add stuff

void StudentRecords::addStudent(int studentID, const std::string& studentName) {
    studentVector.emplace_back(studentID, studentName);
}

void StudentRecords::addCourse(int courseID, const std::string& courseName, unsigned char grade) {
    courseVector.emplace_back(courseID, courseName, grade);
}

void StudentRecords::addGrade(int studentID, int courseID, char grade) {
    gradeVector.emplace_back(studentID, courseID, grade);
}

//Get student name assuming ID's are put in proper order and are basic numbers
std::string StudentRecords::getStudentName(int studentID) {
    return studentVector[studentID - 1].getName();
}

//Calculate total course credit pertaining to certain student
float StudentRecords::getTotalCourseCredit(int courseID) {

    float totalCredit = 0.0f;
    int i = 0;

    while(i < courseVector.size() &&  courseVector[i].getCourseID() == courseID){
        totalCredit += (float) (courseVector[i].getCourseCredit());
        i++;
    }
    return totalCredit;
}

float StudentRecords::calculateGPA(int studentID) {

    float totalCredit = 0.0f, totalPoints = 0.0f;

    for(Grade& grd : gradeVector){

        if(grd.getStudentIDGrd() == studentID){

            totalCredit += (getTotalCourseCredit(grd.getCourseIDGrd()));

            totalPoints += (getTotalCourseCredit(grd.getCourseIDGrd()) * getNumericGrade(grd.getGrade()));
        }

    }

    float GPA = (totalPoints / totalCredit);
    return GPA;

}

//Prints report card
void StudentRecords::reportCard(int studentID) {

    std::cout << "Student Name: " << getStudentName(studentID) << std::endl;

    for(Grade& grd : gradeVector){
        for(Course& crs : courseVector){
            if(grd.getStudentIDGrd() == studentID){
                if(crs.getCourseID() == grd.getCourseIDGrd()){
                    std::cout << "Course Name: " << crs.getCourseName() << ", Course Grade: " << grd.getGrade() << std::endl;
                }
            }
        }
    }
    std::cout << "GPA: " << (calculateGPA(studentID) * 100) / 100 << std::endl;
}




