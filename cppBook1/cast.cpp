#include  <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4;   //int variables
    float decimal = 7.75;
    char letter = 'A';
    double precise = 123.987654;
    bool flag = true;

    num1 = (int) decimal;
    num2 = (int) letter;
    num3 = (int) precise;
    num4 = (int) flag;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << "num3: " << num3 << endl;
    cout << "num4: " << num4 << endl;
    return 0;
  }