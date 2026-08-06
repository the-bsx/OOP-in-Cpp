#include<iostream>
using namespace std;

class A {
    protected:
        int x;
    public:
        A(int val) {
            x = val;
        }

};
class B: public A {
    private:
        int y;

    public:
    B(int a, int b): A(a) {
        y = b ;
    }

    void display() {
        cout <<"X: "<< x<< " Y: "<< y;
    }
};

int main() {
    B b(5, 10);
    b.display();
}