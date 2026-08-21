// 1. Basic to User-Defined (Class) Conversion
// Write a C++ program to create a class Length that:
//  Stores a distance in meterss.
//  Overloads a constructor that allows conversion of a basic float type (representing meterss) into a
// Length object.
// Example:
// Length L1;
// L1 = 5.5; // Converts basic float to Length object


#include<iostream>
using namespace std;

class Length {
    private: 
        float meters ;

    public:
        Length() {
           meters = 0;
        }

        // Constructor for converting float to Length
        Length(float m) {
           meters  = m ;
        }

        void display() {
            cout <<"Lenght = " << meters;
        }
};

int main() {
    Length l;
    l = 5.5;

    l.display();
}