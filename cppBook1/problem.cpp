#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter any sentence: ";
    cin >> str1;
    cin >> str2;

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "Everything else has been lost\n";
    return 0;
}
