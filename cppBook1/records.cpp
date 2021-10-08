#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str[20];                 // string array
    int i = 0, j = 0, last;         // counter variable
    ifstream myFile("records.txt"); // input file object
    if (! myFile)                   // always check this
    {
        cout << "Unable to open input file" << endl;
        return -1;
    }

    while (! myFile.eof())
    {
        if ((i + 1) % 4 == 0) getline(myFile, str[i++]);
        else getline(myFile, str[i++], '\t');
    }
    {
        cout << "\nRecord Number:\t" << ++j << endl;
        cout << "Forename:\t"   << str[i++] << endl;
        cout << "Surname:\t"    << str[i++] << endl;
        cout << "Department:\t" << str[i++] << endl;
        cout << "Tel.No.:\t"    << str[i++] << endl;
    }
    myFile.close();
    return 0;
}