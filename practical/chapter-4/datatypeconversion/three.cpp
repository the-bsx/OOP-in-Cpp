// 3. User-Defined (Class) to User-Defined (Class) Conversion
// Write a C++ program to create two classes:
// Celsius (stores temperature in Celsius)
// Fahrenheit (stores temperature in Fahrenheit)
// Implement data conversion from a Celsius object to a Fahrenheit object using:
// A constructor or type conversion function.
// Example:
// Celsius C1(100);
// Fahrenheit F1;
// F1 = C1; // Converts Celsius object to Fahrenheit object

#include<iostream>
using namespace std;

class Celcius {
    private:
        float temperature;
    
    public:
        Celcius(float t = 0) {
            temperature = t;
        }

        float getTemperature() {
            return temperature;
        }
};

class Fahrenheit {
    private:
        float temperature;

    public:
        Fahrenheit(Celcius cs) {
            temperature =( cs.getTemperature() * 9 / 5) + 32;
        }

        void display() {
            cout<< "Temperature in Fahrenheit: "<< temperature;
        }
};

int main() {
    Celcius cs(37);

    Fahrenheit fh = cs;

    fh.display();
}