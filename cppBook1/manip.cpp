#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    string str = "C++ is great";
    double flt = 1.0123456790;
    int num = 15;
    bool flag = 1;
    cout.width(20);
    cout << str << endl;
    cout.width(30);
    cout.fill('x');
    cout << str << endl;
    cout << setw(40) << setfill('.') << str << endl;
    cout << flt << endl;
    cout << setprecision(12) << flt << endl;
    cout << hex << showbase << num << endl;
    cout << oct << showpos << dec << num << endl;
    cout << boolalpha << flag << endl;
    return 0;
}