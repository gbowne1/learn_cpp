#include <iostream>
using namespace std;

int main()
{
    int num = 2; bool flag = 0;
    if ( (num == 2) && (flag) )
    {
        cout << "The first test is true\n";
    }
    else if( (num == 2) && (!flag) )
    {
        cout << "The second test is true\n";
    }
    else if( (num == 2) && (flag == 0) )
    {
        cout << "The third test is true - but unreached\n";
    }
    return 0;
}