// 5. Aggregation vs. Inheritance
// Write a C++ program that:
// Uses inheritance to create a Person and Teacher.
// Uses aggregation to create a Department and Teacher (where Department has-a Teacher).
// Show the difference between &quot;is-a&quot; and &quot;has-a&quot; relationships with clear examples.
#include<iostream>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        Person(string n, int a) {
            name = n;
            age = a;
        }
        void displayPerson() {
            cout <<"Name: "<< name<<endl;
            cout << "Age: "<<age<<endl;
        }
};

class Teacher: public Person{
    private:
        string subject;

    public:
        Teacher(string n , int a, string s): Person(n , a) {
            subject = s;
        }

        void displayTeacher() {
            displayPerson();
            cout << "Subject: "<<subject<<endl;
        }
};

class Department {
    private:
        string dept;
        Teacher teacher;
    public:
        Department(string dname, Teacher t) : teacher(t) {
            dept = dname;
        }

        void displayDept() {
            cout << "Department: "<<dept<<endl;
            teacher.displayTeacher();
        }
};

int main() {
    Teacher teacher("Bishal", 19, "Backend");

    Department dept("Computer Science", teacher);
    dept.displayDept();

    return 0;
}