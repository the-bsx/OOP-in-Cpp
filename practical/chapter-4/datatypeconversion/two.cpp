// 2. User-Defined (Class) to Basic Conversion
// Write a C++ program to create a class Time that:
//  Stores hours and minutes.

//  Provides a conversion function to convert the object to an integer that represents the total time
// in minutes.
// Example:
// Time T1(2, 30);
// int totalMinutes = T1; // Converts Time object to total minutes (basic type)



#include<iostream>
using namespace std;


class Time {
    private:
        int hours;
        int minutes;
    public:
        Time(int h = 0, int m = 0) {
            hours = h;
            minutes = m;
        }

        // Conversion function: Time -> int
        operator int() {
            return  hours * 60 + minutes;
        }
};

int main() {
    Time t1(2, 30);

    int totalMin = t1;

    cout <<"Total minutes: "<< totalMin; // output : Total minutes: 150
}

