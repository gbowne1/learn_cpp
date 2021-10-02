#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for(i = 1; i < 4; i++)
    {
        cout << "Outer loop iteration " << i << endl;
        for(j = 1; j < 4; j++)
        {
          if(j == 3) goto end;      //jump to label
          cout << "\tInner loop iteration " << j << endl;
        } 
    }
    end:                               //label
    return 0;
}