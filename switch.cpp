#include <iostream>
using namespace std;

int main()
{
    char letter;

    cout << "Enter any a-z character: ";
    cin >> letter;

    switch(letter)
    {
        case 'a' : cout << "Letter \'a\' found\n"; break;
        case 'b' : cout << "Letter \'b\' found\n"; break;
        case 'c' : cout << "Letter \'c\' found\n"; break;
        default  : cout << "Letter is nout a, b or c\n";
    }
}