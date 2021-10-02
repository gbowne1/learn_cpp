#include <iostream>
using namespace std;

int main()
{
    enum balls{RED=1,YELLOW,GREEN,BROWN,BLUE,PINK,BLACK};
    int total;

    cout << "I plotted a red worth "<< RED << endl;
    cout << "Then a black worth "<< RED<<endl;
    cout << "Followed by another red worth "<< RED<<endl;
    total = (RED + BLACK + RED);
    cout << "Altogether I scored " << total << endl;
    return 0;
}

