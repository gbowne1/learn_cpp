#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str = "I do like the seaside";
    string sub = "to be beside ";

    cout << "Original string: " << str << endl;
    str.insert(10, sub);
    cout << "New string: " << str << endl;
    return 0;
}