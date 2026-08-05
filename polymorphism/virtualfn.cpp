#include<iostream>
using namespace std;

class Parent {

    public:
        virtual void display() {
            cout << "Parent class called";
        }
};

class Child: public Parent {
    public:
        void display() override{
            cout << "Child class called";
        }
};

int main( ) {
    Parent *p;
    Child c;
    p = &c;

    p->display();
}

