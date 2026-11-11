#include <iostream>
using namespace std;

int main()
{
    int Year;
    cout << "Enter the Year Name: ";
    cin >> Year;

    if (Year % 4 == 0)
    {
        cout << Year << " the given year is Leap Year";
    }
    else
    {
        cout << Year << " the given year is not an Leap Year";
    }
}