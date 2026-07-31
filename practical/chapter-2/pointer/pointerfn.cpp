// 10. Pointers and Functions
// Write a C++ program to create a function that accepts an array and its size using pointers. The
// function should calculate and return the sum of all elements in the array.

#include<iostream>
using namespace std;

int sumArray(int *arr, int size){
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int n;
    
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter value: \n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int total  = sumArray(arr, n);

    cout << "Total sum is: "<< total;

    return 0;
}