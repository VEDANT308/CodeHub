#include <iostream>
using namespace std;

int main()
{
    int a, b, c, sum = 0;
    double avg = 0;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    sum = a + b + c;

    avg = (double)sum / 3;

    cout << "The sum of 3 Number is: " <<avg;
}