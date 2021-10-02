#include <iostream>
using namespace std;

int main()
{
    int zero = 0, nil = 0, one = 1;
    char lg = 'A', sm = 'a' ;

    cout << "Equality example:\n";
    cout << "\tIs zero equal to nil? " << (zero == nil);
    cout << "\tIs large equal to small? " << (lg == sm);
    cout << "Inequality example:\n";
    cout << "\tIs zero not equal to one?"<<(zero != one);
    cout << "Greater than example:\n";
    cout << "\tIs zero greater than one? "<<(zero > one);
    cout << "Less than example:\n";
    cout << "\tIs zero less than one? " << (zero < one);
    cout << "Greater than or equal to example:\n";
    cout << "\tIs zero greater than or equal to nil? ";
    cout << (zero >= nil);
    cout << "Less than or equal to example:\n";
    cout << (one <= nil);
    return 0;
}