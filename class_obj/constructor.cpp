// Constructor is a special member function that is automatically called when an object of that class is created
// --------condtions--------
// -same name as class
// -no return type
// -called automatically, no need to  call it yourself
// -------------------EXAMPLE------------------------

#include <iostream>
#include <string>

using namespace std;
class student
{
private:
    int rollNumber;
    string name;

public:
    student()
    {
        rollNumber = 0;
        name = "unknown";
        cout << "Constructor called" << endl;
    }
    void display()
    {
        cout << "Name:" << name << ", " << "Roll no. " << rollNumber <<endl;
    }

    // Destructure is a special member function that is automatically called when an object is destroyed (goes out of scope)
    // ~class_name is used to make destructure member function
    ~student() {
        cout << "Destructre is called";
    }
};

int main()
{
    student s1; // constructor function called automatically when object is created
    s1.display();
}

