// unary operator overloading (++)
#include<iostream>
using namespace std;

class Info {
    private:
        int value;
    public:
        Info(int val) {
            value = val;
        }
        void operator ++() {
            ++value;
        }
        void display() {
            cout<<"Value: "<< value;
        }
};

int main() {
    Info i(10);
    ++i;  // or  i.operator++();
    i.display();
}