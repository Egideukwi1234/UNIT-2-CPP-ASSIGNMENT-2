#include <iostream>
using namespace std;

int main()
{
    double num1, num2, result;
    char operation;

    // Ask the user to enter two numbers.
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Ask the user to choose an arithmetic operation.
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    // Select the calculation using a switch statement.
    switch (operation)
    {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;

        case '/':
            if (num2 == 0)
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            else
            {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            break;

        default:
            cout << "Error: Invalid operator entered." << endl;
            return 1; // Terminate immediately for an invalid operator.
    }

    return 0;
}
