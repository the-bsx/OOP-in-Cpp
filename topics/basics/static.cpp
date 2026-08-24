#include<iostream>
using namespace std;

class Counter{    
    public:
    static int count;
        Counter() {
            count++;
        }
       static void display() {
            cout <<count;
        }
};

int Counter::count = 0;
int main() {
    Counter c1, c2;
    Counter::display();
}