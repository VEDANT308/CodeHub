#include <iostream>
using namespace std;

int main()
{
    double radius;
    double area;

    const double pi = 3.14;

    cout << "Enter the Radius: ";
    cin >> radius;

    area = pi * radius * radius;

    cout<<"The Area of Circle is: "<<area;
}