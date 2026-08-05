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
        void display() override {
            cout << "Child class called";
        }
};

class Anotherchild: public Parent {
    public:
        void display() override {
            cout << "Another child";
        }
};

int main( ) {
    Parent *p;
    Child c;
    Anotherchild a;
    p = &c;
    p->display();

    p = &a;
    p->display();

}

