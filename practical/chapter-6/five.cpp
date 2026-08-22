// 5. Concrete Class Example:Write a C++ program to:
// Create a concrete class Employee with complete implementation of all functions.
// Show the difference between concrete class (fully defined) and abstract class (contains pure
// virtual function).

#include<iostream>
using namespace std;

class Employee {
    private:   
        int id;
        string name;
        float salary;

    public: 
        Employee(int i, string n, float s) {
            id = i;
            name = n;
            salary = s;
        }

        void displayEmp(){
            cout <<"Employee id: "<< id<<endl;
            cout<< "Employee name: "<< name<<endl;
            cout << "Salary: "<< salary<<endl;
        }
};


class Person {
    public:
        virtual void work() = 0;
};

int main() {

   // Person p; // Error: object of abstract class type "Person" is not allowed:

   Employee emp(123, "Bishal", 100000.00);

   emp.displayEmp();

   return 0;

}