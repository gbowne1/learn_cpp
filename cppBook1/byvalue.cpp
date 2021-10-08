#include <iostream>
using namespace std;

void swap(int x, int y);

int main()
{
    int x = 4;
    int y = 2;

    cout << "First x is "<< x << ", y is "<< y << endl;
    swap(x, y);
    cout << "Now x is " << x << ", y is " << y <<  endl;
}

void swap(int x, int y)
{
    int temp;

    temp = y;
    y = x;
    x = temp;
}