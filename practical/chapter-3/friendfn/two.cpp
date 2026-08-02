// 5. Friend Class
// Write a C++ program to create two classes Box and Printer.
//  Make Printer a friend class of Box.
//  Allow the Printer class to access and display the private dimensions of the Box class.


#include<iostream>
using namespace std;

class Box{
    private:
        float length;
        float width;
        float height;

    public:
        void input() {
            cout << "Enter length: ";
            cin >>length;
            cout <<"Enter width: ";
            cin >> width;
            cout <<"Enter height: ";
            cin >> height;
        }
        
    friend class Printer;
};

class Printer{
    public:
        void display(Box b) {
            cout <<"Accessing Box private fields from Printer"<<endl;
            cout<< "length: "<< b.length<<endl;
            cout<<"width: "<< b.width<<endl;
            cout<< "height: "<< b.height;
        }
};

int main() {
    Box box;
    Printer printer;

    cout <<"Enter box dimensions..."<<endl;
    box.input();

    printer.display(box);

    return 0;
}