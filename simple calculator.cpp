
#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    double number1, number2, result;
    char operation;

    // Input numbers and operator
    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> number2;

    // Perform calculation using switch
    switch (operation)
    {
        case '+':
            result = number1 + number2;
            cout << "Result: " << result << endl;
            break;

        case '-':
            result = number1 - number2;
            cout << "Result: " << result << endl;
            break;

        case '*':
            result = number1 * number2;
            cout << "Result: " << result << endl;
            break;

        case '/':
            if (number2 != 0)
            {
                result = number1 / number2;
                cout << "Result: " << result << endl;
            }
            else
            {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;

        default:
            cout << "Invalid operator entered!" << endl;
    }

    return 0;
}
