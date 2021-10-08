#include <string>
#include <iostream>
using namespace std;

int main()
{
  string str = "I can resist evertything but temptation";
  int final = (str.size() - 1);

  cout << "First character: "     << str.at(0) << endl;
  cout << "25th character: "    <<  str.at(25) << endl;
  cout << "String size: "        << str.size() << endl;
  cout << "Last character index: "    << final << endl;
  cout << "Last character: " << str.at(final)  << endl;
  return 0;
}