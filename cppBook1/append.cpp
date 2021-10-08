#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str = "\tThe Ballad of Reading Gaol";
    str.append("\n\t\t\tOscar Wilde 1898");

     ofstream myFile("sky.txt", ios::app);
    
    if (! myFile)
    {
        cout << "Error opening output file" << endl;
        return -1;
    }
    myFile << str << endl;
    myFile.close();

    return 0;
}