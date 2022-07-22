//
// Created by Josh Hizgiaev on 7/22/22.
//

#include "records.h"

//Add characteristics to student class
Student::Student(int stuID, std::string stuName) { //Constructor
    studentID = stuID;
    studentName = stuName;
}

std::string Student::getName() { //Returns the student name of the student object
    return studentName;
}

int Student::getStudentID() { //Returns the student ID of the student object
    return studentID;
}

//Add characteristics to courses class
Course::Course(int cID, std::string cName, unsigned char cCredits) {
    courseID = cID;
    courseName = cName;
    courseCredits = cCredits;
}

int Course::getCourseID() {
    return courseID;
}

std::string Course::getCourseName() {
    return courseName;
}

int Course::getCourseCredit() {
    return courseCredits;
}

//Add characteristics to grade class
Grade::Grade(int stuID, int cID, char grd) {
    student_id = stuID;
    course_id = cID;
    grade = grd;
}

int Grade::getStudentIDGrd() {
    return student_id;
}

int Grade::getCourseIDGrd() {
    return course_id;
}

char Grade::getGrade() {
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
    }
    return numGrade;
}

//Basic functions to add stuff

void StudentRecords::addStudent(int studentID, std::string studentName) {
    studentVector.push_back(Student(studentID, studentName));
}

void StudentRecords::addCourse(int courseID, std::string courseName, unsigned char grade) {
    courseVector.push_back(Course(courseID, courseName, grade));
}

void StudentRecords::addGrade(int studentID, int courseID, char grade) {
    gradeVector.push_back(Grade(studentID, courseID, grade));
}

//Get student name
std::string StudentRecords::getStudentName(int studentID) {
    return studentVector[studentID - 1].getName();
}

//Calculate total course credit pertaining to certain student
float StudentRecords::getTotalCourseCredit(int courseID) {

    float totalCredit = 0.0f;
    int i = 0;

    while(i < courseVector.size() &&  courseVector[i].getCourseID() == courseID){
        totalCredit += courseVector[i].getCourseCredit();
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



