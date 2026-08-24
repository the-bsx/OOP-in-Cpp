// binary operator overloading using friend function 
// we are doing + operator overloading and similar for other like - too
#include<iostream>
using namespace std;

class Coordinate {
    private:
        int x;
        int y;

    public:
        void getData(){
            cout << "Enter the coordinate X and Y"<<endl;
            cin >> x >> y;
        }

        friend Coordinate operator+(Coordinate, Coordinate);

        void display() {
            cout <<"X: "<<x<<"\t\tY: "<<y;
        }
};

Coordinate operator+(Coordinate c1, Coordinate c2) {
    Coordinate c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;

    return c3;
}

int main() {
    Coordinate c1, c2, c3;
    c1.getData();
    c2.getData();
    
    c3 = c1 + c2;
    c3.display();
}
