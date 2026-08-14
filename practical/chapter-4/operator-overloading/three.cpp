// 3. Operator Overloading with Class Members
// Write a C++ program to create a class Time that stores hours and minutes.
//  Overload the ‘+’ operator as a member function to add two Time objects and return the result
// as an object.

#include<iostream>
using namespace std;


class Time {
    private:
        int hour;
        int minutes;
    public:
        Time(int h = 0, int m = 0){
            hour = h;
            minutes = m;
        }
        Time operator+(Time t2) {
            Time temp;
            temp.hour = this->hour + t2.hour;
            temp.minutes = this->minutes + t2.minutes;
            // if minute is greater than 60 add that into hour
            if(temp.minutes >= 60){

            temp.hour += temp.minutes / 60;
            temp.minutes = temp.minutes % 60;
        }
        return temp;
    }
    void display() {
        cout << hour <<" hours and " << minutes << " minutes"<< endl;
    }
};

int main() {
    Time t1(5, 55); // 5 hours and 55 minutes
    Time t2( 1, 15); // 1 hours and 15 minutes

    Time t3 = t1 + t2;

    cout << "Total time: ";
    t3.display(); // expected output: 7 hours and 10 minutes

    return 0;
}