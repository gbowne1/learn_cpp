#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Assign values example:";
    cout << "\n\tVariable a = " << (a = 8);
    cout << "\n\tVariable b = " << (b = 4);

    cout << "\nAdd & assign example:\n";
    cout << "\tVariable a += b (8 += 4) a = " <<(a += b);
    cout << "\nAdd & assign example:\n";
    cout << "\tVariable a -= b (12 -= 4) a = " <<(a -= b);
    cout << "\nSubtract & assign example:\n";
    cout << "\tVariable a *= b (8 *= 4) a = " <<(a *= b);
    cout << "\nDivide & assign example:\n";
    cout << "\tVariable a /= b (32 /= 4) a = " <<(a /= b);
    cout << "\nModulus & assign example:\n";
    cout << "\tVariable a %= b (8 %= 4) a = " <<(a %= b);
    return 0;
}