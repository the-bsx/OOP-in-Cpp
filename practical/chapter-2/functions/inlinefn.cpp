// 2. Inline Functions
//  - Write a C++ program to define an inline function to calculate the square of a number.
// -  Demonstrate its usage by calling it for different numbers.

#include<iostream>

using namespace std;

// inline function
inline int square(int value) {
    return value * value;
}

int main() {
    int num;
    // input
    cout << "Enter the integer number: " << endl;
    cin >> num;

    // output
    cout << "Square: " << square(num);

    return 0;
}