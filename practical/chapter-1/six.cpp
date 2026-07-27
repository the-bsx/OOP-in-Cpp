// 6. Manipulators (endl, setw, setprecision)
//  Write a C++ program that inputs three product names, their prices, and quantities, then
// displays them in a tabular format using setw. Display the total price with two decimal
// places using setprecision. Use endl for line breaks.

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int n = 3;
    string productName[n];
    float price[n];
    int quantity[n];
    float total = 0;

    //input
    for(int i = 0; i < n; i++) {
        cout << "Enter name, price, and quantity for product " << (i + 1) << ": " <<endl;
        cin >> productName[i] >> price[i] >> quantity[i];
        total += price[i] * quantity[i];
    }
    
    // output
    cout<< left << setw(15) << "product"
        << right << setw(10) << "price"
        << right << setw(10) << "quantity" << endl;

    for(int i = 0 ; i < n; i++) {
        cout<< left << setw(15) << productName[i]
            << right << setw(10) << price[i]
            << right << setw(10) << quantity[i] << endl;
    }    
    //display total
    cout <<"Total price:"<<fixed <<  setprecision(2)<< total<< endl;

    return 0;

}