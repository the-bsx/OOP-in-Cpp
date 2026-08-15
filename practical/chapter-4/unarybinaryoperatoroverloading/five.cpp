// 5. Overloading Comparison Operator (Binary)
// Write a C++ program to create a class Distance with:
//  Data members: feet and inches.
//  Overload the ‘&gt;’ operator to compare two distance objects.
//  Display which distance is greater.

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
        int totalDistance() const {
            return (feet * 12) + inch;
        }
        bool operator>(const Distance& obj) {
            return this->totalDistance() > obj.totalDistance() ;
        }

        void display() {
            cout << feet << " feet " << inch << " inches "<<endl; 
        }
};

int main() {
    Distance d1(5, 10);
    Distance d2( 5, 5);

    cout << "d1 = ";
    d1.display();
    cout << "d2 = ";
    d2.display();

    if(d1 > d2) {
        cout << "d1 is greater than d2"<<endl;
    } else if(d2 > d1) {
        cout << "d2 is greater than d1"<<endl;
    } else {
        cout << "Both d1 and d2 are equal";
    }

    return 0;
}