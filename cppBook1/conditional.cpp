#include <iostream>
using namespace std;

int main()

{
    int num1 = 13579, num2 = 24680;
    char letter;

    cout << num1 << " is ";
    (num1 %2 != 0) ? cout << "odd" : cout << "even";

    cout << endl << num2 << " is ";
    (num2 %2 != 0) ? cout << "odd" : cout << "even";

    letter = (num2 %2 != 0) ? 'Y' : 'N';
    cout << "\nIs " << num2 << " odd? " << letter;
    return 0;
}