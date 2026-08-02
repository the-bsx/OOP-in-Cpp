// 1. Objects as Function Arguments (Pass by Value & Reference)
// Write a C++ program to create a class Distance with:
//  Data members: feet and inches.
//  Member functions to input distance and display distance.
//  Pass an object to a function:
// - Once by value.
// - Once by reference.
// Explain and demonstrate the difference in behavior between both methods.

#include<iostream>
using namespace std;

class Distance {
    private:
        int feet;
        int inch;
    
    public:
        void input() {
            cout <<"Enter the feet: ";
            cin >> feet;
            cout <<"Enter the inch: ";
            cin >> inch;
        }

        void add(int f, int i) {
            feet += f;
            inch += i;
        }

        void display() {
            cout <<"feet: "<< feet<<"  inch: "<< inch<< endl;
        }
};

void valuefn(Distance d) {

    d.add(2, 3);
    cout <<"After modifying in pass by value function"<<endl;
    d.display();
}

void referencefn(Distance &d) {
    d.add(2, 3);
    cout <<"After modifying in pass by reference function"<<endl;
}

int main() {
    Distance dist;

    dist.input();
    dist.display();
    //pass by value;
    valuefn(dist);
    // original value will be preserved
    cout <<"orignal value"<<endl;
    dist.display();

    // pass by reference
    referencefn(dist);
    // original value will be changed
    dist.display();
}