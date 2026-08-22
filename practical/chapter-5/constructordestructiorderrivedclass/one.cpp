// 1. Order of Execution of Constructors and Destructors (Single Inheritance)
// Write a C++ program to create a base class Person and a derived class Employee.
//  Use constructors and destructors in both classes.
//  Demonstrate the order of constructor and destructor execution when creating and destroying
// an Employee object.

#include<iostream>
using namespace std;

class Person {
    protected:
        string name;
    
    public:
        Person(string n): name(n) {
            cout << "Person constructor called for "<< name<<endl;
        } 

        ~Person() {
            cout <<"Destructor called for "<<name<<endl;
        }
        void displayPerson() {
            cout << "Name: "<<name <<endl;
        }
};


class Employee: public Person {
    private:
        int empId;
    public:
        Employee(string name, int eid): Person(name), empId(eid) {
            cout << "Employee constructor called for ID: "<< empId <<endl;
        }

        ~Employee() {
            cout << "Employee destructor called for ID: "<< empId<<endl;
        }
        void displayEmployee() {
            displayPerson();
            cout << "Employee id: "<<empId <<endl;
        }
};

int main() {

    Employee emp("Bishal", 123);
    emp.displayEmployee();
    return 0;
}