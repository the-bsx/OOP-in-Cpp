// 6. Ambiguity in Multiple Inheritance
// Write a C++ program to create:
//  Two base classes ClassA and ClassB both having a function display().
//  A derived class ClassC inheriting from both ClassA and ClassB.
// Demonstrate ambiguity when calling the display() function from ClassC and solve it using scope

#include<iostream>
using namespace std;

class A {
    public:
        void display() {
            cout << "Hello from A"<<endl;
        }
};

class B {
    public:
        void display() {
            cout << "Hello from B" <<endl;
        }
};

class C: public A, public B {

};

int main() {
    C c;
    // c.display(); // "C.display" is ambiguous 
    // so use scope resolution operator to solve the ambiguity problem in multiple inheritance

    c.A::display(); // call the dispaly of class A

    c.B::display(); // call the dispaly of class B

    return 0;
}