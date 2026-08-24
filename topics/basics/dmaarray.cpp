
// -------------- example of DMA with array ---------------

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array" << endl;
    cin>> n;

    // allocate the memory  array of size n
    int* arr= new int[n];   // size decided at run time

    for(int i = 0; i < n; i++ ) {
        arr[i] = i * 10;
    }

    for(int i = 0; i < n; i++ ) {
        cout<< arr[i] << " ";
    }

    delete[] arr; // frees the entire array

}