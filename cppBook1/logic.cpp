#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 0;
    cout << "a = " << a << "\tb = " << b << endl;
    cout << "AND dexamples:" << endl;
    cout << "\t a && a = " << (a && a) << " (true)\n";
    cout << "\t a && b = " << (a && b) << " (false)\n";
    cout << "\t b && b = " << (a && a) << " (false)\n";
    cout << "OR examples:" << endl;
    cout << "\t a && a = " << (a && a) << " (true)\n";
    cout << "\t a && b = " << (a && b) << " (true)\n";
    cout << "\t b && b = " << (b && b) << " (false)\n";
    cout << "NOT examples:" << endl;
    cout << "\t a && a = " << a << " !a" << endl;
    cout << "\t b && b = " << b << " !b" << endl;
    return 0;
}