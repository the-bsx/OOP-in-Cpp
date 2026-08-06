#include<iostream>
using namespace std;

class Book {
    private:
    string name;
    float price;

    public:
    void getData() {
        cout << "Enter name of book and price: "<<endl;
        cin >> name>> price;
    }

    void disp() {
        cout << name << price;
    }
    Book compare(Book b1 ) {
        if(price< b1.price) {
            return *this;
        } else {
            return b1;
        }
    }
};

int main() {
    Book b1, b2, b3;
    b1.getData();
    b2.getData();
    b3 = b1.compare(b2);

    b3.disp();
}