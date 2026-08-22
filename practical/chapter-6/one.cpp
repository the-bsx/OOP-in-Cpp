// 1. Static Polymorphism: Function Overloading and Operator Overloading
// Write a C++ program to demonstrate static polymorphism by:
// Overloading a function named display() to handle both integers and strings.
// Overloading the + operator to add two complex numbers.


#include<iostream>
using namespace std;

void display(int num) {
    cout <<"Integer: "<< num<<endl;
}

void display(string name) {
    cout <<"String: "<<name << endl;
}

class Complex {
    private:
        int real;
        int imag;
    public:
        Complex(int r =0 , int i = 0) {
            real = r;
            imag = i;
        }

        Complex operator+ (const Complex& other) {
            Complex temp;
            temp.real = real + other.real;
            temp.imag = imag + other.imag;
            return temp;
        }

        void display() {
            cout << real << " + "<< imag<<"i"<<endl;
        }
};

int main() {
    cout <<"Function overloading demo..."<<endl;
    display(38);
    display("Bishal");

    cout <<"operator overloading demo..."<<endl;

    Complex c1(5, 2 );
    Complex c2( 4, 1);
    Complex c3 = c1 + c2;

    c3.display();

    return 0;
}