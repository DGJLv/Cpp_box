#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>
using namespace std;
class Student{
protected:
    string name;
    double id;
    string phoneNum;
    int age;
    char gender;
    string classStand;
    float gpa;
public:
    Student();
    Student(string nameC, double idC, string phoneNumC, int ageC, char genderC, string classStandC, float gpaC);
    virtual ~Student();
    // should call child class override
    virtual void printInfo();
    void changeName(string newName);
    void changeID(double newID);
    void changePhone(string newPhone);
    void changeAge(int newAge);
    void changeGender(char newGender);
    void changeStand(string newStand);
    void changeGPA(float newGPA);
};
#endif