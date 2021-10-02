#include <iostream>
using namespace std;

int main()
{
    int arr[3] = { 100, 200, 300 };
    arr[1] = 555;       //change the middle element
    cout << "arr[0]: " << arr[0] << endl;
    cout << "arr[1]: " << arr[1] << endl;
    cout << "arr[2]: " << arr[2] << endl;
    return 0;
}