// 4. Abstract Class and Pure Virtual Function
// Write a C++ program to:
// Create an abstract base class Shape with a pure virtual function area().
// Derive classes Circle and Rectangle that provide their own implementation of area().
// Demonstrate that abstract classes cannot be instantiated and show the correct use of pure
// virtual functions.

#include<iostream>
using namespace std;

class Shape {
    public:
    virtual void area() = 0;
};

class Circle : public Shape{
    private:
        double radius;
    public:
        Circle(double r = 0.0) {
            radius = r;
        }
        void area() override {
            cout <<"Area of circle: "<< (3.14 * radius * radius) << endl;
        }
};

class Rectangle: public Shape{
    private:
        int length;
        int width;

    public:
        Rectangle(int l, int w) {
            length = l;
            width = w;
        }

        void area() override{
            cout << "Area of Rectanlge: "<< (length * width)<< endl;
        }

};

int main() {

    Circle circle(5.0);

    circle.area();

    Rectangle rectangle(3, 4);
    rectangle.area();

    return 0;
}