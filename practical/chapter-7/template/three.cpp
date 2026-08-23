// 3. Class Templates
// Write a C++ program to create a class template named Calculator that:
//  Accepts any data type.
//  Performs addition, subtraction, multiplication, and division.
//  Demonstrate the class template with different data types like int and float.


#include<iostream>
using namespace std;

template <class T>
class Calculator {
    private:
        T numOne, numTwo;
    
    public:
        Calculator(T a, T b) {
            numOne = a;
            numTwo = b;
        }

        T add() {
            return numOne + numTwo;
        }
        T sub() {
            return numOne - numTwo;
        }

        T multiply() {
            return numOne * numTwo;
        }

        T divide() {
           if(numTwo == 0) {
            cout << "Error: Division by zero!"<<endl;
            return 0;
           }
           return numOne / numTwo;
        }

        void display() {
            cout <<"Numbers: " << numOne << " and "<< numTwo<<endl;
            cout <<"Addition: " << add() <<endl;
            cout << "Subtraction: " << sub() << endl;
            cout << "Multiplication: "<< multiply() << endl;
            cout << "Division: "<< divide() <<endl;
        }
};


int main() {
    cout << "---Calculator<int>---" <<endl;
    Calculator<int> intCalc(60, 9);
    intCalc.display();

    cout <<"---Calculator<float>---"<<endl;
    Calculator<float> floatCalc(10.5f, 6.7f);
    floatCalc.display();

    return 0;
}