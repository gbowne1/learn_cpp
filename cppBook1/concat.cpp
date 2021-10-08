#include <string>
#include <iostream>
using namespace std;

int main()
{
    string firstname, lastname, fullname;

    cout << "Enter your first name: ";
    cin >> firstname;
    cout << "Enter your last name: ";
    cin >> lastname;
    fullname = firstname;
    fullname.append(" ");
    fullname.append(lastname);
    cout << "Thanks " << fullname << endl;
    cout << "Wow! - " << (firstname + " " + lastname);
    return 0;
}