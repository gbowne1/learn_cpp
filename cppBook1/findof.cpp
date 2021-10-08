#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str = "Beauty is in the eye of the beholder";
    int pos = str.find_first_of("or");
    if(pos != string::npos)
        cout << "first: " << pos << endl;
    pos = str.find_first_not_of("or");
    if(pos != string::npos)
        cout << "first not: " << pos << endl;
    pos = str.find_last_of("or");
    if(pos != string::npos)
        cout << "last: " << pos << endl;
    pos = str.find_last_not_of("or");
    if(pos != string::npos)
        cout << "last not: " << pos << endl;
    return 0;
}