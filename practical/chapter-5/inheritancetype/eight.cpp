// 8. Hybrid Inheritance
// Write a C++ program to create:
//  Multiple and multilevel inheritance together to simulate a hybrid inheritance model.
//  For example: Combine student performance, sports record, and cultural participation into a final
// student result.

#include<iostream>
using namespace std;

class Person {
    protected:
        string name;

    public:
        void inputPerson() {
            cout << "Enter name: ";
            cin >> name;
        }

        void displayPerson() {
            cout <<"Name: "<<name<<endl;
        }
};


class AcademicRecord: public Person{
    protected:
        double academicMarks;

    public:
        void inputAcademic() {
            inputPerson();
            cout << "Enter academic marks: ";
            cin >>academicMarks;
        }
        void displayAcademic() {
            displayPerson();
            cout <<"Academic marks: "<< academicMarks<<endl;
        }
};

class SportsRecord {
    protected:
        double sportsMark;

    public:
        void inputSports() {
            cout << "Enter sports marks: ";
            cin >>sportsMark;
        }

        void displaySports() {
            cout <<"Sport marks: "<<sportsMark<<endl;
        }
};


class Student : public AcademicRecord, public SportsRecord {
    public:
        void inputAll() {
            inputAcademic();
            inputSports();
        }
        void displayAll() {
            displayAcademic();
            displaySports();
        }
};


int main() {
    Student student;

    cout << "Enter student details..."<<endl;
    student.inputAll();

    cout << "Student details..."<<endl;
    student.displayAll();

    return 0;
}