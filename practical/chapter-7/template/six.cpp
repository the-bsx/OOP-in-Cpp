// 6. Function Template vs. Function Overloading
// Write a C++ program to compare:
//  A function template for swapping two variables of any type.
//  Traditional function overloading to swap int, float, and char.
// Explain the advantages of templates over overloading in comments.

#include<iostream>
using namespace std;

// function template
template<typename T>
void swapTemplate(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

// function overloading
void swapOverload(int &a, int &b) {
    int temp = a;
    a = b;
    b= temp;
}

void swapOverload(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b= 20;
    float c = 5.2, d = 6.4;

    cout <<"Using template function: "<<endl;
    swapTemplate(a, b);
    cout << "Integer swap: "<< a << "  " << b<<endl;
    swapTemplate(c, d);
    cout << "Float swap: "<< c << "  "<< d<<endl;

    cout <<"Using function overloading: "<<endl;
    swapOverload( a, b);
    cout <<"Integer swap: "<< a << " "<< b<< endl;
    swapOverload(c, d);
    cout <<"Float swap: "<< c << "  "<< d<<endl;

    return 0;
}