#include <iostream>
using namespace std;

inline int square(int n);

int main()
{
    int num;
    cout << "Enter a number to square to square: ";
    cin >> num;
    num = square(num);
    cout <<  "Result: " << num << endl;
    num = square(num);
    cout <<  "Result: " << num << endl;
    num = square(num);
    cout <<  "Result: " << num << endl;
    return 0;
}

int square(int n)
{
    return n * n;
}