// A copy constructor is a special constructor that creates a new object as a 
// copy of an already-existing object of the same class.

#include<iostream>
#include<string>
using namespace std;

class student {
    private:
        int rollNumber;
        string name;
        string address;
    public:
        student(int r, string n, string a ) {
            rollNumber = r;
            name = n;
            address = a;
        }
        
        // student(const student &s) {     // copy constructor
        //     rollNumber = s.rollNumber;
        //     name = s.name;
        //     address = s.address;
        // }
        void display() {
            cout << rollNumber<< ", " << name << ", "<< address <<endl;
        }
};
int main() {
    student s1(69, "xyz", "ktm");
    student s2 = s1;
    s2.display();
}