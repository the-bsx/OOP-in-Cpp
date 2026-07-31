// 7. Pointer Variables Declaration and Initialization
//  Write a C++ program to declare a pointer to an integer, assign it the address of an integer
// variable, and display the value using the pointer.

#include<iostream>
using namespace std;

int main() {
    int num = 38;
    int *ptr = &num;

    cout << "address of num: "<< ptr<<endl;
    cout << "value of num: " << *ptr;  
}