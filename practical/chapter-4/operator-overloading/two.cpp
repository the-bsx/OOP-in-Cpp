// 2. Overloading Relational Operators
// Write a C++ program to create a class Distance that stores feet and inches.
//  Overload the ‘&gt;’ operator to compare two Distance objects based on their total length.
//  Display the comparison result.


#include<iostream>
using namespace std;

class Distance {
    private:
        int feet;
        int inch;
    public:
        Distance(int f = 0, int i = 0) {
            feet = f;
            inch = i;
        }
        // convert feet into inch too, easy to  compare the total distance between two objects
        int totalInch() {
            return (feet * 12) + inch; // return total distance into inch( 12, 3) = 15 inch
        }

        bool operator>(Distance obj) {
            return this->totalInch() > obj.totalInch();
        }

        void display() {
            cout << feet << " feet " << inch << " inches" << endl;
        }
};


int main() {
    Distance d1(5 , 4);
    Distance d2(6, 1);

    cout << "d1 = ";
    d1.display();
    cout<< "d2 = ";
    d2.display();

    if(d1 > d2) {
        cout <<"d1 is greater than d2"<<endl;
    } else {
        cout <<" d1 is not greater than d2"<<endl;
    }

    if(d2 > d1) {
        cout <<" d2 is greater than d1"<<endl;
    } else {
        cout << "d2 is not gretaer than d1"<<endl;
    }

    return 0;
}