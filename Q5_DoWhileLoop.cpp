#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    // A do-while loop executes its body at least once.
    do
    {
        cout << i << endl;
        i++;
    }
    while (i <= 5);

    return 0;
}
