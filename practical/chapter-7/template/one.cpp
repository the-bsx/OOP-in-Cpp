// 1. Introduction to Templates and Function Templates
// Write a C++ program to create a function template named findMax() that finds the maximum of two
// values.
// Use the template for different data types: int, float, and char.

#include<iostream>
using namespace std;


// function template
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a: b;
}

int main() {
    int intMax = findMax(10, 20);
    cout <<"Maximum Integer: "<< intMax<<endl;

    float floatMax = findMax(2.5, 2.49);
    cout << "Maximum Float: " << floatMax<<endl;

    char charMax = findMax('a', 'A');
    cout <<"Maximum character: "<< charMax;

    return 0;
}