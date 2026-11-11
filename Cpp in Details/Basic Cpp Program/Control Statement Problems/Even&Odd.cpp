#include <iostream>
using namespace std;

int main()
{
    int value;

    cout << "Enter the value: ";
    cin >> value;

    if (value % 2 == 0)
    {
        cout << "The value is Even";
    }
    else
    {
        cout << "The value is odd";
    }
}