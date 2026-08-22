// 7. Multilevel Inheritance
// Write a C++ program to create:
//  A base class Person, derived class Employee, and further derived class Manager.
//  Accept and display manager’s personal, employment, and managerial details.


#include<iostream>
using namespace std;

class Person {
    protected:
        string name;
        int age;
    public:
        void inputPerson() {
            cout<< "Enter name: ";
            cin >>name;
            cout <<"Enter age: ";
            cin >> age;
        }
        void displayPerson() {
            cout <<"Name: "<<name<< endl;
            cout <<"Age: "<< age << endl;
        }
};

class Employee: public Person{
    protected:
        int empId;
        float salary;
    public:
        void inputEmployee() {
            inputPerson();
            cout <<"Enter employee id: ";
            cin >>empId;
            cout<<"Enter employee salary: ";
            cin >>salary;
        }

        void displayEmployee() {
            displayPerson();
            cout <<"Employee id: "<< empId<< endl;
            cout <<"Salary: "<< salary<< endl;
        }
};

class Manager: public Employee {
    private:
        string department;
        int teamSize;
    public: 
        void inputManager() {
            inputEmployee();
            cout <<"Enter department name: ";
            cin >>department;
            cout <<"Enter the size of team: ";
            cin >>teamSize;
        }

        void displayManager() {
            displayEmployee();
            cout <<"Department: "<< department<<endl;
            cout <<"Size of team: "<< teamSize<<endl;
        }
};


int main() {
    Manager manager;
    cout <<"Enter manager details..."<<endl;
    manager.inputManager();
    cout <<"Manager details..."<<endl;
    manager.displayManager();

    return 0;
}