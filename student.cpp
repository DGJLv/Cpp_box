#include "student.h"
    Student::Student(){
    name = "Name";
    id = 0;
    phoneNum = "000-000-0000";
    age = 0;
    gender = 'X';
    classStand = "classStanding";
    gpa = 0;
    }

    Student::Student(string nameC, double idC, string phoneNumC, int ageC, char genderC, string classStandC, float gpaC){
    name = nameC;
    id = idC;
    phoneNum = phoneNumC;
    age = ageC;
    gender = genderC;
    classStand = classStandC;
    gpa = gpaC;
    }
    Student::~Student(){
        cout << "Called Student destructor"<<endl;
    }
    // should call child class override
    void Student::printInfo(){
        cout << name << " "<< id <<" "<< phoneNum << " "<< age <<" " << gender <<" " << classStand <<" "<< gpa << " ";
    }
    void Student::changeName(string newName){
        name = newName;
    }
    void Student::changeID(double newID){
        id = newID;
    }
    void Student::changePhone(string newPhone){
        phoneNum = newPhone;
    }
    void Student::changeAge(int newAge){
        age = newAge;
    }
    void Student::changeGender(char newGender){
        gender = newGender;
    }
    void Student::changeStand(string newStand){
        classStand = newStand;
    }
    void Student::changeGPA(float newGPA){
        gpa = newGPA;
    }    
