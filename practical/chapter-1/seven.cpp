// 7. Dynamic Memory Allocation with new and delete
//  Write a C++ program that dynamically allocates memory for an array of integers based
// on user input. Accept elements from the user, display them, and then deallocate the
// memory using delete.

#include<iostream>

using namespace std;

int main() {
    int N;
    cout<< "Enter the size of array" << endl;
    cin >> N;

    // dynamically allocates memory
    int* arr = new int[N];

    //input
    for(int i = 0; i < N; i++) {
        cout<< "Enter element" << (i + 1)<< ": "<< endl;
        cin >> arr[i];
    }

    //output
    for(int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    // free allocated space
    delete[] arr;

    return 0;
}
