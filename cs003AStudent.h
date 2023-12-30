#ifndef CS003ASTUDENT_H
#define CS003ASTUDENT_H
#include "student.h"
#include "date.h"
class CS003AStudent : public Student{
    private:
        double totalScore;
        string knowJava;
        Date gradDate;
    public:
    CS003AStudent();
    CS003AStudent(string nameC, double idC, string phoneNumC, 
    int ageC, char genderC, string classStandC, float gpaC, 
    double tot, string knowJ, Date date);

        ~CS003AStudent();
        void printInfo();
        void changeName(string newName);
        void changeID(double newID);
        void changePhone(string newPhone);
        void changeAge(int newAge);
        void changeStand(string newStand);
        void changeGPA(float newGPA);
        void changeTot(double newTot);
        void changeKnow(string newKnow);
        void changeGrad(int m, int d, int y);

};
#endif