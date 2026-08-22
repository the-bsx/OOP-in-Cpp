// 3. Constructor Execution in Multiple Inheritance
// Write a C++ program to create two base classes A and B and a derived class C that inherits from both.
// Show the order in which constructors and destructors are called in multiple inheritance.


#include<iostream>
using namespace std;

class A {
    public:
        A() {
            cout << "A constructor called."<<endl;
        }
        ~A() {
            cout << "A destructor called."<<endl;
        }
};

class B {
    public:
        B() {
            cout << "B constructor called"<<endl;
        }

        ~B() {
            cout << "B destructor called"<<endl;
        }
};

class C: public A, public B {
    public:
        C() {
            cout << "C constructor called"<<endl;
        }
        ~C() {
            cout << "C destructor called"<<endl;
        }
};

int main() {
    C obj;
    return 0 ;
}