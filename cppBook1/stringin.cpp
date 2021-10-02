#include <string>
#include <iostream>

using namespace std;

int main()
{
    string str1;     //declare three string variable
    string str2;
    string str3;

    cout << "Please enter your first name: ";
    cin >> str1;     //assign first name string to str1

    cout << "Thanks " << str1 << endl;
    cout << "Now please enter your last name: " << str2;
    cin  >> str2;    //assign last name string to str1

    str3 = str1;     //assign first name string to str3
    cout << "Welcome " << str3 << " " << str2 << endl;
    return 0;
}
