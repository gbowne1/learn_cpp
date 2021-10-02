#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    while( i < 10 )
    {
        ++i;
        cout << "Loop iteration is " << i ;
        //if the counter hits 7 exit the loop...
        if(i == 7) break;
        cout << " - go to the next pass\n";
    }
    return 0;
}