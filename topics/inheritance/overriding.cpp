#include<iostream>
using namespace std;

class A {
    public:
        void show () {
            cout<< "hello from A"; // it will be override by B 
        }
};

class B: public A {
    public: 
        void show()  {
            cout << "Hello from B";
        }
};

int main() {
    B b;
    b.show();
}