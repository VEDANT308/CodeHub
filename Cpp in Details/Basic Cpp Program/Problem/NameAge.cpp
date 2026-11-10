
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nHello, my name is " << name
         << ". I am " << age << " years old.\n";

    return 0;
}