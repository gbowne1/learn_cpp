#include <iostream>
using namespace std;

int main()
{
    float num = 98.6;
    int ints[50];
    char chars[50];

    cout << "int: "    << sizeof(int)    << " bytes\n";
    cout << "float: "    << sizeof(float)    << " bytes\n";
    cout << "double: "    << sizeof(double)    << " bytes\n";
    cout << "char: "    << sizeof(char)    << " bytes\n";
    cout << "bool: "    << sizeof(bool)    << " bytes\n";

    cout << "float variable: ";
    cout << (sizeof num) << " bytes\n";
    cout << "50 float array:"<< (sizeof ints)<<" bytes\n";
    cout << "50 char array:"<<(sizeof chars)<<" bytes\n";
    return 0;
}