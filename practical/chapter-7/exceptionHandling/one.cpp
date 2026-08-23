// 1. Basic Exception Handling: try, throw, and catch
// Write a C++ program to input two numbers and divide them.
//  Use try, throw, and catch to handle the exception if the divisor is zero.
//  Display a proper message for division by zero.

#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter numbers: "<<endl;
    cin >> a >> b;

    try{
        if(b == 0) {
            throw b;
        }
        cout << "Division: "<< (float)a / b <<endl;
    }
    catch(int ){
        cout << "Exception: Division by zero is not allowed"<<endl;
    }

    return 0;
}