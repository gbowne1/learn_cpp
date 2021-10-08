#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str;
    ifstream myFile("sky.txt");
    if (! myFile)           // Always test file open
    {
        cout << "Error opening output file" << endl;
        return -1;
    }
    while (! myFile.eof())  // Loop through lines
    {
        getline(myFile, str);
        cout << str << endl;
    }
    myFile.close();          // Always close the file
    return 0;
}