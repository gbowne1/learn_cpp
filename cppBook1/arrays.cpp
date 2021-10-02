#include <iostream>
using namespace std;

int main()
{
    bool flags[3] = { true, true, false };
    double nums[3] = { 1.23, 4.56, 7.90 };
    char fname[5] = { 'm', 'i', 'k', 'e', '\0' };
    cout << flags[2] << endl;
    cout << nums[0] << endl;
    cout << fname[0] << endl;
    cout << fname << endl;
    return 0;
}