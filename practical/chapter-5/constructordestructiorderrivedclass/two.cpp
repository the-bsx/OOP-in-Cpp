// 2. Order of Execution in Multilevel Inheritance
// Write a C++ program to create three classes: GrandParent, Parent, and Child.
//  Each class should have its own constructor and destructor.
//  Display the order of constructor and destructor calls using output messages.

#include<iostream>
using namespace std;

class GrandParent {
    public:
        GrandParent(){
            cout << "Grand parent constructor called"<<endl;
        }
        ~GrandParent() {
            cout << "Grand parent destructor called"<<endl;
        }
};

class Parent: public GrandParent {
    public:
        Parent() {
            cout <<"Parent constructor called"<<endl;
        }
        ~Parent() {
            cout <<"Parent destructor called"<<endl;
        }
};

class Child: public Parent {
    public:
        Child() {
            cout << "Child constructor called"<<endl;
        }
        ~Child() {
            cout << "Child destructor called"<<endl;
        }
};

int main() {
    Child obj;
    
    return 0;
}