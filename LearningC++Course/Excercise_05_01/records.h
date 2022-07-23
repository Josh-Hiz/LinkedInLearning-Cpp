//
// Created by Josh Hizgiaev on 7/22/22.
//
#pragma once

#include <vector>
#include <string>
#include <fstream>

//Student class
class Student {
private:

    int studentID;
    std::string studentName;

public:

    Student(int stuID, std::string stuName);
    int getStudentID() const;
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
    int getCourseID() const;
    std::string getCourseName();
    int getCourseCredit() const;

};

//Grade class
class Grade {

private:

    int student_id;
    int course_id;
    char grade;

public:

    Grade(int stuID, int cID, char grd);
    int getStudentIDGrd() const;
    int getCourseIDGrd() const;
    char getGrade() const;

};

//Student Records class (Main class)
class StudentRecords{

private:

    std::vector<Student> studentVector;
    std::vector<Course> courseVector;
    std::vector<Grade> gradeVector;

    static float getNumericGrade(char letter);
    float getTotalCourseCredit(int courseID);

public:

    void addStudent(int studentID, const std::string& studentName);
    void addCourse(int courseID, const std::string& courseName, unsigned char grade);
    void addGrade(int studentID, int courseID, char grade);

    std::string getStudentName(int studentID);
    float calculateGPA(int studentID);
    void reportCard(int studentID);
    void reportCard(int studentID, std::ostream& stream);

    void reportText(std::ofstream& outFile);

};
