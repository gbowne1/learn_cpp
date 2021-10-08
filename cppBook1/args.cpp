#include <iostream>
using namespace std; 

int getnum();
int getmax(int n1, int n2);
int getftemp();
int FtoC(int faren);

int main()
{
    int num1, num2, ftemp;

    num1 = getnum();
    num2 = getnum();
    cout << "Max. number: "<< getmax(num1, num2) << endl;
    ftemp = getftemp();
    cout << ftemp << "F is " << FtoC(ftemp) << "C\n";
    return 0;
}

int getnum()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;
    return num;
}

int getmax(int n1, int n2)
{
    return (n1 > n2) ? n1 : n2;
}

int getftemp()
{
    int ftemp;
    
    cout << "Enter Fahrenheit temperature: ";
    cin >> ftemp;
    return ftemp;
}

int FtoC(int ftemp)
{
    float factor = 5.0 / 9.0;
    float freezing = 32.0;
    float celsius;

    celsius = factor * (ftemp - freezing);
    return (int) celsius;
}