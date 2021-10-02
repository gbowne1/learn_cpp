#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    while(i < 6)
    {
        ++i;
        if(i == 3) continue;  //skip this pass
        cout << "Loop iteration is " << i ;
        cout << " - go to the next pass\n";
    }
    return 0;
}