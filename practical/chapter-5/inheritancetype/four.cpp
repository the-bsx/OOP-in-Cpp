// 4. Single Inheritance
 //Write a C++ program to create:
 // A base class Shape and a derived class Rectangle.
//Display the area of the rectangle using functions from both classes.

#include<iostream>
using namespace std;

class Shape {
    protected:
        string shape;

    public:
        Shape(string s = "shape") {
            shape = s;
        }

        void display() {
            cout <<"shape of object is: "<< shape<< endl;
        }
};

class Rectangle: public Shape{
    private:
        double length;
        double width;
    public:
    Rectangle(double l = 0, double w = 0) : Shape("Rectangle") {
        length = l;
        width = w;
    }

    double getArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect(4.5 , 5.5);
    rect.display();
    cout << "Area of rectangle: "<< rect.getArea();

    return 0;
}