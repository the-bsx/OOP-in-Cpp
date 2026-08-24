
// constructor overloading is the concept when both the default and parameterized consturctor are created
//! better to have parameterized constructor with default value  
#include<iostream>
#include<string>
using namespace std;
class student {
    private:
        int rollNumber;
        string name;
    public:
        student() {
            rollNumber = 0;
            name = "Unkown";
        }
        student(int r, string n) {
            rollNumber = r;
            name = n;
        }
    void display() {
        cout << rollNumber << ", " << name << endl;
    }    
};

int main() {
    student s1;
    s1.display();

    student s2(69, "xyz");
    s2.display();
}