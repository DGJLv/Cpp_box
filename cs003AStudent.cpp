#include "cs003AStudent.h"

        CS003AStudent::CS003AStudent() : Student(), totalScore(0), knowJava("no"), gradDate(Date()){}
        
        CS003AStudent::CS003AStudent(string nameC, double idC, string phoneNumC, 
        int ageC, char genderC,string classStandC, float gpaC, double tot, string knowJ, Date date): 
        Student(nameC, idC, phoneNumC, ageC, genderC, classStandC, gpaC), totalScore(tot), knowJava(knowJ), gradDate(date) {}

        CS003AStudent::~CS003AStudent(){
        cout << "Called CS133Student destructor"<<endl;
        }

        void CS003AStudent::printInfo(){
            Student::printInfo();
            cout <<totalScore << " "<< knowJava << " ";
            gradDate.printNumeric();
        }
        void CS003AStudent::changeName(string newName){
            name = newName;
        }
        void CS003AStudent::changeID(double newID){
            id = newID;
        }
        void CS003AStudent::changePhone(string newPhone){
            phoneNum = newPhone;
        }
        void CS003AStudent::changeAge(int newAge){
            age = newAge;
        }
        void CS003AStudent::changeStand(string newStand){
            classStand = newStand;
        }
        void CS003AStudent::changeGPA(float newGPA){
            gpa = newGPA;
        }    
        void CS003AStudent::changeTot(double newTot){
            totalScore = newTot;
        }
        void CS003AStudent::changeKnow(string newKnow){
            knowJava = newKnow;
        }
        void CS003AStudent::changeGrad(int m, int d, int y){
            gradDate = Date(m,d,y);
        }
