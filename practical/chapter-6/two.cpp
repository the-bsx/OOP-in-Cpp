// 2. Pointer to Base Class (Polymorphic Behavior)
// Write a C++ program to:
// Create a base class Shape with a virtual function display().
// Derive two classes: Rectangle and Circle.
// Create a pointer to the base class and demonstrate calling the appropriate display() function for
// each derived object using the base class pointer.


#include<iostream>
using namespace std;

class Shape {
    public:
        virtual void display() {
            cout << "This is generic shape"<<endl;
        }
};

class Rectangle: public Shape {
    private:
        int length;
        int width;

    public:
        Rectangle(int l, int w) {
            length = l;
            width = w;
        }
        void display() override {
            cout << "Rectangle area: "<< (length * width) <<endl;
        }
};

class Circle: public Shape {
    private:
        double radius;

    public: 
        Circle(double r) {
            radius = r;
        }

        void display() override {
            cout <<"Circle area: "<< (3.14 * radius * radius) <<endl;
        }
};


int main() {

    Shape* shapePtr;
    Rectangle rectangle(3, 4);
    Circle circle( 4.5);

    cout <<"Pointer to rectangle..."<<endl;
    shapePtr = &rectangle;
    shapePtr->display();

    cout <<" Pointer to circle..."<<endl;

    shapePtr = &circle;
    shapePtr->display();

    return 0;
}