#include <iomanip>
#include <iostream>
using namespace std;

void calcPrice(float net, float margin = 17.5);

int main()
{
    float net;
    cout << "Enter net cost: ";
    cin >> net;
    calcPrice(net);
    return 0;
}

void calcPrice(float net, float margin)
{
    float profit = (net * margin) / 100;
    cout << showpoint;
    cout << "\nProfit is\t\t\t" << setprecision(3) << profit;
    cout << "\nRetail price inc. profit: ";
    cout << setprecision(4) << (net + profit) << endl;
}