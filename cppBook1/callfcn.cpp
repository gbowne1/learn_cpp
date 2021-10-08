#include <iostream>
using namespace std;

void showTriple(int n);
int triple(int n);

int main()
{
    int num;
    cout << "Enter a number to triple: ";
    cin >> num;
    showTriple(num);
    return 0;
}

void showTriple(int num)
{
    cout << "3 x "<< num << " = " << triple(num) << endl;
}

int triple(int num)
{
    return (num * 3);
}