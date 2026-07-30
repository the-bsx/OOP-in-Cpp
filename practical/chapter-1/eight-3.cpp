// Write a C++ program to build a simple calculator using switch case that performs
// addition, subtraction, multiplication, and division based on the user's choice.

#include <iostream>

using namespace std;

int main()
{

    double num_one, num_two, result;
    int choice;

    cout << "Simple calculator" << endl;
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num_one;
    cout << "Enter second number: ";
    cin >> num_two;

    switch (choice)
    {
    case 1:
        result = num_one + num_two;
        cout << "Result: " << result;
        break;

    case 2:
        result = num_one - num_two;
        cout << "Result: " << result << endl;
        break;

    case 3:
        result = num_one * num_two;
        cout << "Result: " << result << endl;
        break;

    case 4:
        if (num_two == 0)
        {
            cout << "Error: Division by zero is not allowed.\n";
        }
        else
        {
            result = num_one / num_two;
            cout << "Result: " << result << endl;
        }
        break;

    default:
        cout << "Invalid choice! Please select a number between 1 and 4.\n";
    }
    return 0;
}
