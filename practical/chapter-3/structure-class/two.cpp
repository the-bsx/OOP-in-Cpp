// 2. Class and Object | Accessing Members
// Write a C++ program to create a class Rectangle with:
// Private members: length and width.
// Public member functions to input, calculate the area, and display the area.
// Demonstrate object creation and access to member functions using the dot operator.

#include<iostream>
using namespace std;

class Rectangle {
    
    private:

        double length;
        double width;
        double area;

    public:
        
        void input(){
            cout << "Enter the length: ";
            cin >> length;
            cout <<"Enter the width: ";
            cin >> width;
        }

        void calculateArea() {
            area = length * width;
        }

        void display() {
            cout << "Area: " << area;
        }
};

int main() {
    Rectangle r;
    r.input();
    r.calculateArea();
    r.display();

    return 0;
}