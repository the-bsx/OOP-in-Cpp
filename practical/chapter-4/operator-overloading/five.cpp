// 5. Rules for Overloading Operators
// Write a C++ program to create a class Box and overload the ‘*’ operator to multiply the volumes of two
// boxes.
//  Ensure the program follows the rules of operator overloading, such as:
//  At least one operand must be a user-defined type.
//  Cannot create new operators.
//  Use member function syntax correctly.

#include<iostream>
using namespace std;

class Box {
    private:
        double length;
        double breadth;
        double height;

    public:
        Box(double l = 0.0, double b = 0.0, double h = 0.0) {
            length = l;
            breadth = b;
            height = h;
        }

        // member function to calculate the volume of box
        double getVolume() const{
            return ( length * breadth * height );
        }

        double operator*(const Box& b) {
            return this->getVolume() * b.getVolume();
        }
};

int main() {
    Box b1(2.0, 3.1, 1.3);
    Box b2(1.1, 2.2, 3.3);

    double result = b1 * b2;

    cout << "Volume of box 1: "<< b1.getVolume()<< endl;
    cout << "Volume of box 2: "<< b2.getVolume()<< endl;
    cout <<"product of boxes volumes: "<< result;

    return 0;
}