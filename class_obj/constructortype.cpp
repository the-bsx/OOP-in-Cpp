
//! Types of constructor

// 1. default constructor
//  -------- doesn't take any parameters while object creation

// 2. parameterized constructor
//  -------- take parameters while creating object
//  ------------- example of parameterized constructor------------------
#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int rollNumber;
    string name;

public:
    student(int r, string n)
    {
        rollNumber = r;
        name = n;
    }
    void display()
    {
        cout << rollNumber << ", " << name << endl;
    }
};
int main()
{

    // values are passed while creating object when constructor is parameterized
    student s1(69, "xyz");
    s1.display();
}

// ----------- example of default constructor---------------------------

class user
{
private:
    int id;
    string name;

public:
user() {
    id = 0;
    name = "unknown";
}
void display() {
    cout<< id<< ", " << name;
}
};

// int main() {
//     user u1;
//     u1.display(); // 0 , unknown 
// }