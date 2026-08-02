// 2. Returning Objects from Functions
// Write a C++ program to create a class Complex to represent complex numbers.
//  Include member functions to:
// o Input complex numbers.
// o Add two complex numbers using a member function that returns a Complex object.
// o Display the result.

#include<iostream>
using namespace std;

class  Complex {
    private:
        float real;
        float imag;
    
    public:
        void input() {
            cout <<"Enter the real part: ";
            cin >> real;
            cout <<"Enter the imaginary part: ";
            cin >> imag;
        }

        Complex addComplex(Complex c2) {
            Complex temp;
            temp.real = this->real + c2.real;
            temp.imag = this->imag + c2.imag;
            return temp;
        }

        void display() {
            if(imag >= 0) {
                cout << real << " + "<< imag<<"i"<<endl;
            } else{
                cout << real << " - "<< (-imag)<<"i"<<endl;
            }
        }
};

int main() {
    Complex c1, c2;
    
    cout <<"Enter first complex number"<<endl;
    c1.input();

    cout <<"Enter second complex number"<< endl;
    c2.input();

    Complex sum = c1.addComplex(c2);

    cout <<" first complex number: ";
    c1.display();
    
    cout <<" second complex number: ";
    c2.display();

    cout <<" sum of complex number: ";
    sum.display();
}