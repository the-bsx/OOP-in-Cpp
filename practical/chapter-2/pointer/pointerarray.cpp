// 9. Pointers and Arrays
//  Write a C++ program to dynamically allocate memory for an array using pointers. Accept
// elements from the user and display the array contents.

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n]; // dynamically allocated memory for  integer array of size n

    //input
    cout <<"Enter values: \n";
    for(int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    //output 
    cout << "Output: ";
     for(int i = 0; i < n; i++) {
        cout << *(arr + i)<< " ";
    }

    delete[] arr;

    return 0;

}