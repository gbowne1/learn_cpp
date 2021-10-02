#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double rad;

    cout << "Enter the radius of a circle: ";
    cin >> rad;
    cout << "Diameter: " << ( rad + rad ) << endl;
    cout << "Area: " << (PI *( rad * rad) ) << endl;
    cout << "Circumfrence: " << (PI *(rad+rad)) << endl;
    return 0;
}