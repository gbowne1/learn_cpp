#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str1, str2, str3;

    cout << "Enter any sentence: ";
    getline(cin, str1);
    cout << "str1: " << str1 << endl;
    cout << "Enter two words seperated by a tab: ";
    getline(cin, str2, '\t');
    getline(cin, str3);
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;
    return 0;
 }