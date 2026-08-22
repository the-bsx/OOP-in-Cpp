// 1. Basic Inheritance: Derived Class and Base Class
// Write a C++ program to create a base class Person with:
//  Data members: name and age.
//  A derived class Student that adds student ID and marks.
//  Member functions to input and display all data.
// Demonstrate how to access base and derived class members.


#include<iostream>
using namespace std;

class Person {
    protected:
        string name;
        int age;

    public:
        void getPerson() {
            cout <<"Enter name: ";
            cin >> name;
            cout <<"Enter age: ";
            cin >> age;
        }
        void displayPerson() {
            cout<< "Name: "<< name << endl;
            cout<<"Age: "<< age<< endl;
        }
};

class Student: public Person {
    private:
        int studentId;
        float marks;
    
    public:
        void getStudentInfo() {
            getPerson();
            cout<< "Enter student Id: ";
            cin >> studentId;
            cout<< "Enter obtained marks: ";
            cin >> marks;
        }

        void displayStudentInfo() {
            cout <<"Student details..."<<endl;
            displayPerson();
            cout<<"Student id: "<< studentId<<endl;
            cout <<"Total marks: "<< marks;
        }
};


int main() {
    Student s;
    s.getStudentInfo();
    s.displayStudentInfo();
    
    return 0;
}