// 1. Function Overloading
//  Write a C++ program to overload a function display():
// - First version displays an integer.
// - Second version displays a float.
// - Third version displays a string.

#include<iostream>
using namespace std;

 void display(int value) {
    cout << "output: " << value << endl;
}

void display(float value) {
    cout << "output: " << value << endl;
}

void display(string value) {
    cout << "output: " << value;
}
int main() {

    // calling the functions
    //int
    display(69);

    //float (without f c++ compiler  treats 4.5 as dobule not float so error will come.
    // so by putting f it tells the compiler that value is float type)
    display(4.5f);

    //string
    display("Sixty Nine");
}