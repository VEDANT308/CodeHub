#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the Character: ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    {
        cout << ch << " is an Vowels";
    }
    default:
        cout << ch << " is an Consonants";
    }
}