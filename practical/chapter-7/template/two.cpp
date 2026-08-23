// 2. Function Template with Multiple Arguments
// Write a C++ program to create a function template that:
//  Accepts two arguments of possibly different data types and displays them.
//  Call the template function with combinations like int and float, float and string, etc.


#include<iostream>
using namespace std;

template<typename T1, typename T2>

void display(T1 a, T2 b) {
    cout << a << " " << b<< endl;
}

int main() {

    // int and float
    display(10, 5.5f);

    // character and int
    display('A', 1);

    // string and float
    display("Bishal", 45.5);

    return 0;
}