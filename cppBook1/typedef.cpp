#include <iostream>
using namespace std;

typedef unsigned short int USHRT;

int main()
{
    USHRT width;
    USHRT length;
    cout << "Enter width: ";   cin >> width;
    cout << "Enter length: ";  cin >> length;
    cout << "Area is " << width * length << endl;
    return 0;
}