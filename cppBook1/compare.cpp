#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str1, str2, sum = "Strings are ";

    cout << "Enter a string: ";
    getline(cin, str1);
    cout << "Enter another string: ";
    getline(cin, str2);
    sum += (str1 == str2) ? "identical" : "different";
    if (str1.compare(str2) == 0) sum += "; The same";
    else
    sum += (str1.compare(str2)< 0) ? ": Less" : ": More";
    cout << sum << endl;
    return 0;
}