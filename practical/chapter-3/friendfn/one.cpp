// 4. Friend Function
// Write a C++ program to create two classes Rectangle and Square.
//  Write a friend function that can access the private members of both classes and calculate the
// total area.

#include <iostream>
using namespace std;

class Square;

class Rectangle
{
private:
    float length;
    float width;

public:
    void input()
    {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectange: ";
        cin >> width;
    }

    friend float totalArea(Rectangle r, Square s);
};

class Square
{
private:
    float side;

public:
    void input()
    {
        cout << "Enter square side: ";
        cin >> side;
    }

    friend float totalArea(Rectangle r, Square s);
};

float totalArea(Rectangle r, Square s)
{
    float rectArea = r.length * r.width;
    float sqArea = s.side * s.side;
    return rectArea + sqArea;
}

int main()
{
    Rectangle rect;
    Square sq;
    cout << "Rectangle details..." << endl;
    rect.input();

    cout << "Square details..." << endl;
    sq.input();

    float total = totalArea(rect, sq);

    cout << "Total area: " << total;

    return 0;
}