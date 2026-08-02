// 3. Memory Allocation for Objects
// Write a C++ program to dynamically create an object of a class Circle using pointers and the new
// keyword.
// Accept radius as input.
// Calculate and display the area.
// Properly deallocate memory using the delete keyword.

#include<iostream>
using namespace std;

class Circle {
    private:
        float radius;

    public:
        void input() {
            cout << "Enter the radius of circle: ";
            cin >> radius;
        }

        void display() {
            float area = 3.14 * radius * radius;
            cout << "Area of circle: "<< area;
        }
};

int main() {
    Circle *circleptr = new Circle();
    
    //  to access members using pointers use -> not the dot(.) operator
    circleptr->input();
    circleptr->display();

    delete circleptr;
}