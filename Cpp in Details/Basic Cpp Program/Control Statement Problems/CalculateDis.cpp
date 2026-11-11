
#include <iostream>
using namespace std;

int main()
{
    int BillAMT;
    double dis = 0;
    double totalAMT = 0;

    cout << "Enter the Bill Amount: ";
    cin >> BillAMT;

    if (BillAMT < 0)
    {
        cout << "Invalid Bill Amount";
    }
    else if (BillAMT < 5000)
    {
        dis = 0;
    }
    else if (BillAMT < 7000)
    {
        dis = 0.05;
    }
    else if (BillAMT < 8000)
    {
        dis = 0.10;
    }
    else if (BillAMT < 9000)
    {
        dis = 0.20;
    }
    else
    {
        dis = 0.30;
    }

    if (BillAMT >= 0)
    {
        totalAMT = BillAMT - (BillAMT * dis);

        cout << "Discount: " << dis * 100 << "%" << endl;
        cout << "Final Bill Amount: " << totalAMT;
    }

    return 0;
}
