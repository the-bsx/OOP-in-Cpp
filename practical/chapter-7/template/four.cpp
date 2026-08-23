// 4. Templates and Inheritance
// Write a C++ program to create:
//  A base class template named Array that stores an array of any data type.
//  A derived class template named SumArray that calculates the sum of the array elements.
//  Demonstrate the use of templates with inheritance.

#include<iostream>
using namespace std;

template <typename T>

class Array {
    protected:
        T arr[5];

    public:
        void input() {
            cout << "Enter 5 elements: "<<endl;
            for(int i = 0; i < 5; i++) {
                cin >> arr[i];
            }
        }
        void display() {
            cout <<"Arrays elements: ";
            for(int i = 0; i < 5; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

template <typename T>
class SumArray: public Array<T> {
    public:
        T sum() {
            T total = 0;
            for(int i = 0; i < 5; i++) {
                total += this->arr[i];
            }
            return total;
        }
};

int main() {

    // using template with int
    SumArray<int> intArray;
    cout <<"Integer array: "<<endl;
    intArray.input();
    intArray.display();

    cout <<"Sum: "<< intArray.sum()<<endl;

    //using template with float
    SumArray<float> flaotArray;
    cout <<"Float array: "<<endl;
    flaotArray.input();
    flaotArray.display();
    cout <<"Sum: "<< flaotArray.sum()<<endl;

    return 0;
}
