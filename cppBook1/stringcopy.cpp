#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str1 = "I think therfore I am";
    string str2 = str1;
    string str3;
    str3.assign(str1);

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;

    str3.assign(str1, 4, 3);
    cout << "str3: " << str3 << endl;
    return 0;
}
