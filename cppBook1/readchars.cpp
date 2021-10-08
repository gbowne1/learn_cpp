#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char ch;
    ifstream myFile("sky.txt");
    if (! myFile)           // Always test file open
    {
      cout << "Error opening output file" << endl;
      return -1;
    }
    while (! myFile.eof())  // Loop through characters
    {
      myFile.get(ch);
      cout << ch;
    }
    myFile.close();         // Always close the file
    return 0;
}