#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str = "\n\tI never saw a man who looked";
    str.append("\n\tWith such a wistful eye");
    str.append("\n\tUpon that little tent of blue");
    str.append("\n\tWhich prisoners call the sky\n");

    ofstream myFile("sky.txt");

    if (! myFile)                   // Always tes file open
    {
        cout << "Error opening output file" << endl;
        return -1;
    }
    myFile << str << endl;          // Write the file
    myFile.close();                 // Always close the file

return 0;
}
