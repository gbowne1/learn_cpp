#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str = "All dressed up with nowhere to go.";
    string sub1 = "somewhere";
    string sub2 = "nowhwere";
    unsigned int pos = str.find(sub1, 0);
    cout << "str: " << str << endl;
    if(pos != string::npos)
     cout << sub1 << " found at: " << pos << endl;
    else cout << sub1 << " not found" << endl;
    pos = str.find(sub2, 0);
    if(pos != string::npos)
     cout << sub2 << " found at: " << pos << endl;
    else cout << "Substring not found" << endl;
    return 0;
    /* has problems with string::npos */
}
