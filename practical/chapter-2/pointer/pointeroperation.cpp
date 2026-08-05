// 8. Operators in Pointers / Pointer Arithmetic
//  Write a C++ program to input elements in an array and display them using pointer arithmetic
// (without using array indexing).

#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of array\n";
    cin >> n;

    int arr[n];
    int *ptr = arr; // or &arr[0]

    // input
    cout <<"Enter the integer values\n"; 
    for(int  i = 0 ; i < n; i++) {
        cin >> *(ptr + i);
    }

    // output
    cout<< "Output: ";
    for(int i = 0; i < n; i++) {
        cout << *( ptr + i)<< " ";
    }


    return 0;



}