// 6. Copy Initialization
// Write a C++ program to create a class Book with:
//  A parameterized constructor.
//  Demonstrate copy initialization by initializing one object using another at the time of
// declaration.
// Book b1(&quot;C++ Programming&quot;, 500);
// Book b2 = b1; // Copy initialization


#include <iostream>
using namespace std;

class Book {
private:
    string title;
    float price;

public:
    Book(string t, float p) {
        title = t;
        price = p;
        cout << "Parameterized constructor called for: " << title << endl;
    }

    Book(const Book &other) {
        title = other.title;
        price = other.price;
        cout << "Copy constructor called for: " << title << endl;
    }

    void displayData() {
        cout << "Title: " << title << ", Price: " << price << endl;
    }
};

int main() {
    Book b1("C++ Programming", 500);

    Book b2 = b1;

    cout << "b1 details" << endl;
    b1.displayData();

    cout << " b2 details" << endl;
    b2.displayData();

    return 0;
}