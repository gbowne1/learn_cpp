#include <string>
#include <iostream>
using namespace std;

int main()
{
    string name;

    while (name.empty())
    {
        cout << "Please enter your name: ";
        getline(cin, name);
    }
    cout << "Thanks " << name << endl;
    return 0;
}