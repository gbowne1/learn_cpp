#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 8, c = 1, d = 1, result;

    result = a + b;  //4 + 8
    cout << "Added numbers total " << result << endl;
    result = b = a;  //8 - 4
    cout << "Subtracted numbers total "  << result << endl;
    result = a * b;  //4 * 8
    cout << "Multiplied numbers total " << result << endl;
    result = b / a;  //8 / 4
    cout << "Divided numbers total " << result << endl;
    result = b % a;  // 8 % 4
    cout << "Modulus of numbers is " << result << endl;

    cout << "Postfix increment is " << c++ << endl;
    cout << "Now postfix increment is " << c << endl;
    cout << "Prefix increment is : " << ++d << endl;
    cout << "Now prefix icrement is " << d << endl;
    return 0;
}