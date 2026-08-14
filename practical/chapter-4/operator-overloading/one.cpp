// 1. Basic Operator Overloading (Fundamentals)
// Write a C++ program to create a class Complex to represent complex numbers.
//  Overload the ‘+’ operator to add two complex numbers using a member function.
//  Display the result using a member function.

#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        void getData() {
            cout<< "Enter real part: ";
            cin >> real;
            cout <<"Enter imaginary part: ";
            cin >> imag;
        }

        Complex operator+(Complex c2) {
            Complex c3;
            c3.real = real + c2.real;
            c3.imag = imag + c2.imag;
            return c3;
        }

        void disp(){
            if(imag > 0) {
                cout << real <<" + "<< imag<<"i"<<endl;
            } else{
                cout << real << "- "<< -imag<<"i"<<endl;
            }
        }

};

int main() {


    Complex c1, c2, c3;

    //input
    c1.getData();
    c2.getData();

    c3 = c1 + c2;


    c1.disp();
    c2.disp();
    c3.disp();
    return 0;
}