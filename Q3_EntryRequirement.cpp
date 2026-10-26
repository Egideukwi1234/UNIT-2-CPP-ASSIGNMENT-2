#include <iostream>
using namespace std;

int main()
{
    int age;
    char hasID;

    // Ask the user to enter their age.
    cout << "Enter your age: ";
    cin >> age;

    // Ask whether the user has a valid ID.
    cout << "Do you have a valid ID? (Y/N): ";
    cin >> hasID;

    // Both the age and ID conditions must be satisfied.
    if (age >= 18 && (hasID == 'Y' || hasID == 'y'))
    {
        cout << "Entry Granted. Welcome to Canada." << endl;
    }
    else
    {
        cout << "Entry Denied. Please stay home." << endl;
    }

    return 0;
}
