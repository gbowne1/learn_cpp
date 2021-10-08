#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str = "C++ is fun";

    cout << "Stored string is: " << str << endl;
    cout << "String size: " << str.size() << endl;
    str = "";  //leave no space between quotes!
    cout << "String cleared" << endl;
    cout << "String size is: " << str.size() << endl;
    return 0;
}