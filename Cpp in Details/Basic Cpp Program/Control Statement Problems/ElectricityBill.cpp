#include <iostream>
using namespace std;

int main()
{
    int unit;
    double ChargePrecentage = 0;

    cout << "Enter the Number of Units: ";
    cin >> unit;

    if (unit < 100)
    {
        ChargePrecentage = 4.2;
    }
    else if (unit < 200)
    {
        ChargePrecentage = 6;
    }
    else if (unit < 400)
    {
        ChargePrecentage = 8;
    }
    else
    {
        ChargePrecentage = 13;
    }

    int TotalBill = unit * ChargePrecentage;

    cout << "YQour Total Bill Value is Rupees: " << TotalBill;
}