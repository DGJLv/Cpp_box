#include <iostream>
#include "student.h"
#include "cs003AStudent.h"
using namespace std;
void PrintAny(Student& student){
    student.printInfo();
    cout<<endl;
}


int main(){

    cout << "---Test 1: Student class---"<<endl;
    cout << ">>Calling default constructor, then all mutators,"<<endl;
    cout << "printing output after each call. Also shows when destructor is called."<<endl;
    Student* test1 = new Student();
    test1->printInfo();
    cout<<endl;
    test1->changeName("Katy Perry");
    test1->printInfo();
        cout<<endl;
    test1->changeID(999899);
    test1->printInfo();
        cout<<endl;
    test1->changePhone("949-555-1234");
    test1->printInfo();
        cout<<endl;
    test1->changeAge(30);
    test1->printInfo();
        cout<<endl;
    test1->changeGender('F');
    test1->printInfo();
        cout<<endl;
    test1->changeStand("Freshman");
    test1->printInfo();
        cout<<endl;
    test1->changeGPA(4.0);
    test1->printInfo();
        cout<<endl;
    delete test1;
        cout<<endl;
        cout<<endl;
    cout << "Test 2"<<endl;
    CS003AStudent* test2 = new CS003AStudent();
    test2->printInfo();
            cout<<endl;
    test2->changeName("Jim Cramer");
    test2->printInfo();
            cout<<endl;
    test2->changeID(668899);
    test2->printInfo();
            cout<<endl;
    test2->changePhone("949-665-1234");
    test2->printInfo();
            cout<<endl;
    test2->changeAge(63);
    test2->printInfo();
            cout<<endl;
    test2->changeGender('M');
    test2->printInfo();
            cout<<endl;    
    test2->changeStand("Freshman");
    test2->printInfo();
            cout<<endl;
    test2->changeGPA(3.3);
    test2->printInfo();
            cout<<endl;
    test2->changeTot(500);
    test2->printInfo();
            cout<<endl;
    test2->changeKnow("yes");
    test2->printInfo();
            cout<<endl;
    test2->changeGrad(5,12,2016);
    test2->printInfo();
            cout<<endl;
    delete test2;
    
    cout<<endl;
    
    Student* studentArray[7];
    studentArray[0] = new Student("Katy Perry", 999899, "949-555-1234", 30, 'F', "Freshman", 4.0);
    studentArray[1] = new Student("Tom Brady", 456789, "714-555-5555", 37, 'M', "Sophomore", 3.23);
    studentArray[2] = new Student("Russell Wilson", 876542, "760-703-1234", 26, 'M', "Sophomore", 3.8);
    studentArray[3] = new Student("Norm Drapple", 777744, "213-555-6789", 18, 'M', "Freshman", 1.1);
    studentArray[4] = new CS003AStudent("Jim Cramer", 668899, "949-665-1234", 63, 'M', "Freshman", 3.3, 500, "yes", Date( 5, 12,2016));
    studentArray[5] = new CS003AStudent("Clayton Kershaw", 156789, "248-555-6543", 29, 'M', "Sophomore", 2.5, 700, "no", Date( 11, 5, 2015));
    studentArray[6] = new CS003AStudent("Jim Rome", 876545, "703-703-7654", 40, 'M', "Sophomore", 3.2, 800, "yes", Date(11, 15,2016));
    
    for(int i = 0; i <7; i++)
        PrintAny(*studentArray[i]);
    cout << ">>Deleting all students."<< endl;
    for (int i = 0; i < 7; i++) {
        delete studentArray[i];}
    return 0;
}