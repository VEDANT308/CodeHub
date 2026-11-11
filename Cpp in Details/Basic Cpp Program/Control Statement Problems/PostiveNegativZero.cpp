#include <iostream>
using namespace std;

int main()
{
    int value;
    cout << "Enter the value: ";
    cin >> value;

    if (value > 0)
    {
        cout << value << " the given value is Positive";
    }
    else if (value < 0)
    {
        cout << value << " the given value is Negative";
    }
    else
    {
        cout << value << " the given value is zero";
    }
}