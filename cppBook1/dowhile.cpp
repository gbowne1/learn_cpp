#include <iostream>
using namespace std;

int main()
{
    int a = 0, i = 0;

    do
    {
    ++a; ++i; cout << "Variable a is " << a << endl;
    } 
    while( i < 1 );
    
    return 0;
}