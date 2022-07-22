//
// Created by Josh Hizgiaev on 7/22/22.
//
#pragma once
#ifndef GPACALCULATOR_RECORDS_H
#define GPACALCULATOR_RECORDS_H

#include <vector>
#include <string>

//Student class
class Student {
private:

    int studentID;
    std::string studentName;

public:

    Student(int stuID, std::string stuName);
    int getStudentID();
    std::string getName();
};

//Course class
class Course{
private:

    int courseID;
    std::string courseName;
    unsigned char courseCredits;

public:

    Course(int cID, std::string cName, unsigned char cCredits);
    int getCourseID();
    std::string getCourseName();
    int getCourseCredit();

};

//Grade class
class Grade {

private:

    int student_id;
    int course_id;
    char grade;

public:

    Grade(int stuID, int cID, char grd);
    int getStudentIDGrd();
    int getCourseIDGrd();
    char getGrade();

};

//Student Records class (Main class)
class StudentRecords{

private:

    std::vector<Student> studentVector;
    std::vector<Course> courseVector;
    std::vector<Grade> gradeVector;

    float getNumericGrade(char letter);
    float getTotalCourseCredit(int courseID);

public:

    void addStudent(int studentID, std::string studentName);
    void addCourse(int courseID, std::string courseName, unsigned char grade);
    void addGrade(int studentID, int courseID, char grade);

    std::string getStudentName(int studentID);
    float calculateGPA(int studentID);
};

#endif //GPACALCULATOR_RECORDS_H
