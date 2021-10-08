#include <iostream>
using namespace std;

void recur(int num);

int main()
{
    recur(0);
    return 0;
}

void recur(int num)
{
    cout << "Line " << num << endl;
    num++;
    if (num > 5) return;
    else recur(num);
}