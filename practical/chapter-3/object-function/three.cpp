// 3. Static Data Members and Static Member Functions
// Write a C++ program to create a class Employee that:
//  Contains a static data member to count the number of employees.
//  Has a member function to input employee details.
//  Has a static function to display the total number of employees created.
//  Demonstrate calling the static function using the class name (without using an object).

#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int id;

    static int count;

public:
    void input()
    {
        cout << "Enter employee id: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin >> name;

        count++;
    }

    void display()
    {
        cout << "Id: " << id << " " << " Name: " << name << endl;
    }
    static void displayCount()
    {
        cout << "Total employees created: " << count << endl;
    }
};

// Static data members MUST be defined (and optionally initialized) OUTSIDE the class
int Employee::count = 0;

int main() {
    Employee e1, e2, e3;
    
    cout <<"Enter employe 1 details...."<<endl;
    e1.input();
    cout <<"Enter employe 2 details...."<<endl;
    e2.input();
    cout <<"Enter employe 3 details...."<<endl;
    e3.input();

    cout<< "---Employees details---"<<endl;
    e1.display();
    e2.display();
    e3.display();

    // calling the static function  using class name(no object needed)
    Employee::displayCount();
    return 0;


}
