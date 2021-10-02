#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for(i = 1; i < 4; i++)
    {
        cout << "Outer loop iteration " << i << endl;
        for (j = 1; j < 4; j++)
        {
            cout << "\tInner loop iteration " << j << endl;
    
        }
    }
    return 0;
}