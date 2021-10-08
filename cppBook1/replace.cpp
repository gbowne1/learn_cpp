#include <string>
#include <iostream>
using namespace std;

int main()
{
 string str ="This is an original string";
 cout << str << endl;

 str.erase(9, 10);
 cout << str << endl;

 str.replace(8, 1, "my new");
 cout << str << endl;

 return 0;
}