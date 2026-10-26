#include <iostream>
using namespace std;

int main()
{
    double marks;

    // Ask the user to enter academic marks.
    cout << "Enter your academic marks (0-100): ";
    cin >> marks;

    // Reject marks outside the permitted range.
    if (marks < 0 || marks > 100)
    {
        cout << "Error: Invalid marks. Marks must be between 0 and 100."
             << endl;
        return 1;
    }
    else
    {
        cout << "Valid marks entered: " << marks << endl;
    }

    return 0;
}
