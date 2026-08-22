// 6. Virtual Destructor:Write a C++ program to:
// Create a base class Shape with a virtual destructor.
// Derive a class Rectangle from Shape.
// Demonstrate the importance of virtual destructors by deleting derived class objects using base
// class pointers to avoid memory leaks or incomplete destruction.

#include<iostream>  
using namespace std;

class Shape {
    public:
          Shape() {
            cout <<"Base class constructor"<<endl;
        }


        virtual ~Shape() {
            cout << "Shape destructor called"<<endl;
        }
};

class Rectanlge: public Shape {
    public:
        Rectanlge() {
            cout <<"Rectangle constructor"<<endl;
        }
        virtual ~Rectanlge() {
            cout << "Rectangle destructor called"<<endl;
        }
};

int main() {
    Shape* shapePtr;

    shapePtr = new Rectanlge();

    delete shapePtr;

    return 0;
}