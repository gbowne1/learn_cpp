#include <string>
#include <iostream>
using namespace std;

void writename();  //prototypes (function declarations)
void writetitle();

int main()
{
  writetitle();    //function calls
  writename();
  return 0;
}

void writename()   // function definition
{
  string name = "Mike McGrath";
  cout << name << endl;
}

void writetitle()  // function definition
{
  string title = "C++ Programming in easy steps";
  cout << title << " by ";
}