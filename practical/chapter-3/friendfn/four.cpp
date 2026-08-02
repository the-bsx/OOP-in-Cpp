// 7. This Pointer
// Write a C++ program to create a class Product with:
//  Data members: product ID and price.
//  A member function to set data using the this pointer to differentiate between local and class data
// members.
//  A member function to display product details.

#include<iostream>
using namespace std;

class Product {
    private:
        int id;
        float price;
    
    public:
        void setData(int id, float price){
            this->id = id;
            this->price = price;
        }
        void display() {
            cout << "product id: "<< id << " "<< " ,price: "<< price;
        }
};

int main() {
    Product p;
    p.setData(1, 299.9);
    p.display();
}