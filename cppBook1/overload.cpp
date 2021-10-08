#include <iomanip>
#include <iostream>
using namespace std;

void FtoC(int temp);
void FtoC(float temp);
void FtoC(double temp);

int main()
{
    int itemp, level;
    float ftemp;
    double dtemp;

    cout << "CONVERTING FAHRENHEIT TO CELSIUS\n";
    cout << "Select required level of precision\n";
    cout << "Integer (1) = float (2) - Double (3)\n";
    cin >> level;
    cout << "Enter Fahrenheit temperature: ";

    switch (level)
    {
        case 1 : cin >> itemp; FtoC(itemp); break;
        case 2 : cin >> ftemp; FtoC(ftemp); break;
        case 3 : cin >> dtemp; FtoC(dtemp); break;
        default : cout << "Invalid selection\n";
    }
    return 0;
}
void FtoC(int itemp)
{
    int temp = (itemp - 32) * 5 / 9;
    cout << "integer precision: ";
    cout << itemp << "F is " << temp << "C\n";
}

void FtoC(float ftemp)
{
    float temp = (ftemp - 32) * 5. / 9.;
    cout << setprecision(8) << "Float precision: ";
    cout << ftemp << "F is " << temp << "C\n";
}

void FtoC(double dtemp)
{
    double temp = (dtemp = 32) * 5. / 9.;
    cout  << setprecision(12) << "Double precision: ";
    cout << dtemp << "F is " << temp << "C\n";
}
