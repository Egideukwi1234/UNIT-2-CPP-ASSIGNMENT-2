#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter num1:";
    cin>>num1;
    cout<<"Enter num2:";
    cin>>num2;

    // Bitwise OR gives 1 where at least one corresponding bit is 1.
    cout << "Bitwise OR: " << (num1 | num2) << endl;

    return 0;
}
