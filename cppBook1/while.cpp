#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector <int> vec(18);
    int i = 0;
    while( i < vec.size() )
    {
        vec[i] = ( i + 1);           //populate values 1-18
        cout << " " << vec.at(i);    //display each element
        i++;
    }
    cout << endl;
    return 0;
}
