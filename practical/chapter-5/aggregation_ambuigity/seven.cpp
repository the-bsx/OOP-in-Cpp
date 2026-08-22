// 7. Ambiguity in Multipath Inheritance
// Write a C++ program where:
//  Class A is a base class for classes B and C. Class D inherits from both B and C.
// Demonstrate multipath inheritance ambiguity (diamond problem) and solve it using virtual base

#include<iostream>
using namespace std;

class A {
    public :
        A() {
            cout << "A constructor called"<<endl;
        }
        void display() {
            cout << "Display function of class A"<<endl;
        }
};

class B : virtual public A {
    public:
        B() {
            cout << "B constructor called"<<endl;
        }
};

class C : virtual public A {
    public:    
        C() {
            cout << "C constructor called"<<endl;
        }
};

class D : public B , public C {
    public:
        D() {
            cout <<"D constructor called"<<endl;
        }
};

int main() {
    D obj;

    obj.display(); // if we don't use virtual keyword while inheritance in class B and C then while calling display from D  compiler gets confuse from which (among B and C ) to call
    

    return 0;
}