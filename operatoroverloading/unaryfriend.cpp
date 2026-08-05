// unary operator(++) overloading using friend function 
#include<iostream>
using namespace std;

class Increase {
    private:
        int value;

    public:
        Increase(int val){
            value = val;
        }
        friend void operator++( Increase &inr);

        void display() {
            cout <<"Value: "<< value;
        }
};

void operator++(Increase &inr){
    ++inr.value;
}

int main() {
    Increase inr(38);
    ++inr;
    inr.display();
}