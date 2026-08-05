#include<iostream>
using namespace std;

class Coordinate {
    private:
        int x;
        int y;
    public:
        void getData() {
            cout <<"Enter X and Y coordinate"<< endl;
            cin >> x >> y;
        }

        Coordinate operator+(Coordinate c2) {
            Coordinate c3;
            c3.x = x + c2.x;
            c3.y = y + c2.y;
            return c3;
        }

        void display() {
            cout<< "X: "<<x <<"\t\tY: "<<y;
        }
};

int main() {
    Coordinate c1, c2, c3;
    c1.getData();
    c2.getData();
    c3 = c1 + c2;
    c3.display();
}