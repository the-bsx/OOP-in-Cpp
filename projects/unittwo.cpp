//  Create a complete C++ project that demonstrates:
// o A function with default arguments.
// o A function that passes and returns values by reference.
// o The use of pointer arithmetic for array operations.
// o Inline function to calculate squares of all elements in the array.

#include<iostream>
using namespace std;

// function with default arguments
void printName(string name = "Bishal") {
    cout << "Name: "<< name <<endl;
}

// returns values by reference
int& findMax(int &a, int &b) {
    if(a > b) {
        return a;
    } else {
        return b;
    }
}

// pointer arithmetic for array operation 

void doubleElement(int* arr, int size) {
    for(int i = 0 ; i< size; i++ ){
        *(arr + i) = *(arr + i) * 2;
    }
}

inline int square(int n) {
    return n * n;
}

int main() {

    int arr[5] = {1, 2, 3, 4, 5};


    // default argument function
    printName();
    printName("Bhusal");

    //return value by reference
    int a = 10, b = 20;
    int &ref = findMax(a, b);
    cout << "Largest: "<< ref<< endl;

    // pointer arithmentic for array
    doubleElement(arr, 5);
    for(int i = 0; i < 5; i++ ){
        cout << arr[i] << " ";
    }
    cout <<"\n";
    cout <<"square of 5: "<<square(5)<<endl;
    return 0;
}